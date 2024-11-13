void __fastcall WarBoardPartyListViewObject___ctor(WarBoardPartyListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B14034 & 1) == 0 )
  {
    sub_1BCA7E0(&ListViewObject_TypeInfo, method, v2);
    byte_4B14034 = 1;
  }
  *(_QWORD *)&this->fields.dispDuration = 0xF3E99999ALL;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo, method);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


WarBoardPartyOrganizationListViewObject_o *__fastcall WarBoardPartyListViewObject__CreateMemberObj(
        WarBoardPartyListViewObject_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *srcMemberObj; // x20
  char *transform; // x0
  __int64 v11; // x1
  UnityEngine_GameObject_o *v12; // x20
  UnityEngine_Component_o *grid; // x8
  UnityEngine_Transform_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  WarBoardPartyOrganizationListViewObject_o *v25; // x20

  if ( (byte_4B14030 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_WarBoardPartyOrganizationListViewObject___, item, method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B14030 = 1;
  }
  srcMemberObj = (Il2CppObject *)this->fields.srcMemberObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  transform = (char *)UnityEngine_Object__Instantiate_object_(
                        srcMemberObj,
                        (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_14;
  v12 = (UnityEngine_GameObject_o *)transform;
  transform = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  grid = (UnityEngine_Component_o *)this->fields.grid;
  if ( !grid )
    goto LABEL_14;
  v14 = (UnityEngine_Transform_o *)transform;
  transform = (char *)UnityEngine_Component__get_transform(grid, 0LL);
  if ( !v14 )
    goto LABEL_14;
  UnityEngine_Transform__SetParent_70175492(v14, (UnityEngine_Transform_o *)transform, 0, 0LL);
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v15, v16);
    byte_4B109C1 = 1;
  }
  GameObjectExtensions__SetLocalPosition(v12, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4B109C6 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v17, v18);
    byte_4B109C6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  transform = (char *)UnityEngine_GameObject__GetComponent_object_(
                        v12,
                        (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardPartyOrganizationListViewObject___);
  if ( !transform )
LABEL_14:
    sub_1BCAA3C(transform, v11);
  v25 = (WarBoardPartyOrganizationListViewObject_o *)transform;
  *((_QWORD *)transform + 5) = item;
  sub_1BCA784((PartyOrganizationUtility_o *)(transform + 40), (int64_t)item, v19, v20, v21, v22, v23, v24);
  return v25;
}


void __fastcall WarBoardPartyListViewObject__CreateMemberObjects(
        WarBoardPartyListViewObject_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *v12; // x20
  const MethodInfo *v13; // x2
  Il2CppObject *MemberObj; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  int64_t v25; // x1
  Il2CppClass **v26; // x0
  System_Object_array *v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  if ( (byte_4B1402C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__Add__,
      partyItem,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__ToArray__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__TypeInfo, v10, v11);
    byte_4B1402C = 1;
  }
  if ( partyItem && !this->fields.memberObjectList )
  {
    v12 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__TypeInfo,
                                                         partyItem,
                                                         method,
                                                         v3);
    System_Collections_Generic_List_object____ctor(
      v12,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject___ctor__);
    MemberObj = (Il2CppObject *)WarBoardPartyListViewObject__CreateMemberObj(
                                  this,
                                  partyItem->fields.focusMemberItem,
                                  v13);
    if ( !v12
      || (items = v12->fields._items,
          v23 = Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__Add__,
          ++v12->fields._version,
          !items) )
    {
      sub_1BCAA3C(MemberObj, v15);
    }
    size = v12->fields._size;
    v25 = (int64_t)MemberObj;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v12,
        MemberObj,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &items->obj.klass + size;
      v12->fields._size = size + 1;
      v26[4] = (Il2CppClass *)v25;
      sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 4), v25, v16, v17, v18, v19, v20, v21);
    }
    v27 = System_Collections_Generic_List_object___ToArray(
            v12,
            (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__ToArray__);
    this->fields.memberObjectList = (struct WarBoardPartyOrganizationListViewObject_array *)v27;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.memberObjectList,
      (int64_t)v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyListViewObject__Display(WarBoardPartyListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardPartyListViewObject_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  __int64 v14; // x25
  System_Collections_IEnumerator_o *dispCoroutine; // x1
  PartyOrganizationUtility_o *p_dispCoroutine; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  UnityEngine_Object_o *backSprite; // x21
  bool v24; // w0
  Il2CppMethodPointer methodPtr; // x2
  const MethodInfo *v26; // x3
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_GameObject_o *gameObject; // x22
  __int64 v30; // x1
  __int64 v31; // x2
  UnityEngine_GameObject_o *v32; // x22
  long double v33; // q0
  __int64 v34; // x0
  void *image; // x8
  WarBoardData_o *v36; // x22
  long double v37; // q0
  float v38; // s8
  float v39; // s1
  float v40; // s9
  float v41; // s2
  float v42; // s10
  __int64 v43; // x0
  _QWORD *v44; // x8
  __int64 v45; // x8
  long double v46; // q0
  float v47; // s8
  float v48; // s1
  float v49; // s9
  float v50; // s2
  float v51; // s10
  __int64 v52; // x0
  void *v53; // x8
  float v54; // s0
  float v55; // s1
  float v56; // s2
  float v57; // s8
  float v58; // s9
  float v59; // s10
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  float x; // s8
  float y; // s9
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v67; // s12
  float v68; // s13
  float v69; // s11
  __int64 duration; // x23
  unsigned int dispEasingType; // w21
  System_Action_o *v72; // x0
  float v73; // w22
  int32_t v74; // w3
  System_Action_o *v75; // x4
  const MethodInfo *v76; // x5
  System_Collections_IEnumerator_o *v77; // x0
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  UnityEngine_Vector3_o fromScale; // [xsp+0h] [xbp-C0h]
  UnityEngine_Vector3_o v85; // 0:x1.12
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v91; // 0:s3.4,4:s4.4,8:s5.4

  v3 = this;
  if ( (byte_4B1402E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v6, v7);
    sub_1BCA7E0(&WarBoardPartyListViewItem_TypeInfo, v8, v9);
    this = (WarBoardPartyListViewObject_o *)sub_1BCA7E0(
                                              &Method_WarBoardPartyListViewObject_OnFinishedDisplayAnim__,
                                              v10,
                                              v11);
    byte_4B1402E = 1;
  }
  linkItem = v3->fields.linkItem;
  if ( !linkItem )
    goto LABEL_50;
  methodPtr_low = LOBYTE(WarBoardPartyListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (WarBoardPartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != WarBoardPartyListViewItem_TypeInfo )
  {
    goto LABEL_50;
  }
  v14 = *(_QWORD *)&linkItem[1].fields.selectNum;
  p_dispCoroutine = (PartyOrganizationUtility_o *)&v3->fields.dispCoroutine;
  dispCoroutine = v3->fields.dispCoroutine;
  if ( dispCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)v3, dispCoroutine, 0LL);
    v3->fields.dispCoroutine = 0LL;
    sub_1BCA784(p_dispCoroutine, 0LL, v17, v18, v19, v20, v21, v22);
  }
  backSprite = (UnityEngine_Object_o *)v3->fields.backSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, dispCoroutine);
  v24 = UnityEngine_Object__op_Equality(backSprite, 0LL, 0LL);
  v26 = v3->klass->vtable._9_SetInput.method;
  methodPtr = v3->klass->vtable._10_Invalidation.methodPtr;
  if ( v24 )
  {
    ((void (__fastcall *)(WarBoardPartyListViewObject_o *, __int64, Il2CppMethodPointer))v26)(v3, 1LL, methodPtr);
    return;
  }
  ((void (__fastcall *)(WarBoardPartyListViewObject_o *, _QWORD, Il2CppMethodPointer))v26)(v3, 0LL, methodPtr);
  this = (WarBoardPartyListViewObject_o *)v3->fields.backSprite;
  if ( !this )
    goto LABEL_50;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v27, v28);
    byte_4B109C1 = 1;
  }
  GameObjectExtensions__SetLocalPosition(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  this = (WarBoardPartyListViewObject_o *)v3->fields.backSprite;
  if ( !this )
    goto LABEL_50;
  v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !byte_4B109C6 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v30, v31);
    byte_4B109C6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v32, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  v34 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
    v34 = sub_1C1C6BC(v33);
  this = *(WarBoardPartyListViewObject_o **)(*(_QWORD *)(v34 + 192) + 16LL);
  if ( (BYTE5(this[1].fields.srcMemberObj) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_1C1C6BC(v33);
  image = this[1].klass->_1.image;
  if ( !image )
    goto LABEL_50;
  if ( !v14 )
    goto LABEL_50;
  v36 = (WarBoardData_o *)*((_QWORD *)image + 55);
  if ( !v36 )
    goto LABEL_50;
  this = (WarBoardPartyListViewObject_o *)WarBoardData__GetPiece(
                                            *((WarBoardData_o **)image + 55),
                                            0,
                                            0,
                                            *(_DWORD *)(v14 + 360),
                                            1,
                                            0LL);
  if ( !this )
    goto LABEL_50;
  this = (WarBoardPartyListViewObject_o *)WarBoardData__GetSquare(v36, (int32_t)this->fields.mCollider, 0LL);
  if ( !this )
    goto LABEL_50;
  this = (WarBoardPartyListViewObject_o *)this->fields.dragObjectPrefab;
  if ( !this )
    goto LABEL_50;
  this = (WarBoardPartyListViewObject_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_50;
  this = (WarBoardPartyListViewObject_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_50;
  *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
  v38 = *(float *)&v37;
  v40 = v39;
  v42 = v41;
  v43 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v43 + 309) & 1) == 0 )
    v43 = sub_1C1C6BC(v37);
  this = *(WarBoardPartyListViewObject_o **)(*(_QWORD *)(v43 + 192) + 16LL);
  if ( (BYTE5(this[1].fields.srcMemberObj) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_1C1C6BC(v37);
  v44 = this[1].klass->_1.image;
  if ( !v44 )
    goto LABEL_50;
  v45 = v44[6];
  if ( !v45 )
    goto LABEL_50;
  this = *(WarBoardPartyListViewObject_o **)(v45 + 32);
  if ( !this )
    goto LABEL_50;
  v86.fields.x = v38;
  v86.fields.y = v40;
  v86.fields.z = v42;
  *(UnityEngine_Vector3_o *)&v46 = UnityEngine_Camera__WorldToScreenPoint_69960448(
                                     (UnityEngine_Camera_o *)this,
                                     v86,
                                     0LL);
  v47 = *(float *)&v46;
  v49 = v48;
  v51 = v50;
  v52 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v52 + 309) & 1) == 0 )
    v52 = sub_1C1C6BC(v46);
  this = *(WarBoardPartyListViewObject_o **)(*(_QWORD *)(v52 + 192) + 16LL);
  if ( (BYTE5(this[1].fields.srcMemberObj) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_1C1C6BC(v46);
  v53 = this[1].klass->_1.image;
  if ( !v53 )
    goto LABEL_50;
  this = (WarBoardPartyListViewObject_o *)*((_QWORD *)v53 + 7);
  if ( !this )
    goto LABEL_50;
  v87.fields.x = v47;
  v87.fields.y = v49;
  v87.fields.z = v51;
  *(UnityEngine_Vector3_o *)&v54 = UnityEngine_Camera__ScreenToWorldPoint_69960472(
                                     (UnityEngine_Camera_o *)this,
                                     v87,
                                     0LL);
  this = (WarBoardPartyListViewObject_o *)v3->fields.backSprite;
  if ( !this
    || (v57 = v54,
        v58 = v55,
        v59 = v56,
        (this = (WarBoardPartyListViewObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL)) == 0LL) )
  {
LABEL_50:
    sub_1BCAA3C(this, method);
  }
  v88.fields.x = v57;
  v88.fields.y = v58;
  v88.fields.z = v59;
  v89 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)this, v88, 0LL);
  x = v89.fields.x;
  y = v89.fields.y;
  z = v89.fields.z;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v60, v61);
    byte_4B109C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v68 = static_fields->zeroVector.fields.x;
  v67 = static_fields->zeroVector.fields.y;
  v69 = static_fields->zeroVector.fields.z;
  if ( !byte_4B109C6 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v60, v61);
    byte_4B109C6 = 1;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  }
  duration = *(_QWORD *)&static_fields->oneVector.fields.x;
  dispEasingType = v3->fields.dispEasingType;
  v72 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v60, v61, v62);
  v73 = *(float *)&v72;
  System_Action___ctor(v72, (Il2CppObject *)v3, Method_WarBoardPartyListViewObject_OnFinishedDisplayAnim__, 0LL);
  v90.fields.x = x;
  v90.fields.y = y;
  v90.fields.z = z;
  v91.fields.x = v68;
  v91.fields.y = v67;
  v91.fields.z = v69;
  *(_QWORD *)&v85.fields.x = dispEasingType;
  v85.fields.z = v73;
  *(_QWORD *)&fromScale.fields.y = __PAIR64__(LODWORD(v69), LODWORD(v67));
  fromScale.fields.x = v68;
  v77 = WarBoardPartyListViewObject__DsiplayAnim(v3, v90, v91, fromScale, v85, *(float *)&duration, v74, v75, v76);
  v3->fields.dispCoroutine = v77;
  sub_1BCA784(p_dispCoroutine, (int64_t)v77, v78, v79, v80, v81, v82, v83);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)v3, v3->fields.dispCoroutine, 0LL);
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
  int64_t v9; // x19
  float v10; // w20
  float v11; // s11
  float v12; // s12
  float v13; // s13
  __int64 v15; // x22
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  float y; // [xsp+10h] [xbp-80h]
  float z; // [xsp+18h] [xbp-78h]
  float x; // [xsp+1Ch] [xbp-74h]
  int v32; // [xsp+A8h] [xbp+18h]
  int v33; // [xsp+B0h] [xbp+20h]

  z = toPos.fields.z;
  x = fromPos.fields.x;
  y = toPos.fields.y;
  v9 = *(_QWORD *)&toScale.fields.z;
  v10 = toScale.fields.x;
  v11 = toPos.fields.x;
  v12 = fromPos.fields.z;
  v13 = fromPos.fields.y;
  if ( (byte_4B1402F & 1) == 0 )
  {
    sub_1BCA7E0(
      &WarBoardPartyListViewObject__DsiplayAnim_d__17_TypeInfo,
      *(_QWORD *)&toScale.fields.x,
      *(_QWORD *)&toScale.fields.z);
    byte_4B1402F = 1;
  }
  v15 = sub_1BCAA2C(
          WarBoardPartyListViewObject__DsiplayAnim_d__17_TypeInfo,
          *(_QWORD *)&toScale.fields.x,
          *(_QWORD *)&toScale.fields.z,
          *(_QWORD *)&easingType);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  *(_DWORD *)(v15 + 16) = 0;
  *(_QWORD *)(v15 + 88) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 88), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(float *)(v15 + 40) = v13;
  *(float *)(v15 + 44) = v12;
  *(float *)(v15 + 48) = v11;
  *(float *)(v15 + 52) = y;
  *(UnityEngine_Vector3_o *)(v15 + 64) = fromScale;
  *(float *)(v15 + 76) = duration;
  *(float *)(v15 + 60) = v10;
  *(float *)(v15 + 56) = z;
  *(float *)(v15 + 80) = *(&duration + 1);
  *(_DWORD *)(v15 + 84) = v32;
  *(_DWORD *)(v15 + 32) = v33;
  *(float *)(v15 + 36) = x;
  *(_QWORD *)(v15 + 96) = v9;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 96), v9, v22, v23, v24, v25, v26, v27);
  return (System_Collections_IEnumerator_o *)v15;
}


