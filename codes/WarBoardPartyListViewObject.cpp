void __fastcall WarBoardPartyListViewObject___ctor(WarBoardPartyListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E75F1 & 1) == 0 )
  {
    sub_B5D5C4(&ListViewObject_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E75F1 = 1;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct UnityEngine_GameObject_o *srcMemberObj; // x20
  char *transform; // x0
  __int64 v14; // x1
  UnityEngine_GameObject_o *v15; // x20
  UnityEngine_Component_o *grid; // x8
  UnityEngine_Transform_o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  WarBoardPartyOrganizationListViewObject_o *v24; // x20
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E75ED & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_WarBoardPartyOrganizationListViewObject___,
      (_DWORD)item,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42E75ED = 1;
  }
  srcMemberObj = this->fields.srcMemberObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (char *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                        (UnityEngine_UI_Dropdown_DropdownItem_o *)srcMemberObj,
                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_11;
  v15 = (UnityEngine_GameObject_o *)transform;
  transform = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  grid = (UnityEngine_Component_o *)this->fields.grid;
  if ( !grid )
    goto LABEL_11;
  v17 = (UnityEngine_Transform_o *)transform;
  transform = (char *)UnityEngine_Component__get_transform(grid, 0LL);
  if ( !v17
    || (UnityEngine_Transform__SetParent_35741212(v17, (UnityEngine_Transform_o *)transform, 0, 0LL),
        zero = UnityEngine_Vector3__get_zero(0LL),
        GameObjectExtensions__SetLocalPosition(v15, zero, 0LL),
        one = UnityEngine_Vector3__get_one(0LL),
        GameObjectExtensions__SetLocalScale(v15, one, 0LL),
        (transform = (char *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               v15,
                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_WarBoardPartyOrganizationListViewObject___)) == 0LL) )
  {
LABEL_11:
    sub_B5D69C(transform, v14);
  }
  v24 = (WarBoardPartyOrganizationListViewObject_o *)transform;
  *((_QWORD *)transform + 4) = item;
  sub_B5D560(
    (BattleServantConfConponent_o *)(transform + 32),
    (System_Int32_array **)item,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  return v24;
}


void __fastcall WarBoardPartyListViewObject__CreateMemberObjects(
        WarBoardPartyListViewObject_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  BattleServantConfConponent_o *p_memberObjectList; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x22
  const MethodInfo *v17; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *MemberObj; // x0
  __int64 v19; // x1
  System_Int32_array **v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_42E75E9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__Add__,
      (_DWORD)partyItem,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__TypeInfo, v12, v13, v14);
    byte_42E75E9 = 1;
  }
  if ( partyItem )
  {
    p_memberObjectList = (BattleServantConfConponent_o *)&this->fields.memberObjectList;
    if ( !this->fields.memberObjectList )
    {
      v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v16,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject___ctor__);
      MemberObj = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardPartyListViewObject__CreateMemberObj(
                                                                           this,
                                                                           partyItem->fields.focusMemberItem,
                                                                           v17);
      if ( !v16 )
        sub_B5D69C(MemberObj, v19);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v16,
        MemberObj,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__Add__);
      v20 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                     (const MethodInfo_305910C *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__ToArray__);
      p_memberObjectList->klass = (BattleServantConfConponent_c *)v20;
      sub_B5D560(p_memberObjectList, v20, v21, v22, v23, v24, v25, v26);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyListViewObject__Display(WarBoardPartyListViewObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardPartyListViewObject_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v18; // x11
  __int64 v19; // x23
  System_Collections_IEnumerator_o *dispCoroutine; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Object_o *backSprite; // x21
  bool v28; // w0
  Il2CppMethodPointer methodPtr; // x2
  const MethodInfo *v30; // x3
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_GameObject_o *v32; // x21
  __int64 v33; // x21
  __int64 v34; // x21
  __int64 v35; // x8
  WarBoardData_o *v36; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v40; // x21
  __int64 v41; // x21
  __int64 v42; // x8
  __int64 v43; // x8
  float v44; // s8
  float v45; // s9
  float v46; // s10
  __int64 v47; // x21
  __int64 v48; // x21
  __int64 v49; // x8
  float v50; // s0
  float v51; // s1
  float v52; // s2
  float v53; // s8
  float v54; // s9
  float v55; // s10
  float v56; // s13
  float v57; // s14
  float v58; // s15
  float v59; // s8
  float duration; // s9
  unsigned int dispEasingType; // w21
  System_Action_o *v62; // x0
  float v63; // w22
  int32_t v64; // w3
  System_Action_o *v65; // x4
  const MethodInfo *v66; // x5
  System_Int32_array **v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  UnityEngine_Vector3_o fromScale; // [xsp+0h] [xbp-B0h]
  float toPos; // [xsp+34h] [xbp-7Ch]
  float v76; // [xsp+38h] [xbp-78h]
  float v77; // [xsp+3Ch] [xbp-74h]
  float v78; // [xsp+88h] [xbp-28h]
  float v79; // [xsp+8Ch] [xbp-24h]
  UnityEngine_Vector3_o v80; // 0:x1.12
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s3.4,4:s4.4,8:s5.4

  v4 = this;
  if ( (byte_42E75EB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v8, v9, v10);
    sub_B5D5C4(&WarBoardPartyListViewItem_TypeInfo, v11, v12, v13);
    this = (WarBoardPartyListViewObject_o *)sub_B5D5C4(
                                              &Method_WarBoardPartyListViewObject_OnFinishedDisplayAnim__,
                                              v14,
                                              v15,
                                              v16);
    byte_42E75EB = 1;
  }
  linkItem = v4->fields.linkItem;
  if ( !linkItem )
    goto LABEL_45;
  v18 = *(&WarBoardPartyListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v18
    || (WarBoardPartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[v18 - 1] != WarBoardPartyListViewItem_TypeInfo )
  {
    goto LABEL_45;
  }
  if ( (WarBoardPartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[*(&WarBoardPartyListViewItem_TypeInfo->_2.bitflags2
                                                                        + 1)
                                                                      - 1] != WarBoardPartyListViewItem_TypeInfo )
    linkItem = 0LL;
  v19 = *(_QWORD *)&linkItem[1].fields.selectNum;
  dispCoroutine = v4->fields.dispCoroutine;
  if ( dispCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)v4, dispCoroutine, 0LL);
    v4->fields.dispCoroutine = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&v4->fields.dispCoroutine, 0LL, v21, v22, v23, v24, v25, v26);
  }
  backSprite = (UnityEngine_Object_o *)v4->fields.backSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v28 = UnityEngine_Object__op_Equality(backSprite, 0LL, 0LL);
  v30 = v4->klass->vtable._9_SetInput.method;
  methodPtr = v4->klass->vtable._10_Invalidation.methodPtr;
  if ( v28 )
  {
    ((void (__fastcall *)(WarBoardPartyListViewObject_o *, __int64, Il2CppMethodPointer))v30)(v4, 1LL, methodPtr);
    return;
  }
  ((void (__fastcall *)(WarBoardPartyListViewObject_o *, _QWORD, Il2CppMethodPointer))v30)(v4, 0LL, methodPtr);
  this = (WarBoardPartyListViewObject_o *)v4->fields.backSprite;
  if ( !this )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, zero, 0LL);
  this = (WarBoardPartyListViewObject_o *)v4->fields.backSprite;
  if ( !this )
    goto LABEL_45;
  v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  GameObjectExtensions__SetLocalScale(v32, one, 0LL);
  v33 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v33 + 306) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                                       + 3));
  v34 = **(_QWORD **)(v33 + 192);
  if ( (*(_BYTE *)(v34 + 306) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_AF52C4(v34);
  v35 = **(_QWORD **)(v34 + 184);
  if ( !v35 )
    goto LABEL_45;
  if ( !v19 )
    goto LABEL_45;
  v36 = *(WarBoardData_o **)(v35 + 432);
  if ( !v36 )
    goto LABEL_45;
  this = (WarBoardPartyListViewObject_o *)WarBoardData__GetPiece(
                                            *(WarBoardData_o **)(v35 + 432),
                                            0,
                                            0,
                                            *(_DWORD *)(v19 + 360),
                                            1,
                                            0LL);
  if ( !this )
    goto LABEL_45;
  this = (WarBoardPartyListViewObject_o *)WarBoardData__GetSquare(v36, (int32_t)this->fields.mDragDrop, 0LL);
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
  v40 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v40 + 306) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                                       + 3));
  v41 = **(_QWORD **)(v40 + 192);
  if ( (*(_BYTE *)(v41 + 306) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_AF52C4(v41);
  v42 = **(_QWORD **)(v41 + 184);
  if ( !v42 )
    goto LABEL_45;
  v43 = *(_QWORD *)(v42 + 40);
  if ( !v43 )
    goto LABEL_45;
  this = *(WarBoardPartyListViewObject_o **)(v43 + 24);
  if ( !this )
    goto LABEL_45;
  v84.fields.x = x;
  v84.fields.y = y;
  v84.fields.z = z;
  v85 = UnityEngine_Camera__WorldToScreenPoint_41565348((UnityEngine_Camera_o *)this, v84, 0LL);
  v44 = v85.fields.x;
  v45 = v85.fields.y;
  v46 = v85.fields.z;
  v47 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v47 + 306) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                                       + 3));
  v48 = **(_QWORD **)(v47 + 192);
  if ( (*(_BYTE *)(v48 + 306) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_AF52C4(v48);
  v49 = **(_QWORD **)(v48 + 184);
  if ( !v49 )
    goto LABEL_45;
  this = *(WarBoardPartyListViewObject_o **)(v49 + 48);
  if ( !this )
    goto LABEL_45;
  v86.fields.x = v44;
  v86.fields.y = v45;
  v86.fields.z = v46;
  *(UnityEngine_Vector3_o *)&v50 = UnityEngine_Camera__ScreenToWorldPoint_41565372(
                                     (UnityEngine_Camera_o *)this,
                                     v86,
                                     0LL);
  this = (WarBoardPartyListViewObject_o *)v4->fields.backSprite;
  if ( !this
    || (v53 = v50,
        v54 = v51,
        v55 = v52,
        (this = (WarBoardPartyListViewObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL)) == 0LL) )
  {
LABEL_45:
    sub_B5D69C(this, method);
  }
  v87.fields.x = v53;
  v87.fields.y = v54;
  v87.fields.z = v55;
  v88 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)this, v87, 0LL);
  v78 = v88.fields.y;
  v79 = v88.fields.x;
  v77 = v88.fields.z;
  v89 = UnityEngine_Vector3__get_zero(0LL);
  toPos = v89.fields.y;
  v76 = v89.fields.x;
  v56 = v89.fields.z;
  v90 = UnityEngine_Vector3__get_zero(0LL);
  v57 = v90.fields.x;
  v58 = v90.fields.y;
  v59 = v90.fields.z;
  LODWORD(duration) = (unsigned int)UnityEngine_Vector3__get_one(0LL);
  UnityEngine_Mathf__Max(0.0, v4->fields.dispDuration, 0LL);
  dispEasingType = v4->fields.dispEasingType;
  v62 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  v63 = *(float *)&v62;
  System_Action___ctor(v62, (Il2CppObject *)v4, Method_WarBoardPartyListViewObject_OnFinishedDisplayAnim__, 0LL);
  *(_QWORD *)&fromScale.fields.y = __PAIR64__(LODWORD(v59), LODWORD(v58));
  fromScale.fields.x = v57;
  v91.fields.y = v78;
  v91.fields.x = v79;
  v92.fields.x = v76;
  v91.fields.z = v77;
  v92.fields.y = toPos;
  v92.fields.z = v56;
  *(_QWORD *)&v80.fields.x = dispEasingType;
  v80.fields.z = v63;
  v67 = (System_Int32_array **)WarBoardPartyListViewObject__DsiplayAnim(
                                 v4,
                                 v91,
                                 v92,
                                 fromScale,
                                 v80,
                                 duration,
                                 v64,
                                 v65,
                                 v66);
  v4->fields.dispCoroutine = (struct System_Collections_IEnumerator_o *)v67;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.dispCoroutine, v67, v68, v69, v70, v71, v72, v73);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)v4, v4->fields.dispCoroutine, 0LL);
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
  if ( (byte_42E75EC & 1) == 0 )
  {
    sub_B5D5C4(
      &WarBoardPartyListViewObject__DsiplayAnim_d__17_TypeInfo,
      LODWORD(toScale.fields.x),
      LODWORD(toScale.fields.z),
      *(_QWORD *)&easingType);
    byte_42E75EC = 1;
  }
  v13 = sub_B5D694(WarBoardPartyListViewObject__DsiplayAnim_d__17_TypeInfo);
  WarBoardPartyListViewObject__DsiplayAnim_d__17___ctor((WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)v13, 0, 0LL);
  if ( !v13 )
    sub_B5D69C(v14, v15);
  *(_QWORD *)(v13 + 88) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v13 + 88), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
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
  sub_B5D560((BattleServantConfConponent_o *)(v13 + 96), v9, v22, v23, v24, v25, v26, v27);
  return (System_Collections_IEnumerator_o *)v13;
}


