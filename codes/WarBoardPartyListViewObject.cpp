void WarBoardPartyListViewObject___ctor(WarBoardPartyListViewObject_o *this, const MethodInfo *method)
{
  if ( (byte_4CC5005 & 1) == 0 )
  {
    sub_1C713B0(&ListViewObject_TypeInfo);
    byte_4CC5005 = 1;
  }
  *(_QWORD *)&this->fields.dispDuration = 0xF3E99999ALL;
  if ( !ListViewObject_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ListViewObject_TypeInfo);
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
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  WarBoardPartyOrganizationListViewObject_o *v17; // x20

  if ( (byte_4CC5001 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_WarBoardPartyOrganizationListViewObject___);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC5001 = 1;
  }
  srcMemberObj = (Il2CppObject *)this->fields.srcMemberObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (char *)UnityEngine_Object__Instantiate_object_(
                        srcMemberObj,
                        (const MethodInfo_31D7CB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  UnityEngine_Transform__SetParent_71748048(v10, (UnityEngine_Transform_o *)transform, 0, 0);
  if ( !byte_4CC0D09 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  GameObjectExtensions__SetLocalPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_4CC0D0E )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D0E = 1;
  }
  GameObjectExtensions__SetLocalScale(v8, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  transform = (char *)UnityEngine_GameObject__GetComponent_object_(
                        v8,
                        (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardPartyOrganizationListViewObject___);
  if ( !transform )
LABEL_14:
    sub_1C71608(transform, v7);
  v17 = (WarBoardPartyOrganizationListViewObject_o *)transform;
  *((_QWORD *)transform + 5) = item;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(transform + 40), (int32_t)item, v11, v12, v13, v14, v15, v16);
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppObject *v18; // x1
  Il2CppClass **v19; // x0
  System_Object_array *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7

  if ( (byte_4CC4FFD & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__TypeInfo);
    byte_4CC4FFD = 1;
  }
  if ( partyItem && !this->fields.memberObjectList )
  {
    v5 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject___ctor__);
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
      sub_1C71608(MemberObj, v8);
    }
    size = v5->fields._size;
    v18 = MemberObj;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        MemberObj,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v19 = &items->obj.klass + size;
      v5->fields._size = size + 1;
      v19[4] = (Il2CppClass *)v18;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v18, v9, v10, v11, v12, v13, v14);
    }
    v20 = System_Collections_Generic_List_object___ToArray(
            v5,
            (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_WarBoardPartyOrganizationListViewObject__ToArray__);
    this->fields.memberObjectList = (struct WarBoardPartyOrganizationListViewObject_array *)v20;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.memberObjectList,
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
  WarBoardPartyListViewObject_o *v2; // x19
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  __int64 v5; // x25
  System_Collections_IEnumerator_o *dispCoroutine; // x1
  GrandQuestFolderBoardItem_o *p_dispCoroutine; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
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
  float v42; // s12
  float v43; // s13
  float v44; // s11
  __int64 duration; // x23
  unsigned int dispEasingType; // w21
  System_Action_o *v47; // x0
  float v48; // w22
  int32_t v49; // w3
  System_Action_o *v50; // x4
  const MethodInfo *v51; // x5
  System_Collections_IEnumerator_o *v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
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

  v2 = this;
  if ( (byte_4CC4FFF & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__getInstance__);
    sub_1C713B0(&WarBoardPartyListViewItem_TypeInfo);
    this = (WarBoardPartyListViewObject_o *)sub_1C713B0(&Method_WarBoardPartyListViewObject_OnFinishedDisplayAnim__);
    byte_4CC4FFF = 1;
  }
  linkItem = v2->fields.linkItem;
  if ( !linkItem )
    goto LABEL_50;
  naturalAligment = WarBoardPartyListViewItem_TypeInfo->_2.naturalAligment;
  if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (WarBoardPartyListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != WarBoardPartyListViewItem_TypeInfo )
  {
    goto LABEL_50;
  }
  v5 = *(_QWORD *)&linkItem[1].fields.selectNum;
  p_dispCoroutine = (GrandQuestFolderBoardItem_o *)&v2->fields.dispCoroutine;
  dispCoroutine = v2->fields.dispCoroutine;
  if ( dispCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)v2, dispCoroutine, 0);
    v2->fields.dispCoroutine = 0;
    sub_1C71354(p_dispCoroutine, 0, v8, v9, v10, v11, v12, v13);
  }
  backSprite = (UnityEngine_Object_o *)v2->fields.backSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v15 = UnityEngine_Object__op_Equality(backSprite, 0, 0);
  methodPtr = (void (__fastcall *)(WarBoardPartyListViewObject_o *, __int64, const MethodInfo *))v2->klass->vtable._9_SetInput.methodPtr;
  v16 = v2->klass->vtable._9_SetInput.method;
  if ( v15 )
  {
    methodPtr(v2, 1, v16);
    return;
  }
  methodPtr(v2, 0, v16);
  this = (WarBoardPartyListViewObject_o *)v2->fields.backSprite;
  if ( !this )
    goto LABEL_50;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !byte_4CC0D09 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  GameObjectExtensions__SetLocalPosition(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  this = (WarBoardPartyListViewObject_o *)v2->fields.backSprite;
  if ( !this )
    goto LABEL_50;
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !byte_4CC0D0E )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D0E = 1;
  }
  GameObjectExtensions__SetLocalScale(v19, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  v21 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1C47444(v20);
  this = *(WarBoardPartyListViewObject_o **)(*(_QWORD *)(v21 + 192) + 16LL);
  if ( (BYTE5(this[1].fields.srcMemberObj) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_1C47444(v20);
  image = this[1].klass->_1.image;
  if ( !image )
    goto LABEL_50;
  if ( !v5 )
    goto LABEL_50;
  v23 = (WarBoardData_o *)*((_QWORD *)image + 55);
  if ( !v23 )
    goto LABEL_50;
  this = (WarBoardPartyListViewObject_o *)WarBoardData__GetPiece(
                                            *((WarBoardData_o **)image + 55),
                                            0,
                                            0,
                                            *(_DWORD *)(v5 + 384),
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
  if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
    v27 = sub_1C47444(*(long double *)&position.fields.x);
  this = *(WarBoardPartyListViewObject_o **)(*(_QWORD *)(v27 + 192) + 16LL);
  if ( (BYTE5(this[1].fields.srcMemberObj) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_1C47444(*(long double *)&position.fields.x);
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
  v63 = UnityEngine_Camera__WorldToScreenPoint_71529180((UnityEngine_Camera_o *)this, v62, 0);
  v30 = v63.fields.x;
  v31 = v63.fields.y;
  v32 = v63.fields.z;
  v33 = *((_QWORD *)Method_SingletonMonoBehaviour_WarBoardManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v33 + 309) & 1) == 0 )
    v33 = sub_1C47444(*(long double *)&v63.fields.x);
  this = *(WarBoardPartyListViewObject_o **)(*(_QWORD *)(v33 + 192) + 16LL);
  if ( (BYTE5(this[1].fields.srcMemberObj) & 1) == 0 )
    this = (WarBoardPartyListViewObject_o *)sub_1C47444(*(long double *)&v63.fields.x);
  v34 = this[1].klass->_1.image;
  if ( !v34 )
    goto LABEL_50;
  this = (WarBoardPartyListViewObject_o *)*((_QWORD *)v34 + 7);
  if ( !this )
    goto LABEL_50;
  v64.fields.x = v30;
  v64.fields.y = v31;
  v64.fields.z = v32;
  v65 = UnityEngine_Camera__ScreenToWorldPoint_71529204((UnityEngine_Camera_o *)this, v64, 0);
  this = (WarBoardPartyListViewObject_o *)v2->fields.backSprite;
  if ( !this
    || (v35 = v65.fields.x,
        v36 = v65.fields.y,
        v37 = v65.fields.z,
        (this = (WarBoardPartyListViewObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0)) == 0) )
  {
LABEL_50:
    sub_1C71608(this, method);
  }
  v66.fields.x = v35;
  v66.fields.y = v36;
  v66.fields.z = v37;
  v67 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)this, v66, 0);
  v38 = v67.fields.x;
  v39 = v67.fields.y;
  v40 = v67.fields.z;
  if ( !byte_4CC0D09 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v43 = static_fields->zeroVector.fields.x;
  v42 = static_fields->zeroVector.fields.y;
  v44 = static_fields->zeroVector.fields.z;
  if ( !byte_4CC0D0E )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D0E = 1;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  }
  duration = *(_QWORD *)&static_fields->oneVector.fields.x;
  dispEasingType = v2->fields.dispEasingType;
  v47 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  v48 = *(float *)&v47;
  System_Action___ctor(v47, (Il2CppObject *)v2, Method_WarBoardPartyListViewObject_OnFinishedDisplayAnim__, 0);
  v68.fields.x = v38;
  v68.fields.y = v39;
  v68.fields.z = v40;
  v69.fields.x = v43;
  v69.fields.y = v42;
  v69.fields.z = v44;
  *(_QWORD *)&v60.fields.x = dispEasingType;
  v60.fields.z = v48;
  *(_QWORD *)&fromScale.fields.y = __PAIR64__(LODWORD(v44), LODWORD(v42));
  fromScale.fields.x = v43;
  v52 = WarBoardPartyListViewObject__DsiplayAnim(v2, v68, v69, fromScale, v60, *(float *)&duration, v49, v50, v51);
  v2->fields.dispCoroutine = v52;
  sub_1C71354(p_dispCoroutine, (int32_t)v52, v53, v54, v55, v56, v57, v58);
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)v2, v2->fields.dispCoroutine, 0);
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
  __int64 v9; // x19
  float v10; // w20
  float v11; // s11
  float v12; // s12
  float v13; // s13
  __int64 v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
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
  if ( (byte_4CC5000 & 1) == 0 )
  {
    sub_1C713B0(&WarBoardPartyListViewObject__DsiplayAnim_d__17_TypeInfo);
    byte_4CC5000 = 1;
  }
  v15 = sub_1C715FC(WarBoardPartyListViewObject__DsiplayAnim_d__17_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  *(_DWORD *)(v15 + 16) = 0;
  *(_QWORD *)(v15 + 88) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v15 + 88), (int32_t)this, v16, v17, v18, v19, v20, v21);
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
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v15 + 96), v9, v22, v23, v24, v25, v26, v27);
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
  UnityEngine_Object_o *v7; // x20
  unsigned __int64 v8; // x22
  __int64 v9; // x1
  intptr_t m_CachedPtr; // x8

  v4 = this;
  if ( (byte_4CC5002 & 1) == 0 )
  {
    this = (WarBoardPartyListViewObject_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC5002 = 1;
  }
  memberObjectList = v4->fields.memberObjectList;
  if ( !memberObjectList )
    return 0;
  max_length = memberObjectList->max_length;
  v7 = 0;
  if ( max_length && (int)max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C71610(this);
      v7 = (UnityEngine_Object_o *)memberObjectList->m_Items[v8];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (WarBoardPartyListViewObject_o *)UnityEngine_Object__op_Inequality(v7, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v7 || (m_CachedPtr = v7[1].fields.m_CachedPtr) == 0 || !item )
          sub_1C71608(this, v9);
        if ( *(_DWORD *)(m_CachedPtr + 384) == item->fields.warBoardPieceIndex )
          break;
      }
      LODWORD(max_length) = memberObjectList->max_length;
      if ( (__int64)++v8 >= (int)max_length )
        return 0;
    }
  }
  return (WarBoardPartyOrganizationListViewObject_o *)v7;
}


