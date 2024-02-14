void __fastcall BoxGachaUtility___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct BoxGachaUtility_StaticFields *static_fields; // x9
  BoxGachaUtility_c *v3; // x8
  struct BoxGachaUtility_StaticFields *v4; // x9
  int32x2_t *v5; // x8

  if ( (byte_4216383 & 1) == 0 )
  {
    sub_B0D8A4(&BoxGachaUtility_TypeInfo, v1);
    byte_4216383 = 1;
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

  if ( (byte_4216382 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&num);
    sub_B0D8A4(&StringLiteral_19559/*"img_gachatxt_{0:D2}"*/, v5);
    byte_4216382 = 1;
  }
  v8 = num;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  v7 = System_String__Format((System_String_o *)StringLiteral_19559/*"img_gachatxt_{0:D2}"*/, v6, 0LL);
  if ( !sprite )
    sub_B0D97C(v7);
  UISprite__set_spriteName(sprite, v7, 0LL);
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))sprite->klass->vtable._33_MakePixelPerfect.method)(
    sprite,
    sprite->klass->vtable._34_get_minWidth.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaUtility__SetMultiGachaButtonDigitNum(
        int32_t gachaTime,
        UISprite_o *oneDigit,
        UISprite_o *twoDigit,
        UISprite_o *threeDigit,
        const MethodInfo *method)
{
  int v8; // w20
  const MethodInfo *v9; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  float v11; // s0
  int v12; // w8
  int v13; // w10
  bool v14; // cc
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2

  v8 = gachaTime;
  if ( (byte_4216381 & 1) == 0 )
  {
    *(_QWORD *)&gachaTime = sub_B0D8A4(&BoxGachaUtility_TypeInfo, oneDigit);
    byte_4216381 = 1;
  }
  if ( v8 < 10 )
    goto LABEL_42;
  v12 = 0;
  v13 = v8;
  do
  {
    v14 = v13 <= 99;
    v13 /= 10;
    ++v12;
  }
  while ( !v14 );
  switch ( v12 )
  {
    case 2:
      if ( twoDigit )
      {
        *(_QWORD *)&gachaTime = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)twoDigit, 0LL);
        if ( *(_QWORD *)&gachaTime )
        {
          UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&gachaTime, 1, 0LL);
          if ( threeDigit )
          {
            *(_QWORD *)&gachaTime = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)threeDigit, 0LL);
            if ( *(_QWORD *)&gachaTime )
            {
              UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&gachaTime, 1, 0LL);
              if ( (BYTE3(BoxGachaUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BoxGachaUtility_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
              }
              BoxGachaUtility__SetBoxGachaNumSprite(oneDigit, v8 % 10, v15);
              BoxGachaUtility__SetBoxGachaNumSprite(twoDigit, v8 % 100, v16);
              BoxGachaUtility__SetBoxGachaNumSprite(threeDigit, v8 / 100, v17);
              if ( oneDigit )
              {
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)oneDigit, 0LL);
                v11 = 15.0;
                goto LABEL_13;
              }
            }
          }
        }
      }
LABEL_39:
      sub_B0D97C(*(_QWORD *)&gachaTime);
    case 1:
      if ( twoDigit )
      {
        *(_QWORD *)&gachaTime = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)twoDigit, 0LL);
        if ( *(_QWORD *)&gachaTime )
        {
          UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&gachaTime, 1, 0LL);
          if ( threeDigit )
          {
            *(_QWORD *)&gachaTime = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)threeDigit, 0LL);
            if ( *(_QWORD *)&gachaTime )
            {
              UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&gachaTime, 0, 0LL);
              if ( (BYTE3(BoxGachaUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BoxGachaUtility_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
              }
              BoxGachaUtility__SetBoxGachaNumSprite(oneDigit, v8 % 10, v18);
              BoxGachaUtility__SetBoxGachaNumSprite(twoDigit, v8 / 10, v19);
              if ( oneDigit )
              {
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)oneDigit, 0LL);
                v11 = 4.0;
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
        *(_QWORD *)&gachaTime = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)twoDigit, 0LL);
        if ( *(_QWORD *)&gachaTime )
        {
          UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&gachaTime, 0, 0LL);
          if ( threeDigit )
          {
            *(_QWORD *)&gachaTime = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)threeDigit, 0LL);
            if ( *(_QWORD *)&gachaTime )
            {
              UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&gachaTime, 0, 0LL);
              if ( (BYTE3(BoxGachaUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BoxGachaUtility_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
              }
              BoxGachaUtility__SetBoxGachaNumSprite(oneDigit, v8, v9);
              if ( oneDigit )
              {
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)oneDigit, 0LL);
                v11 = -8.0;
LABEL_13:
                GameObjectExtensions__SetLocalPositionX(gameObject, v11, 0LL);
                return;
              }
            }
          }
        }
      }
      goto LABEL_39;
  }
}