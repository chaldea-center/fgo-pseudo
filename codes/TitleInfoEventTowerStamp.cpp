void TitleInfoEventTowerStamp___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C25E54 & 1) == 0 )
  {
    sub_1C2D490(&TitleInfoEventTowerStamp_TypeInfo);
    sub_1C2D490(&StringLiteral_24119/*"tower_img_base{0:00}_stamp"*/);
    byte_4C25E54 = 1;
  }
  TitleInfoEventTowerStamp_TypeInfo->static_fields->SPRITE_NAME_STAMP = (struct System_String_o *)StringLiteral_24119/*"tower_img_base{0:00}_stamp"*/;
  sub_1C2D434((CGThumbnailListItem_o *)TitleInfoEventTowerStamp_TypeInfo->static_fields, StringLiteral_24119/*"tower_img_base{0:00}_stamp"*/, v1, v2);
}


void TitleInfoEventTowerStamp___ctor(TitleInfoEventTowerStamp_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UnityEngine_Vector3_o TitleInfoEventTowerStamp__GetStampPosition(
        TitleInfoEventTowerStamp_o *this,
        int32_t i,
        const MethodInfo *method)
{
  int32_t row; // w8
  float v4; // s2
  float v5; // s0
  float v6; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  row = this->fields.row;
  v4 = 0.0;
  v5 = (float)(this->fields.stampStartPosX + this->fields.stampWidth * (i / row));
  v6 = (float)(this->fields.stampStartPosY + this->fields.stampHeight * (i % row));
  result.fields.z = v4;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}


void TitleInfoEventTowerStamp__ResetStamp(TitleInfoEventTowerStamp_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x0
  CGThumbnailListItem_o *p_stampList; // x19
  struct System_Collections_Generic_List_GameObject__o *stampList; // t1
  Il2CppObject *current; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  CGThumbnailListItem_c *klass; // x8
  int32_t namespaze; // w2
  int v11; // w9
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C25E53 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C25E53 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  stampList = this->fields.stampList;
  p_stampList = (CGThumbnailListItem_o *)&this->fields.stampList;
  v3 = (System_Collections_Generic_List_object__o *)stampList;
  if ( stampList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      v3,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v15.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    klass = p_stampList->klass;
    if ( !p_stampList->klass )
      sub_1C2D6EC(v7, v8);
    namespaze = (int32_t)klass->_1.namespaze;
    v11 = HIDWORD(klass->_1.namespaze) + 1;
    LODWORD(klass->_1.namespaze) = 0;
    HIDWORD(klass->_1.namespaze) = v11;
    if ( namespaze >= 1 )
      System_Array__Clear((System_Array_o *)klass->_1.name, 0, namespaze, 0);
  }
  else
  {
    v12 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v12,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    p_stampList->klass = (CGThumbnailListItem_c *)v12;
    sub_1C2D434(p_stampList, (int32_t)v12, v13, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoEventTowerStamp__StampProgress(
        TitleInfoEventTowerStamp_o *this,
        int32_t floor,
        int32_t towerId,
        UnityEngine_Transform_o *spriteRoot,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  TitleInfoEventTowerStamp_c *v15; // x8
  UISprite_o *v16; // x23
  System_String_o *SPRITE_NAME_STAMP; // x24
  Il2CppObject *v18; // x0
  System_String_o *v19; // x22
  int v20; // w23
  Il2CppObject *v21; // x22
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_List_object__o *stampList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v26; // x10
  __int64 size; // x11
  UnityEngine_GameObject_o *v28; // x22
  Il2CppClass **v29; // x0
  int32_t row; // w8
  int32_t v31; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C25E52 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&TitleInfoEventTowerStamp_TypeInfo);
    byte_4C25E52 = 1;
  }
  TitleInfoEventTowerStamp__ResetStamp(this, *(const MethodInfo **)&floor);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_22;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v15 = TitleInfoEventTowerStamp_TypeInfo;
  v16 = (UISprite_o *)Component_object;
  if ( !TitleInfoEventTowerStamp_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerStamp_TypeInfo);
    v15 = TitleInfoEventTowerStamp_TypeInfo;
  }
  SPRITE_NAME_STAMP = v15->static_fields->SPRITE_NAME_STAMP;
  v31 = towerId;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v12, v13, v14);
  v19 = System_String__Format(SPRITE_NAME_STAMP, v18, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(v16, v19, 0);
  if ( floor >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      v21 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__51752420(
                                                 v21,
                                                 spriteRoot,
                                                 (const MethodInfo_315ADE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78081576);
      stampList = (System_Collections_Generic_List_object__o *)this->fields.stampList;
      if ( !stampList )
        break;
      items = stampList->fields._items;
      v26 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++stampList->fields._version;
      if ( !items )
        break;
      size = stampList->fields._size;
      v28 = gameObject;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          stampList,
          (Il2CppObject *)gameObject,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &items->obj.klass + size;
        stampList->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v28;
        sub_1C2D434((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v28, v22, v23);
      }
      if ( !v28 )
        break;
      gameObject = UnityEngine_GameObject__get_gameObject(v28, 0);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v28, 0);
      if ( !gameObject )
        break;
      row = this->fields.row;
      v32.fields.z = 0.0;
      v32.fields.y = (float)(this->fields.stampStartPosY + v20 % row * this->fields.stampHeight);
      v32.fields.x = (float)(this->fields.stampStartPosX + v20 / row * this->fields.stampWidth);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v32, 0);
      if ( floor == ++v20 )
        return;
    }
LABEL_22:
    sub_1C2D6EC(gameObject, v10);
  }
}