void __fastcall WarBoardPartyListViewObject___ctor(WarBoardPartyListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_418656B & 1) == 0 )
  {
    sub_B2C35C(&ListViewObject_TypeInfo, method);
    byte_418656B = 1;
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
  char *transform; // x0
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_Component_o *grid; // x8
  UnityEngine_Transform_o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  WarBoardPartyOrganizationListViewObject_o *v19; // x20
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4186567 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_WarBoardPartyOrganizationListViewObject___, item);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_4186567 = 1;
  }
  srcMemberObj = this->fields.srcMemberObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  transform = (char *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                        (UnityEngine_UI_Dropdown_DropdownItem_o *)srcMemberObj,
                        (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_11;
  v10 = (UnityEngine_GameObject_o *)transform;
  transform = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  grid = (UnityEngine_Component_o *)this->fields.grid;
  if ( !grid )
    goto LABEL_11;
  v12 = (UnityEngine_Transform_o *)transform;
  transform = (char *)UnityEngine_Component__get_transform(grid, 0LL);
  if ( !v12
    || (UnityEngine_Transform__SetParent_35435768(v12, (UnityEngine_Transform_o *)transform, 0, 0LL),
        zero = UnityEngine_Vector3__get_zero(0LL),
        GameObjectExtensions__SetLocalPosition(v10, zero, 0LL),
        one = UnityEngine_Vector3__get_one(0LL),
        GameObjectExtensions__SetLocalScale(v10, one, 0LL),
        (transform = (char *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               v10,
                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_WarBoardPartyOrganizationListViewObject___)) == 0LL) )
  {
LABEL_11:
    sub_B2C434(transform, v9);
  }
  v19 = (WarBoardPartyOrganizationListViewObject_o *)transform;
  *((_QWORD *)transform + 4) = item;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(transform + 32),
    (System_Int32_array **)item,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  return v19;
}


void __fastcall WarBoardPartyListViewObject__CreateMemberObjects(
        WarBoardPartyListViewObject_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleServantConfConponent_o *p_memberObjectList; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x22
  const MethodInfo *v10; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *MemberObj; // x0
  __int64 v12; // x1
  System_Int32_array **v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4186563 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__Add__, partyItem);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__TypeInfo, v7);
    byte_4186563 = 1;
  }
  if ( partyItem )
  {
    p_memberObjectList = (BattleServantConfConponent_o *)&this->fields.memberObjectList;
    if ( !this->fields.memberObjectList )
    {
      v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v9,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject___ctor__);
      MemberObj = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardPartyListViewObject__CreateMemberObj(
                                                                           this,
                                                                           partyItem->fields.focusMemberItem,
                                                                           v10);
      if ( !v9 )
        sub_B2C434(MemberObj, v12);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v9,
        MemberObj,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__Add__);
      v13 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                     (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                     (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__ToArray__);
      p_memberObjectList->klass = (BattleServantConfConponent_c *)v13;
      sub_B2C2F8(p_memberObjectList, v13, v14, v15, v16, v17, v18, v19);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyListViewObject__Display(WarBoardPartyListViewObject_o *this, const MethodInfo *method)
{
  WarBoardPartyListViewObject_o *v2; // x19
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
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_GameObject_o *v22; // x21
  __int64 v23; // x21
  __int64 v24; // x21
  __int64 v25; // x8
  WarBoardData_o *v26; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v30; // x21
  __int64 v31; // x21
  __int64 v32; // x8
  __int64 v33; // x8
  float v34; // s8
  float v35; // s9
  float v36; // s10
  __int64 v37; // x21
  __int64 v38; // x21
  __int64 v39; // x8
  float v40; // s0
  float v41; // s1
  float v42; // s2
  float v43; // s8
  float v44; // s9
  float v45; // s10
  float v46; // s13
  float v47; // s14
  float v48; // s15
  float v49; // s8
  float duration; // s9
  unsigned int dispEasingType; // w21
  System_Action_o *v52; // x0
  float v53; // w22
  int32_t v54; // w3
  System_Action_o *v55; // x4
  const MethodInfo *v56; // x5
  System_Int32_array **v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  UnityEngine_Vector3_o fromScale; // [xsp+0h] [xbp-B0h]
  float toPos; // [xsp+34h] [xbp-7Ch]
  float v66; // [xsp+38h] [xbp-78h]
  float v67; // [xsp+3Ch] [xbp-74h]
  float v68; // [xsp+88h] [xbp-28h]
  float v69; // [xsp+8Ch] [xbp-24h]
  UnityEngine_Vector3_o v70; // 0:x1.12
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s3.4,4:s4.4,8:s5.4

  v2 = this;
  if ( (byte_4186565 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v4);
    sub_B2C35C(&WarBoardPartyListViewItem_TypeInfo, v5);
    this = (WarBoardPartyListViewObject_o *)sub_B2C35C(&Method_WarBoardPartyListViewObject_OnFinishedDisplayAnim__, v6);
    byte_4186565 = 1;
  }
  linkItem = v2->fields.linkItem;
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
  dispCoroutine = v2->fields.dispCoroutine;
  if ( dispCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)v2, dispCoroutine, 0LL);
    v2->fields.dispCoroutine = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.dispCoroutine, 0LL, v11, v12, v13, v14, v15, v16);
  }
  backSprite = (UnityEngine_Object_o *)v2->fields.backSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v18 = UnityEngine_Object__op_Equality(backSprite, 0LL, 0LL);
  v20 = v2->klass->vtable._9_SetInput.method;
  methodPtr = v2->klass->vtable._10_Invalidation.methodPtr;
  if ( v18 )
  {
    ((void (__fastcall *)(WarBoardPartyListViewObject_o *, __int64, Il2CppMethodPointer))v20)(v2, 1LL, methodPtr);
    return;
  }
  ((void (__fastcall *)(WarBoardPartyListViewObject_o *, _QWORD, Il2CppMethodPointer))v20)(v2, 0LL, methodPtr);
  this = (WarBoardPartyListViewObject_o *)v2->fields.backSprite;
  if ( !this )
    goto LABEL_45;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, zero, 0LL);
  this = (WarBoardPartyListViewObject_o *)v2->fields.backSprite;
  if ( !this )
    goto LABEL_45;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  GameObjectExtensions__SetLocalScale(v22, one, 0LL);
  v23 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v23 + 306) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                                       + 3));
  v24 = **(_QWORD **)(v23 + 192);
  if ( (*(_BYTE *)(v24 + 306) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_AC505C(v24);
  v25 = **(_QWORD **)(v24 + 184);
  if ( !v25 )
    goto LABEL_45;
  if ( !v9 )
    goto LABEL_45;
  v26 = *(WarBoardData_o **)(v25 + 432);
  if ( !v26 )
    goto LABEL_45;
  this = (WarBoardPartyListViewObject_o *)WarBoardData__GetPiece(
                                            *(WarBoardData_o **)(v25 + 432),
                                            0,
                                            0,
                                            *(_DWORD *)(v9 + 344),
                                            1,
                                            0LL);
  if ( !this )
    goto LABEL_45;
  this = (WarBoardPartyListViewObject_o *)WarBoardData__GetSquare(v26, (int32_t)this->fields.mDragDrop, 0LL);
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
  v30 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v30 + 306) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                                       + 3));
  v31 = **(_QWORD **)(v30 + 192);
  if ( (*(_BYTE *)(v31 + 306) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_AC505C(v31);
  v32 = **(_QWORD **)(v31 + 184);
  if ( !v32 )
    goto LABEL_45;
  v33 = *(_QWORD *)(v32 + 40);
  if ( !v33 )
    goto LABEL_45;
  this = *(WarBoardPartyListViewObject_o **)(v33 + 24);
  if ( !this )
    goto LABEL_45;
  v74.fields.x = x;
  v74.fields.y = y;
  v74.fields.z = z;
  v75 = UnityEngine_Camera__WorldToScreenPoint_40630716((UnityEngine_Camera_o *)this, v74, 0LL);
  v34 = v75.fields.x;
  v35 = v75.fields.y;
  v36 = v75.fields.z;
  v37 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v37 + 306) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__
                                                       + 3));
  v38 = **(_QWORD **)(v37 + 192);
  if ( (*(_BYTE *)(v38 + 306) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_AC505C(v38);
  v39 = **(_QWORD **)(v38 + 184);
  if ( !v39 )
    goto LABEL_45;
  this = *(WarBoardPartyListViewObject_o **)(v39 + 48);
  if ( !this )
    goto LABEL_45;
  v76.fields.x = v34;
  v76.fields.y = v35;
  v76.fields.z = v36;
  *(UnityEngine_Vector3_o *)&v40 = UnityEngine_Camera__ScreenToWorldPoint_40630740(
                                     (UnityEngine_Camera_o *)this,
                                     v76,
                                     0LL);
  this = (WarBoardPartyListViewObject_o *)v2->fields.backSprite;
  if ( !this
    || (v43 = v40,
        v44 = v41,
        v45 = v42,
        (this = (WarBoardPartyListViewObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL)) == 0LL) )
  {
LABEL_45:
    sub_B2C434(this, method);
  }
  v77.fields.x = v43;
  v77.fields.y = v44;
  v77.fields.z = v45;
  v78 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)this, v77, 0LL);
  v68 = v78.fields.y;
  v69 = v78.fields.x;
  v67 = v78.fields.z;
  v79 = UnityEngine_Vector3__get_zero(0LL);
  toPos = v79.fields.y;
  v66 = v79.fields.x;
  v46 = v79.fields.z;
  v80 = UnityEngine_Vector3__get_zero(0LL);
  v47 = v80.fields.x;
  v48 = v80.fields.y;
  v49 = v80.fields.z;
  LODWORD(duration) = (unsigned int)UnityEngine_Vector3__get_one(0LL);
  UnityEngine_Mathf__Max(0.0, v2->fields.dispDuration, 0LL);
  dispEasingType = v2->fields.dispEasingType;
  v52 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  v53 = *(float *)&v52;
  System_Action___ctor(v52, (Il2CppObject *)v2, Method_WarBoardPartyListViewObject_OnFinishedDisplayAnim__, 0LL);
  *(_QWORD *)&fromScale.fields.y = __PAIR64__(LODWORD(v49), LODWORD(v48));
  fromScale.fields.x = v47;
  v81.fields.y = v68;
  v81.fields.x = v69;
  v82.fields.x = v66;
  v81.fields.z = v67;
  v82.fields.y = toPos;
  v82.fields.z = v46;
  *(_QWORD *)&v70.fields.x = dispEasingType;
  v70.fields.z = v53;
  v57 = (System_Int32_array **)WarBoardPartyListViewObject__DsiplayAnim(
                                 v2,
                                 v81,
                                 v82,
                                 fromScale,
                                 v70,
                                 duration,
                                 v54,
                                 v55,
                                 v56);
  v2->fields.dispCoroutine = (struct System_Collections_IEnumerator_o *)v57;
  sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.dispCoroutine, v57, v58, v59, v60, v61, v62, v63);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)v2, v2->fields.dispCoroutine, 0LL);
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
  if ( (byte_4186566 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardPartyListViewObject__DsiplayAnim_d__17_TypeInfo, *(_QWORD *)&toScale.fields.x);
    byte_4186566 = 1;
  }
  v13 = sub_B2C42C(WarBoardPartyListViewObject__DsiplayAnim_d__17_TypeInfo);
  WarBoardPartyListViewObject__DsiplayAnim_d__17___ctor((WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)v13, 0, 0LL);
  if ( !v13 )
    sub_B2C434(v14, v15);
  *(_QWORD *)(v13 + 88) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 88), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
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
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 96), v9, v22, v23, v24, v25, v26, v27);
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
  if ( (byte_4186568 & 1) == 0 )
  {
    this = (WarBoardPartyListViewObject_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, item);
    byte_4186568 = 1;
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
        v12 = sub_B2C460(this);
        sub_B2C400(v12, 0LL);
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
          sub_B2C434(this, v9);
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

  if ( (byte_4186569 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardPartyListViewItem_TypeInfo, method);
    byte_4186569 = 1;
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

  if ( (byte_4186562 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardPartyListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4186562 = 1;
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
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, dispCoroutine, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x0

  v4 = this;
  if ( (byte_418656A & 1) == 0 )
  {
    this = (WarBoardPartyListViewObject_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, isEnableInput);
    byte_418656A = 1;
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
          v11 = sub_B2C460(this);
          sub_B2C400(v11, 0LL);
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
            sub_B2C434(this, v10);
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
  ListViewObject__SetItem_33907092((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall WarBoardPartyListViewObject__SetItem_22412820(
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
  __int64 v5; // x1
  PartyOrganizationListViewItem_o **linkItem; // x22
  __int64 v7; // x10
  UnityEngine_Object_o *Memberobj; // x21
  struct WarBoardPartyOrganizationListViewObject_array *memberObjectList; // x8
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  BattleServantConfConponent_o *p_focusObj; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct ListViewManager_o *v23; // x1
  const MethodInfo *v24; // x2
  __int64 v25; // x0

  v4 = this;
  if ( (byte_4186564 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, onTapMember);
    this = (WarBoardPartyListViewObject_o *)sub_B2C35C(&WarBoardPartyListViewItem_TypeInfo, v5);
    byte_4186564 = 1;
  }
  linkItem = (PartyOrganizationListViewItem_o **)v4->fields.linkItem;
  if ( !linkItem )
    goto LABEL_21;
  v7 = *(&WarBoardPartyListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( (*linkItem)->fields._IsDispSvtPoint_k__BackingField < (unsigned int)v7
    || *(WarBoardPartyListViewItem_c **)(*(_QWORD *)&(*linkItem)->fields.isQuestRestriction + 8 * v7 - 8) != WarBoardPartyListViewItem_TypeInfo )
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
      v25 = sub_B2C460(this);
      sub_B2C400(v25, 0LL);
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
    sub_B2C2F8(p_focusObj, (System_Int32_array **)Memberobj, v10, v11, v12, v13, v14, v15);
    this = (WarBoardPartyListViewObject_o *)p_focusObj->klass;
    if ( p_focusObj->klass )
    {
      v23 = (struct ListViewManager_o *)linkItem[16];
      this->fields.manager = v23;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.manager,
        (System_Int32_array **)v23,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      this = (WarBoardPartyListViewObject_o *)p_focusObj->klass;
      if ( p_focusObj->klass )
      {
        WarBoardPartyOrganizationListViewObject__Init(
          (WarBoardPartyOrganizationListViewObject_o *)this,
          onTapMember,
          v24);
        return;
      }
    }
LABEL_21:
    sub_B2C434(this, onTapMember);
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
  __int64 v3; // x1
  int32_t _1__state; // w8
  struct WarBoardPartyListViewObject_o *_4__this; // x20
  float timer_5__2; // s8
  UnityEngine_Object_o *Component_WebViewObject; // x20
  bool result; // w0
  float deltaTime; // s0
  float duration; // s1
  float v11; // s0
  float v12; // s8
  float x; // s11
  float y; // s12
  float z; // s13
  float v16; // s0
  float v17; // s1
  float v18; // s2
  float v19; // s8
  float v20; // s9
  float v21; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v23; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_41866FB & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_41866FB = 1;
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
                                                            (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
    sub_B2C434(this, method);
  }
  deltaTime = UnityEngine_Time__get_deltaTime(0LL);
  duration = v2->fields.duration;
  v11 = timer_5__2 + deltaTime;
  v2->fields._timer_5__2 = v11;
  v12 = UnityEngine_Mathf__Clamp01(v11 / duration, 0LL);
  v31 = Easing__Func(v2->fields.fromPos, v2->fields.toPos, v12, v2->fields.easingType, 0LL);
  x = v31.fields.x;
  y = v31.fields.y;
  z = v31.fields.z;
  *(UnityEngine_Vector3_o *)&v16 = Easing__Func(
                                     v2->fields.fromScale,
                                     v2->fields.toScale,
                                     v12,
                                     v2->fields.easingType,
                                     0LL);
  if ( !_4__this )
    goto LABEL_22;
  this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)_4__this->fields.backSprite;
  if ( !this )
    goto LABEL_22;
  v19 = v16;
  v20 = v17;
  v21 = v18;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v32.fields.x = x;
  v32.fields.y = y;
  v32.fields.z = z;
  GameObjectExtensions__SetLocalPosition(gameObject, v32, 0LL);
  this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)_4__this->fields.backSprite;
  if ( !this )
    goto LABEL_22;
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v33.fields.x = v19;
  v33.fields.y = v20;
  v33.fields.z = v21;
  GameObjectExtensions__SetLocalScale(v23, v33, 0LL);
  v2->fields.__2__current = 0LL;
  p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
  sub_B2C2F8(p__2__current, 0LL, v25, v26, v27, v28, v29, v30);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_WarBoardPartyListViewObject__DsiplayAnim_d__17_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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