WarBoardPartyOrganizationListViewObject_o *__fastcall WarBoardPartyListViewObject__FindMemberobj(
        WarBoardPartyListViewObject_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WarBoardPartyListViewObject_o *v5; // x20
  struct WarBoardPartyOrganizationListViewObject_array *memberObjectList; // x21
  __int64 v7; // x8
  UnityEngine_Object_o *v8; // x20
  unsigned __int64 v9; // x22
  __int64 v10; // x1
  _DWORD *monitor; // x8
  __int64 v13; // x0

  v5 = this;
  if ( (byte_42E75EE & 1) == 0 )
  {
    this = (WarBoardPartyListViewObject_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    byte_42E75EE = 1;
  }
  memberObjectList = v5->fields.memberObjectList;
  if ( !memberObjectList )
    return 0LL;
  v7 = *(_QWORD *)&memberObjectList->max_length;
  v8 = 0LL;
  if ( v7 && (int)v7 >= 1 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)v7 )
      {
        v13 = sub_B5D6C8(this);
        sub_B5D668(v13, 0LL);
      }
      v8 = (UnityEngine_Object_o *)memberObjectList->m_Items[v9];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (WarBoardPartyListViewObject_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v8 || (monitor = v8[1].monitor) == 0LL || !item )
          sub_B5D69C(this, v10);
        if ( monitor[90] == item->fields.warBoardPieceIndex )
          break;
      }
      LODWORD(v7) = memberObjectList->max_length;
      if ( (__int64)++v9 >= (int)v7 )
        return 0LL;
    }
  }
  return (WarBoardPartyOrganizationListViewObject_o *)v8;
}


