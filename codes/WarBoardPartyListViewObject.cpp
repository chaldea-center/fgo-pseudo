void __fastcall WarBoardPartyListViewObject___ctor(WarBoardPartyListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_42AEA99 & 1) == 0 )
  {
    sub_B52984(&ListViewObject_TypeInfo);
    byte_42AEA99 = 1;
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
  struct UnityEngine_GameObject_o *srcMemberObj; // x20
  char *transform; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Component_o *grid; // x8
  UnityEngine_Transform_o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  WarBoardPartyOrganizationListViewObject_o *v17; // x20
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42AEA95 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_WarBoardPartyOrganizationListViewObject___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AEA95 = 1;
  }
  srcMemberObj = this->fields.srcMemberObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (char *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                        (UnityEngine_UI_Dropdown_DropdownItem_o *)srcMemberObj,
                        (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_11;
  v8 = (UnityEngine_GameObject_o *)transform;
  transform = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  grid = (UnityEngine_Component_o *)this->fields.grid;
  if ( !grid )
    goto LABEL_11;
  v10 = (UnityEngine_Transform_o *)transform;
  transform = (char *)UnityEngine_Component__get_transform(grid, 0LL);
  if ( !v10
    || (UnityEngine_Transform__SetParent_35737932(v10, (UnityEngine_Transform_o *)transform, 0, 0LL),
        zero = UnityEngine_Vector3__get_zero(0LL),
        GameObjectExtensions__SetLocalPosition(v8, zero, 0LL),
        one = UnityEngine_Vector3__get_one(0LL),
        GameObjectExtensions__SetLocalScale(v8, one, 0LL),
        (transform = (char *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               v8,
                               (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardPartyOrganizationListViewObject___)) == 0LL) )
  {
LABEL_11:
    sub_B52A5C(transform, v7);
  }
  v17 = (WarBoardPartyOrganizationListViewObject_o *)transform;
  *((_QWORD *)transform + 4) = item;
  sub_B52920(
    (BattleServantConfConponent_o *)(transform + 32),
    (System_Int32_array **)item,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  return v17;
}


void __fastcall WarBoardPartyListViewObject__CreateMemberObjects(
        WarBoardPartyListViewObject_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_memberObjectList; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x22
  const MethodInfo *v7; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *MemberObj; // x0
  __int64 v9; // x1
  System_Int32_array **v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42AEA91 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__TypeInfo);
    byte_42AEA91 = 1;
  }
  if ( partyItem )
  {
    p_memberObjectList = (BattleServantConfConponent_o *)&this->fields.memberObjectList;
    if ( !this->fields.memberObjectList )
    {
      v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v6,
        (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject___ctor__);
      MemberObj = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardPartyListViewObject__CreateMemberObj(
                                                                           this,
                                                                           partyItem->fields.focusMemberItem,
                                                                           v7);
      if ( !v6 )
        sub_B52A5C(MemberObj, v9);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v6,
        MemberObj,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__Add__);
      v10 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                     (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__ToArray__);
      p_memberObjectList->klass = (BattleServantConfConponent_c *)v10;
      sub_B52920(p_memberObjectList, v10, v11, v12, v13, v14, v15, v16);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyListViewObject__Display(WarBoardPartyListViewObject_o *this, const MethodInfo *method)
{
  WarBoardPartyListViewObject_o *v2; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 v4; // x11
  __int64 v5; // x23
  System_Collections_IEnumerator_o *dispCoroutine; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UnityEngine_Object_o *backSprite; // x21
  bool v14; // w0
  Il2CppMethodPointer methodPtr; // x2
  const MethodInfo *v16; // x3
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_GameObject_o *v18; // x21
  __int64 v19; // x21
  __int64 v20; // x21
  __int64 v21; // x8
  WarBoardData_o *v22; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v26; // x21
  __int64 v27; // x21
  __int64 v28; // x8
  __int64 v29; // x8
  float v30; // s8
  float v31; // s9
  float v32; // s10
  __int64 v33; // x21
  __int64 v34; // x21
  __int64 v35; // x8
  float v36; // s0
  float v37; // s1
  float v38; // s2
  float v39; // s8
  float v40; // s9
  float v41; // s10
  float v42; // s13
  float v43; // s14
  float v44; // s15
  float v45; // s8
  float duration; // s9
  unsigned int dispEasingType; // w21
  System_Action_o *v48; // x0
  float v49; // w22
  int32_t v50; // w3
  System_Action_o *v51; // x4
  const MethodInfo *v52; // x5
  System_Int32_array **v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  UnityEngine_Vector3_o fromScale; // [xsp+0h] [xbp-B0h]
  float toPos; // [xsp+34h] [xbp-7Ch]
  float v62; // [xsp+38h] [xbp-78h]
  float v63; // [xsp+3Ch] [xbp-74h]
  float v64; // [xsp+88h] [xbp-28h]
  float v65; // [xsp+8Ch] [xbp-24h]
  UnityEngine_Vector3_o v66; // 0:x1.12
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v78; // 0:s3.4,4:s4.4,8:s5.4

  v2 = this;
  if ( (byte_42AEA93 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_B52984(&WarBoardPartyListViewItem_TypeInfo);
    this = (WarBoardPartyListViewObject_o *)sub_B52984(&Method_WarBoardPartyListViewObject_OnFinishedDisplayAnim__);
    byte_42AEA93 = 1;
  }
  linkItem = v2->fields.linkItem;
  if ( !linkItem )
    goto LABEL_45;
  v4 = *(&WarBoardPartyListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v4
    || (WarBoardPartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[v4 - 1] != WarBoardPartyListViewItem_TypeInfo )
  {
    goto LABEL_45;
  }
  if ( (WarBoardPartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[*(&WarBoardPartyListViewItem_TypeInfo->_2.bitflags2
                                                                        + 1)
                                                                      - 1] != WarBoardPartyListViewItem_TypeInfo )
    linkItem = 0LL;
  v5 = *(_QWORD *)&linkItem[1].fields.selectNum;
  dispCoroutine = v2->fields.dispCoroutine;
  if ( dispCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)v2, dispCoroutine, 0LL);
    v2->fields.dispCoroutine = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&v2->fields.dispCoroutine, 0LL, v7, v8, v9, v10, v11, v12);
  }
  backSprite = (UnityEngine_Object_o *)v2->fields.backSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v14 = UnityEngine_Object__op_Equality(backSprite, 0LL, 0LL);
  v16 = v2->klass->vtable._9_SetInput.method;
  methodPtr = v2->klass->vtable._10_Invalidation.methodPtr;
  if ( v14 )
  {
    ((void (__fastcall *)(WarBoardPartyListViewObject_o *, __int64, Il2CppMethodPointer))v16)(v2, 1LL, methodPtr);
    return;
  }
  ((void (__fastcall *)(WarBoardPartyListViewObject_o *, _QWORD, Il2CppMethodPointer))v16)(v2, 0LL, methodPtr);
  this = (WarBoardPartyListViewObject_o *)v2->fields.backSprite;
  if ( !this )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, zero, 0LL);
  this = (WarBoardPartyListViewObject_o *)v2->fields.backSprite;
  if ( !this )
    goto LABEL_45;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  GameObjectExtensions__SetLocalScale(v18, one, 0LL);
  v19 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                                       + 3));
  v20 = **(_QWORD **)(v19 + 192);
  if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_AEB684(v20);
  v21 = **(_QWORD **)(v20 + 184);
  if ( !v21 )
    goto LABEL_45;
  if ( !v5 )
    goto LABEL_45;
  v22 = *(WarBoardData_o **)(v21 + 432);
  if ( !v22 )
    goto LABEL_45;
  this = (WarBoardPartyListViewObject_o *)WarBoardData__GetPiece(
                                            *(WarBoardData_o **)(v21 + 432),
                                            0,
                                            0,
                                            *(_DWORD *)(v5 + 352),
                                            1,
                                            0LL);
  if ( !this )
    goto LABEL_45;
  this = (WarBoardPartyListViewObject_o *)WarBoardData__GetSquare(v22, (int32_t)this->fields.mDragDrop, 0LL);
  if ( !this )
    goto LABEL_45;
  this = (WarBoardPartyListViewObject_o *)this->fields.linkItem;
  if ( !this )
    goto LABEL_45;
  this = (WarBoardPartyListViewObject_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_45;
  this = (WarBoardPartyListViewObject_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_45;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
  x = position.fields.x;
  y = position.fields.y;
  z = position.fields.z;
  v26 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v26 + 306) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                                       + 3));
  v27 = **(_QWORD **)(v26 + 192);
  if ( (*(_BYTE *)(v27 + 306) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_AEB684(v27);
  v28 = **(_QWORD **)(v27 + 184);
  if ( !v28 )
    goto LABEL_45;
  v29 = *(_QWORD *)(v28 + 40);
  if ( !v29 )
    goto LABEL_45;
  this = *(WarBoardPartyListViewObject_o **)(v29 + 24);
  if ( !this )
    goto LABEL_45;
  v70.fields.x = x;
  v70.fields.y = y;
  v70.fields.z = z;
  v71 = UnityEngine_Camera__WorldToScreenPoint_41461200((UnityEngine_Camera_o *)this, v70, 0LL);
  v30 = v71.fields.x;
  v31 = v71.fields.y;
  v32 = v71.fields.z;
  v33 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v33 + 306) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_AEB684(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                                       + 3));
  v34 = **(_QWORD **)(v33 + 192);
  if ( (*(_BYTE *)(v34 + 306) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_AEB684(v34);
  v35 = **(_QWORD **)(v34 + 184);
  if ( !v35 )
    goto LABEL_45;
  this = *(WarBoardPartyListViewObject_o **)(v35 + 48);
  if ( !this )
    goto LABEL_45;
  v72.fields.x = v30;
  v72.fields.y = v31;
  v72.fields.z = v32;
  *(UnityEngine_Vector3_o *)&v36 = UnityEngine_Camera__ScreenToWorldPoint_41461224(
                                     (UnityEngine_Camera_o *)this,
                                     v72,
                                     0LL);
  this = (WarBoardPartyListViewObject_o *)v2->fields.backSprite;
  if ( !this
    || (v39 = v36,
        v40 = v37,
        v41 = v38,
        (this = (WarBoardPartyListViewObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL)) == 0LL) )
  {
LABEL_45:
    sub_B52A5C(this, method);
  }
  v73.fields.x = v39;
  v73.fields.y = v40;
  v73.fields.z = v41;
  v74 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)this, v73, 0LL);
  v64 = v74.fields.y;
  v65 = v74.fields.x;
  v63 = v74.fields.z;
  v75 = UnityEngine_Vector3__get_zero(0LL);
  toPos = v75.fields.y;
  v62 = v75.fields.x;
  v42 = v75.fields.z;
  v76 = UnityEngine_Vector3__get_zero(0LL);
  v43 = v76.fields.x;
  v44 = v76.fields.y;
  v45 = v76.fields.z;
  LODWORD(duration) = (unsigned int)UnityEngine_Vector3__get_one(0LL);
  UnityEngine_Mathf__Max(0.0, v2->fields.dispDuration, 0LL);
  dispEasingType = v2->fields.dispEasingType;
  v48 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  v49 = *(float *)&v48;
  System_Action___ctor(v48, (Il2CppObject *)v2, Method_WarBoardPartyListViewObject_OnFinishedDisplayAnim__, 0LL);
  *(_QWORD *)&fromScale.fields.y = __PAIR64__(LODWORD(v45), LODWORD(v44));
  fromScale.fields.x = v43;
  v77.fields.y = v64;
  v77.fields.x = v65;
  v78.fields.x = v62;
  v77.fields.z = v63;
  v78.fields.y = toPos;
  v78.fields.z = v42;
  *(_QWORD *)&v66.fields.x = dispEasingType;
  v66.fields.z = v49;
  v53 = (System_Int32_array **)WarBoardPartyListViewObject__DsiplayAnim(
                                 v2,
                                 v77,
                                 v78,
                                 fromScale,
                                 v66,
                                 duration,
                                 v50,
                                 v51,
                                 v52);
  v2->fields.dispCoroutine = (struct System_Collections_IEnumerator_o *)v53;
  sub_B52920((BattleServantConfConponent_o *)&v2->fields.dispCoroutine, v53, v54, v55, v56, v57, v58, v59);
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)v2, v2->fields.dispCoroutine, 0LL);
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
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  float y; // [xsp+Ch] [xbp-74h]
  float z; // [xsp+10h] [xbp-70h]
  int v32; // [xsp+A8h] [xbp+28h]
  int v33; // [xsp+B0h] [xbp+30h]

  v9 = *(System_Int32_array ***)&toScale.fields.z;
  x = toScale.fields.x;
  v11 = fromPos.fields.x;
  z = fromPos.fields.z;
  y = fromPos.fields.y;
  if ( (byte_42AEA94 & 1) == 0 )
  {
    sub_B52984(&WarBoardPartyListViewObject__DsiplayAnim_d__17_TypeInfo);
    byte_42AEA94 = 1;
  }
  v13 = sub_B52A54(WarBoardPartyListViewObject__DsiplayAnim_d__17_TypeInfo);
  WarBoardPartyListViewObject__DsiplayAnim_d__17___ctor((WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)v13, 0, 0LL);
  if ( !v13 )
    sub_B52A5C(v14, v15);
  *(_QWORD *)(v13 + 88) = this;
  sub_B52920((BattleServantConfConponent_o *)(v13 + 88), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v13 + 32) = v33;
  *(float *)(v13 + 36) = v11;
  *(float *)(v13 + 60) = x;
  *(float *)(v13 + 40) = y;
  *(float *)(v13 + 44) = z;
  *(float *)(v13 + 48) = toPos.fields.x;
  *(float *)(v13 + 52) = toPos.fields.y;
  *(UnityEngine_Vector3_o *)(v13 + 64) = fromScale;
  *(_QWORD *)(v13 + 76) = *(_QWORD *)&duration;
  *(_DWORD *)(v13 + 84) = v32;
  *(float *)(v13 + 56) = toPos.fields.z;
  *(_QWORD *)(v13 + 96) = v9;
  sub_B52920((BattleServantConfConponent_o *)(v13 + 96), v9, v22, v23, v24, v25, v26, v27);
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
  __int64 v9; // x1
  _DWORD *monitor; // x8
  __int64 v12; // x0

  v4 = this;
  if ( (byte_42AEA96 & 1) == 0 )
  {
    this = (WarBoardPartyListViewObject_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AEA96 = 1;
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
        v12 = sub_B52A88(this);
        sub_B52A28(v12, 0LL);
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
          sub_B52A5C(this, v9);
        if ( monitor[88] == item->fields.warBoardPieceIndex )
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

  if ( (byte_42AEA97 & 1) == 0 )
  {
    sub_B52984(&WarBoardPartyListViewItem_TypeInfo);
    byte_42AEA97 = 1;
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

  if ( (byte_42AEA90 & 1) == 0 )
  {
    sub_B52984(&WarBoardPartyListViewItem_TypeInfo);
    byte_42AEA90 = 1;
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
    UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, dispCoroutine, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x0

  v4 = this;
  if ( (byte_42AEA98 & 1) == 0 )
  {
    this = (WarBoardPartyListViewObject_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AEA98 = 1;
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
          v11 = sub_B52A88(this);
          sub_B52A28(v11, 0LL);
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
            sub_B52A5C(this, v10);
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
  ListViewObject__SetItem_33992116((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall WarBoardPartyListViewObject__SetItem_22703784(
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
  WarBoardPartyListViewObject_o *v4; // x20
  PartyOrganizationListViewItem_o **linkItem; // x22
  __int64 v6; // x10
  UnityEngine_Object_o *Memberobj; // x21
  struct WarBoardPartyOrganizationListViewObject_array *memberObjectList; // x8
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  BattleServantConfConponent_o *p_focusObj; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct ListViewManager_o *v22; // x1
  const MethodInfo *v23; // x2
  __int64 v24; // x0

  v4 = this;
  if ( (byte_42AEA92 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    this = (WarBoardPartyListViewObject_o *)sub_B52984(&WarBoardPartyListViewItem_TypeInfo);
    byte_42AEA92 = 1;
  }
  linkItem = (PartyOrganizationListViewItem_o **)v4->fields.linkItem;
  if ( !linkItem )
    goto LABEL_21;
  v6 = *(&WarBoardPartyListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( (*linkItem)->fields._IsDispSvtPoint_k__BackingField < (unsigned int)v6
    || *(WarBoardPartyListViewItem_c **)(*(_QWORD *)&(*linkItem)->fields.isQuestRestriction + 8 * v6 - 8) != WarBoardPartyListViewItem_TypeInfo )
  {
    goto LABEL_21;
  }
  Memberobj = (UnityEngine_Object_o *)WarBoardPartyListViewObject__FindMemberobj(v4, linkItem[16], method);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (WarBoardPartyListViewObject_o *)UnityEngine_Object__op_Equality(Memberobj, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    memberObjectList = v4->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_21;
    if ( !memberObjectList->max_length )
    {
      v24 = sub_B52A88(this);
      sub_B52A28(v24, 0LL);
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
    v4->fields.focusObj = (struct WarBoardPartyOrganizationListViewObject_o *)Memberobj;
    p_focusObj = (BattleServantConfConponent_o *)&v4->fields.focusObj;
    sub_B52920(p_focusObj, (System_Int32_array **)Memberobj, v9, v10, v11, v12, v13, v14);
    this = (WarBoardPartyListViewObject_o *)p_focusObj->klass;
    if ( p_focusObj->klass )
    {
      v22 = (struct ListViewManager_o *)linkItem[16];
      this->fields.manager = v22;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.manager,
        (System_Int32_array **)v22,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      this = (WarBoardPartyListViewObject_o *)p_focusObj->klass;
      if ( p_focusObj->klass )
      {
        WarBoardPartyOrganizationListViewObject__Init(
          (WarBoardPartyOrganizationListViewObject_o *)this,
          onTapMember,
          v23);
        return;
      }
    }
LABEL_21:
    sub_B52A5C(this, onTapMember);
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
  WarBoardPartyListViewObject__DsiplayAnim_d__17_o *v2; // x19
  int32_t _1__state; // w8
  struct WarBoardPartyListViewObject_o *_4__this; // x20
  float timer_5__2; // s8
  UnityEngine_Object_o *Component_WebViewObject; // x20
  bool result; // w0
  float deltaTime; // s0
  float duration; // s1
  float v10; // s0
  float v11; // s8
  float x; // s11
  float y; // s12
  float z; // s13
  float v15; // s0
  float v16; // s1
  float v17; // s2
  float v18; // s8
  float v19; // s9
  float v20; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v22; // x0
  Il2CppObject **p__2__current; // x19
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_42AD731 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD731 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    timer_5__2 = v2->fields._timer_5__2;
    v2->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v2->fields._timer_5__2 = 0.0;
    v2->fields.__1__state = -1;
    timer_5__2 = 0.0;
  }
  if ( timer_5__2 >= v2->fields.duration )
  {
    if ( _4__this )
    {
      this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)_4__this->fields.backSprite;
      if ( this )
      {
        Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)UnityEngine_Object__op_Inequality(
                                                                     Component_WebViewObject,
                                                                     0LL,
                                                                     0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_16;
        if ( Component_WebViewObject )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, 0, 0LL);
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, 1, 0LL);
LABEL_16:
          ActionExtensions__Call(v2->fields.onFinished, 0LL);
          return 0;
        }
      }
    }
LABEL_22:
    sub_B52A5C(this, method);
  }
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  duration = v2->fields.duration;
  v10 = timer_5__2 + deltaTime;
  v2->fields._timer_5__2 = v10;
  v11 = UnityEngine_Mathf__Clamp01(v10 / duration, 0LL);
  v24 = Easing__Func(v2->fields.fromPos, v2->fields.toPos, v11, v2->fields.easingType, 0LL);
  x = v24.fields.x;
  y = v24.fields.y;
  z = v24.fields.z;
  *(UnityEngine_Vector3_o *)&v15 = Easing__Func(
                                     v2->fields.fromScale,
                                     v2->fields.toScale,
                                     v11,
                                     v2->fields.easingType,
                                     0LL);
  if ( !_4__this )
    goto LABEL_22;
  this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)_4__this->fields.backSprite;
  if ( !this )
    goto LABEL_22;
  v18 = v15;
  v19 = v16;
  v20 = v17;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v25.fields.x = x;
  v25.fields.y = y;
  v25.fields.z = z;
  GameObjectExtensions__SetLocalPosition(gameObject, v25, 0LL);
  this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)_4__this->fields.backSprite;
  if ( !this )
    goto LABEL_22;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v26.fields.x = v18;
  v26.fields.y = v19;
  v26.fields.z = v20;
  GameObjectExtensions__SetLocalScale(v22, v26, 0LL);
  v2->fields.__2__current = 0LL;
  p__2__current = &v2->fields.__2__current;
  sub_B52920(p__2__current);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_WarBoardPartyListViewObject__DsiplayAnim_d__17_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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