void __fastcall TitleInfoEventTowerStamp___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_42AE74B & 1) == 0 )
  {
    sub_B52984(&TitleInfoEventTowerStamp_TypeInfo);
    sub_B52984(&StringLiteral_22933/*"tower_img_base{0:00}_stamp"*/);
    byte_42AE74B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventTowerStamp_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_22933/*"tower_img_base{0:00}_stamp"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22933/*"tower_img_base{0:00}_stamp"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v3; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o **v4; // x19
  TitleInfoEventTowerStamp_c *klass; // t1
  Il2CppObject *current; // x20
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42AE74A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AE74A = 1;
  }
  memset(&v15, 0, sizeof(v15));
  klass = this[1].klass;
  v4 = (System_Collections_Generic_List_XWeaponTrail_Element__o **)&this[1];
  v3 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass;
  if ( klass )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      v3,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v15.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35616956((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    if ( !*v4 )
      sub_B52A5C(0LL, v7);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      *v4,
      (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_GameObject__Clear__);
  }
  else
  {
    v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v8,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    *v4 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v8;
    sub_B52920((BattleServantConfConponent_o *)v4, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  UISprite_o *Component_srcLineSprite; // x23
  TitleInfoEventTowerStamp_c *v12; // x8
  System_String_o *SPRITE_NAME_STAMP; // x24
  Il2CppObject *v14; // x0
  System_String_o *v15; // x22
  int v16; // w23
  UnityEngine_GameObject_o *v17; // x22
  UnityEngine_GameObject_o *v18; // x22
  int stampList; // w8
  int32_t v20; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42AE749 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject____68654656);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&TitleInfoEventTowerStamp_TypeInfo);
    byte_42AE749 = 1;
  }
  TitleInfoEventTowerStamp__ResetStamp(this, *(const MethodInfo **)&floor);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            gameObject,
                                            (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v12 = TitleInfoEventTowerStamp_TypeInfo;
  if ( (BYTE3(TitleInfoEventTowerStamp_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventTowerStamp_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerStamp_TypeInfo);
    v12 = TitleInfoEventTowerStamp_TypeInfo;
  }
  SPRITE_NAME_STAMP = v12->static_fields->SPRITE_NAME_STAMP;
  v20 = towerId;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
  v15 = System_String__Format(SPRITE_NAME_STAMP, v14, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(Component_srcLineSprite, v15, 0LL);
  if ( floor >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                 (UILabel_o *)v17,
                                                 spriteRoot,
                                                 (const MethodInfo_1F712F4 *)Method_UnityEngine_Object_Instantiate_GameObject____68654656);
      if ( !this[1].klass )
        break;
      v18 = gameObject;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this[1].klass,
        (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__);
      if ( !v18 )
        break;
      gameObject = UnityEngine_GameObject__get_gameObject(v18, 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v18, 0LL);
      if ( !gameObject )
        break;
      stampList = (int)this->fields.stampList;
      v21.fields.z = 0.0;
      v21.fields.x = (float)(this->fields.stampStartPosY + v16 / stampList * this->fields.stampHeight);
      v21.fields.y = (float)(this->fields.stampWidth + v16 % stampList * this->fields.row);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v21, 0LL);
      if ( ++v16 >= floor )
        return;
    }
LABEL_21:
    sub_B52A5C(gameObject, v10);
  }
}