void WarBoardPartyListViewObject___ctor(WarBoardPartyListViewObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ListViewObject_c *v4; // x0

  if ( (byte_5936206 & 1) == 0 )
  {
    sub_21FFC50(&ListViewObject_TypeInfo);
    byte_5936206 = 1;
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

  if ( (byte_5936202 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_WarBoardPartyOrganizationListViewObject___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5936202 = 1;
  }
  srcMemberObj = (Il2CppObject *)this->fields.srcMemberObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, method);
  transform = (char *)UnityEngine_Object__Instantiate_object_(
                        srcMemberObj,
                        (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  UnityEngine_Transform__SetParent_83279140(v10, (UnityEngine_Transform_o *)transform, 0, 0);
  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  GameObjectExtensions__SetLocalPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_5931945 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  GameObjectExtensions__SetLocalScale(v8, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  transform = (char *)UnityEngine_GameObject__GetComponent_object_(
                        v8,
                        (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_WarBoardPartyOrganizationListViewObject___);
  if ( !transform )
LABEL_14:
    sub_21FFECC(transform, v7);
  v17 = (WarBoardPartyOrganizationListViewObject_o *)transform;
  *((_QWORD *)transform + 5) = item;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(transform + 40), (int32_t)item, v11, v12, v13, v14, v15, v16);
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

  if ( (byte_59361FE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__TypeInfo);
    byte_59361FE = 1;
  }
  if ( partyItem && !this->fields.memberObjectList )
  {
    v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject___ctor__);
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
      sub_21FFECC(MemberObj, v8);
    }
    size = v5->fields._size;
    v18 = MemberObj;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        MemberObj,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v19 = &items->obj.klass + size;
      v5->fields._size = size + 1;
      v19[4] = (Il2CppClass *)v18;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v18, v9, v10, v11, v12, v13, v14);
    }
    v20 = System_Collections_Generic_List_object___ToArray(
            v5,
            (const MethodInfo_445164C *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__ToArray__);
    this->fields.memberObjectList = (struct WarBoardPartyOrganizationListViewObject_array *)v20;
    sub_21FFBF4(
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


// local variable allocation has failed, the output may be wrong!
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
  void *image; // x8
  WarBoardData_o *v23; // x22
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v27; // x0
  _QWORD *v28; // x8
  __int64 v29; // x8
  float v30; // s8
  float v31; // s9
  float v32; // s10
  __int64 v33; // x0
  void *v34; // x8
  float v35; // s8
  float v36; // s9
  float v37; // s10
  float v38; // s8
  float v39; // s9
  float v40; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v42; // s11
  float v43; // s12
  float v44; // s13
  __int64 duration; // x23
  unsigned int dispEasingType; // w21
  System_Action_o *v47; // x0
  float v48; // w22
  int32_t v49; // w3
  System_Action_o *v50; // x4
  const MethodInfo *v51; // x5
  System_Collections_IEnumerator_o *v52; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  UnityEngine_Vector3_o fromScale; // [xsp+0h] [xbp-C0h]
  UnityEngine_Vector3_o v60; // 0:x1.12
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s3.4,4:s4.4,8:s5.4

  v3 = this;
  if ( (byte_5936200 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_21FFC50(&WarBoardPartyListViewItem_TypeInfo);
    this = (WarBoardPartyListViewObject_o *)sub_21FFC50(&Method_WarBoardPartyListViewObject_OnFinishedDisplayAnim__);
    byte_5936200 = 1;
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
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields.dispCoroutine, 0, v8, v9, v10, v11, v12, v13);
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
  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  GameObjectExtensions__SetLocalPosition(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  this = (WarBoardPartyListViewObject_o *)v3->fields.backSprite;
  if ( !this )
    goto LABEL_50;
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !byte_5931945 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  GameObjectExtensions__SetLocalScale(v19, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  v21 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_WORD *)(v21 + 309) & 1) == 0 )
    v21 = sub_2237AF8(v20);
  this = *(WarBoardPartyListViewObject_o **)(*(_QWORD *)(v21 + 192) + 16LL);
  if ( (*(_WORD *)((_BYTE *)&this[1].fields.srcMemberObj + 5) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_2237AF8(v20);
  image = this[1].klass->_1.image;
  if ( !image )
    goto LABEL_50;
  if ( !v7 )
    goto LABEL_50;
  v23 = (WarBoardData_o *)*((_QWORD *)image + 55);
  if ( !v23 )
    goto LABEL_50;
  this = (WarBoardPartyListViewObject_o *)WarBoardData__GetPiece(
                                            *((WarBoardData_o **)image + 55),
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
  x = position.fields.x;
  y = position.fields.y;
  z = position.fields.z;
  v27 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_WORD *)(v27 + 309) & 1) == 0 )
    v27 = sub_2237AF8(*(long double *)&position.fields.x);
  this = *(WarBoardPartyListViewObject_o **)(*(_QWORD *)(v27 + 192) + 16LL);
  if ( (*(_WORD *)((_BYTE *)&this[1].fields.srcMemberObj + 5) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_2237AF8(*(long double *)&position.fields.x);
  v28 = this[1].klass->_1.image;
  if ( !v28 )
    goto LABEL_50;
  v29 = v28[6];
  if ( !v29 )
    goto LABEL_50;
  this = *(WarBoardPartyListViewObject_o **)(v29 + 32);
  if ( !this )
    goto LABEL_50;
  v62.fields.x = x;
  v62.fields.y = y;
  v62.fields.z = z;
  v63 = UnityEngine_Camera__WorldToScreenPoint_82984900((UnityEngine_Camera_o *)this, v62, 0);
  v30 = v63.fields.x;
  v31 = v63.fields.y;
  v32 = v63.fields.z;
  v33 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_WORD *)(v33 + 309) & 1) == 0 )
    v33 = sub_2237AF8(*(long double *)&v63.fields.x);
  this = *(WarBoardPartyListViewObject_o **)(*(_QWORD *)(v33 + 192) + 16LL);
  if ( (*(_WORD *)((_BYTE *)&this[1].fields.srcMemberObj + 5) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_2237AF8(*(long double *)&v63.fields.x);
  v34 = this[1].klass->_1.image;
  if ( !v34 )
    goto LABEL_50;
  this = (WarBoardPartyListViewObject_o *)*((_QWORD *)v34 + 7);
  if ( !this )
    goto LABEL_50;
  v64.fields.x = v30;
  v64.fields.y = v31;
  v64.fields.z = v32;
  v65 = UnityEngine_Camera__ScreenToWorldPoint_82984924((UnityEngine_Camera_o *)this, v64, 0);
  this = (WarBoardPartyListViewObject_o *)v3->fields.backSprite;
  if ( !this
    || (v35 = v65.fields.x,
        v36 = v65.fields.y,
        v37 = v65.fields.z,
        (this = (WarBoardPartyListViewObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0)) == 0) )
  {
LABEL_50:
    sub_21FFECC(this, method);
  }
  v66.fields.x = v35;
  v66.fields.y = v36;
  v66.fields.z = v37;
  v67 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)this, v66, 0);
  v38 = v67.fields.x;
  v39 = v67.fields.y;
  v40 = v67.fields.z;
  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v42 = static_fields->zeroVector.fields.x;
  v43 = static_fields->zeroVector.fields.y;
  v44 = static_fields->zeroVector.fields.z;
  if ( !byte_5931945 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  }
  duration = *(_QWORD *)&static_fields->oneVector.fields.x;
  dispEasingType = v3->fields.dispEasingType;
  v47 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  v48 = *(float *)&v47;
  System_Action___ctor(v47, (Il2CppObject *)v3, Method_WarBoardPartyListViewObject_OnFinishedDisplayAnim__, 0);
  v68.fields.x = v38;
  v68.fields.y = v39;
  v68.fields.z = v40;
  v69.fields.x = v42;
  *(_QWORD *)&v60.fields.x = dispEasingType;
  v69.fields.y = v43;
  v69.fields.z = v44;
  v60.fields.z = v48;
  *(_QWORD *)&fromScale.fields.y = __PAIR64__(LODWORD(v44), LODWORD(v43));
  fromScale.fields.x = v42;
  v52 = WarBoardPartyListViewObject__DsiplayAnim(v3, v68, v69, fromScale, v60, *(float *)&duration, v49, v50, v51);
  v3->fields.dispCoroutine = v52;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields.dispCoroutine, (int32_t)v52, v53, v54, v55, v56, v57, v58);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)v3, v3->fields.dispCoroutine, 0);
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
  if ( (byte_5936201 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardPartyListViewObject__DsiplayAnim_d__17_TypeInfo);
    byte_5936201 = 1;
  }
  v15 = sub_21FFEBC(WarBoardPartyListViewObject__DsiplayAnim_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  *(_DWORD *)(v15 + 16) = 0;
  *(_QWORD *)(v15 + 88) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 88), (int32_t)this, v16, v17, v18, v19, v20, v21);
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 96), v12, v22, v23, v24, v25, v26, v27);
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
  if ( (byte_5936203 & 1) == 0 )
  {
    this = (WarBoardPartyListViewObject_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5936203 = 1;
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
      sub_21FFED4(this);
    v8 = (UnityEngine_Object_o *)memberObjectList->m_Items[v7];
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, method);
    this = (WarBoardPartyListViewObject_o *)UnityEngine_Object__op_Inequality(v8, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v8 || (m_CachedPtr = v8[1].fields.m_CachedPtr) == 0 || !item )
        sub_21FFECC(this, item);
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

  if ( (byte_5936204 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardPartyListViewItem_TypeInfo);
    byte_5936204 = 1;
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

  if ( (byte_59361FD & 1) == 0 )
  {
    sub_21FFC50(&WarBoardPartyListViewItem_TypeInfo);
    byte_59361FD = 1;
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
    UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, dispCoroutine, 0);
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
  if ( (byte_5936205 & 1) == 0 )
  {
    this = (WarBoardPartyListViewObject_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5936205 = 1;
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
          sub_21FFED4(this);
        v9 = memberObjectList->m_Items[v7];
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isEnableInput, method);
        this = (WarBoardPartyListViewObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v9 )
            sub_21FFECC(this, isEnableInput);
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
  ListViewObject__SetItem_50780416((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void WarBoardPartyListViewObject__SetItem_45115288(
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
  if ( (byte_59361FF & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    this = (WarBoardPartyListViewObject_o *)sub_21FFC50(&WarBoardPartyListViewItem_TypeInfo);
    byte_59361FF = 1;
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
      sub_21FFED4(this);
    Memberobj = (UnityEngine_Object_o *)memberObjectList->m_Items[0];
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, onTapMember, v10);
  if ( UnityEngine_Object__op_Inequality(Memberobj, 0, 0) )
  {
    v4->fields.focusObj = (struct WarBoardPartyOrganizationListViewObject_o *)Memberobj;
    p_focusObj = (MissionNaviTransitionBoardItem_o *)&v4->fields.focusObj;
    sub_21FFBF4(p_focusObj, (int32_t)Memberobj, v12, v13, v14, v15, v16, v17);
    this = (WarBoardPartyListViewObject_o *)p_focusObj->klass;
    if ( p_focusObj->klass )
    {
      v25 = (struct ListViewManager_o *)linkItem[17];
      this->fields.manager = v25;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.manager, (int32_t)v25, v19, v20, v21, v22, v23, v24);
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
    sub_21FFECC(this, onTapMember);
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


// local variable allocation has failed, the output may be wrong!
bool WarBoardPartyListViewObject__DsiplayAnim_d__17__MoveNext(
        WarBoardPartyListViewObject__DsiplayAnim_d__17_o *this,
        const MethodInfo *method)
{
  WarBoardPartyListViewObject__DsiplayAnim_d__17_o *v2; // x19
  int32_t _1__state; // w8
  struct WarBoardPartyListViewObject_o *_4__this; // x20
  float timer_5__2; // s8
  float v6; // s6
  float x; // s0 OVERLAPPED
  float v8; // s2
  float z; // s5 OVERLAPPED
  int32_t easingType; // w0
  float v11; // s1
  float v12; // s10
  float y; // s1
  float v14; // s2
  float v15; // s3
  float v16; // s4
  float v17; // s13
  float v18; // s8
  float v19; // s9
  float v20; // s10
  float v21; // s11
  float v22; // s12
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v24; // x0
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  bool result; // w0
  __int64 v33; // x1
  __int64 v34; // x2
  Il2CppObject *Component_object; // x20
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_5936207 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5936207 = 1;
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
    x = v2->fields.fromPos.fields.x;
    v8 = 1.0;
    z = v2->fields.toPos.fields.z;
    easingType = v2->fields.easingType;
    v11 = v6 / v2->fields.duration;
    v2->fields._timer_5__2 = v6;
    if ( v11 <= 1.0 )
      v8 = v11;
    if ( v11 >= 0.0 )
      v12 = v8;
    else
      v12 = 0.0;
    y = v2->fields.fromPos.fields.y;
    v14 = v2->fields.fromPos.fields.z;
    v15 = v2->fields.toPos.fields.x;
    v16 = v2->fields.toPos.fields.y;
    v36 = Easing__Func(*(UnityEngine_Vector3_o *)&x, *(UnityEngine_Vector3_o *)(&z - 2), v12, easingType, 0);
    v17 = v36.fields.z;
    v18 = v36.fields.x;
    v19 = v36.fields.y;
    v37 = Easing__Func(v2->fields.fromScale, v2->fields.toScale, v12, v2->fields.easingType, 0);
    if ( _4__this )
    {
      this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)_4__this->fields.backSprite;
      if ( this )
      {
        v20 = v37.fields.x;
        v21 = v37.fields.y;
        v22 = v37.fields.z;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        v38.fields.x = v18;
        v38.fields.y = v19;
        v38.fields.z = v17;
        GameObjectExtensions__SetLocalPosition(gameObject, v38, 0);
        this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)_4__this->fields.backSprite;
        if ( this )
        {
          v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          v39.fields.x = v20;
          v39.fields.y = v21;
          v39.fields.z = v22;
          GameObjectExtensions__SetLocalScale(v24, v39, 0);
          v2->fields.__2__current = 0;
          p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
          sub_21FFBF4(p__2__current, 0, v26, v27, v28, v29, v30, v31);
          result = 1;
          p__2__current[-1].fields._BoardType_k__BackingField = 1;
          return result;
        }
      }
    }
LABEL_26:
    sub_21FFECC(this, method);
  }
  if ( !_4__this )
    goto LABEL_26;
  this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)_4__this->fields.backSprite;
  if ( !this )
    goto LABEL_26;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33, v34);
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_WarBoardPartyListViewObject__DsiplayAnim_d__17_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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