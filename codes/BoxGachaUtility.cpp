void __fastcall BoxGachaUtility___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct BoxGachaUtility_StaticFields *static_fields; // x8
  BoxGachaUtility_c *v3; // x8
  struct BoxGachaUtility_StaticFields *v4; // x9
  int32x2_t *v5; // x8

  if ( (byte_4A52732 & 1) == 0 )
  {
    sub_1B863B8(&BoxGachaUtility_TypeInfo, v1);
    byte_4A52732 = 1;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A52731 & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, *(_QWORD *)&num);
    sub_1B863B8(&StringLiteral_20126/*"img_gachatxt_{0:D2}"*/, v7);
    byte_4A52731 = 1;
  }
  v11 = num;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, method, v3, v4);
  v9 = System_String__Format((System_String_o *)StringLiteral_20126/*"img_gachatxt_{0:D2}"*/, v8, 0LL);
  if ( !sprite )
    sub_1B86614(v9, v10);
  UISprite__set_spriteName(sprite, v9, 0LL);
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
  int v9; // w8
  unsigned int v10; // w10
  bool v11; // cc
  const MethodInfo *v12; // x2
  float v13; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2

  v8 = gachaTime;
  if ( (byte_4A52730 & 1) == 0 )
  {
    *(_QWORD *)&gachaTime = sub_1B863B8(&BoxGachaUtility_TypeInfo, oneDigit);
    byte_4A52730 = 1;
  }
  if ( v8 < 10 )
    goto LABEL_9;
  v9 = 0;
  v10 = v8;
  do
  {
    v11 = v10 > 0x63;
    v10 /= 0xAu;
    ++v9;
  }
  while ( v11 );
  if ( v9 == 2 )
  {
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
            if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
            BoxGachaUtility__SetBoxGachaNumSprite(oneDigit, v8 % 10, v15);
            BoxGachaUtility__SetBoxGachaNumSprite(twoDigit, v8 % 100, v16);
            BoxGachaUtility__SetBoxGachaNumSprite(threeDigit, v8 / 100, v17);
            v13 = 15.0;
            if ( oneDigit )
              goto LABEL_16;
          }
        }
      }
    }
    goto LABEL_32;
  }
  if ( v9 == 1 )
  {
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
            if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
            BoxGachaUtility__SetBoxGachaNumSprite(oneDigit, v8 % 10, v18);
            BoxGachaUtility__SetBoxGachaNumSprite(twoDigit, v8 / 10, v19);
            v13 = 4.0;
            if ( oneDigit )
              goto LABEL_16;
          }
        }
      }
    }
LABEL_32:
    sub_1B86614(*(_QWORD *)&gachaTime, oneDigit);
  }
  if ( v9 )
    return;
LABEL_9:
  if ( !twoDigit )
    goto LABEL_32;
  *(_QWORD *)&gachaTime = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)twoDigit, 0LL);
  if ( !*(_QWORD *)&gachaTime )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&gachaTime, 0, 0LL);
  if ( !threeDigit )
    goto LABEL_32;
  *(_QWORD *)&gachaTime = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)threeDigit, 0LL);
  if ( !*(_QWORD *)&gachaTime )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&gachaTime, 0, 0LL);
  if ( !BoxGachaUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo);
  BoxGachaUtility__SetBoxGachaNumSprite(oneDigit, v8, v12);
  v13 = -8.0;
  if ( !oneDigit )
    goto LABEL_32;
LABEL_16:
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)oneDigit, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, v13, 0LL);
}