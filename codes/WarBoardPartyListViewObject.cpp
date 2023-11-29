void __fastcall WarBoardPartyListViewObject___ctor(WarBoardPartyListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_40F85B4 & 1) == 0 )
  {
    sub_B16FFC(&ListViewObject_TypeInfo, method);
    byte_40F85B4 = 1;
  }
  *(_QWORD *)&this->fields.dispDuration = 0xF3E99999ALL;
  if ( (BYTE3(ListViewObject_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ListViewObject_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  }
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


WarBoardPartyOrganizationListViewObject_o *__fastcall WarBoardPartyListViewObject__CreateMemberObj(
        WarBoardPartyListViewObject_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct UnityEngine_GameObject_o *srcMemberObj; // x20
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_GameObject_o *v9; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *grid; // x8
  UnityEngine_Transform_o *v12; // x21
  UnityEngine_Transform_o *v13; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  WarBoardPartyOrganizationListViewObject_o *v21; // x20
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F85B0 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_WarBoardPartyOrganizationListViewObject___, item);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40F85B0 = 1;
  }
  srcMemberObj = this->fields.srcMemberObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)srcMemberObj,
                                     (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v8 )
    goto LABEL_11;
  v9 = v8;
  transform = UnityEngine_GameObject__get_transform(v8, 0LL);
  grid = (UnityEngine_Component_o *)this->fields.grid;
  if ( !grid )
    goto LABEL_11;
  v12 = transform;
  v13 = UnityEngine_Component__get_transform(grid, 0LL);
  if ( !v12
    || (UnityEngine_Transform__SetParent_34930292(v12, v13, 0, 0LL),
        zero = UnityEngine_Vector3__get_zero(0LL),
        GameObjectExtensions__SetLocalPosition(v9, zero, 0LL),
        one = UnityEngine_Vector3__get_one(0LL),
        GameObjectExtensions__SetLocalScale(v9, one, 0LL),
        (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                     v9,
                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardPartyOrganizationListViewObject___)) == 0LL) )
  {
LABEL_11:
    sub_B170D4();
  }
  v21 = (WarBoardPartyOrganizationListViewObject_o *)Component_srcLineSprite;
  *(_QWORD *)&Component_srcLineSprite->fields.mtIsUpdate = item;
  sub_B16F98(
    (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mtIsUpdate,
    (System_Int32_array **)item,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  return v21;
}


void __fastcall WarBoardPartyListViewObject__CreateMemberObjects(
        WarBoardPartyListViewObject_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *p_memberObjectList; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x22
  const MethodInfo *v12; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *MemberObj; // x0
  System_Int32_array **v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40F85AC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__Add__, partyItem);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__TypeInfo, v9);
    byte_40F85AC = 1;
  }
  if ( partyItem )
  {
    p_memberObjectList = (BattleServantConfConponent_o *)&this->fields.memberObjectList;
    if ( !this->fields.memberObjectList )
    {
      v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__TypeInfo, partyItem, method, v3, v4);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v11,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject___ctor__);
      MemberObj = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardPartyListViewObject__CreateMemberObj(
                                                                           this,
                                                                           partyItem->fields.focusMemberItem,
                                                                           v12);
      if ( !v11 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        MemberObj,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__Add__);
      v14 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                     (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__ToArray__);
      p_memberObjectList->klass = (BattleServantConfConponent_c *)v14;
      sub_B16F98(p_memberObjectList, v14, v15, v16, v17, v18, v19, v20);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyListViewObject__Display(WarBoardPartyListViewObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct ListViewItem_o *linkItem; // x8
  __int64 v8; // x11
  __int64 v9; // x23
  System_Collections_IEnumerator_o *dispCoroutine; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_Object_o *backSprite; // x21
  bool v18; // w0
  Il2CppMethodPointer methodPtr; // x2
  const MethodInfo *v20; // x3
  UnityEngine_Component_o *v21; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Component_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x21
  __int64 v25; // x21
  __int64 v26; // x21
  __int64 v27; // x8
  WarBoardData_o *v28; // x21
  WarBoardPieceData_o *Piece; // x0
  WarBoardSquareData_o *Square; // x0
  UnityEngine_Component_o *squareComponent; // x0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_Transform_o *transform; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v37; // x21
  __int64 v38; // x21
  __int64 v39; // x8
  __int64 v40; // x8
  UnityEngine_Camera_o *v41; // x0
  float v42; // s8
  float v43; // s9
  float v44; // s10
  __int64 v45; // x21
  __int64 v46; // x21
  __int64 v47; // x8
  UnityEngine_Camera_o *v48; // x0
  float v49; // s0
  float v50; // s1
  float v51; // s2
  UnityEngine_Component_o *v52; // x0
  float v53; // s8
  float v54; // s9
  float v55; // s10
  UnityEngine_Transform_o *v56; // x0
  float v57; // s13
  float v58; // s14
  float v59; // s15
  float v60; // s8
  float duration; // s9
  unsigned int dispEasingType; // w21
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  System_Action_o *v67; // x0
  float v68; // w22
  int32_t v69; // w3
  System_Action_o *v70; // x4
  const MethodInfo *v71; // x5
  struct System_Collections_IEnumerator_o *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  UnityEngine_Vector3_o fromScale; // [xsp+0h] [xbp-B0h]
  float toPos; // [xsp+34h] [xbp-7Ch]
  float v81; // [xsp+38h] [xbp-78h]
  float v82; // [xsp+3Ch] [xbp-74h]
  float v83; // [xsp+88h] [xbp-28h]
  float v84; // [xsp+8Ch] [xbp-24h]
  UnityEngine_Vector3_o v85; // 0:x1.12
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v97; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_40F85AE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v4);
    sub_B16FFC(&WarBoardPartyListViewItem_TypeInfo, v5);
    sub_B16FFC(&Method_WarBoardPartyListViewObject_OnFinishedDisplayAnim__, v6);
    byte_40F85AE = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_45;
  v8 = *(&WarBoardPartyListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v8
    || (WarBoardPartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[v8 - 1] != WarBoardPartyListViewItem_TypeInfo )
  {
    goto LABEL_45;
  }
  if ( (WarBoardPartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[*(&WarBoardPartyListViewItem_TypeInfo->_2.bitflags2
                                                                        + 1)
                                                                      - 1] != WarBoardPartyListViewItem_TypeInfo )
    linkItem = 0LL;
  v9 = *(_QWORD *)&linkItem[1].fields.selectNum;
  dispCoroutine = this->fields.dispCoroutine;
  if ( dispCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, dispCoroutine, 0LL);
    this->fields.dispCoroutine = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.dispCoroutine, 0LL, v11, v12, v13, v14, v15, v16);
  }
  backSprite = (UnityEngine_Object_o *)this->fields.backSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v18 = UnityEngine_Object__op_Equality(backSprite, 0LL, 0LL);
  v20 = this->klass->vtable._9_SetInput.method;
  methodPtr = this->klass->vtable._10_Invalidation.methodPtr;
  if ( v18 )
  {
    ((void (__fastcall *)(WarBoardPartyListViewObject_o *, __int64, Il2CppMethodPointer))v20)(this, 1LL, methodPtr);
    return;
  }
  ((void (__fastcall *)(WarBoardPartyListViewObject_o *, _QWORD, Il2CppMethodPointer))v20)(this, 0LL, methodPtr);
  v21 = (UnityEngine_Component_o *)this->fields.backSprite;
  if ( !v21 )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject(v21, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, zero, 0LL);
  v23 = (UnityEngine_Component_o *)this->fields.backSprite;
  if ( !v23 )
    goto LABEL_45;
  v24 = UnityEngine_Component__get_gameObject(v23, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  GameObjectExtensions__SetLocalScale(v24, one, 0LL);
  v25 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v26 = **(_QWORD **)(v25 + 192);
  if ( (*(_BYTE *)(v26 + 306) & 1) == 0 )
    sub_AAFCFC(v26);
  v27 = **(_QWORD **)(v26 + 184);
  if ( !v27 )
    goto LABEL_45;
  if ( !v9 )
    goto LABEL_45;
  v28 = *(WarBoardData_o **)(v27 + 424);
  if ( !v28 )
    goto LABEL_45;
  Piece = WarBoardData__GetPiece(*(WarBoardData_o **)(v27 + 424), 0, 0, *(_DWORD *)(v9 + 344), 1, 0LL);
  if ( !Piece )
    goto LABEL_45;
  Square = WarBoardData__GetSquare(v28, Piece->fields._nowSquareIndex_k__BackingField, 0LL);
  if ( !Square )
    goto LABEL_45;
  squareComponent = (UnityEngine_Component_o *)Square->fields.squareComponent;
  if ( !squareComponent )
    goto LABEL_45;
  v32 = UnityEngine_Component__get_gameObject(squareComponent, 0LL);
  if ( !v32 )
    goto LABEL_45;
  transform = UnityEngine_GameObject__get_transform(v32, 0LL);
  if ( !transform )
    goto LABEL_45;
  position = UnityEngine_Transform__get_position(transform, 0LL);
  x = position.fields.x;
  y = position.fields.y;
  z = position.fields.z;
  v37 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v37 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v38 = **(_QWORD **)(v37 + 192);
  if ( (*(_BYTE *)(v38 + 306) & 1) == 0 )
    sub_AAFCFC(v38);
  v39 = **(_QWORD **)(v38 + 184);
  if ( !v39 )
    goto LABEL_45;
  v40 = *(_QWORD *)(v39 + 40);
  if ( !v40 )
    goto LABEL_45;
  v41 = *(UnityEngine_Camera_o **)(v40 + 24);
  if ( !v41 )
    goto LABEL_45;
  v89.fields.x = x;
  v89.fields.y = y;
  v89.fields.z = z;
  v90 = UnityEngine_Camera__WorldToScreenPoint_40663544(v41, v89, 0LL);
  v42 = v90.fields.x;
  v43 = v90.fields.y;
  v44 = v90.fields.z;
  v45 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v45 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3));
  v46 = **(_QWORD **)(v45 + 192);
  if ( (*(_BYTE *)(v46 + 306) & 1) == 0 )
    sub_AAFCFC(v46);
  v47 = **(_QWORD **)(v46 + 184);
  if ( !v47 )
    goto LABEL_45;
  v48 = *(UnityEngine_Camera_o **)(v47 + 48);
  if ( !v48 )
    goto LABEL_45;
  v91.fields.x = v42;
  v91.fields.y = v43;
  v91.fields.z = v44;
  *(UnityEngine_Vector3_o *)&v49 = UnityEngine_Camera__ScreenToWorldPoint_40663568(v48, v91, 0LL);
  v52 = (UnityEngine_Component_o *)this->fields.backSprite;
  if ( !v52 || (v53 = v49, v54 = v50, v55 = v51, (v56 = UnityEngine_Component__get_transform(v52, 0LL)) == 0LL) )
