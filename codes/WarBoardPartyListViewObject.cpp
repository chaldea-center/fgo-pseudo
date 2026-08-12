void WarBoardPartyListViewObject___ctor(WarBoardPartyListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ListViewObject_c *v4; // x0

  if ( (byte_596E360 & 1) == 0 )
  {
    sub_2213A60(&ListViewObject_TypeInfo);
    byte_596E360 = 1;
  }
  v4 = ListViewObject_TypeInfo;
  *(_QWORD *)&this->fields.dispDuration = 0xF3E99999ALL;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  ListViewObject___ctor((ListViewObject_o *)this, 0);
}


WarBoardPartyOrganizationListViewObject_o *WarBoardPartyListViewObject__CreateMemberObj(
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  WarBoardPartyOrganizationListViewObject_o *v17; // x20

  if ( (byte_596E35C & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_WarBoardPartyOrganizationListViewObject___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E35C = 1;
  }
  srcMemberObj = (Il2CppObject *)this->fields.srcMemberObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, method);
  transform = (char *)UnityEngine_Object__Instantiate_object_(
                        srcMemberObj,
                        (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !transform )
    goto LABEL_14;
  v8 = (UnityEngine_GameObject_o *)transform;
  transform = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
  grid = (UnityEngine_Component_o *)this->fields.grid;
  if ( !grid )
    goto LABEL_14;
  v10 = (UnityEngine_Transform_o *)transform;
  transform = (char *)UnityEngine_Component__get_transform(grid, 0);
  if ( !v10 )
    goto LABEL_14;
  UnityEngine_Transform__SetParent_83492444(v10, (UnityEngine_Transform_o *)transform, 0, 0);
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  GameObjectExtensions__SetLocalPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_5969AE5 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  GameObjectExtensions__SetLocalScale(v8, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  transform = (char *)UnityEngine_GameObject__GetComponent_object_(
                        v8,
                        (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_WarBoardPartyOrganizationListViewObject___);
  if ( !transform )
LABEL_14:
    sub_2213CDC(transform, v7);
  v17 = (WarBoardPartyOrganizationListViewObject_o *)transform;
  *((_QWORD *)transform + 5) = item;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(transform + 40), (int32_t)item, v11, v12, v13, v14, v15, v16);
  return v17;
}


void WarBoardPartyListViewObject__CreateMemberObjects(
        WarBoardPartyListViewObject_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  const MethodInfo *v6; // x2
  Il2CppObject *MemberObj; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppObject *v18; // x1
  Il2CppClass **v19; // x0
  System_Object_array *v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  if ( (byte_596E358 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__TypeInfo);
    byte_596E358 = 1;
  }
  if ( partyItem && !this->fields.memberObjectList )
  {
    v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject___ctor__);
    MemberObj = (Il2CppObject *)WarBoardPartyListViewObject__CreateMemberObj(
                                  this,
                                  partyItem->fields.focusMemberItem,
                                  v6);
    if ( !v5
      || (items = v5->fields._items,
          v16 = Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__Add__,
          ++v5->fields._version,
          !items) )
    {
      sub_2213CDC(MemberObj, v8);
    }
    size = v5->fields._size;
    v18 = MemberObj;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        MemberObj,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v19 = &items->obj.klass + size;
      v5->fields._size = size + 1;
      v19[4] = (Il2CppClass *)v18;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v18, v9, v10, v11, v12, v13, v14);
    }
    v20 = System_Collections_Generic_List_object___ToArray(
            v5,
            (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__ToArray__);
    this->fields.memberObjectList = (struct WarBoardPartyOrganizationListViewObject_array *)v20;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.memberObjectList,
      (int32_t)v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
}


void WarBoardPartyListViewObject__Display(WarBoardPartyListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardPartyListViewObject_o *v3; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  System_Collections_IEnumerator_o *dispCoroutine; // x1
  __int64 v7; // x25
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  UnityEngine_Object_o *backSprite; // x21
  bool v15; // w0
  const MethodInfo *v16; // x2
  void (__fastcall *methodPtr)(WarBoardPartyListViewObject_o *, __int64, const MethodInfo *); // x3
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_GameObject_o *v19; // x22
  long double v20; // q0
  __int64 v21; // x0
  __int64 v22; // x8
  WarBoardData_o *v23; // x22
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x8
  __int64 v27; // x0
  __int64 v28; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s11
  float y; // s12
  float z; // s13
  __int64 duration; // x23
  unsigned int dispEasingType; // w21
  System_Action_o *v35; // x0
  float v36; // w22
  int32_t v37; // w3
  System_Action_o *v38; // x4
  const MethodInfo *v39; // x5
  System_Collections_IEnumerator_o *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  long double v47; // q0
  long double v48; // q0
  UnityEngine_Vector3_o fromScale; // [xsp+0h] [xbp-C0h]
  UnityEngine_Vector3_o v50; // 0:x1.12
  UnityEngine_Vector3_o position; // 0:kr00_12.12
  UnityEngine_Vector3_o v52; // 0:kr14_12.12
  UnityEngine_Vector3_o v53; // 0:kr20_12.12
  UnityEngine_Vector3_o v54; // 0:kr34_12.12
  UnityEngine_Vector3_o v55; // 0:s3.4,4:s4.4,8:s5.4

  v3 = this;
  if ( (byte_596E35A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_2213A60(&WarBoardPartyListViewItem_TypeInfo);
    this = (WarBoardPartyListViewObject_o *)sub_2213A60(&Method_WarBoardPartyListViewObject_OnFinishedDisplayAnim__);
    byte_596E35A = 1;
  }
  linkItem = v3->fields.linkItem;
  if ( !linkItem )
    goto LABEL_50;
  naturalAligment = WarBoardPartyListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (WarBoardPartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != WarBoardPartyListViewItem_TypeInfo )
  {
    goto LABEL_50;
  }
  dispCoroutine = v3->fields.dispCoroutine;
  v7 = *(_QWORD *)&linkItem[1].fields.selectNum;
  if ( dispCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)v3, dispCoroutine, 0);
    v3->fields.dispCoroutine = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.dispCoroutine, 0, v8, v9, v10, v11, v12, v13);
  }
  backSprite = (UnityEngine_Object_o *)v3->fields.backSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, dispCoroutine, v2);
  v15 = UnityEngine_Object__op_Equality(backSprite, 0, 0);
  methodPtr = (void (__fastcall *)(WarBoardPartyListViewObject_o *, __int64, const MethodInfo *))v3->klass->vtable._9_SetInput.methodPtr;
  v16 = v3->klass->vtable._9_SetInput.method;
  if ( v15 )
  {
    methodPtr(v3, 1, v16);
    return;
  }
  methodPtr(v3, 0, v16);
  this = (WarBoardPartyListViewObject_o *)v3->fields.backSprite;
  if ( !this )
    goto LABEL_50;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  GameObjectExtensions__SetLocalPosition(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  this = (WarBoardPartyListViewObject_o *)v3->fields.backSprite;
  if ( !this )
    goto LABEL_50;
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !byte_5969AE5 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  GameObjectExtensions__SetLocalScale(v19, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  v21 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_WORD *)(v21 + 309) & 1) == 0 )
    v21 = sub_224B908(v20);
  this = *(WarBoardPartyListViewObject_o **)(*(_QWORD *)(v21 + 192) + 16LL);
  if ( (*(_WORD *)((char *)this + 309) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_224B908(v20);
  v22 = **((_QWORD **)this + 23);
  if ( !v22 )
    goto LABEL_50;
  if ( !v7 )
    goto LABEL_50;
  v23 = *(WarBoardData_o **)(v22 + 440);
  if ( !v23 )
    goto LABEL_50;
  this = (WarBoardPartyListViewObject_o *)WarBoardData__GetPiece(
                                            *(WarBoardData_o **)(v22 + 440),
                                            0,
                                            0,
                                            *(_DWORD *)(v7 + 376),
                                            1,
                                            0);
  if ( !this )
    goto LABEL_50;
  this = (WarBoardPartyListViewObject_o *)WarBoardData__GetSquare(v23, (int32_t)this->fields.mCollider, 0);
  if ( !this )
    goto LABEL_50;
  this = (WarBoardPartyListViewObject_o *)this->fields.dragObjectPrefab;
  if ( !this )
    goto LABEL_50;
  this = (WarBoardPartyListViewObject_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_50;
  this = (WarBoardPartyListViewObject_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !this )
    goto LABEL_50;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
  *(float *)&v47 = position.fields.x;
  v24 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_WORD *)(v24 + 309) & 1) == 0 )
    v24 = sub_224B908(v47);
  this = *(WarBoardPartyListViewObject_o **)(*(_QWORD *)(v24 + 192) + 16LL);
  if ( (*(_WORD *)((char *)this + 309) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_224B908(v47);
  v25 = **((_QWORD **)this + 23);
  if ( !v25 )
    goto LABEL_50;
  v26 = *(_QWORD *)(v25 + 48);
  if ( !v26 )
    goto LABEL_50;
  this = *(WarBoardPartyListViewObject_o **)(v26 + 32);
  if ( !this )
    goto LABEL_50;
  v52 = UnityEngine_Camera__WorldToScreenPoint_83198204((UnityEngine_Camera_o *)this, position, 0);
  *(float *)&v48 = v52.fields.x;
  v27 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_WORD *)(v27 + 309) & 1) == 0 )
    v27 = sub_224B908(v48);
  this = *(WarBoardPartyListViewObject_o **)(*(_QWORD *)(v27 + 192) + 16LL);
  if ( (*(_WORD *)((char *)this + 309) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_224B908(v48);
  v28 = **((_QWORD **)this + 23);
  if ( !v28
    || (this = *(WarBoardPartyListViewObject_o **)(v28 + 56)) == 0
    || (v53 = UnityEngine_Camera__ScreenToWorldPoint_83198228((UnityEngine_Camera_o *)this, v52, 0),
        (this = (WarBoardPartyListViewObject_o *)v3->fields.backSprite) == 0)
    || (this = (WarBoardPartyListViewObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0 )
  {
LABEL_50:
    sub_2213CDC(this, method);
  }
  v54 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)this, v53, 0);
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !byte_5969AE5 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  }
  duration = *(_QWORD *)&static_fields->oneVector.fields.x;
  dispEasingType = v3->fields.dispEasingType;
  v35 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  v36 = *(float *)&v35;
  System_Action___ctor(v35, (Il2CppObject *)v3, Method_WarBoardPartyListViewObject_OnFinishedDisplayAnim__, 0);
  v55.fields.x = x;
  *(_QWORD *)&v50.fields.x = dispEasingType;
  v55.fields.y = y;
  v55.fields.z = z;
  v50.fields.z = v36;
  *(_QWORD *)&fromScale.fields.y = __PAIR64__(LODWORD(z), LODWORD(y));
  fromScale.fields.x = x;
  v40 = WarBoardPartyListViewObject__DsiplayAnim(v3, v54, v55, fromScale, v50, *(float *)&duration, v37, v38, v39);
  v3->fields.dispCoroutine = v40;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.dispCoroutine, (int32_t)v40, v41, v42, v43, v44, v45, v46);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)v3, v3->fields.dispCoroutine, 0);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *WarBoardPartyListViewObject__DsiplayAnim(
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
  float v9; // s11
  float v10; // s12
  float y; // s13
  __int64 v12; // x19
  float v13; // w20
  __int64 v15; // x22
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  float v29; // [xsp+10h] [xbp-80h]
  float z; // [xsp+18h] [xbp-78h]
  float x; // [xsp+1Ch] [xbp-74h]
  int v32; // [xsp+A8h] [xbp+18h]
  int v33; // [xsp+B0h] [xbp+20h]

  z = toPos.fields.z;
  x = fromPos.fields.x;
  v9 = toPos.fields.x;
  v10 = fromPos.fields.z;
  y = fromPos.fields.y;
  v29 = toPos.fields.y;
  v12 = *(_QWORD *)&toScale.fields.z;
  v13 = toScale.fields.x;
  if ( (byte_596E35B & 1) == 0 )
  {
    sub_2213A60(&WarBoardPartyListViewObject__DsiplayAnim_d__17_TypeInfo);
    byte_596E35B = 1;
  }
  v15 = sub_2213CCC(WarBoardPartyListViewObject__DsiplayAnim_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  *(_DWORD *)(v15 + 16) = 0;
  *(_QWORD *)(v15 + 88) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v15 + 88), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(float *)(v15 + 40) = y;
  *(float *)(v15 + 44) = v10;
  *(float *)(v15 + 48) = v9;
  *(float *)(v15 + 52) = v29;
  *(float *)(v15 + 64) = fromScale.fields.x;
  *(float *)(v15 + 68) = fromScale.fields.y;
  *(float *)(v15 + 56) = z;
  *(float *)(v15 + 72) = fromScale.fields.z;
  *(_QWORD *)(v15 + 76) = *(_QWORD *)&duration;
  *(_DWORD *)(v15 + 84) = v32;
  *(float *)(v15 + 60) = v13;
  *(_DWORD *)(v15 + 32) = v33;
  *(float *)(v15 + 36) = x;
  *(_QWORD *)(v15 + 96) = v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v15 + 96), v12, v22, v23, v24, v25, v26, v27);
  return (System_Collections_IEnumerator_o *)v15;
}


