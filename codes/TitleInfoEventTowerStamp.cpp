void __fastcall TitleInfoEventTowerStamp___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49FD666 & 1) == 0 )
  {
    sub_1B64A00(&TitleInfoEventTowerStamp_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_23908/*"tower_img_base{0:00}_stamp"*/, v4);
    byte_49FD666 = 1;
  }
  TitleInfoEventTowerStamp_TypeInfo->static_fields->SPRITE_NAME_STAMP = (struct System_String_o *)StringLiteral_23908/*"tower_img_base{0:00}_stamp"*/;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)TitleInfoEventTowerStamp_TypeInfo->static_fields,
    StringLiteral_23908/*"tower_img_base{0:00}_stamp"*/,
    v2,
    v3);
}


void __fastcall TitleInfoEventTowerStamp___ctor(TitleInfoEventTowerStamp_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


UnityEngine_Vector3_o __fastcall TitleInfoEventTowerStamp__GetStampPosition(
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


void __fastcall TitleInfoEventTowerStamp__ResetStamp(TitleInfoEventTowerStamp_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x0
  ServantStatusBattleListViewItem_o *p_stampList; // x19
  struct System_Collections_Generic_List_GameObject__o *stampList; // t1
  Il2CppObject *current; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  ServantStatusBattleListViewItem_c *klass; // x8
  int32_t namespaze; // w2
  int v18; // w9
  System_Collections_Generic_List_object__o *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FD665 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject___ctor__, v7);
    sub_1B64A00(&System_Collections_Generic_List_GameObject__TypeInfo, v8);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v9);
    byte_49FD665 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  stampList = this->fields.stampList;
  p_stampList = (ServantStatusBattleListViewItem_o *)&this->fields.stampList;
  v10 = (System_Collections_Generic_List_object__o *)stampList;
  if ( stampList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      v10,
      (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v22.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69137476((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    klass = p_stampList->klass;
    if ( !p_stampList->klass )
      sub_1B64C5C(v14, v15);
    namespaze = (int32_t)klass->_1.namespaze;
    v18 = HIDWORD(klass->_1.namespaze) + 1;
    LODWORD(klass->_1.namespaze) = 0;
    HIDWORD(klass->_1.namespaze) = v18;
    if ( namespaze >= 1 )
      System_Array__Clear((System_Array_o *)klass->_1.name, 0, namespaze, 0LL);
  }
  else
  {
    v19 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v19,
      (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    p_stampList->klass = (ServantStatusBattleListViewItem_c *)v19;
    sub_1B649A4(p_stampList, (int32_t)v19, v20, v21);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTowerStamp__StampProgress(
        TitleInfoEventTowerStamp_o *this,
        int32_t floor,
        int32_t towerId,
        UnityEngine_Transform_o *spriteRoot,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  TitleInfoEventTowerStamp_c *v21; // x8
  UISprite_o *v22; // x23
  System_String_o *SPRITE_NAME_STAMP; // x24
  Il2CppObject *v24; // x0
  System_String_o *v25; // x22
  int v26; // w23
  Il2CppObject *v27; // x22
  int32_t v28; // w2
  int32_t v29; // w3
  System_Collections_Generic_List_object__o *stampList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v32; // x10
  __int64 size; // x11
  UnityEngine_GameObject_o *v34; // x22
  Il2CppClass **v35; // x0
  int32_t row; // w8
  int32_t v37; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FD664 & 1) == 0 )
  {
    sub_1B64A00(&AtlasManager_TypeInfo, *(_QWORD *)&floor);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v9);
    sub_1B64A00(&int_TypeInfo, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__Add__, v11);
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_GameObject____75801880, v12);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v13);
    sub_1B64A00(&TitleInfoEventTowerStamp_TypeInfo, v14);
    byte_49FD664 = 1;
  }
  TitleInfoEventTowerStamp__ResetStamp(this, *(const MethodInfo **)&floor);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v21 = TitleInfoEventTowerStamp_TypeInfo;
  v22 = (UISprite_o *)Component_object;
  if ( !TitleInfoEventTowerStamp_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerStamp_TypeInfo);
    v21 = TitleInfoEventTowerStamp_TypeInfo;
  }
  SPRITE_NAME_STAMP = v21->static_fields->SPRITE_NAME_STAMP;
  v37 = towerId;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v18, v19, v20);
  v25 = System_String__Format(SPRITE_NAME_STAMP, v24, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(v22, v25, 0LL);
  if ( floor >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      v27 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__49014464(
                                                 v27,
                                                 spriteRoot,
                                                 (const MethodInfo_2EBE6C0 *)Method_UnityEngine_Object_Instantiate_GameObject____75801880);
      stampList = (System_Collections_Generic_List_object__o *)this->fields.stampList;
      if ( !stampList )
        break;
      items = stampList->fields._items;
      v32 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++stampList->fields._version;
      if ( !items )
        break;
      size = stampList->fields._size;
      v34 = gameObject;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          stampList,
          (Il2CppObject *)gameObject,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        stampList->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v34;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v34, v28, v29);
      }
      if ( !v34 )
        break;
      gameObject = UnityEngine_GameObject__get_gameObject(v34, 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v34, 0LL);
      if ( !gameObject )
        break;
      row = this->fields.row;
      v38.fields.z = 0.0;
      v38.fields.y = (float)(this->fields.stampStartPosY + v26 % row * this->fields.stampHeight);
      v38.fields.x = (float)(this->fields.stampStartPosX + v26 / row * this->fields.stampWidth);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v38, 0LL);
      if ( floor == ++v26 )
        return;
    }
LABEL_22:
    sub_1B64C5C(gameObject, v16);
  }
}