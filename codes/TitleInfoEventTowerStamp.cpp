void __fastcall TitleInfoEventTowerStamp___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4B14CBF & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventTowerStamp_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_24253/*"tower_img_base{0:00}_stamp"*/, v8, v9);
    byte_4B14CBF = 1;
  }
  TitleInfoEventTowerStamp_TypeInfo->static_fields->SPRITE_NAME_STAMP = (struct System_String_o *)StringLiteral_24253/*"tower_img_base{0:00}_stamp"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TitleInfoEventTowerStamp_TypeInfo->static_fields,
    StringLiteral_24253/*"tower_img_base{0:00}_stamp"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x0
  PartyOrganizationUtility_o *p_stampList; // x19
  struct System_Collections_Generic_List_GameObject__o *stampList; // t1
  __int64 v22; // x1
  Il2CppObject *current; // x20
  __int64 v24; // x0
  __int64 v25; // x1
  PartyOrganizationUtility_c *klass; // x8
  int32_t namespaze; // w2
  int v28; // w9
  System_Collections_Generic_List_object__o *v29; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B14CBE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Clear__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    byte_4B14CBE = 1;
  }
  memset(&v36, 0, sizeof(v36));
  stampList = this->fields.stampList;
  p_stampList = (PartyOrganizationUtility_o *)&this->fields.stampList;
  v19 = (System_Collections_Generic_List_object__o *)stampList;
  if ( stampList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v36,
      v19,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v36,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v36.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
      UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v36,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    klass = p_stampList->klass;
    if ( !p_stampList->klass )
      sub_1BCAA3C(v24, v25);
    namespaze = (int32_t)klass->_1.namespaze;
    v28 = HIDWORD(klass->_1.namespaze) + 1;
    LODWORD(klass->_1.namespaze) = 0;
    HIDWORD(klass->_1.namespaze) = v28;
    if ( namespaze >= 1 )
      System_Array__Clear((System_Array_o *)klass->_1.name, 0, namespaze, 0LL);
  }
  else
  {
    v29 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_GameObject__TypeInfo,
                                                         method,
                                                         v2,
                                                         v3);
    System_Collections_Generic_List_object____ctor(
      v29,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    p_stampList->klass = (PartyOrganizationUtility_c *)v29;
    sub_1BCA784(p_stampList, (int64_t)v29, v30, v31, v32, v33, v34, v35);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  Il2CppObject *Component_object; // x0
  __int64 v24; // x1
  TitleInfoEventTowerStamp_c *v25; // x8
  UISprite_o *v26; // x23
  System_String_o *SPRITE_NAME_STAMP; // x24
  Il2CppObject *v28; // x0
  __int64 v29; // x1
  System_String_o *v30; // x22
  int v31; // w23
  __int64 v32; // x1
  Il2CppObject *v33; // x22
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Collections_Generic_List_object__o *stampList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v42; // x10
  __int64 size; // x11
  UnityEngine_GameObject_o *v44; // x22
  Il2CppClass **v45; // x0
  int32_t row; // w8
  int32_t v47; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B14CBD & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&floor, *(_QWORD *)&towerId);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v9, v10);
    sub_1BCA7E0(&int_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&TitleInfoEventTowerStamp_TypeInfo, v19, v20);
    byte_4B14CBD = 1;
  }
  TitleInfoEventTowerStamp__ResetStamp(this, *(const MethodInfo **)&floor);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v25 = TitleInfoEventTowerStamp_TypeInfo;
  v26 = (UISprite_o *)Component_object;
  if ( !TitleInfoEventTowerStamp_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerStamp_TypeInfo, v24);
    v25 = TitleInfoEventTowerStamp_TypeInfo;
  }
  SPRITE_NAME_STAMP = v25->static_fields->SPRITE_NAME_STAMP;
  v47 = towerId;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
  v30 = System_String__Format(SPRITE_NAME_STAMP, v28, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v29);
  AtlasManager__SetEventUI(v26, v30, 0LL);
  if ( floor >= 1 )
  {
    v31 = 0;
    while ( 1 )
    {
      v33 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object__49903816(
                                                 v33,
                                                 spriteRoot,
                                                 (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
      stampList = (System_Collections_Generic_List_object__o *)this->fields.stampList;
      if ( !stampList )
        break;
      items = stampList->fields._items;
      v42 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++stampList->fields._version;
      if ( !items )
        break;
      size = stampList->fields._size;
      v44 = gameObject;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          stampList,
          (Il2CppObject *)gameObject,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v45 = &items->obj.klass + size;
        stampList->fields._size = size + 1;
        v45[4] = (Il2CppClass *)v44;
        sub_1BCA784((PartyOrganizationUtility_o *)(v45 + 4), (int64_t)v44, v34, v35, v36, v37, v38, v39);
      }
      if ( !v44 )
        break;
      gameObject = UnityEngine_GameObject__get_gameObject(v44, 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v44, 0LL);
      if ( !gameObject )
        break;
      row = this->fields.row;
      v48.fields.z = 0.0;
      v48.fields.y = (float)(this->fields.stampStartPosY + v31 % row * this->fields.stampHeight);
      v48.fields.x = (float)(this->fields.stampStartPosX + v31 / row * this->fields.stampWidth);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v48, 0LL);
      if ( floor == ++v31 )
        return;
    }
LABEL_22:
    sub_1BCAA3C(gameObject, v22);
  }
}