WarBoardPartyOrganizationListViewObject_o *WarBoardPartyListViewObject__FindMemberobj(
        WarBoardPartyListViewObject_o *this,
        PartyOrganizationListViewItem_o *item,
        const MethodInfo *method)
{
  WarBoardPartyListViewObject_o *v4; // x20
  struct WarBoardPartyOrganizationListViewObject_array *memberObjectList; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v7; // x22
  UnityEngine_Object_o *v8; // x20
  intptr_t m_CachedPtr; // x8

  v4 = this;
  if ( (byte_596E35D & 1) == 0 )
  {
    this = (WarBoardPartyListViewObject_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E35D = 1;
  }
  memberObjectList = v4->fields.memberObjectList;
  if ( !memberObjectList )
    return 0;
  max_length = memberObjectList->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)max_length )
      sub_2213CE4(this);
    v8 = (UnityEngine_Object_o *)memberObjectList->m_Items[v7];
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, method);
    this = (WarBoardPartyListViewObject_o *)UnityEngine_Object__op_Inequality(v8, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v8 || (m_CachedPtr = v8[1].fields.m_CachedPtr) == 0 || !item )
        sub_2213CDC(this, item);
      if ( *(_DWORD *)(m_CachedPtr + 376) == item->fields.warBoardPieceIndex )
        break;
    }
    LODWORD(max_length) = memberObjectList->max_length;
    if ( (__int64)++v7 >= (int)max_length )
      return 0;
  }
  return (WarBoardPartyOrganizationListViewObject_o *)v8;
}


