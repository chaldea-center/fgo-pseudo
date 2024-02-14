void __fastcall RetryConfirmItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4218746 & 1) == 0 )
  {
    sub_B0D8A4(&RetryConfirmItem_TypeInfo, v1);
    byte_4218746 = 1;
  }
  RetryConfirmItem_TypeInfo->static_fields->PROSSESSION_AMOUNT_MAX_WIDTH = 130;
}


void __fastcall RetryConfirmItem___ctor(RetryConfirmItem_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall RetryConfirmItem__CenteringAmountLabel(RetryConfirmItem_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *useAmount; // x0
  struct UILabel_o *possessionAmount; // x8
  int32_t mWidth; // w8
  int32_t m_CachedPtr; // w21
  UnityEngine_GameObject_o *v7; // x20
  int v8; // w21
  float v9; // s0
  UnityEngine_GameObject_o *v10; // x20
  float v11; // s0
  const MethodInfo *v12; // x1

  useAmount = (UnityEngine_Component_o *)this->fields.useAmount;
  if ( !useAmount )
    goto LABEL_15;
  if ( HIDWORD(useAmount[19].monitor) == 2 )
  {
    possessionAmount = this->fields.possessionAmount;
    if ( !possessionAmount )
      goto LABEL_15;
    if ( possessionAmount->fields.mOverflow == 2 )
    {
      mWidth = possessionAmount->fields.mWidth;
      if ( useAmount[6].fields.m_CachedPtr >= mWidth )
        m_CachedPtr = useAmount[6].fields.m_CachedPtr;
      else
        m_CachedPtr = mWidth;
      useAmount = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(useAmount, 0LL);
      if ( this->fields.useName )
      {
        v7 = (UnityEngine_GameObject_o *)useAmount;
        useAmount = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)this->fields.useName,
                                                 0LL);
        if ( useAmount )
        {
          v8 = m_CachedPtr - 1;
          v9 = COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)useAmount, 0LL));
          GameObjectExtensions__SetLocalPositionX(v7, v9 + (float)v8, 0LL);
          useAmount = (UnityEngine_Component_o *)this->fields.possessionAmount;
          if ( useAmount )
          {
            useAmount = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(useAmount, 0LL);
            if ( this->fields.possessionName )
            {
              v10 = (UnityEngine_GameObject_o *)useAmount;
              useAmount = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this->fields.possessionName,
                                                       0LL);
              if ( useAmount )
              {
                v11 = COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)useAmount, 0LL));
                GameObjectExtensions__SetLocalPositionX(v10, v11 + (float)v8, 0LL);
                RetryConfirmItem__CenteringWholeLabelHorizontal(this, v12);
                return;
              }
            }
          }
        }
      }
LABEL_15:
      sub_B0D97C(useAmount);
    }
  }
}


void __fastcall RetryConfirmItem__CenteringWholeLabelHorizontal(RetryConfirmItem_o *this, const MethodInfo *method)
{
  struct UILabel_o *useName; // x8
  struct UILabel_o *possessionName; // x9
  RetryConfirmItem_o *v4; // x19
  struct UILabel_o *possessionAmount; // x10
  int32_t mWidth; // w20
  int v7; // w21
  int32_t v8; // w22
  int32_t v9; // w23
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  float v12; // s8
  int v13; // w20
  UnityEngine_GameObject_o *v14; // x0
  float v15; // s0
  UnityEngine_GameObject_o *v16; // x0

  useName = this->fields.useName;
  if ( !useName )
    goto LABEL_15;
  if ( useName->fields.mOverflow != 2 )
    return;
  possessionName = this->fields.possessionName;
  v4 = this;
  if ( !possessionName )
    goto LABEL_15;
  if ( possessionName->fields.mOverflow != 2 )
    return;
  this = (RetryConfirmItem_o *)this->fields.useAmount;
  if ( !this )
    goto LABEL_15;
  possessionAmount = v4->fields.possessionAmount;
  if ( !possessionAmount
    || (mWidth = useName->fields.mWidth,
        v7 = (int)this[2].fields.possessionAmount,
        v8 = possessionName->fields.mWidth,
        v9 = possessionAmount->fields.mWidth,
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL),
        (this = (RetryConfirmItem_o *)v4->fields.possessionAmount) == 0LL) )
  {
LABEL_15:
    sub_B0D97C(this);
  }
  v12 = LocalPositionX;
  if ( v7 + mWidth >= v9 + v8 )
    v13 = v7 + mWidth;
  else
    v13 = v9 + v8;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v15 = GameObjectExtensions__GetLocalPositionX(v14, 0LL);
  if ( v12 < v15 )
    v12 = v15;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  GameObjectExtensions__SetLocalPositionX(v16, (float)((float)v13 * 0.5) - v12, 0LL);
}


