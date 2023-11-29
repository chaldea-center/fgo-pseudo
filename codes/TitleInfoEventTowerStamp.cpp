void __fastcall TitleInfoEventTowerStamp___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_40F840F & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventTowerStamp_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_22650, v8);
    byte_40F840F = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventTowerStamp_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_22650;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22650;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v13; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o **v14; // x19
  TitleInfoEventTowerStamp_c *klass; // t1
  Il2CppObject *current; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F840E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    byte_40F840E = 1;
  }
  memset(&v24, 0, sizeof(v24));
  klass = this[1].klass;
  v14 = (System_Collections_Generic_List_XWeaponTrail_Element__o **)&this[1];
  v13 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass;
  if ( klass )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v24,
      v13,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v24,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v24.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v24,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    if ( !*v14 )
      sub_B170D4();
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      *v14,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  }
  else
  {
    v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                    method,
                                                                                                    v2,
                                                                                                    v3,
                                                                                                    v4);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v17,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    *v14 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v17;
    sub_B16F98((BattleServantConfConponent_o *)v14, (System_Int32_array **)v17, v18, v19, v20, v21, v22, v23);
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
  UISprite_o *Component_srcLineSprite; // x23
  TitleInfoEventTowerStamp_c *v17; // x8
  System_String_o *SPRITE_NAME_STAMP; // x24
  Il2CppObject *v19; // x0
  System_String_o *v20; // x22
  int v21; // w23
  UnityEngine_GameObject_o *v22; // x22
  UILabel_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x22
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Transform_o *transform; // x0
  int stampList; // w8
  int32_t v28; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F840D & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&floor);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v9);
    sub_B16FFC(&int_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v11);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&TitleInfoEventTowerStamp_TypeInfo, v14);
    byte_40F840D = 1;
  }
  TitleInfoEventTowerStamp__ResetStamp(this, *(const MethodInfo **)&floor);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            gameObject,
                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v17 = TitleInfoEventTowerStamp_TypeInfo;
  if ( (BYTE3(TitleInfoEventTowerStamp_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventTowerStamp_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerStamp_TypeInfo);
    v17 = TitleInfoEventTowerStamp_TypeInfo;
  }
  SPRITE_NAME_STAMP = v17->static_fields->SPRITE_NAME_STAMP;
  v28 = towerId;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
  v20 = System_String__Format(SPRITE_NAME_STAMP, v19, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(Component_srcLineSprite, v20, 0LL);
  if ( floor >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v23 = UnityEngine_Object__Instantiate_UILabel_(
              (UILabel_o *)v22,
              spriteRoot,
              (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
      if ( !this[1].klass )
        break;
      v24 = (UnityEngine_GameObject_o *)v23;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this[1].klass,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
      if ( !v24 )
        break;
      v25 = UnityEngine_GameObject__get_gameObject(v24, 0LL);
      if ( !v25 )
        break;
      UnityEngine_GameObject__SetActive(v25, 1, 0LL);
      transform = UnityEngine_GameObject__get_transform(v24, 0LL);
      if ( !transform )
        break;
      stampList = (int)this->fields.stampList;
      v29.fields.z = 0.0;
      v29.fields.x = (float)(this->fields.stampStartPosY + v21 / stampList * this->fields.stampHeight);
      v29.fields.y = (float)(this->fields.stampWidth + v21 % stampList * this->fields.row);
      UnityEngine_Transform__set_localPosition(transform, v29, 0LL);
      if ( ++v21 >= floor )
        return;
    }
LABEL_21:
    sub_B170D4();
  }
}