LABEL_45:
    sub_B170D4();
  v92.fields.x = v53;
  v92.fields.y = v54;
  v92.fields.z = v55;
  v93 = UnityEngine_Transform__InverseTransformPoint(v56, v92, 0LL);
  v83 = v93.fields.y;
  v84 = v93.fields.x;
  v82 = v93.fields.z;
  v94 = UnityEngine_Vector3__get_zero(0LL);
  toPos = v94.fields.y;
  v81 = v94.fields.x;
  v57 = v94.fields.z;
  v95 = UnityEngine_Vector3__get_zero(0LL);
  v58 = v95.fields.x;
  v59 = v95.fields.y;
  v60 = v95.fields.z;
  LODWORD(duration) = (unsigned int)UnityEngine_Vector3__get_one(0LL);
  UnityEngine_Mathf__Max(0.0, this->fields.dispDuration, 0LL);
  dispEasingType = this->fields.dispEasingType;
  v67 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v63, v64, v65, v66);
  v68 = *(float *)&v67;
  System_Action___ctor(v67, (Il2CppObject *)this, Method_WarBoardPartyListViewObject_OnFinishedDisplayAnim__, 0LL);
  *(_QWORD *)&fromScale.fields.y = __PAIR64__(LODWORD(v60), LODWORD(v59));
  fromScale.fields.x = v58;
  v96.fields.y = v83;
  v96.fields.x = v84;
  v97.fields.x = v81;
  v96.fields.z = v82;
  v97.fields.y = toPos;
  v97.fields.z = v57;
  *(_QWORD *)&v85.fields.x = dispEasingType;
  v85.fields.z = v68;
  v72 = WarBoardPartyListViewObject__DsiplayAnim(this, v96, v97, fromScale, v85, duration, v69, v70, v71);
  this->fields.dispCoroutine = v72;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dispCoroutine,
    (System_Int32_array **)v72,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316(
    (UnityEngine_MonoBehaviour_o *)this,
    this->fields.dispCoroutine,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall WarBoardPartyListViewObject__DsiplayAnim(
        WarBoardPartyListViewObject_o *this,
        UnityEngine_Vector3_o fromPos,
        UnityEngine_Vector3_o toPos,
        UnityEngine_Vector3_o fromScale,
        UnityEngine_Vector3_o toScale,
        float duration,
        int32_t easingType,
        System_Action_o *onFinished,
        const MethodInfo *method)
{
  System_Int32_array **v9; // x19
  float x; // w20
  float v11; // s13
  __int64 v13; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  float y; // [xsp+Ch] [xbp-74h]
  float z; // [xsp+10h] [xbp-70h]
  int v30; // [xsp+A8h] [xbp+28h]
  int v31; // [xsp+B0h] [xbp+30h]

  v9 = *(System_Int32_array ***)&toScale.fields.z;
  x = toScale.fields.x;
  v11 = fromPos.fields.x;
  z = fromPos.fields.z;
  y = fromPos.fields.y;
  if ( (byte_40F85AF & 1) == 0 )
  {
    sub_B16FFC(&WarBoardPartyListViewObject__DsiplayAnim_d__17_TypeInfo, *(_QWORD *)&toScale.fields.x);
    byte_40F85AF = 1;
  }
  v13 = sub_B170CC(
          WarBoardPartyListViewObject__DsiplayAnim_d__17_TypeInfo,
          *(_QWORD *)&toScale.fields.x,
          *(_QWORD *)&toScale.fields.z,
          *(_QWORD *)&easingType,
          onFinished);
  WarBoardPartyListViewObject__DsiplayAnim_d__17___ctor((WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)v13, 0, 0LL);
  if ( !v13 )
    sub_B170D4();
  *(_QWORD *)(v13 + 88) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 88), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_DWORD *)(v13 + 32) = v31;
  *(float *)(v13 + 36) = v11;
  *(float *)(v13 + 60) = x;
  *(float *)(v13 + 40) = y;
  *(float *)(v13 + 44) = z;
  *(float *)(v13 + 48) = toPos.fields.x;
  *(float *)(v13 + 52) = toPos.fields.y;
  *(UnityEngine_Vector3_o *)(v13 + 64) = fromScale;
  *(_QWORD *)(v13 + 76) = *(_QWORD *)&duration;
  *(_DWORD *)(v13 + 84) = v30;
  *(float *)(v13 + 56) = toPos.fields.z;
  *(_QWORD *)(v13 + 96) = v9;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 96), v9, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v13;
}