WarBoardPartyOrganizationListViewObject_o *__fastcall WarBoardPartyListViewObject__FindMemberobj(
        WarBoardPartyListViewObject_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  WarBoardPartyListViewObject_o *v4; // x20
  struct WarBoardPartyOrganizationListViewObject_array *memberObjectList; // x21
  __int64 v6; // x8
  WarBoardPartyOrganizationListViewObject_o *v7; // x20
  unsigned __int64 v8; // x22
  struct PartyOrganizationListViewItem_o *listViewItem; // x8

  v4 = this;
  if ( (byte_4B14031 & 1) == 0 )
  {
    this = (WarBoardPartyListViewObject_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, item, method);
    byte_4B14031 = 1;
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
        sub_1BCAA44(this, item);
      v7 = memberObjectList->m_Items[v8];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
      this = (WarBoardPartyListViewObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v7 || (listViewItem = v7->fields.listViewItem) == 0LL || !item )
          sub_1BCAA3C(this, item);
        if ( listViewItem->fields.warBoardPieceIndex == item->fields.warBoardPieceIndex )
          break;
      }
      LODWORD(v6) = memberObjectList->max_length;
      if ( (__int64)++v8 >= (int)v6 )
        return 0LL;
    }
  }
  return v7;
}


WarBoardPartyListViewItem_o *__fastcall WarBoardPartyListViewObject__GetItem(
        WarBoardPartyListViewObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4B14032 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardPartyListViewItem_TypeInfo, method, v2);
    byte_4B14032 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0LL;
  methodPtr_low = LOBYTE(WarBoardPartyListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (WarBoardPartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardPartyListViewItem_TypeInfo )
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
  __int64 methodPtr_low; // x10
  WarBoardPartyListViewObject_c *klass; // x8
  WarBoardPartyListViewObject_o *v10; // x0
  _BOOL8 v11; // x1
  const MethodInfo *v12; // x2
  int32_t v13; // w8
  const MethodInfo *v14; // x1

  if ( (byte_4B1402B & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardPartyListViewItem_TypeInfo, *(_QWORD *)&initMode, onTapMember);
    byte_4B1402B = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    methodPtr_low = LOBYTE(WarBoardPartyListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (WarBoardPartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardPartyListViewItem_TypeInfo )
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
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, dispCoroutine, 0LL);
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
  if ( (byte_4B14033 & 1) == 0 )
  {
    this = (WarBoardPartyListViewObject_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isEnableInput, method);
    byte_4B14033 = 1;
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
          sub_1BCAA44(this, isEnableInput);
        v9 = memberObjectList->m_Items[v7];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isEnableInput);
        this = (WarBoardPartyListViewObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v9 )
            sub_1BCAA3C(this, isEnableInput);
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
  ListViewObject__SetItem_41478184((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall WarBoardPartyListViewObject__SetItem_36350348(
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
  __int64 v6; // x2
  PartyOrganizationListViewItem_o **linkItem; // x22
  __int64 methodPtr_low; // x10
  __int64 v9; // x1
  UnityEngine_Object_o *Memberobj; // x21
  struct WarBoardPartyOrganizationListViewObject_array *memberObjectList; // x8
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  PartyOrganizationUtility_o *p_focusObj; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct ListViewManager_o *v25; // x1
  const MethodInfo *v26; // x2

  v4 = this;
  if ( (byte_4B1402D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, onTapMember, method);
    this = (WarBoardPartyListViewObject_o *)sub_1BCA7E0(&WarBoardPartyListViewItem_TypeInfo, v5, v6);
    byte_4B1402D = 1;
  }
  linkItem = (PartyOrganizationListViewItem_o **)v4->fields.linkItem;
  if ( !linkItem )
    goto LABEL_19;
  methodPtr_low = LOBYTE(WarBoardPartyListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE((*linkItem)->fields.nameLimitCount) < (unsigned int)methodPtr_low
    || *((WarBoardPartyListViewItem_c **)(*linkItem)->fields.commandCodeIdList + methodPtr_low - 1) != WarBoardPartyListViewItem_TypeInfo )
  {
    goto LABEL_19;
  }
  Memberobj = (UnityEngine_Object_o *)WarBoardPartyListViewObject__FindMemberobj(v4, linkItem[16], method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  this = (WarBoardPartyListViewObject_o *)UnityEngine_Object__op_Equality(Memberobj, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    memberObjectList = v4->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_19;
    if ( !memberObjectList->max_length )
      sub_1BCAA44(this, onTapMember);
    Memberobj = (UnityEngine_Object_o *)memberObjectList->m_Items[0];
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, onTapMember);
  if ( UnityEngine_Object__op_Inequality(Memberobj, 0LL, 0LL) )
  {
    v4->fields.focusObj = (struct WarBoardPartyOrganizationListViewObject_o *)Memberobj;
    p_focusObj = (PartyOrganizationUtility_o *)&v4->fields.focusObj;
    sub_1BCA784(p_focusObj, (int64_t)Memberobj, v12, v13, v14, v15, v16, v17);
    this = (WarBoardPartyListViewObject_o *)p_focusObj->klass;
    if ( p_focusObj->klass )
    {
      v25 = (struct ListViewManager_o *)linkItem[16];
      this->fields.manager = v25;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.manager, (int64_t)v25, v19, v20, v21, v22, v23, v24);
      this = (WarBoardPartyListViewObject_o *)p_focusObj->klass;
      if ( p_focusObj->klass )
      {
        WarBoardPartyOrganizationListViewObject__Init(
          (WarBoardPartyOrganizationListViewObject_o *)this,
          onTapMember,
          v26);
        return;
      }
    }
LABEL_19:
    sub_1BCAA3C(this, onTapMember);
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
  __int64 v2; // x2
  WarBoardPartyListViewObject__DsiplayAnim_d__17_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t _1__state; // w8
  struct WarBoardPartyListViewObject_o *_4__this; // x20
  float timer_5__2; // s8
  float v9; // s5
  float x; // s0
  float duration; // s7
  float y; // s1
  float z; // s2
  float v14; // s3
  float v15; // s4
  float v16; // s7
  float v17; // s5
  float v18; // s6
  float v19; // s8
  float v20; // s11
  float v21; // s12
  float v22; // s13
  float v23; // s0
  float v24; // s1
  float v25; // s2
  float v26; // s8
  float v27; // s9
  float v28; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v30; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  bool result; // w0
  __int64 v39; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4B14035 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, method, v2);
    this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B14035 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    timer_5__2 = v3->fields._timer_5__2;
    v3->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v3->fields._timer_5__2 = 0.0;
    v3->fields.__1__state = -1;
    timer_5__2 = 0.0;
  }
  if ( timer_5__2 < v3->fields.duration )
  {
    v9 = timer_5__2 + UnityEngine_Time__get_deltaTime(0LL);
    duration = v3->fields.duration;
    x = v3->fields.fromPos.fields.x;
    y = v3->fields.fromPos.fields.y;
    z = v3->fields.fromPos.fields.z;
    v14 = v3->fields.toPos.fields.x;
    v15 = v3->fields.toPos.fields.y;
    v3->fields._timer_5__2 = v9;
    v16 = v9 / duration;
    v18 = fminf(v16, 1.0);
    if ( v16 < 0.0 )
      v19 = 0.0;
    else
      v19 = v18;
    v17 = v3->fields.toPos.fields.z;
    v41 = Easing__Func(*(UnityEngine_Vector3_o *)&x, *(UnityEngine_Vector3_o *)&v14, v19, v3->fields.easingType, 0LL);
    v20 = v41.fields.x;
    v21 = v41.fields.y;
    v22 = v41.fields.z;
    *(UnityEngine_Vector3_o *)&v23 = Easing__Func(
                                       v3->fields.fromScale,
                                       v3->fields.toScale,
                                       v19,
                                       v3->fields.easingType,
                                       0LL);
    if ( _4__this )
    {
      this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)_4__this->fields.backSprite;
      if ( this )
      {
        v26 = v23;
        v27 = v24;
        v28 = v25;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v42.fields.x = v20;
        v42.fields.y = v21;
        v42.fields.z = v22;
        GameObjectExtensions__SetLocalPosition(gameObject, v42, 0LL);
        this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)_4__this->fields.backSprite;
        if ( this )
        {
          v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v43.fields.x = v26;
          v43.fields.y = v27;
          v43.fields.z = v28;
          GameObjectExtensions__SetLocalScale(v30, v43, 0LL);
          v3->fields.__2__current = 0LL;
          p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
          sub_1BCA784(p__2__current, 0LL, v32, v33, v34, v35, v36, v37);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
          return result;
        }
      }
    }
LABEL_24:
    sub_1BCAA3C(this, method);
  }
  if ( !_4__this )
    goto LABEL_24;
  this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)_4__this->fields.backSprite;
  if ( !this )
    goto LABEL_24;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
  this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)UnityEngine_Object__op_Inequality(
                                                               (UnityEngine_Object_o *)Component_object,
                                                               0LL,
                                                               0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_24;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0LL);
  }
  ActionExtensions__Call(v3->fields.onFinished, 0LL);
  return 0;
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
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_WarBoardPartyListViewObject__DsiplayAnim_d__17_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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