WarBoardPartyListViewItem_o *WarBoardPartyListViewObject__GetItem(
        WarBoardPartyListViewObject_o *this,
        const MethodInfo *method)
{
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4CC5003 & 1) == 0 )
  {
    sub_1C713B0(&WarBoardPartyListViewItem_TypeInfo);
    byte_4CC5003 = 1;
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
  WarBoardPartyListViewObject_c *klass; // x8
  WarBoardPartyListViewObject_o *v10; // x0
  _BOOL8 v11; // x1
  const MethodInfo *v12; // x2
  int32_t v13; // w8
  const MethodInfo *v14; // x1

  if ( (byte_4CC4FFC & 1) == 0 )
  {
    sub_1C713B0(&WarBoardPartyListViewItem_TypeInfo);
    byte_4CC4FFC = 1;
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
          WarBoardPartyListViewObject__SetupMemberObjects(this, onTapMember, v12);
          WarBoardPartyListViewObject__Display(this, v14);
          v13 = 2;
          v11 = 0;
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
      v11 = 1;
LABEL_13:
      this->fields.state = v13;
LABEL_15:
      klass = this->klass;
      v10 = this;
      goto LABEL_7;
    }
  }
  this->fields.state = 0;
  ListViewObject__SetVisible((ListViewObject_o *)this, 0, 0);
  klass = this->klass;
  v10 = this;
  v11 = 0;
