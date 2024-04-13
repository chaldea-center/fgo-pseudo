void __fastcall TitleInfoEventTowerStamp___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E6C46 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventTowerStamp_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_23048/*"tower_img_base{0:00}_stamp"*/, v8, v9, v10);
    byte_42E6C46 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventTowerStamp_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_23048/*"tower_img_base{0:00}_stamp"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_23048/*"tower_img_base{0:00}_stamp"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
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
  int stampList; // w8
  float v4; // s2
  float v5; // s0
  float v6; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  stampList = (int)this->fields.stampList;
  v4 = 0.0;
  v5 = (float)(this->fields.stampStartPosY + this->fields.stampHeight * (i / stampList));
  v6 = (float)(this->fields.stampWidth + this->fields.row * (i % stampList));
  result.fields.z = v4;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}


void __fastcall TitleInfoEventTowerStamp__ResetStamp(TitleInfoEventTowerStamp_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v26; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o **v27; // x19
  TitleInfoEventTowerStamp_c *klass; // t1
  Il2CppObject *current; // x20
  __int64 v30; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E6C45 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    byte_42E6C45 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  klass = this[1].klass;
  v27 = (System_Collections_Generic_List_XWeaponTrail_Element__o **)&this[1];
  v26 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass;
  if ( klass )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v38,
      v26,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v38,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v38.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v38,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    if ( !*v27 )
      sub_B5D69C(0LL, v30);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      *v27,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  }
  else
  {
    v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v31,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
    *v27 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v31;
    sub_B5D560((BattleServantConfConponent_o *)v27, (System_Int32_array **)v31, v32, v33, v34, v35, v36, v37);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v28; // x1
  UISprite_o *Component_srcLineSprite; // x23
  TitleInfoEventTowerStamp_c *v30; // x8
  System_String_o *SPRITE_NAME_STAMP; // x24
  Il2CppObject *v32; // x0
  System_String_o *v33; // x22
  int v34; // w23
  UnityEngine_GameObject_o *v35; // x22
  UnityEngine_GameObject_o *v36; // x22
  int stampList; // w8
  int32_t v38; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E6C44 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, floor, towerId, spriteRoot);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v9, v10, v11);
    sub_B5D5C4(&int_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&TitleInfoEventTowerStamp_TypeInfo, v24, v25, v26);
    byte_42E6C44 = 1;
  }
  TitleInfoEventTowerStamp__ResetStamp(this, *(const MethodInfo **)&floor);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            gameObject,
                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v30 = TitleInfoEventTowerStamp_TypeInfo;
  if ( (BYTE3(TitleInfoEventTowerStamp_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventTowerStamp_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerStamp_TypeInfo);
    v30 = TitleInfoEventTowerStamp_TypeInfo;
  }
  SPRITE_NAME_STAMP = v30->static_fields->SPRITE_NAME_STAMP;
  v38 = towerId;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
  v33 = System_String__Format(SPRITE_NAME_STAMP, v32, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(Component_srcLineSprite, v33, 0LL);
  if ( floor >= 1 )
  {
    v34 = 0;
    while ( 1 )
    {
      v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                 (UILabel_o *)v35,
                                                 spriteRoot,
                                                 (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
      if ( !this[1].klass )
        break;
      v36 = gameObject;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this[1].klass,
        (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
      if ( !v36 )
        break;
      gameObject = UnityEngine_GameObject__get_gameObject(v36, 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v36, 0LL);
      if ( !gameObject )
        break;
      stampList = (int)this->fields.stampList;
      v39.fields.z = 0.0;
      v39.fields.x = (float)(this->fields.stampStartPosY + v34 / stampList * this->fields.stampHeight);
      v39.fields.y = (float)(this->fields.stampWidth + v34 % stampList * this->fields.row);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v39, 0LL);
      if ( ++v34 >= floor )
        return;
    }
LABEL_21:
    sub_B5D69C(gameObject, v28);
  }
}