WarBoardPartyListViewItem_o *WarBoardPartyListViewObject__GetItem(
        WarBoardPartyListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_596E35E & 1) == 0 )
  {
    sub_2213A60(&WarBoardPartyListViewItem_TypeInfo);
    byte_596E35E = 1;
  }
  linkItem = this->fields.linkItem;
  if ( !linkItem )
    return 0;
  naturalAligment = WarBoardPartyListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (WarBoardPartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == WarBoardPartyListViewItem_TypeInfo )
    return (WarBoardPartyListViewItem_o *)this->fields.linkItem;
  return 0;
}


void WarBoardPartyListViewObject__Init(
        WarBoardPartyListViewObject_o *this,
        int32_t initMode,
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *onTapMember,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x1
  __int64 naturalAligment; // x10
  _BOOL8 v9; // x1
  const MethodInfo *v10; // x2
  int32_t v11; // w8
  const MethodInfo *v12; // x1

  if ( (byte_596E357 & 1) == 0 )
  {
    sub_2213A60(&WarBoardPartyListViewItem_TypeInfo);
    byte_596E357 = 1;
  }
  linkItem = this->fields.linkItem;
  if ( linkItem )
  {
    naturalAligment = WarBoardPartyListViewItem_TypeInfo->_2.naturalAligment;
    if ( linkItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (WarBoardPartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] == WarBoardPartyListViewItem_TypeInfo )
    {
      WarBoardPartyListViewObject__CreateMemberObjects(
        this,
        (WarBoardPartyListViewItem_o *)linkItem,
        (const MethodInfo *)onTapMember);
      if ( initMode )
      {
        if ( initMode == 1 )
        {
          WarBoardPartyListViewObject__SetupMemberObjects(this, onTapMember, v10);
          WarBoardPartyListViewObject__Display(this, v12);
          v11 = 2;
          v9 = 0;
          goto LABEL_13;
        }
        if ( initMode != 2 )
        {
          v9 = this->fields.state == 3;
          goto LABEL_7;
        }
      }
      WarBoardPartyListViewObject__SetupMemberObjects(this, onTapMember, v10);
      v11 = 3;
      v9 = 1;
LABEL_13:
      this->fields.state = v11;
      goto LABEL_7;
    }
  }
  this->fields.state = 0;
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  v9 = 0;
LABEL_7:
  ((void (__fastcall *)(WarBoardPartyListViewObject_o *, _BOOL8, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    v9,
    this->klass->vtable._9_SetInput.method);
}


void WarBoardPartyListViewObject__InitItem(WarBoardPartyListViewObject_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
}


void WarBoardPartyListViewObject__OnEnable(WarBoardPartyListViewObject_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *dispCoroutine; // x1

  dispCoroutine = this->fields.dispCoroutine;
  if ( dispCoroutine )
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, dispCoroutine, 0);
}


void WarBoardPartyListViewObject__OnFinishedDisplayAnim(WarBoardPartyListViewObject_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(WarBoardPartyListViewObject_o *, __int64, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    1,
    this->klass->vtable._9_SetInput.method);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPartyListViewObject__SetInput(
        WarBoardPartyListViewObject_o *this,
        bool isEnableInput,
        const MethodInfo *method)
{
  WarBoardPartyListViewObject_o *v4; // x20
  struct WarBoardPartyOrganizationListViewObject_array *memberObjectList; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v7; // x21
  bool v8; // w23
  WarBoardPartyOrganizationListViewObject_o *v9; // x19

  v4 = this;
  if ( (byte_596E35F & 1) == 0 )
  {
    this = (WarBoardPartyListViewObject_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E35F = 1;
  }
  memberObjectList = v4->fields.memberObjectList;
  if ( memberObjectList )
  {
    max_length = memberObjectList->max_length;
    if ( (int)max_length >= 1 )
    {
      v7 = 0;
      v8 = isEnableInput;
      do
      {
        if ( v7 >= (unsigned int)max_length )
          sub_2213CE4(this);
        v9 = memberObjectList->m_Items[v7];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isEnableInput, method);
        this = (WarBoardPartyListViewObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v9 )
            sub_2213CDC(this, isEnableInput);
          v9->fields.isEnableTouch = v8;
        }
        LODWORD(max_length) = memberObjectList->max_length;
        ++v7;
      }
      while ( (__int64)v7 < (int)max_length );
    }
  }
}


void WarBoardPartyListViewObject__SetItem(
        WarBoardPartyListViewObject_o *this,
        ListViewItem_o *item,
        ListViewItemSeed_o *seed,
        const MethodInfo *method)
{
  ListViewObject__SetItem_50850568((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void WarBoardPartyListViewObject__SetItem_45139552(
        WarBoardPartyListViewObject_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ListViewObject__SetItem((ListViewObject_o *)this, item, 0);
  this->fields.state = 0;
}


void WarBoardPartyListViewObject__SetupMemberObjects(
        WarBoardPartyListViewObject_o *this,
        WarBoardPartyOrganizationMenu_OnTapPartyMemberEvent_o *onTapMember,
        const MethodInfo *method)
{
  WarBoardPartyListViewObject_o *v4; // x20
  PartyOrganizationListViewItem_o **linkItem; // x22
  __int64 naturalAligment; // x10
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *Memberobj; // x21
  __int64 v10; // x2
  struct WarBoardPartyOrganizationListViewObject_array *memberObjectList; // x8
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  MissionNaviTransitionBoardItem_o *p_focusObj; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct ListViewManager_o *v25; // x1
  const MethodInfo *v26; // x2

  v4 = this;
  if ( (byte_596E359 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (WarBoardPartyListViewObject_o *)sub_2213A60(&WarBoardPartyListViewItem_TypeInfo);
    byte_596E359 = 1;
  }
  linkItem = (PartyOrganizationListViewItem_o **)v4->fields.linkItem;
  if ( !linkItem )
    goto LABEL_19;
  naturalAligment = WarBoardPartyListViewItem_TypeInfo->_2.naturalAligment;
  if ( LOBYTE((*linkItem)->fields.eventUpValInfo) < (unsigned int)naturalAligment
    || *(WarBoardPartyListViewItem_c **)(*(_QWORD *)&(*linkItem)->fields.atk + 8 * naturalAligment - 8) != WarBoardPartyListViewItem_TypeInfo )
  {
    goto LABEL_19;
  }
  Memberobj = (UnityEngine_Object_o *)WarBoardPartyListViewObject__FindMemberobj(v4, linkItem[17], method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  this = (WarBoardPartyListViewObject_o *)UnityEngine_Object__op_Equality(Memberobj, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    memberObjectList = v4->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_19;
    if ( !LODWORD(memberObjectList->max_length) )
      sub_2213CE4(this);
    Memberobj = (UnityEngine_Object_o *)memberObjectList->m_Items[0];
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, onTapMember, v10);
  if ( UnityEngine_Object__op_Inequality(Memberobj, 0, 0) )
  {
    v4->fields.focusObj = (struct WarBoardPartyOrganizationListViewObject_o *)Memberobj;
    p_focusObj = (MissionNaviTransitionBoardItem_o *)&v4->fields.focusObj;
    sub_2213A04(p_focusObj, (int32_t)Memberobj, v12, v13, v14, v15, v16, v17);
    this = (WarBoardPartyListViewObject_o *)p_focusObj->klass;
    if ( p_focusObj->klass )
    {
      v25 = (struct ListViewManager_o *)linkItem[17];
      this->fields.manager = v25;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.manager, (int32_t)v25, v19, v20, v21, v22, v23, v24);
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
    sub_2213CDC(this, onTapMember);
  }
}


void WarBoardPartyListViewObject__DsiplayAnim_d__17___ctor(
        WarBoardPartyListViewObject__DsiplayAnim_d__17_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WarBoardPartyListViewObject__DsiplayAnim_d__17__MoveNext(
        WarBoardPartyListViewObject__DsiplayAnim_d__17_o *this,
        const MethodInfo *method)
{
  WarBoardPartyListViewObject__DsiplayAnim_d__17_o *v2; // x19
  int32_t _1__state; // w8
  struct WarBoardPartyListViewObject_o *_4__this; // x20
  float timer_5__2; // s8
  float v6; // s6
  float v7; // s2
  int32_t easingType; // w0
  float v9; // s1
  float v10; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v12; // x0
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v21; // x1
  __int64 v22; // x2
  Il2CppObject *Component_object; // x20
  UnityEngine_Vector3_o v24; // 0:kr00_12.12
  UnityEngine_Vector3_o v25; // 0:kr14_12.12
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s3.4,4:s4.4,8:s5.4

  v2 = this;
  if ( (byte_596E361 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E361 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    timer_5__2 = v2->fields._timer_5__2;
  }
  else
  {
    if ( _1__state )
      return 0;
    timer_5__2 = 0.0;
    v2->fields._timer_5__2 = 0.0;
  }
  v2->fields.__1__state = -1;
  if ( timer_5__2 < v2->fields.duration )
  {
    v6 = timer_5__2 + UnityEngine_Time__get_deltaTime(0);
    v26.fields.x = v2->fields.fromPos.fields.x;
    v7 = 1.0;
    v27.fields.z = v2->fields.toPos.fields.z;
    easingType = v2->fields.easingType;
    v9 = v6 / v2->fields.duration;
    v2->fields._timer_5__2 = v6;
    if ( v9 <= 1.0 )
      v7 = v9;
    if ( v9 >= 0.0 )
      v10 = v7;
    else
      v10 = 0.0;
    v26.fields.y = v2->fields.fromPos.fields.y;
    v26.fields.z = v2->fields.fromPos.fields.z;
    v27.fields.x = v2->fields.toPos.fields.x;
    v27.fields.y = v2->fields.toPos.fields.y;
    v24 = Easing__Func(v26, v27, v10, easingType, 0);
    v25 = Easing__Func(v2->fields.fromScale, v2->fields.toScale, v10, v2->fields.easingType, 0);
    if ( _4__this )
    {
      this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)_4__this->fields.backSprite;
      if ( this )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPosition(gameObject, v24, 0);
        this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)_4__this->fields.backSprite;
        if ( this )
        {
          v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          GameObjectExtensions__SetLocalScale(v12, v25, 0);
          v2->fields.__2__current = 0;
          p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
          sub_2213A04(p__2__current, 0, v14, v15, v16, v17, v18, v19);
          p__2__current[-1].fields._BoardType_k__BackingField = 1;
          return 1;
        }
      }
    }
LABEL_26:
    sub_2213CDC(this, method);
  }
  if ( !_4__this )
    goto LABEL_26;
  this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)_4__this->fields.backSprite;
  if ( !this )
    goto LABEL_26;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
  this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)UnityEngine_Object__op_Inequality(
                                                               (UnityEngine_Object_o *)Component_object,
                                                               0,
                                                               0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_26;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 1, 0);
  }
  ActionExtensions__Call(v2->fields.onFinished, 0);
  return 0;
}


Il2CppObject *WarBoardPartyListViewObject__DsiplayAnim_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardPartyListViewObject__DsiplayAnim_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardPartyListViewObject__DsiplayAnim_d__17__System_Collections_IEnumerator_Reset(
        WarBoardPartyListViewObject__DsiplayAnim_d__17_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_WarBoardPartyListViewObject__DsiplayAnim_d__17_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *WarBoardPartyListViewObject__DsiplayAnim_d__17__System_Collections_IEnumerator_get_Current(
        WarBoardPartyListViewObject__DsiplayAnim_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void WarBoardPartyListViewObject__DsiplayAnim_d__17__System_IDisposable_Dispose(
        WarBoardPartyListViewObject__DsiplayAnim_d__17_o *this,
        const MethodInfo *method)
{
  ;
}