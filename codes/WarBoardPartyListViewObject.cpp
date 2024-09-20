void __fastcall WarBoardPartyListViewObject___ctor(WarBoardPartyListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4A59003 & 1) == 0 )
  {
    sub_1B885B0(&ListViewObject_TypeInfo);
    byte_4A59003 = 1;
  }
  *(_QWORD *)&this->fields.dispDuration = 0xF3E99999ALL;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
  ListViewObject___ctor((ListViewObject_o *)this, 0LL);
}


WarBoardPartyOrganizationListViewObject_o *__fastcall WarBoardPartyListViewObject__CreateMemberObj(
        WarBoardPartyListViewObject_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  Il2CppObject *srcMemberObj; // x20
  char *transform; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Component_o *grid; // x8
  UnityEngine_Transform_o *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  WarBoardPartyOrganizationListViewObject_o *v13; // x20

  if ( (byte_4A58FFF & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_WarBoardPartyOrganizationListViewObject___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A58FFF = 1;
  }
  srcMemberObj = (Il2CppObject *)this->fields.srcMemberObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (char *)UnityEngine_Object__Instantiate_object_(
                        srcMemberObj,
                        (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_14;
  v8 = (UnityEngine_GameObject_o *)transform;
  transform = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  grid = (UnityEngine_Component_o *)this->fields.grid;
  if ( !grid )
    goto LABEL_14;
  v10 = (UnityEngine_Transform_o *)transform;
  transform = (char *)UnityEngine_Component__get_transform(grid, 0LL);
  if ( !v10 )
    goto LABEL_14;
  UnityEngine_Transform__SetParent_69480628(v10, (UnityEngine_Transform_o *)transform, 0, 0LL);
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  GameObjectExtensions__SetLocalPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4A55CE6 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v8, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  transform = (char *)UnityEngine_GameObject__GetComponent_object_(
                        v8,
                        (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardPartyOrganizationListViewObject___);
  if ( !transform )
LABEL_14:
    sub_1B8880C(transform, v7);
  v13 = (WarBoardPartyOrganizationListViewObject_o *)transform;
  *((_QWORD *)transform + 5) = item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(transform + 40), (int32_t)item, v11, v12);
  return v13;
}


void __fastcall WarBoardPartyListViewObject__CreateMemberObjects(
        WarBoardPartyListViewObject_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  const MethodInfo *v6; // x2
  Il2CppObject *MemberObj; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppObject *v14; // x1
  Il2CppClass **v15; // x0
  System_Object_array *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_4A58FFB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__TypeInfo);
    byte_4A58FFB = 1;
  }
  if ( partyItem && !this->fields.memberObjectList )
  {
    v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject___ctor__);
    MemberObj = (Il2CppObject *)WarBoardPartyListViewObject__CreateMemberObj(
                                  this,
                                  partyItem->fields.focusMemberItem,
                                  v6);
    if ( !v5
      || (items = v5->fields._items,
          v12 = Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__Add__,
          ++v5->fields._version,
          !items) )
    {
      sub_1B8880C(MemberObj, v8);
    }
    size = v5->fields._size;
    v14 = MemberObj;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        MemberObj,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    }
    else
    {
      v15 = &items->obj.klass + size;
      v5->fields._size = size + 1;
      v15[4] = (Il2CppClass *)v14;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v14, v9, v10);
    }
    v16 = System_Collections_Generic_List_object___ToArray(
            v5,
            (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__ToArray__);
    this->fields.memberObjectList = (struct WarBoardPartyOrganizationListViewObject_array *)v16;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.memberObjectList, (int32_t)v16, v17, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPartyListViewObject__Display(WarBoardPartyListViewObject_o *this, const MethodInfo *method)
{
  WarBoardPartyListViewObject_o *v2; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  __int64 v5; // x25
  System_Collections_IEnumerator_o *dispCoroutine; // x1
  ServantStatusBattleListViewItem_o *p_dispCoroutine; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  UnityEngine_Object_o *backSprite; // x21
  bool v11; // w0
  Il2CppMethodPointer methodPtr; // x2
  const MethodInfo *v13; // x3
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_GameObject_o *v15; // x22
  __int64 v16; // x0
  void *image; // x8
  WarBoardData_o *v18; // x22
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v22; // x0
  _QWORD *v23; // x8
  __int64 v24; // x8
  float v25; // s8
  float v26; // s9
  float v27; // s10
  __int64 v28; // x0
  void *v29; // x8
  float v30; // s0
  float v31; // s1
  float v32; // s2
  float v33; // s8
  float v34; // s9
  float v35; // s10
  float v36; // s8
  float v37; // s9
  float v38; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v40; // s12
  float v41; // s13
  float v42; // s11
  __int64 duration; // x23
  unsigned int dispEasingType; // w21
  System_Action_o *v45; // x0
  float v46; // w22
  int32_t v47; // w3
  System_Action_o *v48; // x4
  const MethodInfo *v49; // x5
  System_Collections_IEnumerator_o *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  UnityEngine_Vector3_o fromScale; // [xsp+0h] [xbp-C0h]
  UnityEngine_Vector3_o v54; // 0:x1.12
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s3.4,4:s4.4,8:s5.4

  v2 = this;
  if ( (byte_4A58FFD & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1B885B0(&WarBoardPartyListViewItem_TypeInfo);
    this = (WarBoardPartyListViewObject_o *)sub_1B885B0(&Method_WarBoardPartyListViewObject_OnFinishedDisplayAnim__);
    byte_4A58FFD = 1;
  }
  linkItem = v2->fields.linkItem;
  if ( !linkItem )
    goto LABEL_50;
  methodPtr_low = LOBYTE(WarBoardPartyListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (WarBoardPartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != WarBoardPartyListViewItem_TypeInfo )
  {
    goto LABEL_50;
  }
  v5 = *(_QWORD *)&linkItem[1].fields.selectNum;
  p_dispCoroutine = (ServantStatusBattleListViewItem_o *)&v2->fields.dispCoroutine;
  dispCoroutine = v2->fields.dispCoroutine;
  if ( dispCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)v2, dispCoroutine, 0LL);
    v2->fields.dispCoroutine = 0LL;
    sub_1B88554(p_dispCoroutine, 0, v8, v9);
  }
  backSprite = (UnityEngine_Object_o *)v2->fields.backSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality(backSprite, 0LL, 0LL);
  v13 = v2->klass->vtable._9_SetInput.method;
  methodPtr = v2->klass->vtable._10_Invalidation.methodPtr;
  if ( v11 )
  {
    ((void (__fastcall *)(WarBoardPartyListViewObject_o *, __int64, Il2CppMethodPointer))v13)(v2, 1LL, methodPtr);
    return;
  }
  ((void (__fastcall *)(WarBoardPartyListViewObject_o *, _QWORD, Il2CppMethodPointer))v13)(v2, 0LL, methodPtr);
  this = (WarBoardPartyListViewObject_o *)v2->fields.backSprite;
  if ( !this )
    goto LABEL_50;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  GameObjectExtensions__SetLocalPosition(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  this = (WarBoardPartyListViewObject_o *)v2->fields.backSprite;
  if ( !this )
    goto LABEL_50;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !byte_4A55CE6 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1BDA48C(v16);
  this = *(WarBoardPartyListViewObject_o **)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (BYTE5(this[1].fields.srcMemberObj) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_1BDA48C(this);
  image = this[1].klass->_1.image;
  if ( !image )
    goto LABEL_50;
  if ( !v5 )
    goto LABEL_50;
  v18 = (WarBoardData_o *)*((_QWORD *)image + 55);
  if ( !v18 )
    goto LABEL_50;
  this = (WarBoardPartyListViewObject_o *)WarBoardData__GetPiece(
                                            *((WarBoardData_o **)image + 55),
                                            0,
                                            0,
                                            *(_DWORD *)(v5 + 360),
                                            1,
                                            0LL);
  if ( !this )
    goto LABEL_50;
  this = (WarBoardPartyListViewObject_o *)WarBoardData__GetSquare(v18, (int32_t)this->fields.mCollider, 0LL);
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
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
  x = position.fields.x;
  y = position.fields.y;
  z = position.fields.z;
  v22 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
    v22 = sub_1BDA48C(v22);
  this = *(WarBoardPartyListViewObject_o **)(*(_QWORD *)(v22 + 192) + 16LL);
  if ( (BYTE5(this[1].fields.srcMemberObj) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_1BDA48C(this);
  v23 = this[1].klass->_1.image;
  if ( !v23 )
    goto LABEL_50;
  v24 = v23[6];
  if ( !v24 )
    goto LABEL_50;
  this = *(WarBoardPartyListViewObject_o **)(v24 + 32);
  if ( !this )
    goto LABEL_50;
  v56.fields.x = x;
  v56.fields.y = y;
  v56.fields.z = z;
  v57 = UnityEngine_Camera__WorldToScreenPoint_69265672((UnityEngine_Camera_o *)this, v56, 0LL);
  v25 = v57.fields.x;
  v26 = v57.fields.y;
  v27 = v57.fields.z;
  v28 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
    v28 = sub_1BDA48C(v28);
  this = *(WarBoardPartyListViewObject_o **)(*(_QWORD *)(v28 + 192) + 16LL);
  if ( (BYTE5(this[1].fields.srcMemberObj) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_1BDA48C(this);
  v29 = this[1].klass->_1.image;
  if ( !v29 )
    goto LABEL_50;
  this = (WarBoardPartyListViewObject_o *)*((_QWORD *)v29 + 7);
  if ( !this )
    goto LABEL_50;
  v58.fields.x = v25;
  v58.fields.y = v26;
  v58.fields.z = v27;
  *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Camera__ScreenToWorldPoint_69265696(
                                     (UnityEngine_Camera_o *)this,
                                     v58,
                                     0LL);
  this = (WarBoardPartyListViewObject_o *)v2->fields.backSprite;
  if ( !this
    || (v33 = v30,
        v34 = v31,
        v35 = v32,
        (this = (WarBoardPartyListViewObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL)) == 0LL) )
  {
LABEL_50:
    sub_1B8880C(this, method);
  }
  v59.fields.x = v33;
  v59.fields.y = v34;
  v59.fields.z = v35;
  v60 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)this, v59, 0LL);
  v36 = v60.fields.x;
  v37 = v60.fields.y;
  v38 = v60.fields.z;
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v41 = static_fields->zeroVector.fields.x;
  v40 = static_fields->zeroVector.fields.y;
  v42 = static_fields->zeroVector.fields.z;
  if ( !byte_4A55CE6 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  }
  duration = *(_QWORD *)&static_fields->oneVector.fields.x;
  dispEasingType = v2->fields.dispEasingType;
  v45 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  v46 = *(float *)&v45;
  System_Action___ctor(v45, (Il2CppObject *)v2, Method_WarBoardPartyListViewObject_OnFinishedDisplayAnim__, 0LL);
  v61.fields.x = v36;
  v61.fields.y = v37;
  v61.fields.z = v38;
  v62.fields.x = v41;
  v62.fields.y = v40;
  v62.fields.z = v42;
  *(_QWORD *)&v54.fields.x = dispEasingType;
  v54.fields.z = v46;
  *(_QWORD *)&fromScale.fields.y = __PAIR64__(LODWORD(v42), LODWORD(v40));
  fromScale.fields.x = v41;
  v50 = WarBoardPartyListViewObject__DsiplayAnim(v2, v61, v62, fromScale, v54, *(float *)&duration, v47, v48, v49);
  v2->fields.dispCoroutine = v50;
  sub_1B88554(p_dispCoroutine, (int32_t)v50, v51, v52);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)v2, v2->fields.dispCoroutine, 0LL);
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
  __int64 v9; // x19
  float v10; // w20
  float v11; // s11
  float v12; // s12
  float v13; // s13
  __int64 v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  float y; // [xsp+10h] [xbp-80h]
  float z; // [xsp+18h] [xbp-78h]
  float x; // [xsp+1Ch] [xbp-74h]
  int v24; // [xsp+A8h] [xbp+18h]
  int v25; // [xsp+B0h] [xbp+20h]

  z = toPos.fields.z;
  x = fromPos.fields.x;
  y = toPos.fields.y;
  v9 = *(_QWORD *)&toScale.fields.z;
  v10 = toScale.fields.x;
  v11 = toPos.fields.x;
  v12 = fromPos.fields.z;
  v13 = fromPos.fields.y;
  if ( (byte_4A58FFE & 1) == 0 )
  {
    sub_1B885B0(&WarBoardPartyListViewObject__DsiplayAnim_d__17_TypeInfo);
    byte_4A58FFE = 1;
  }
  v15 = sub_1B887FC(WarBoardPartyListViewObject__DsiplayAnim_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  *(_DWORD *)(v15 + 16) = 0;
  *(_QWORD *)(v15 + 88) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 88), (int32_t)this, v16, v17);
  *(float *)(v15 + 40) = v13;
  *(float *)(v15 + 44) = v12;
  *(float *)(v15 + 48) = v11;
  *(float *)(v15 + 52) = y;
  *(UnityEngine_Vector3_o *)(v15 + 64) = fromScale;
  *(float *)(v15 + 76) = duration;
  *(float *)(v15 + 60) = v10;
  *(float *)(v15 + 56) = z;
  *(float *)(v15 + 80) = *(&duration + 1);
  *(_DWORD *)(v15 + 84) = v24;
  *(_DWORD *)(v15 + 32) = v25;
  *(float *)(v15 + 36) = x;
  *(_QWORD *)(v15 + 96) = v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 96), v9, v18, v19);
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
  if ( (byte_4A59000 & 1) == 0 )
  {
    this = (WarBoardPartyListViewObject_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59000 = 1;
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
        sub_1B88814(this, item);
      v7 = memberObjectList->m_Items[v8];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (WarBoardPartyListViewObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v7 || (listViewItem = v7->fields.listViewItem) == 0LL || !item )
          sub_1B8880C(this, item);
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
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11

  if ( (byte_4A59001 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardPartyListViewItem_TypeInfo);
    byte_4A59001 = 1;
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

  if ( (byte_4A58FFA & 1) == 0 )
  {
    sub_1B885B0(&WarBoardPartyListViewItem_TypeInfo);
    byte_4A58FFA = 1;
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
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, dispCoroutine, 0LL);
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
  if ( (byte_4A59002 & 1) == 0 )
  {
    this = (WarBoardPartyListViewObject_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59002 = 1;
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
          sub_1B88814(this, isEnableInput);
        v9 = memberObjectList->m_Items[v7];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (WarBoardPartyListViewObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v9 )
            sub_1B8880C(this, isEnableInput);
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
  ListViewObject__SetItem_40756536((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall WarBoardPartyListViewObject__SetItem_35655524(
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
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *Memberobj; // x21
  struct WarBoardPartyOrganizationListViewObject_array *memberObjectList; // x8
  int32_t v9; // w2
  int32_t v10; // w3
  ServantStatusBattleListViewItem_o *p_focusObj; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  struct ListViewManager_o *v14; // x1
  const MethodInfo *v15; // x2

  v4 = this;
  if ( (byte_4A58FFC & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (WarBoardPartyListViewObject_o *)sub_1B885B0(&WarBoardPartyListViewItem_TypeInfo);
    byte_4A58FFC = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (WarBoardPartyListViewObject_o *)UnityEngine_Object__op_Equality(Memberobj, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    memberObjectList = v4->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_19;
    if ( !memberObjectList->max_length )
      sub_1B88814(this, onTapMember);
    Memberobj = (UnityEngine_Object_o *)memberObjectList->m_Items[0];
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Memberobj, 0LL, 0LL) )
  {
    v4->fields.focusObj = (struct WarBoardPartyOrganizationListViewObject_o *)Memberobj;
    p_focusObj = (ServantStatusBattleListViewItem_o *)&v4->fields.focusObj;
    sub_1B88554(p_focusObj, (int32_t)Memberobj, v9, v10);
    this = (WarBoardPartyListViewObject_o *)p_focusObj->klass;
    if ( p_focusObj->klass )
    {
      v14 = (struct ListViewManager_o *)linkItem[16];
      this->fields.manager = v14;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.manager, (int32_t)v14, v12, v13);
      this = (WarBoardPartyListViewObject_o *)p_focusObj->klass;
      if ( p_focusObj->klass )
      {
        WarBoardPartyOrganizationListViewObject__Init(
          (WarBoardPartyOrganizationListViewObject_o *)this,
          onTapMember,
          v15);
        return;
      }
    }
LABEL_19:
    sub_1B8880C(this, onTapMember);
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
  float v6; // s5
  float x; // s0
  float duration; // s7
  float y; // s1
  float z; // s2
  float v11; // s3
  float v12; // s4
  float v13; // s7
  float v14; // s5
  float v15; // s6
  float v16; // s8
  float v17; // s11
  float v18; // s12
  float v19; // s13
  float v20; // s0
  float v21; // s1
  float v22; // s2
  float v23; // s8
  float v24; // s9
  float v25; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v27; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v29; // w2
  int32_t v30; // w3
  bool result; // w0
  Il2CppObject *Component_object; // x20
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4A59004 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59004 = 1;
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
  if ( timer_5__2 < v2->fields.duration )
  {
    v6 = timer_5__2 + UnityEngine_Time__get_deltaTime(0LL);
    duration = v2->fields.duration;
    x = v2->fields.fromPos.fields.x;
    y = v2->fields.fromPos.fields.y;
    z = v2->fields.fromPos.fields.z;
    v11 = v2->fields.toPos.fields.x;
    v12 = v2->fields.toPos.fields.y;
    v2->fields._timer_5__2 = v6;
    v13 = v6 / duration;
    v15 = fminf(v13, 1.0);
    if ( v13 < 0.0 )
      v16 = 0.0;
    else
      v16 = v15;
    v14 = v2->fields.toPos.fields.z;
    v33 = Easing__Func(*(UnityEngine_Vector3_o *)&x, *(UnityEngine_Vector3_o *)&v11, v16, v2->fields.easingType, 0LL);
    v17 = v33.fields.x;
    v18 = v33.fields.y;
    v19 = v33.fields.z;
    *(UnityEngine_Vector3_o *)&v20 = Easing__Func(
                                       v2->fields.fromScale,
                                       v2->fields.toScale,
                                       v16,
                                       v2->fields.easingType,
                                       0LL);
    if ( _4__this )
    {
      this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)_4__this->fields.backSprite;
      if ( this )
      {
        v23 = v20;
        v24 = v21;
        v25 = v22;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v34.fields.x = v17;
        v34.fields.y = v18;
        v34.fields.z = v19;
        GameObjectExtensions__SetLocalPosition(gameObject, v34, 0LL);
        this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)_4__this->fields.backSprite;
        if ( this )
        {
          v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v35.fields.x = v23;
          v35.fields.y = v24;
          v35.fields.z = v25;
          GameObjectExtensions__SetLocalScale(v27, v35, 0LL);
          v2->fields.__2__current = 0LL;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
          sub_1B88554(p__2__current, 0, v29, v30);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
          return result;
        }
      }
    }
LABEL_24:
    sub_1B8880C(this, method);
  }
  if ( !_4__this )
    goto LABEL_24;
  this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)_4__this->fields.backSprite;
  if ( !this )
    goto LABEL_24;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  ActionExtensions__Call(v2->fields.onFinished, 0LL);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_WarBoardPartyListViewObject__DsiplayAnim_d__17_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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