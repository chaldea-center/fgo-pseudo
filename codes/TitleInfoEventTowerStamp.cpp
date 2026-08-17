void TitleInfoEventTowerStamp___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_596F30A & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventTowerStamp_TypeInfo);
    sub_2213A60(&StringLiteral_25441/*"tower_img_base{0:00}_stamp"*/);
    byte_596F30A = 1;
  }
  v7 = StringLiteral_25441/*"tower_img_base{0:00}_stamp"*/;
  TitleInfoEventTowerStamp_TypeInfo->static_fields->SPRITE_NAME_STAMP = (struct System_String_o *)StringLiteral_25441/*"tower_img_base{0:00}_stamp"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)TitleInfoEventTowerStamp_TypeInfo->static_fields,
    v7,
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
  float v5; // s1
  float v6; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  row = this->fields.row;
  v4 = 0.0;
  v5 = (float)(this->fields.stampStartPosY + this->fields.stampHeight * (i % row));
  v6 = (float)(this->fields.stampStartPosX + this->fields.stampWidth * (i / row));
  result.fields.z = v4;
  result.fields.y = v5;
  result.fields.x = v6;
  return result;
}


void TitleInfoEventTowerStamp__ResetStamp(TitleInfoEventTowerStamp_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x0
  MissionNaviTransitionBoardItem_o *p_stampList; // x19
  struct System_Collections_Generic_List_GameObject__o *stampList; // t1
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  MissionNaviTransitionBoardItem_c *klass; // x8
  int32_t namespaze; // w2
  int v13; // w9
  System_Collections_Generic_List_object__o *v14; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596F309 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F309 = 1;
  }
  stampList = this->fields.stampList;
  p_stampList = (MissionNaviTransitionBoardItem_o *)&this->fields.stampList;
  v3 = (System_Collections_Generic_List_object__o *)stampList;
  memset(&v21, 0, sizeof(v21));
  if ( stampList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      v3,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v21.fields._current;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
      UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    klass = p_stampList->klass;
    if ( !p_stampList->klass )
      sub_2213CDC(v9, v10);
    namespaze = (int32_t)klass->_1.namespaze;
    v13 = HIDWORD(klass->_1.namespaze) + 1;
    LODWORD(klass->_1.namespaze) = 0;
    HIDWORD(klass->_1.namespaze) = v13;
    if ( namespaze >= 1 )
      System_Array__Clear((System_Array_o *)klass->_1.name, 0, namespaze, 0);
  }
  else
  {
    v14 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v14,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
    p_stampList->klass = (MissionNaviTransitionBoardItem_c *)v14;
    sub_2213A04(p_stampList, (int32_t)v14, v15, v16, v17, v18, v19, v20);
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
  __int64 v12; // x1
  __int64 v13; // x2
  TitleInfoEventTowerStamp_c *v14; // x8
  UISprite_o *v15; // x23
  System_String_o **p_SPRITE_NAME_STAMP; // x8
  System_String_o *v17; // x24
  Il2CppObject *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  System_String_o *v21; // x22
  int v22; // w26
  __int64 v23; // x1
  __int64 v24; // x2
  Il2CppObject *v25; // x22
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_Generic_List_object__o *stampList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v34; // x10
  __int64 size; // x11
  UnityEngine_GameObject_o *v36; // x22
  Il2CppClass **v37; // x0
  int32_t row; // w8
  int32_t v39; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596F308 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TitleInfoEventTowerStamp_TypeInfo);
    byte_596F308 = 1;
  }
  TitleInfoEventTowerStamp__ResetStamp(this, *(const MethodInfo **)&floor);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_22;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v14 = TitleInfoEventTowerStamp_TypeInfo;
  v15 = (UISprite_o *)Component_object;
  if ( !*(&TitleInfoEventTowerStamp_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerStamp_TypeInfo, v12, v13);
    v14 = TitleInfoEventTowerStamp_TypeInfo;
  }
  p_SPRITE_NAME_STAMP = &v14->static_fields->SPRITE_NAME_STAMP;
  v39 = towerId;
  v17 = *p_SPRITE_NAME_STAMP;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v39);
  v21 = System_String__Format(v17, v18, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v19, v20);
  AtlasManager__SetEventUI(v15, v21, 0);
  if ( floor >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      v25 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v24);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__59717116(
                                                 v25,
                                                 spriteRoot,
                                                 (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
      stampList = (System_Collections_Generic_List_object__o *)this->fields.stampList;
      if ( !stampList )
        break;
      items = stampList->fields._items;
      v34 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++stampList->fields._version;
      if ( !items )
        break;
      size = stampList->fields._size;
      v36 = gameObject;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          stampList,
          (Il2CppObject *)gameObject,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        stampList->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v36;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v37 + 4), (int32_t)v36, v26, v27, v28, v29, v30, v31);
      }
      if ( !v36 )
        break;
      gameObject = UnityEngine_GameObject__get_gameObject(v36, 0);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v36, 0);
      if ( !gameObject )
        break;
      row = this->fields.row;
      v40.fields.z = 0.0;
      v40.fields.x = (float)(this->fields.stampStartPosX + v22 / row * this->fields.stampWidth);
      v40.fields.y = (float)(this->fields.stampStartPosY + v22 % row * this->fields.stampHeight);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v40, 0);
      if ( floor == ++v22 )
        return;
    }
LABEL_22:
    sub_2213CDC(gameObject, v10);
  }
}