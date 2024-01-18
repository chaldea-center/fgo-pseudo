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

  if ( (byte_41863BE & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventTowerStamp_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_22743/*"tower_img_base{0:00}_stamp"*/, v8);
    byte_41863BE = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventTowerStamp_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_22743/*"tower_img_base{0:00}_stamp"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22743/*"tower_img_base{0:00}_stamp"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v10; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o **v11; // x19
  TitleInfoEventTowerStamp_c *klass; // t1
  Il2CppObject *current; // x20
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_41863BD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_41863BD = 1;
  }
  memset(&v22, 0, sizeof(v22));
  klass = this[1].klass;
  v11 = (System_Collections_Generic_List_XWeaponTrail_Element__o **)&this[1];
  v10 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)klass;
  if ( klass )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      v10,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v22.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    if ( !*v11 )
      sub_B2C434(0LL, v14);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      *v11,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  }
  else
  {
    v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v15,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
    *v11 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v15;
    sub_B2C2F8((BattleServantConfConponent_o *)v11, (System_Int32_array **)v15, v16, v17, v18, v19, v20, v21);
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
  UISprite_o *Component_srcLineSprite; // x23
  TitleInfoEventTowerStamp_c *v18; // x8
  System_String_o *SPRITE_NAME_STAMP; // x24
  Il2CppObject *v20; // x0
  System_String_o *v21; // x22
  int v22; // w23
  UnityEngine_GameObject_o *v23; // x22
  UnityEngine_GameObject_o *v24; // x22
  int stampList; // w8
  int32_t v26; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_41863BC & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&floor);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v9);
    sub_B2C35C(&int_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v11);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v12);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    sub_B2C35C(&TitleInfoEventTowerStamp_TypeInfo, v14);
    byte_41863BC = 1;
  }
  TitleInfoEventTowerStamp__ResetStamp(this, *(const MethodInfo **)&floor);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  Component_srcLineSprite = (UISprite_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                            gameObject,
                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v18 = TitleInfoEventTowerStamp_TypeInfo;
  if ( (BYTE3(TitleInfoEventTowerStamp_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventTowerStamp_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTowerStamp_TypeInfo);
    v18 = TitleInfoEventTowerStamp_TypeInfo;
  }
  SPRITE_NAME_STAMP = v18->static_fields->SPRITE_NAME_STAMP;
  v26 = towerId;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
  v21 = System_String__Format(SPRITE_NAME_STAMP, v20, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(Component_srcLineSprite, v21, 0LL);
  if ( floor >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                 (UILabel_o *)v23,
                                                 spriteRoot,
                                                 (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
      if ( !this[1].klass )
        break;
      v24 = gameObject;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this[1].klass,
        (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
      if ( !v24 )
        break;
      gameObject = UnityEngine_GameObject__get_gameObject(v24, 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v24, 0LL);
      if ( !gameObject )
        break;
      stampList = (int)this->fields.stampList;
      v27.fields.z = 0.0;
      v27.fields.x = (float)(this->fields.stampStartPosY + v22 / stampList * this->fields.stampHeight);
      v27.fields.y = (float)(this->fields.stampWidth + v22 % stampList * this->fields.row);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v27, 0LL);
      if ( ++v22 >= floor )
        return;
    }
LABEL_21:
    sub_B2C434(gameObject, v16);
  }
}