void TitleInfoEventTowerStamp___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4D2B397 & 1) == 0 )
  {
    sub_1C94098(&TitleInfoEventTowerStamp_TypeInfo);
    sub_1C94098(&StringLiteral_24380/*"tower_img_base{0:00}_stamp"*/);
    byte_4D2B397 = 1;
  }
  TitleInfoEventTowerStamp_TypeInfo->static_fields->SPRITE_NAME_STAMP = (struct System_String_o *)StringLiteral_24380/*"tower_img_base{0:00}_stamp"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)TitleInfoEventTowerStamp_TypeInfo->static_fields,
    StringLiteral_24380/*"tower_img_base{0:00}_stamp"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
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
  GrandQuestFolderBoardItem_o *p_stampList; // x19
  struct System_Collections_Generic_List_GameObject__o *stampList; // t1
  Il2CppObject *current; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  GrandQuestFolderBoardItem_c *klass; // x8
  int32_t namespaze; // w2
  int v11; // w9
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D2B396 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C94098(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2B396 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  stampList = this->fields.stampList;
  p_stampList = (GrandQuestFolderBoardItem_o *)&this->fields.stampList;
  v3 = (System_Collections_Generic_List_object__o *)stampList;
  if ( stampList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      v3,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v19.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72110972((UnityEngine_Object_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    klass = p_stampList->klass;
    if ( !p_stampList->klass )
      sub_1C942F0(v7, v8);
    namespaze = (int32_t)klass->_1.namespaze;
    v11 = HIDWORD(klass->_1.namespaze) + 1;
    LODWORD(klass->_1.namespaze) = 0;
    HIDWORD(klass->_1.namespaze) = v11;
    if ( namespaze >= 1 )
      System_Array__Clear((System_Array_o *)klass->_1.name, 0, namespaze, 0);
  }
  else
  {
    v12 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v12,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    p_stampList->klass = (GrandQuestFolderBoardItem_c *)v12;
    sub_1C9403C(p_stampList, (int32_t)v12, v13, v14, v15, v16, v17, v18);
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
  TitleInfoEventTowerStamp_c *v12; // x8
  UISprite_o *v13; // x23
  System_String_o *SPRITE_NAME_STAMP; // x24
  Il2CppObject *v15; // x0
  System_String_o *v16; // x22
  int v17; // w23
  Il2CppObject *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_Collections_Generic_List_object__o *stampList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v27; // x10
  __int64 size; // x11
  UnityEngine_GameObject_o *v29; // x22
  Il2CppClass **v30; // x0
  int32_t row; // w8
  int32_t v32; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2B395 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject____79133288);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&TitleInfoEventTowerStamp_TypeInfo);
    byte_4D2B395 = 1;
  }
  TitleInfoEventTowerStamp__ResetStamp(this, *(const MethodInfo **)&floor);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_22;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v12 = TitleInfoEventTowerStamp_TypeInfo;
  v13 = (UISprite_o *)Component_object;
  if ( !TitleInfoEventTowerStamp_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerStamp_TypeInfo);
    v12 = TitleInfoEventTowerStamp_TypeInfo;
  }
  SPRITE_NAME_STAMP = v12->static_fields->SPRITE_NAME_STAMP;
  v32 = towerId;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
  v16 = System_String__Format(SPRITE_NAME_STAMP, v15, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(v13, v16, 0);
  if ( floor >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      v18 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__52598436(
                                                 v18,
                                                 spriteRoot,
                                                 (const MethodInfo_32296A4 *)Method_UnityEngine_Object_Instantiate_GameObject____79133288);
      stampList = (System_Collections_Generic_List_object__o *)this->fields.stampList;
      if ( !stampList )
        break;
      items = stampList->fields._items;
      v27 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++stampList->fields._version;
      if ( !items )
        break;
      size = stampList->fields._size;
      v29 = gameObject;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          stampList,
          (Il2CppObject *)gameObject,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        stampList->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v29;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v30 + 4), (int32_t)v29, v19, v20, v21, v22, v23, v24);
      }
      if ( !v29 )
        break;
      gameObject = UnityEngine_GameObject__get_gameObject(v29, 0);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v29, 0);
      if ( !gameObject )
        break;
      row = this->fields.row;
      v33.fields.z = 0.0;
      v33.fields.y = (float)(this->fields.stampStartPosY + v17 % row * this->fields.stampHeight);
      v33.fields.x = (float)(this->fields.stampStartPosX + v17 / row * this->fields.stampWidth);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v33, 0);
      if ( floor == ++v17 )
        return;
    }
LABEL_22:
    sub_1C942F0(gameObject, v10);
  }
}