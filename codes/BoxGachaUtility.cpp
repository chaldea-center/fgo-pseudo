void BoxGachaUtility___cctor(const MethodInfo *method)
{
  struct BoxGachaUtility_StaticFields *static_fields; // x8
  BoxGachaUtility_c *v2; // x11
  struct BoxGachaUtility_StaticFields *v3; // x8
  int32x2_t *v4; // x8

  if ( (byte_596A6FA & 1) == 0 )
  {
    sub_2213A60(&BoxGachaUtility_TypeInfo);
    byte_596A6FA = 1;
  }
  static_fields = BoxGachaUtility_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->NORMAL_ITEM_SIZE.fields.x = 0x3F3AE1483F400000LL;
  v2 = BoxGachaUtility_TypeInfo;
  static_fields->NORMAL_ITEM_SIZE.fields.z = 0.68;
  v3 = v2->static_fields;
  *(int32x2_t *)&v3->CHANGE_MAX_ITEM_SIZE.fields.x = vdup_n_s32(0x3EC28F5Cu);
  v3->CHANGE_MAX_ITEM_SIZE.fields.z = 0.38;
  v4 = (int32x2_t *)v2->static_fields;
  v4[3].n64_u64[0] = vdup_n_s32(0x3F018937u).n64_u64[0];
  v4[4].n64_u32[0] = 1057065271;
}


void BoxGachaUtility__SetBoxGachaNumSprite(UISprite_o *sprite, int32_t num, const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  System_String_o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596A6F9 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21396/*"img_gachatxt_{0:D2}"*/);
    byte_596A6F9 = 1;
  }
  v8 = num;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v8);
  v6 = System_String__Format((System_String_o *)StringLiteral_21396/*"img_gachatxt_{0:D2}"*/, v5, 0);
  if ( !sprite )
    sub_2213CDC(v6, v7);
  UISprite__set_spriteName(sprite, v6, 0);
  ((void (__fastcall *)(UISprite_o *, const MethodInfo *))sprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
    sprite,
    sprite->klass->vtable._33_MakePixelPerfect.method);
}


// local variable allocation has failed, the output may be wrong!
void BoxGachaUtility__SetMultiGachaButtonDigitNum(
        int32_t gachaTime,
        UISprite_o *oneDigit,
        UISprite_o *twoDigit,
        UISprite_o *threeDigit,
        const MethodInfo *method)
{
  unsigned int v8; // w20
  int v9; // w8
  unsigned int v10; // w10
  bool v11; // cc
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  float v14; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2

  v8 = gachaTime;
  if ( (byte_596A6F8 & 1) == 0 )
  {
    *(_QWORD *)&gachaTime = sub_2213A60(&BoxGachaUtility_TypeInfo);
    byte_596A6F8 = 1;
  }
  if ( (int)v8 < 10 )
    goto LABEL_9;
  v9 = 0;
  v10 = v8;
  do
  {
    v11 = v10 > 0x63;
    ++v9;
    v10 /= 0xAu;
  }
  while ( v11 );
  if ( v9 == 2 )
  {
    if ( twoDigit )
    {
      *(_QWORD *)&gachaTime = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)twoDigit, 0);
      if ( *(_QWORD *)&gachaTime )
      {
        UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&gachaTime, 1, 0);
        if ( threeDigit )
        {
          *(_QWORD *)&gachaTime = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)threeDigit, 0);
          if ( *(_QWORD *)&gachaTime )
          {
            UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&gachaTime, 1, 0);
            if ( !*(&BoxGachaUtility_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo, v19, v20);
            BoxGachaUtility__SetBoxGachaNumSprite(oneDigit, v8 % 0xA, v20);
            BoxGachaUtility__SetBoxGachaNumSprite(twoDigit, v8 % 0x64, v21);
            BoxGachaUtility__SetBoxGachaNumSprite(threeDigit, v8 / 0x64, v22);
            v14 = 15.0;
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
      *(_QWORD *)&gachaTime = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)twoDigit, 0);
      if ( *(_QWORD *)&gachaTime )
      {
        UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&gachaTime, 1, 0);
        if ( threeDigit )
        {
          *(_QWORD *)&gachaTime = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)threeDigit, 0);
          if ( *(_QWORD *)&gachaTime )
          {
            UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&gachaTime, 0, 0);
            if ( !*(&BoxGachaUtility_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo, v16, v17);
            BoxGachaUtility__SetBoxGachaNumSprite(oneDigit, v8 % 0xA, v17);
            BoxGachaUtility__SetBoxGachaNumSprite(twoDigit, v8 / 0xA, v18);
            v14 = 4.0;
            if ( oneDigit )
              goto LABEL_16;
          }
        }
      }
    }
LABEL_32:
    sub_2213CDC(*(_QWORD *)&gachaTime, oneDigit);
  }
  if ( v9 )
    return;
LABEL_9:
  if ( !twoDigit )
    goto LABEL_32;
  *(_QWORD *)&gachaTime = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)twoDigit, 0);
  if ( !*(_QWORD *)&gachaTime )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&gachaTime, 0, 0);
  if ( !threeDigit )
    goto LABEL_32;
  *(_QWORD *)&gachaTime = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)threeDigit, 0);
  if ( !*(_QWORD *)&gachaTime )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(*(UnityEngine_GameObject_o **)&gachaTime, 0, 0);
  if ( !*(&BoxGachaUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BoxGachaUtility_TypeInfo, v12, v13);
  BoxGachaUtility__SetBoxGachaNumSprite(oneDigit, v8, v13);
  v14 = -8.0;
  if ( !oneDigit )
    goto LABEL_32;
LABEL_16:
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)oneDigit, 0);
  GameObjectExtensions__SetLocalPositionX(gameObject, v14, 0);
}