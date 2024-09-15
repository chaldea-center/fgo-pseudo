void __fastcall WarBoardPartyListViewObject___ctor(WarBoardPartyListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4A2BDF5 & 1) == 0 )
  {
    sub_1B761C0(&ListViewObject_TypeInfo, method);
    byte_4A2BDF5 = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *srcMemberObj; // x20
  char *transform; // x0
  __int64 v9; // x1
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_Component_o *grid; // x8
  UnityEngine_Transform_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  WarBoardPartyOrganizationListViewObject_o *v17; // x20

  if ( (byte_4A2BDF1 & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_WarBoardPartyOrganizationListViewObject___, item);
    sub_1B761C0(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v6);
    byte_4A2BDF1 = 1;
  }
  srcMemberObj = (Il2CppObject *)this->fields.srcMemberObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (char *)UnityEngine_Object__Instantiate_object_(
                        srcMemberObj,
                        (const MethodInfo_2EE5790 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_14;
  v10 = (UnityEngine_GameObject_o *)transform;
  transform = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
  grid = (UnityEngine_Component_o *)this->fields.grid;
  if ( !grid )
    goto LABEL_14;
  v12 = (UnityEngine_Transform_o *)transform;
  transform = (char *)UnityEngine_Component__get_transform(grid, 0LL);
  if ( !v12 )
    goto LABEL_14;
  UnityEngine_Transform__SetParent_69308656(v12, (UnityEngine_Transform_o *)transform, 0, 0LL);
  if ( !byte_4A28BB1 )
  {
    sub_1B761C0(&UnityEngine_Vector3_TypeInfo, v13);
    byte_4A28BB1 = 1;
  }
  GameObjectExtensions__SetLocalPosition(v10, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4A28BB6 )
  {
    sub_1B761C0(&UnityEngine_Vector3_TypeInfo, v14);
    byte_4A28BB6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v10, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  transform = (char *)UnityEngine_GameObject__GetComponent_object_(
                        v10,
                        (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardPartyOrganizationListViewObject___);
  if ( !transform )
LABEL_14:
    sub_1B7641C(transform, v9);
  v17 = (WarBoardPartyOrganizationListViewObject_o *)transform;
  *((_QWORD *)transform + 5) = item;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(transform + 40), (int32_t)item, v15, v16);
  return v17;
}


void __fastcall WarBoardPartyListViewObject__CreateMemberObjects(
        WarBoardPartyListViewObject_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  const MethodInfo *v9; // x2
  Il2CppObject *MemberObj; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppObject *v17; // x1
  Il2CppClass **v18; // x0
  System_Object_array *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_4A2BDED & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__Add__, partyItem);
    sub_1B761C0(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__ToArray__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject___ctor__, v6);
    sub_1B761C0(&System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__TypeInfo, v7);
    byte_4A2BDED = 1;
  }
  if ( partyItem && !this->fields.memberObjectList )
  {
    v8 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject___ctor__);
    MemberObj = (Il2CppObject *)WarBoardPartyListViewObject__CreateMemberObj(
                                  this,
                                  partyItem->fields.focusMemberItem,
                                  v9);
    if ( !v8
      || (items = v8->fields._items,
          v15 = Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__Add__,
          ++v8->fields._version,
          !items) )
    {
      sub_1B7641C(MemberObj, v11);
    }
    size = v8->fields._size;
    v17 = MemberObj;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        MemberObj,
        *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    }
    else
    {
      v18 = &items->obj.klass + size;
      v8->fields._size = size + 1;
      v18[4] = (Il2CppClass *)v17;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v17, v12, v13);
    }
    v19 = System_Collections_Generic_List_object___ToArray(
            v8,
            (const MethodInfo_34D912C *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__ToArray__);
    this->fields.memberObjectList = (struct WarBoardPartyOrganizationListViewObject_array *)v19;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.memberObjectList, (int32_t)v19, v20, v21);
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
  __int64 methodPtr_low; // x11
  __int64 v9; // x25
  System_Collections_IEnumerator_o *dispCoroutine; // x1
  ServantStatusBattleListViewItem_o *p_dispCoroutine; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_Object_o *backSprite; // x21
  bool v15; // w0
  Il2CppMethodPointer methodPtr; // x2
  const MethodInfo *v17; // x3
  __int64 v18; // x1
  UnityEngine_GameObject_o *gameObject; // x22
  __int64 v20; // x1
  UnityEngine_GameObject_o *v21; // x22
  __int64 v22; // x0
  void *image; // x8
  WarBoardData_o *v24; // x22
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v28; // x0
  _QWORD *v29; // x8
  __int64 v30; // x8
  float v31; // s8
  float v32; // s9
  float v33; // s10
  __int64 v34; // x0
  void *v35; // x8
  float v36; // s0
  float v37; // s1
  float v38; // s2
  float v39; // s8
  float v40; // s9
  float v41; // s10
  __int64 v42; // x1
  float v43; // s8
  float v44; // s9
  float v45; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v47; // s12
  float v48; // s13
  float v49; // s11
  __int64 duration; // x23
  unsigned int dispEasingType; // w21
  System_Action_o *v52; // x0
  float v53; // w22
  int32_t v54; // w3
  System_Action_o *v55; // x4
  const MethodInfo *v56; // x5
  System_Collections_IEnumerator_o *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  UnityEngine_Vector3_o fromScale; // [xsp+0h] [xbp-C0h]
  UnityEngine_Vector3_o v61; // 0:x1.12
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s3.4,4:s4.4,8:s5.4

  v2 = this;
  if ( (byte_4A2BDEF & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v3);
    sub_1B761C0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__, v4);
    sub_1B761C0(&WarBoardPartyListViewItem_TypeInfo, v5);
    this = (WarBoardPartyListViewObject_o *)sub_1B761C0(&Method_WarBoardPartyListViewObject_OnFinishedDisplayAnim__, v6);
    byte_4A2BDEF = 1;
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
  v9 = *(_QWORD *)&linkItem[1].fields.selectNum;
  p_dispCoroutine = (ServantStatusBattleListViewItem_o *)&v2->fields.dispCoroutine;
  dispCoroutine = v2->fields.dispCoroutine;
  if ( dispCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)v2, dispCoroutine, 0LL);
    v2->fields.dispCoroutine = 0LL;
    sub_1B76164(p_dispCoroutine, 0, v12, v13);
  }
  backSprite = (UnityEngine_Object_o *)v2->fields.backSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v15 = UnityEngine_Object__op_Equality(backSprite, 0LL, 0LL);
  v17 = v2->klass->vtable._9_SetInput.method;
  methodPtr = v2->klass->vtable._10_Invalidation.methodPtr;
  if ( v15 )
  {
    ((void (__fastcall *)(WarBoardPartyListViewObject_o *, __int64, Il2CppMethodPointer))v17)(v2, 1LL, methodPtr);
    return;
  }
  ((void (__fastcall *)(WarBoardPartyListViewObject_o *, _QWORD, Il2CppMethodPointer))v17)(v2, 0LL, methodPtr);
  this = (WarBoardPartyListViewObject_o *)v2->fields.backSprite;
  if ( !this )
    goto LABEL_50;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !byte_4A28BB1 )
  {
    sub_1B761C0(&UnityEngine_Vector3_TypeInfo, v18);
    byte_4A28BB1 = 1;
  }
  GameObjectExtensions__SetLocalPosition(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  this = (WarBoardPartyListViewObject_o *)v2->fields.backSprite;
  if ( !this )
    goto LABEL_50;
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !byte_4A28BB6 )
  {
    sub_1B761C0(&UnityEngine_Vector3_TypeInfo, v20);
    byte_4A28BB6 = 1;
  }
  GameObjectExtensions__SetLocalScale(v21, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  v22 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
    v22 = sub_1BC809C(v22);
  this = *(WarBoardPartyListViewObject_o **)(*(_QWORD *)(v22 + 192) + 16LL);
  if ( (BYTE5(this[1].fields.srcMemberObj) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_1BC809C(this);
  image = this[1].klass->_1.image;
  if ( !image )
    goto LABEL_50;
  if ( !v9 )
    goto LABEL_50;
  v24 = (WarBoardData_o *)*((_QWORD *)image + 55);
  if ( !v24 )
    goto LABEL_50;
  this = (WarBoardPartyListViewObject_o *)WarBoardData__GetPiece(
                                            *((WarBoardData_o **)image + 55),
                                            0,
                                            0,
                                            *(_DWORD *)(v9 + 360),
                                            1,
                                            0LL);
  if ( !this )
    goto LABEL_50;
  this = (WarBoardPartyListViewObject_o *)WarBoardData__GetSquare(v24, (int32_t)this->fields.mCollider, 0LL);
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
  v28 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
    v28 = sub_1BC809C(v28);
  this = *(WarBoardPartyListViewObject_o **)(*(_QWORD *)(v28 + 192) + 16LL);
  if ( (BYTE5(this[1].fields.srcMemberObj) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_1BC809C(this);
  v29 = this[1].klass->_1.image;
  if ( !v29 )
    goto LABEL_50;
  v30 = v29[6];
  if ( !v30 )
    goto LABEL_50;
  this = *(WarBoardPartyListViewObject_o **)(v30 + 32);
  if ( !this )
    goto LABEL_50;
  v63.fields.x = x;
  v63.fields.y = y;
  v63.fields.z = z;
  v64 = UnityEngine_Camera__WorldToScreenPoint_69093700((UnityEngine_Camera_o *)this, v63, 0LL);
  v31 = v64.fields.x;
  v32 = v64.fields.y;
  v33 = v64.fields.z;
  v34 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
    v34 = sub_1BC809C(v34);
  this = *(WarBoardPartyListViewObject_o **)(*(_QWORD *)(v34 + 192) + 16LL);
  if ( (BYTE5(this[1].fields.srcMemberObj) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_1BC809C(this);
  v35 = this[1].klass->_1.image;
  if ( !v35 )
    goto LABEL_50;
  this = (WarBoardPartyListViewObject_o *)*((_QWORD *)v35 + 7);
  if ( !this )
    goto LABEL_50;
  v65.fields.x = v31;
  v65.fields.y = v32;
  v65.fields.z = v33;
  *(UnityEngine_Vector3_o *)&v36 = UnityEngine_Camera__ScreenToWorldPoint_69093724(
                                     (UnityEngine_Camera_o *)this,
                                     v65,
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
LABEL_50:
    sub_1B7641C(this, method);
  }
  v66.fields.x = v39;
  v66.fields.y = v40;
  v66.fields.z = v41;
  v67 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)this, v66, 0LL);
  v43 = v67.fields.x;
  v44 = v67.fields.y;
  v45 = v67.fields.z;
  if ( !byte_4A28BB1 )
  {
    sub_1B761C0(&UnityEngine_Vector3_TypeInfo, v42);
    byte_4A28BB1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v48 = static_fields->zeroVector.fields.x;
  v47 = static_fields->zeroVector.fields.y;
  v49 = static_fields->zeroVector.fields.z;
  if ( !byte_4A28BB6 )
  {
    sub_1B761C0(&UnityEngine_Vector3_TypeInfo, v42);
    byte_4A28BB6 = 1;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  }
  duration = *(_QWORD *)&static_fields->oneVector.fields.x;
  dispEasingType = v2->fields.dispEasingType;
  v52 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  v53 = *(float *)&v52;
  System_Action___ctor(v52, (Il2CppObject *)v2, Method_WarBoardPartyListViewObject_OnFinishedDisplayAnim__, 0LL);
  v68.fields.x = v43;
  v68.fields.y = v44;
  v68.fields.z = v45;
  v69.fields.x = v48;
  v69.fields.y = v47;
  v69.fields.z = v49;
  *(_QWORD *)&v61.fields.x = dispEasingType;
  v61.fields.z = v53;
  *(_QWORD *)&fromScale.fields.y = __PAIR64__(LODWORD(v49), LODWORD(v47));
  fromScale.fields.x = v48;
  v57 = WarBoardPartyListViewObject__DsiplayAnim(v2, v68, v69, fromScale, v61, *(float *)&duration, v54, v55, v56);
  v2->fields.dispCoroutine = v57;
  sub_1B76164(p_dispCoroutine, (int32_t)v57, v58, v59);
  UnityEngine_MonoBehaviour__StartCoroutine_69272680((UnityEngine_MonoBehaviour_o *)v2, v2->fields.dispCoroutine, 0LL);
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
  if ( (byte_4A2BDF0 & 1) == 0 )
  {
    sub_1B761C0(&WarBoardPartyListViewObject__DsiplayAnim_d__17_TypeInfo, *(_QWORD *)&toScale.fields.x);
    byte_4A2BDF0 = 1;
  }
  v15 = sub_1B7640C(WarBoardPartyListViewObject__DsiplayAnim_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  *(_DWORD *)(v15 + 16) = 0;
  *(_QWORD *)(v15 + 88) = this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v15 + 88), (int32_t)this, v16, v17);
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
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v15 + 96), v9, v18, v19);
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
  if ( (byte_4A2BDF2 & 1) == 0 )
  {
    this = (WarBoardPartyListViewObject_o *)sub_1B761C0(&UnityEngine_Object_TypeInfo, item);
    byte_4A2BDF2 = 1;
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
        sub_1B76424(this, item);
      v7 = memberObjectList->m_Items[v8];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (WarBoardPartyListViewObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v7 || (listViewItem = v7->fields.listViewItem) == 0LL || !item )
          sub_1B7641C(this, item);
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

  if ( (byte_4A2BDF3 & 1) == 0 )
  {
    sub_1B761C0(&WarBoardPartyListViewItem_TypeInfo, method);
    byte_4A2BDF3 = 1;
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

  if ( (byte_4A2BDEC & 1) == 0 )
  {
    sub_1B761C0(&WarBoardPartyListViewItem_TypeInfo, *(_QWORD *)&initMode);
    byte_4A2BDEC = 1;
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
    UnityEngine_MonoBehaviour__StartCoroutine_69272680((UnityEngine_MonoBehaviour_o *)this, dispCoroutine, 0LL);
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
  if ( (byte_4A2BDF4 & 1) == 0 )
  {
    this = (WarBoardPartyListViewObject_o *)sub_1B761C0(&UnityEngine_Object_TypeInfo, isEnableInput);
    byte_4A2BDF4 = 1;
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
          sub_1B76424(this, isEnableInput);
        v9 = memberObjectList->m_Items[v7];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (WarBoardPartyListViewObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v9 )
            sub_1B7641C(this, isEnableInput);
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
  ListViewObject__SetItem_40571128((ListViewObject_o *)this, item, seed, 0LL);
  this->fields.state = 0;
}


void __fastcall WarBoardPartyListViewObject__SetItem_35482460(
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
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *Memberobj; // x21
  struct WarBoardPartyOrganizationListViewObject_array *memberObjectList; // x8
  int32_t v10; // w2
  int32_t v11; // w3
  ServantStatusBattleListViewItem_o *p_focusObj; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  struct ListViewManager_o *v15; // x1
  const MethodInfo *v16; // x2

  v4 = this;
  if ( (byte_4A2BDEE & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, onTapMember);
    this = (WarBoardPartyListViewObject_o *)sub_1B761C0(&WarBoardPartyListViewItem_TypeInfo, v5);
    byte_4A2BDEE = 1;
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
      sub_1B76424(this, onTapMember);
    Memberobj = (UnityEngine_Object_o *)memberObjectList->m_Items[0];
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Memberobj, 0LL, 0LL) )
  {
    v4->fields.focusObj = (struct WarBoardPartyOrganizationListViewObject_o *)Memberobj;
    p_focusObj = (ServantStatusBattleListViewItem_o *)&v4->fields.focusObj;
    sub_1B76164(p_focusObj, (int32_t)Memberobj, v10, v11);
    this = (WarBoardPartyListViewObject_o *)p_focusObj->klass;
    if ( p_focusObj->klass )
    {
      v15 = (struct ListViewManager_o *)linkItem[16];
      this->fields.manager = v15;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.manager, (int32_t)v15, v13, v14);
      this = (WarBoardPartyListViewObject_o *)p_focusObj->klass;
      if ( p_focusObj->klass )
      {
        WarBoardPartyOrganizationListViewObject__Init(
          (WarBoardPartyOrganizationListViewObject_o *)this,
          onTapMember,
          v16);
        return;
      }
    }
LABEL_19:
    sub_1B7641C(this, onTapMember);
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
  float v7; // s5
  float x; // s0
  float duration; // s7
  float y; // s1
  float z; // s2
  float v12; // s3
  float v13; // s4
  float v14; // s7
  float v15; // s5
  float v16; // s6
  float v17; // s8
  float v18; // s11
  float v19; // s12
  float v20; // s13
  float v21; // s0
  float v22; // s1
  float v23; // s2
  float v24; // s8
  float v25; // s9
  float v26; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v28; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v30; // w2
  int32_t v31; // w3
  bool result; // w0
  Il2CppObject *Component_object; // x20
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4A2BDF6 & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)sub_1B761C0(&UnityEngine_Object_TypeInfo, v3);
    byte_4A2BDF6 = 1;
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
    v7 = timer_5__2 + UnityEngine_Time__get_deltaTime(0LL);
    duration = v2->fields.duration;
    x = v2->fields.fromPos.fields.x;
    y = v2->fields.fromPos.fields.y;
    z = v2->fields.fromPos.fields.z;
    v12 = v2->fields.toPos.fields.x;
    v13 = v2->fields.toPos.fields.y;
    v2->fields._timer_5__2 = v7;
    v14 = v7 / duration;
    v16 = fminf(v14, 1.0);
    if ( v14 < 0.0 )
      v17 = 0.0;
    else
      v17 = v16;
    v15 = v2->fields.toPos.fields.z;
    v34 = Easing__Func(*(UnityEngine_Vector3_o *)&x, *(UnityEngine_Vector3_o *)&v12, v17, v2->fields.easingType, 0LL);
    v18 = v34.fields.x;
    v19 = v34.fields.y;
    v20 = v34.fields.z;
    *(UnityEngine_Vector3_o *)&v21 = Easing__Func(
                                       v2->fields.fromScale,
                                       v2->fields.toScale,
                                       v17,
                                       v2->fields.easingType,
                                       0LL);
    if ( _4__this )
    {
      this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)_4__this->fields.backSprite;
      if ( this )
      {
        v24 = v21;
        v25 = v22;
        v26 = v23;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v35.fields.x = v18;
        v35.fields.y = v19;
        v35.fields.z = v20;
        GameObjectExtensions__SetLocalPosition(gameObject, v35, 0LL);
        this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)_4__this->fields.backSprite;
        if ( this )
        {
          v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v36.fields.x = v24;
          v36.fields.y = v25;
          v36.fields.z = v26;
          GameObjectExtensions__SetLocalScale(v28, v36, 0LL);
          v2->fields.__2__current = 0LL;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
          sub_1B76164(p__2__current, 0, v30, v31);
          result = 1;
          *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
          return result;
        }
      }
    }
LABEL_24:
    sub_1B7641C(this, method);
  }
  if ( !_4__this )
    goto LABEL_24;
  this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)_4__this->fields.backSprite;
  if ( !this )
    goto LABEL_24;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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

  v2 = sub_1B761D4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B7640C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B761D4(&Method_WarBoardPartyListViewObject__DsiplayAnim_d__17_System_Collections_IEnumerator_Reset__);
  sub_1B762E8(v3, v4);
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