WarBoardPartyListViewItem_o *__fastcall WarBoardPartyListViewObject__GetItem(
        WarBoardPartyListViewObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct ListViewItem_o *linkItem; // x8
  __int64 v6; // x11

  if ( (byte_42E75EF & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardPartyListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E75EF = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  v6 = *(&WarBoardPartyListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v6 )
    return 0LL;
  if ( (WarBoardPartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[v6 - 1] == WarBoardPartyListViewItem_TypeInfo )
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

  if ( (byte_42E75E8 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardPartyListViewItem_TypeInfo, initMode, (_DWORD)onTapMember, method);
    byte_42E75E8 = 1;
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
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, dispCoroutine, 0LL);
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
  __int64 v3; // x3
  WarBoardPartyListViewObject_o *v5; // x20
  struct WarBoardPartyOrganizationListViewObject_array *memberObjectList; // x20
  __int64 v7; // x8
  unsigned __int64 v8; // x21
  bool v9; // w22
  WarBoardPartyOrganizationListViewObject_o *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x0

  v5 = this;
  if ( (byte_42E75F0 & 1) == 0 )
  {
    this = (WarBoardPartyListViewObject_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, isEnableInput, (_DWORD)method, v3);
    byte_42E75F0 = 1;
  }
  memberObjectList = v5->fields.memberObjectList;
  if ( memberObjectList )
  {
    v7 = *(_QWORD *)&memberObjectList->max_length;
    if ( (int)v7 >= 1 )
    {
      v8 = 0LL;
      v9 = isEnableInput;
      do
      {
        if ( v8 >= (unsigned int)v7 )
        {
          v12 = sub_B5D6C8(this);
          sub_B5D668(v12, 0LL);
        }
        v10 = memberObjectList->m_Items[v8];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (WarBoardPartyListViewObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v10 )
            sub_B5D69C(this, v11);
          v10->fields.isEnableTouch = v9;
        }
        LODWORD(v7) = memberObjectList->max_length;
        ++v8;
      }
      while ( (__int64)v8 < (int)v7 );
    }
  }
}


void __fastcall WarBoardPartyListViewObject__SetItem(
        WarBoardPartyListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_34021840((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall WarBoardPartyListViewObject__SetItem_23003996(
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
  __int64 v3; // x3
  WarBoardPartyListViewObject_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  PartyOrganizationListViewItem_o **linkItem; // x22
  __int64 v10; // x10
  UnityEngine_Object_o *Memberobj; // x21
  struct WarBoardPartyOrganizationListViewObject_array *memberObjectList; // x8
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  BattleServantConfConponent_o *p_focusObj; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct ListViewManager_o *v26; // x1
  const MethodInfo *v27; // x2
  __int64 v28; // x0

  v5 = this;
  if ( (byte_42E75EA & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)onTapMember, (_DWORD)method, v3);
    this = (WarBoardPartyListViewObject_o *)sub_B5D5C4(&WarBoardPartyListViewItem_TypeInfo, v6, v7, v8);
    byte_42E75EA = 1;
  }
  linkItem = (PartyOrganizationListViewItem_o **)v5->fields.linkItem;
  if ( !linkItem )
    goto LABEL_21;
  v10 = *(&WarBoardPartyListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( BYTE4((*linkItem)->fields.friendPointCampaignEntityList) < (unsigned int)v10
    || *((WarBoardPartyListViewItem_c **)(*linkItem)->fields.commandCodeIdList + v10 - 1) != WarBoardPartyListViewItem_TypeInfo )
  {
    goto LABEL_21;
  }
  Memberobj = (UnityEngine_Object_o *)WarBoardPartyListViewObject__FindMemberobj(v5, linkItem[16], method);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (WarBoardPartyListViewObject_o *)UnityEngine_Object__op_Equality(Memberobj, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    memberObjectList = v5->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_21;
    if ( !memberObjectList->max_length )
    {
      v28 = sub_B5D6C8(this);
      sub_B5D668(v28, 0LL);
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
    v5->fields.focusObj = (struct WarBoardPartyOrganizationListViewObject_o *)Memberobj;
    p_focusObj = (BattleServantConfConponent_o *)&v5->fields.focusObj;
    sub_B5D560(p_focusObj, (System_Int32_array **)Memberobj, v13, v14, v15, v16, v17, v18);
    this = (WarBoardPartyListViewObject_o *)p_focusObj->klass;
    if ( p_focusObj->klass )
    {
      v26 = (struct ListViewManager_o *)linkItem[16];
      this->fields.manager = v26;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.manager,
        (System_Int32_array **)v26,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      this = (WarBoardPartyListViewObject_o *)p_focusObj->klass;
      if ( p_focusObj->klass )
      {
        WarBoardPartyOrganizationListViewObject__Init(
          (WarBoardPartyOrganizationListViewObject_o *)this,
          onTapMember,
          v27);
        return;
      }
    }
LABEL_21:
    sub_B5D69C(this, onTapMember);
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
  int v2; // w2
  __int64 v3; // x3
  WarBoardPartyListViewObject__DsiplayAnim_d__17_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t _1__state; // w8
  struct WarBoardPartyListViewObject_o *_4__this; // x20
  float timer_5__2; // s8
  UnityEngine_Object_o *Component_WebViewObject; // x20
  bool result; // w0
  float deltaTime; // s0
  float duration; // s1
  float v15; // s0
  float v16; // s8
  float x; // s11
  float y; // s12
  float z; // s13
  float v20; // s0
  float v21; // s1
  float v22; // s2
  float v23; // s8
  float v24; // s9
  float v25; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v27; // x0
  Il2CppObject **p__2__current; // x19
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42E5FAA & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, (_DWORD)method, v2, v3);
    this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E5FAA = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    timer_5__2 = v4->fields._timer_5__2;
    v4->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v4->fields._timer_5__2 = 0.0;
    v4->fields.__1__state = -1;
    timer_5__2 = 0.0;
  }
  if ( timer_5__2 >= v4->fields.duration )
  {
    if ( _4__this )
    {
      this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)_4__this->fields.backSprite;
      if ( this )
      {
        Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            (UnityEngine_Component_o *)this,
                                                            (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
          ActionExtensions__Call(v4->fields.onFinished, 0LL);
          return 0;
        }
      }
    }
LABEL_22:
    sub_B5D69C(this, method);
  }
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  duration = v4->fields.duration;
  v15 = timer_5__2 + deltaTime;
  v4->fields._timer_5__2 = v15;
  v16 = UnityEngine_Mathf__Clamp01(v15 / duration, 0LL);
  v29 = Easing__Func(v4->fields.fromPos, v4->fields.toPos, v16, v4->fields.easingType, 0LL);
  x = v29.fields.x;
  y = v29.fields.y;
  z = v29.fields.z;
  *(UnityEngine_Vector3_o *)&v20 = Easing__Func(
                                     v4->fields.fromScale,
                                     v4->fields.toScale,
                                     v16,
                                     v4->fields.easingType,
                                     0LL);
  if ( !_4__this )
    goto LABEL_22;
  this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)_4__this->fields.backSprite;
  if ( !this )
    goto LABEL_22;
  v23 = v20;
  v24 = v21;
  v25 = v22;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v30.fields.x = x;
  v30.fields.y = y;
  v30.fields.z = z;
  GameObjectExtensions__SetLocalPosition(gameObject, v30, 0LL);
  this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)_4__this->fields.backSprite;
  if ( !this )
    goto LABEL_22;
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v31.fields.x = v23;
  v31.fields.y = v24;
  v31.fields.z = v25;
  GameObjectExtensions__SetLocalScale(v27, v31, 0LL);
  v4->fields.__2__current = 0LL;
  p__2__current = &v4->fields.__2__current;
  sub_B5D560(p__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_WarBoardPartyListViewObject__DsiplayAnim_d__17_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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