WarBoardPartyOrganizationListViewObject_o *__fastcall WarBoardPartyListViewObject__FindMemberobj(
        WarBoardPartyListViewObject_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  WarBoardPartyListViewObject_o *v4; // x20
  struct WarBoardPartyOrganizationListViewObject_array *memberObjectList; // x21
  __int64 v6; // x8
  UnityEngine_Object_o *v7; // x20
  unsigned __int64 v8; // x22
  _DWORD *monitor; // x8

  v4 = this;
  if ( (byte_40F85B1 & 1) == 0 )
  {
    this = (WarBoardPartyListViewObject_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, item);
    byte_40F85B1 = 1;
  }
  memberObjectList = v4->fields.memberObjectList;
  if ( !memberObjectList )
    return 0LL;
  v6 = *(_QWORD *)&memberObjectList->max_length;
  v7 = 0LL;
  if ( v6 && (int)v6 >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v6 )
      {
        sub_B17100(this, item, method);
        sub_B170A0();
      }
      v7 = (UnityEngine_Object_o *)memberObjectList->m_Items[v8];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (WarBoardPartyListViewObject_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v7 || (monitor = v7[1].monitor) == 0LL || !item )
          sub_B170D4();
        if ( monitor[86] == item->fields.warBoardPieceIndex )
          break;
      }
      LODWORD(v6) = memberObjectList->max_length;
      if ( (__int64)++v8 >= (int)v6 )
        return 0LL;
    }
  }
  return (WarBoardPartyOrganizationListViewObject_o *)v7;
}