LABEL_7:
  ((void (__fastcall *)(WarBoardPartyListViewObject_o *, _BOOL8, const MethodInfo *))klass->vtable._9_SetInput.methodPtr)(
    v10,
    v11,
    klass->vtable._9_SetInput.method);
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
    UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, dispCoroutine, 0);
}


void WarBoardPartyListViewObject__OnFinishedDisplayAnim(WarBoardPartyListViewObject_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(WarBoardPartyListViewObject_o *, __int64, const MethodInfo *))this->klass->vtable._9_SetInput.methodPtr)(
    this,
    1,
    this->klass->vtable._9_SetInput.method);
}


void WarBoardPartyListViewObject__SetInput(
        WarBoardPartyListViewObject_o *this,
        bool isEnableInput,
        const MethodInfo *method)
{
  WarBoardPartyListViewObject_o *v4; // x20
  struct WarBoardPartyOrganizationListViewObject_array *memberObjectList; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v7; // x21
  bool v8; // w22
  WarBoardPartyOrganizationListViewObject_o *v9; // x19
  __int64 v10; // x1

  v4 = this;
  if ( (byte_4CC5004 & 1) == 0 )
  {
    this = (WarBoardPartyListViewObject_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC5004 = 1;
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
          sub_1C71610(this);
        v9 = memberObjectList->m_Items[v7];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (WarBoardPartyListViewObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v9 )
            sub_1C71608(this, v10);
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
  ListViewObject__SetItem_44123920((ListViewObject_o *)this, item, seed, 0);
  this->fields.state = 0;
}


void WarBoardPartyListViewObject__SetItem_38503488(
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
  UnityEngine_Object_o *Memberobj; // x21
  struct WarBoardPartyOrganizationListViewObject_array *memberObjectList; // x8
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  GrandQuestFolderBoardItem_o *p_focusObj; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct ListViewManager_o *v22; // x1
  const MethodInfo *v23; // x2

  v4 = this;
  if ( (byte_4CC4FFE & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    this = (WarBoardPartyListViewObject_o *)sub_1C713B0(&WarBoardPartyListViewItem_TypeInfo);
    byte_4CC4FFE = 1;
  }
  linkItem = (PartyOrganizationListViewItem_o **)v4->fields.linkItem;
  if ( !linkItem )
    goto LABEL_19;
  naturalAligment = WarBoardPartyListViewItem_TypeInfo->_2.naturalAligment;
  if ( (*linkItem)->fields.isEventUpVal < (unsigned int)naturalAligment
    || *(WarBoardPartyListViewItem_c **)(*(_QWORD *)&(*linkItem)->fields.cost + 8 * naturalAligment - 8) != WarBoardPartyListViewItem_TypeInfo )
  {
    goto LABEL_19;
  }
  Memberobj = (UnityEngine_Object_o *)WarBoardPartyListViewObject__FindMemberobj(v4, linkItem[17], method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (WarBoardPartyListViewObject_o *)UnityEngine_Object__op_Equality(Memberobj, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    memberObjectList = v4->fields.memberObjectList;
    if ( !memberObjectList )
      goto LABEL_19;
    if ( !LODWORD(memberObjectList->max_length) )
      sub_1C71610(this);
    Memberobj = (UnityEngine_Object_o *)memberObjectList->m_Items[0];
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Memberobj, 0, 0) )
  {
    v4->fields.focusObj = (struct WarBoardPartyOrganizationListViewObject_o *)Memberobj;
    p_focusObj = (GrandQuestFolderBoardItem_o *)&v4->fields.focusObj;
    sub_1C71354(p_focusObj, (int32_t)Memberobj, v9, v10, v11, v12, v13, v14);
    this = (WarBoardPartyListViewObject_o *)p_focusObj->klass;
    if ( p_focusObj->klass )
    {
      v22 = (struct ListViewManager_o *)linkItem[17];
      this->fields.manager = v22;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.manager, (int32_t)v22, v16, v17, v18, v19, v20, v21);
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
LABEL_19:
    sub_1C71608(this, onTapMember);
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
  float v6; // s5
  float x; // s0 OVERLAPPED
  float duration; // s7
  float y; // s1
  float z; // s2
  float v11; // s3 OVERLAPPED
  float v12; // s4
  float v13; // s7
  float v14; // s5
  float v15; // s6
  float v16; // s8
  float v17; // s11
  float v18; // s12
  float v19; // s13
  float v20; // s8
  float v21; // s9
  float v22; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v24; // x0
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  bool result; // w0
  Il2CppObject *Component_object; // x20
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4CC5006 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC5006 = 1;
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
    v6 = timer_5__2 + UnityEngine_Time__get_deltaTime(0);
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
    v34 = Easing__Func(*(UnityEngine_Vector3_o *)&x, *(UnityEngine_Vector3_o *)&v11, v16, v2->fields.easingType, 0);
    v17 = v34.fields.x;
    v18 = v34.fields.y;
    v19 = v34.fields.z;
    v35 = Easing__Func(v2->fields.fromScale, v2->fields.toScale, v16, v2->fields.easingType, 0);
    if ( _4__this )
    {
      this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)_4__this->fields.backSprite;
      if ( this )
      {
        v20 = v35.fields.x;
        v21 = v35.fields.y;
        v22 = v35.fields.z;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        v36.fields.x = v17;
        v36.fields.y = v18;
        v36.fields.z = v19;
        GameObjectExtensions__SetLocalPosition(gameObject, v36, 0);
        this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)_4__this->fields.backSprite;
        if ( this )
        {
          v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          v37.fields.x = v20;
          v37.fields.y = v21;
          v37.fields.z = v22;
          GameObjectExtensions__SetLocalScale(v24, v37, 0);
          v2->fields.__2__current = 0;
          p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
          sub_1C71354(p__2__current, 0, v26, v27, v28, v29, v30, v31);
          result = 1;
          LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
          return result;
        }
      }
    }
LABEL_24:
    sub_1C71608(this, method);
  }
  if ( !_4__this )
    goto LABEL_24;
  this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)_4__this->fields.backSprite;
  if ( !this )
    goto LABEL_24;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (WarBoardPartyListViewObject__DsiplayAnim_d__17_o *)UnityEngine_Object__op_Inequality(
                                                               (UnityEngine_Object_o *)Component_object,
                                                               0,
                                                               0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_24;
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

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_WarBoardPartyListViewObject__DsiplayAnim_d__17_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
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