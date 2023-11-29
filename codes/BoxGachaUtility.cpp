void __fastcall BoxGachaUtility___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct BoxGachaUtility_StaticFields *static_fields; // x9
  BoxGachaUtility_c *v3; // x8
  struct BoxGachaUtility_StaticFields *v4; // x9
  int32x2_t *v5; // x8

  if ( (byte_40FB4A4 & 1) == 0 )
  {
    sub_B16FFC(&BoxGachaUtility_TypeInfo, v1);
    byte_40FB4A4 = 1;
  }
  static_fields = BoxGachaUtility_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->NORMAL_ITEM_SIZE.fields.x = 0x3F3AE1483F400000LL;
  static_fields->NORMAL_ITEM_SIZE.fields.z = 0.68;
  v3 = BoxGachaUtility_TypeInfo;
  v4 = BoxGachaUtility_TypeInfo->static_fields;
  *(int32x2_t *)&v4->CHANGE_MAX_ITEM_SIZE.fields.x = vdup_n_s32(0x3EC28F5Cu);
  v4->CHANGE_MAX_ITEM_SIZE.fields.z = 0.38;
  v5 = (int32x2_t *)v3->static_fields;
  v5[3].n64_u64[0] = vdup_n_s32(0x3F018937u).n64_u64[0];
  v5[4].n64_u32[0] = 1057065271;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaUtility__SetBoxGachaNumSprite(UISprite_o *sprite, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FB4A3 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&num);
    sub_B16FFC(&StringLiteral_19423, v5);
    byte_40FB4A3 = 1;
  }
  v8 = num;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  v7 = System_String__Format((System_String_o *)StringLiteral_19423, v6, 0LL);
  if ( !sprite )
    sub_B170D4();
  UISprite__set_spriteName(sprite, v7, 0LL);
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))sprite->klass->vtable._33_MakePixelPerfect.method)(
    sprite,
    sprite->klass->vtable._34_get_minWidth.methodPtr);
}


void __fastcall BoxGachaUtility__SetMultiGachaButtonDigitNum(
        int32_t gachaTime,
        UISprite_o *oneDigit,
        UISprite_o *twoDigit,
        UISprite_o *threeDigit,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x0
  const MethodInfo *v11; // x2
  UnityEngine_GameObject_o *v12; // x0
  float v13; // s0
  int v14; // w8
  int32_t v15; // w10
  bool v16; // cc
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v18; // x0
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2

  if ( (byte_40FB4A2 & 1) == 0 )
  {
    sub_B16FFC(&BoxGachaUtility_TypeInfo, oneDigit);
    byte_40FB4A2 = 1;
  }
  if ( gachaTime < 10 )
    goto LABEL_42;
  v14 = 0;
  v15 = gachaTime;
  do
  {
    v16 = v15 <= 99;
    v15 /= 10;
    ++v14;
  }
  while ( !v16 );
  switch ( v14 )
  {
    case 2:
      if ( twoDigit )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)twoDigit, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          if ( threeDigit )
          {
            v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)threeDigit, 0LL);
            if ( v18 )
            {
              UnityEngine_GameObject__SetActive(v18, 1, 0LL);
              if ( (BYTE3(BoxGachaUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BoxGachaUtility_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
              }
              BoxGachaUtility__SetBoxGachaNumSprite(oneDigit, gachaTime % 10, v19);
              BoxGachaUtility__SetBoxGachaNumSprite(twoDigit, gachaTime % 100, v20);
              BoxGachaUtility__SetBoxGachaNumSprite(threeDigit, gachaTime / 100, v21);
              if ( oneDigit )
              {
                v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)oneDigit, 0LL);
                v13 = 15.0;
                goto LABEL_13;
              }
            }
          }
        }
      }
LABEL_39:
      sub_B170D4();
    case 1:
      if ( twoDigit )
      {
        v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)twoDigit, 0LL);
        if ( v22 )
        {
          UnityEngine_GameObject__SetActive(v22, 1, 0LL);
          if ( threeDigit )
          {
            v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)threeDigit, 0LL);
            if ( v23 )
            {
              UnityEngine_GameObject__SetActive(v23, 0, 0LL);
              if ( (BYTE3(BoxGachaUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BoxGachaUtility_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
              }
              BoxGachaUtility__SetBoxGachaNumSprite(oneDigit, gachaTime % 10, v24);
              BoxGachaUtility__SetBoxGachaNumSprite(twoDigit, gachaTime / 10, v25);
              if ( oneDigit )
              {
                v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)oneDigit, 0LL);
                v13 = 4.0;
                goto LABEL_13;
              }
            }
          }
        }
      }
      goto LABEL_39;
    case 0:
LABEL_42:
      if ( twoDigit )
      {
        v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)twoDigit, 0LL);
        if ( v9 )
        {
          UnityEngine_GameObject__SetActive(v9, 0, 0LL);
          if ( threeDigit )
          {
            v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)threeDigit, 0LL);
            if ( v10 )
            {
              UnityEngine_GameObject__SetActive(v10, 0, 0LL);
              if ( (BYTE3(BoxGachaUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BoxGachaUtility_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
              }
              BoxGachaUtility__SetBoxGachaNumSprite(oneDigit, gachaTime, v11);
              if ( oneDigit )
              {
                v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)oneDigit, 0LL);
                v13 = -8.0;
LABEL_13:
                GameObjectExtensions__SetLocalPositionX(v12, v13, 0LL);
                return;
              }
            }
          }
        }
      }
      goto LABEL_39;
  }
}