WarBoardPartyListViewItem_o *__fastcall WarBoardPartyListViewObject__GetItem(
        WarBoardPartyListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11

  if ( (byte_40F85B2 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardPartyListViewItem_TypeInfo, method);
    byte_40F85B2 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v4 = *(&WarBoardPartyListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (WarBoardPartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] == WarBoardPartyListViewItem_TypeInfo )
    return (WarBoardPartyListViewItem_o *)this->fields.linkItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyListViewObject__Init(
        WarBoardPartyListViewObject_o *this,
        int32_t initMode,
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *onTapMember,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x1
  __int64 v8; // x10
  WarBoardPartyListViewObject_c *klass; // x8
  WarBoardPartyListViewObject_o *v10; // x0
  _BOOL8 v11; // x1
  const MethodInfo *v12; // x2
  int32_t v13; // w8
  const MethodInfo *v14; // x1

  if ( (byte_40F85AB & 1) == 0 )
  {
    sub_B16FFC(&WarBoardPartyListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_40F85AB = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    v8 = *(&WarBoardPartyListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&linkItem->klass->_2.bitflags2 + 1) >= (unsigned int)v8
      && (WarBoardPartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[v8 - 1] == WarBoardPartyListViewItem_TypeInfo )
    {
      WarBoardPartyListViewObject__CreateMemberObjects(
        this,
        (WarBoardPartyListViewItem_o *)linkItem,
        (const MethodInfo *)onTapMember);
      if ( initMode )
      {
        if ( initMode == 1 )
        {
          WarBoardPartyListViewObject__SetupMemberObjects(this, onTapMember, v12);
          WarBoardPartyListViewObject__Display(this, v14);
          v13 = 2;
          v11 = 0LL;
          goto LABEL_13;
        }
        if ( initMode != 2 )
        {
          v11 = this->fields.state == 3;
          goto LABEL_15;
        }
      }
      WarBoardPartyListViewObject__SetupMemberObjects(this, onTapMember, v12);
      v13 = 3;
      v11 = 1LL;
LABEL_13:
      this->fields.state = v13;
LABEL_15:
      klass = this->klass;
      v10 = this;
      goto LABEL_7;
    }
  }
  this->fields.state = 0;
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0LL);
  klass = this->klass;
  v10 = this;
  v11 = 0LL;
LABEL_7:
  ((void (__fastcall *)(WarBoardPartyListViewObject_o *, _BOOL8, Il2CppMethodPointer))klass->vtable._9_SetInput.method)(
    v10,
    v11,
    klass->vtable._10_Invalidation.methodPtr);
}


void __fastcall WarBoardPartyListViewObject__InitItem(WarBoardPartyListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


void __fastcall WarBoardPartyListViewObject__OnEnable(WarBoardPartyListViewObject_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *dispCoroutine; // x1

  dispCoroutine = this->fields.dispCoroutine;
  if ( dispCoroutine )
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, dispCoroutine, 0LL);
}


void __fastcall WarBoardPartyListViewObject__OnFinishedDisplayAnim(
        WarBoardPartyListViewObject_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(WarBoardPartyListViewObject_o *, __int64, Il2CppMethodPointer))this->klass->vtable._9_SetInput.method)(
    this,
    1LL,
    this->klass->vtable._10_Invalidation.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyListViewObject__SetInput(
        WarBoardPartyListViewObject_o *this,
        bool isEnableInput,
        const MethodInfo *method)
{
  WarBoardPartyListViewObject_o *v4; // x20
  struct WarBoardPartyOrganizationListViewObject_array *memberObjectList; // x20
  __int64 v6; // x8
  unsigned __int64 v7; // x21
  bool v8; // w22
  WarBoardPartyOrganizationListViewObject_o *v9; // x19

  v4 = this;
  if ( (byte_40F85B3 & 1) == 0 )
  {
    this = (WarBoardPartyListViewObject_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, isEnableInput);
    byte_40F85B3 = 1;
  }
  memberObjectList = v4->fields.memberObjectList;
  if ( memberObjectList )
  {
    v6 = *(_QWORD *)&memberObjectList->max_length;
    if ( (int)v6 >= 1 )
    {
      v7 = 0LL;
      v8 = isEnableInput;
      do
      {
        if ( v7 >= (unsigned int)v6 )
        {
          sub_B17100(this, isEnableInput, method);
          sub_B170A0();
        }
        v9 = memberObjectList->m_Items[v7];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (WarBoardPartyListViewObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v9 )
            sub_B170D4();
          v9->fields.isEnableTouch = v8;
        }
        LODWORD(v6) = memberObjectList->max_length;
        ++v7;
      }
      while ( (__int64)v7 < (int)v6 );
    }
  }
}


void __fastcall WarBoardPartyListViewObject__SetItem(
        WarBoardPartyListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_30205928((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall WarBoardPartyListViewObject__SetItem_22159520(
        WarBoardPartyListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0LL);
  this->fields.state = 0;
}


void __fastcall WarBoardPartyListViewObject__SetupMemberObjects(
        WarBoardPartyListViewObject_o *this,
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *onTapMember,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PartyOrganizationListViewItem_o **linkItem; // x22
  __int64 v7; // x10
  UnityEngine_Object_o *Memberobj; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct WarBoardPartyOrganizationListViewObject_array *memberObjectList; // x8
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct WarBoardPartyOrganizationListViewObject_o **p_focusObj; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct WarBoardPartyOrganizationListViewObject_o *v26; // x0
  System_Int32_array **v27; // x1
  const MethodInfo *v28; // x2

  if ( (byte_40F85AD & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, onTapMember);
    sub_B16FFC(&WarBoardPartyListViewItem_TypeInfo, v5);
    byte_40F85AD = 1;
  }
  linkItem = (PartyOrganizationListViewItem_o **)this->fields.linkItem;
  if ( !linkItem )
    goto LABEL_21;
  v7 = *(&WarBoardPartyListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( (*linkItem)->fields._IsDispSvtPoint_k__BackingField < (unsigned int)v7
    || *(WarBoardPartyListViewItem_c **)(*(_QWORD *)&(*linkItem)->fields.isQuestRestriction + 8 * v7 - 8) != WarBoardPartyListViewItem_TypeInfo )
  {
    goto LABEL_21;
  }
  Memberobj = (UnityEngine_Object_o *)WarBoardPartyListViewObject__FindMemberobj(this, linkItem[16], method);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality(Memberobj, 0LL, 0LL);
  if ( v9 )
  {
    memberObjectList = this->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_21;
    if ( !memberObjectList->max_length )
    {
      sub_B17100(v9, v10, v11);
      sub_B170A0();
    }
    Memberobj = (UnityEngine_Object_o *)memberObjectList->m_Items[0];
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Memberobj, 0LL, 0LL) )
  {
    this->fields.focusObj = (struct WarBoardPartyOrganizationListViewObject_o *)Memberobj;
    p_focusObj = &this->fields.focusObj;
    sub_B16F98(
      (BattleServantConfConponent_o *)p_focusObj,
      (System_Int32_array **)Memberobj,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    v26 = *p_focusObj;
    if ( *p_focusObj )
    {
      v27 = (System_Int32_array **)linkItem[16];
      v26->fields.listViewItem = (struct PartyOrganizationListViewItem_o *)v27;
      sub_B16F98((BattleServantConfConponent_o *)&v26->fields.listViewItem, v27, v20, v21, v22, v23, v24, v25);
      if ( *p_focusObj )
      {
        WarBoardPartyOrganizationListViewObject__Init(*p_focusObj, onTapMember, v28);
        return;
      }
    }
LABEL_21:
    sub_B170D4();
  }
}


void __fastcall WarBoardPartyListViewObject__DsiplayAnim_d__17___ctor(
        WarBoardPartyListViewObject__DsiplayAnim_d__17_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardPartyListViewObject__DsiplayAnim_d__17__MoveNext(
        WarBoardPartyListViewObject__DsiplayAnim_d__17_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t _1__state; // w8
  struct WarBoardPartyListViewObject_o *_4__this; // x20
  float timer_5__2; // s8
  UnityEngine_Component_o *backSprite; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x20
  bool result; // w0
  float deltaTime; // s0
  float duration; // s1
  float v12; // s0
  float v13; // s8
  float x; // s11
  float y; // s12
  float z; // s13
  float v17; // s0
  float v18; // s1
  float v19; // s2
  UnityEngine_Component_o *v20; // x0
  float v21; // s8
  float v22; // s9
  float v23; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  Il2CppObject **p__2__current; // x19
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F784F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F784F = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    timer_5__2 = this->fields._timer_5__2;
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields._timer_5__2 = 0.0;
    this->fields.__1__state = -1;
    timer_5__2 = 0.0;
  }
  if ( timer_5__2 >= this->fields.duration )
  {
    if ( _4__this )
    {
      backSprite = (UnityEngine_Component_o *)_4__this->fields.backSprite;
      if ( backSprite )
      {
        Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            backSprite,
                                                            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL) )
          goto LABEL_16;
        if ( Component_WebViewObject )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, 0, 0LL);
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, 1, 0LL);
LABEL_16:
          ActionExtensions__Call(this->fields.onFinished, 0LL);
          return 0;
        }
      }
    }
LABEL_22:
    sub_B170D4();
  }
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  duration = this->fields.duration;
  v12 = timer_5__2 + deltaTime;
  this->fields._timer_5__2 = v12;
  v13 = UnityEngine_Mathf__Clamp01(v12 / duration, 0LL);
  v34 = Easing__Func(this->fields.fromPos, this->fields.toPos, v13, this->fields.easingType, 0LL);
  x = v34.fields.x;
  y = v34.fields.y;
  z = v34.fields.z;
  *(UnityEngine_Vector3_o *)&v17 = Easing__Func(
                                     this->fields.fromScale,
                                     this->fields.toScale,
                                     v13,
                                     this->fields.easingType,
                                     0LL);
  if ( !_4__this )
    goto LABEL_22;
  v20 = (UnityEngine_Component_o *)_4__this->fields.backSprite;
  if ( !v20 )
    goto LABEL_22;
  v21 = v17;
  v22 = v18;
  v23 = v19;
  gameObject = UnityEngine_Component__get_gameObject(v20, 0LL);
  v35.fields.x = x;
  v35.fields.y = y;
  v35.fields.z = z;
  GameObjectExtensions__SetLocalPosition(gameObject, v35, 0LL);
  v25 = (UnityEngine_Component_o *)_4__this->fields.backSprite;
  if ( !v25 )
    goto LABEL_22;
  v26 = UnityEngine_Component__get_gameObject(v25, 0LL);
  v36.fields.x = v21;
  v36.fields.y = v22;
  v36.fields.z = v23;
  GameObjectExtensions__SetLocalScale(v26, v36, 0LL);
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v28, v29, v30, v31, v32, v33);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall WarBoardPartyListViewObject__DsiplayAnim_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardPartyListViewObject__DsiplayAnim_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardPartyListViewObject__DsiplayAnim_d__17__System_Collections_IEnumerator_Reset(
        WarBoardPartyListViewObject__DsiplayAnim_d__17_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_WarBoardPartyListViewObject__DsiplayAnim_d__17_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
}


Il2CppObject *__fastcall WarBoardPartyListViewObject__DsiplayAnim_d__17__System_Collections_IEnumerator_get_Current(
        WarBoardPartyListViewObject__DsiplayAnim_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardPartyListViewObject__DsiplayAnim_d__17__System_IDisposable_Dispose(
        WarBoardPartyListViewObject__DsiplayAnim_d__17_o *this,
        const MethodInfo *method)
{
  ;
}