System_Collections_IEnumerator_o *__fastcall RetryConfirmItem__SetCondensedScalePossessionAmount(
        RetryConfirmItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4218745 & 1) == 0 )
  {
    sub_B0D8A4(&RetryConfirmItem__SetCondensedScalePossessionAmount_d__7_TypeInfo, method);
    byte_4218745 = 1;
  }
  v4 = sub_B0D974(RetryConfirmItem__SetCondensedScalePossessionAmount_d__7_TypeInfo, method, v2);
  RetryConfirmItem__SetCondensedScalePossessionAmount_d__7___ctor(
    (RetryConfirmItem__SetCondensedScalePossessionAmount_d__7_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall RetryConfirmItem__SetCondensedScalePossessionAmount_d__7___ctor(
        RetryConfirmItem__SetCondensedScalePossessionAmount_d__7_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall RetryConfirmItem__SetCondensedScalePossessionAmount_d__7__MoveNext(
        RetryConfirmItem__SetCondensedScalePossessionAmount_d__7_o *this,
        const MethodInfo *method)
{
  RetryConfirmItem__SetCondensedScalePossessionAmount_d__7_o *v2; // x19
  int32_t _1__state; // w8
  struct RetryConfirmItem_o *_4__this; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct UILabel_o *possessionAmount; // x8
  int32_t mWidth; // w19
  UILabel_o *v9; // x19

  v2 = this;
  if ( (byte_4212539 & 1) == 0 )
  {
    this = (RetryConfirmItem__SetCondensedScalePossessionAmount_d__7_o *)sub_B0D8A4(&RetryConfirmItem_TypeInfo, method);
    byte_4212539 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_20;
    possessionAmount = _4__this->fields.possessionAmount;
    if ( !possessionAmount )
      goto LABEL_20;
    mWidth = possessionAmount->fields.mWidth;
    this = (RetryConfirmItem__SetCondensedScalePossessionAmount_d__7_o *)RetryConfirmItem_TypeInfo;
    if ( (BYTE3(RetryConfirmItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RetryConfirmItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RetryConfirmItem_TypeInfo);
      this = (RetryConfirmItem__SetCondensedScalePossessionAmount_d__7_o *)RetryConfirmItem_TypeInfo;
    }
    if ( mWidth > (__int64)this[4].fields.__2__current->klass )
    {
      v9 = _4__this->fields.possessionAmount;
      if ( (BYTE3(this[7].fields.__2__current) & 4) != 0 && !LODWORD(this[5].fields.__2__current) )
        j_il2cpp_runtime_class_init_0(this);
      if ( !v9 )
        goto LABEL_20;
      UILabel__SetCondensedScale(v9, RetryConfirmItem_TypeInfo->static_fields->PROSSESSION_AMOUNT_MAX_WIDTH, 0LL);
    }
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (RetryConfirmItem__SetCondensedScalePossessionAmount_d__7_o *)_4__this->fields.possessionAmount;
      if ( this )
      {
        UILabel__set_overflowMethod((UILabel_o *)this, 2, 0LL);
        v2->fields.__2__current = 0LL;
        p__2__current = &v2->fields.__2__current;
        sub_B0D840(p__2__current, 0LL);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
    }
LABEL_20:
    sub_B0D97C(this);
  }
  return 0;
}


Il2CppObject *__fastcall RetryConfirmItem__SetCondensedScalePossessionAmount_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        RetryConfirmItem__SetCondensedScalePossessionAmount_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn RetryConfirmItem__SetCondensedScalePossessionAmount_d__7__System_Collections_IEnumerator_Reset(
        RetryConfirmItem__SetCondensedScalePossessionAmount_d__7_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_RetryConfirmItem__SetCondensedScalePossessionAmount_d__7_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall RetryConfirmItem__SetCondensedScalePossessionAmount_d__7__System_Collections_IEnumerator_get_Current(
        RetryConfirmItem__SetCondensedScalePossessionAmount_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall RetryConfirmItem__SetCondensedScalePossessionAmount_d__7__System_IDisposable_Dispose(
        RetryConfirmItem__SetCondensedScalePossessionAmount_d__7_o *this,
        const MethodInfo *method)
{
  ;
}