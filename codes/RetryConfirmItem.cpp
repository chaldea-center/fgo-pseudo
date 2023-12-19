void __fastcall RetryConfirmItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FC879 & 1) == 0 )
  {
    sub_B16FFC(&RetryConfirmItem_TypeInfo, v1);
    byte_40FC879 = 1;
  }
  RetryConfirmItem_TypeInfo->static_fields->PROSSESSION_AMOUNT_MAX_WIDTH = 130;
}


void __fastcall RetryConfirmItem___ctor(RetryConfirmItem_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall RetryConfirmItem__CenteringAmountLabel(RetryConfirmItem_o *this, const MethodInfo *method)
{
  struct UILabel_o *useAmount; // x0
  struct UILabel_o *possessionAmount; // x8
  int32_t mWidth; // w8
  int32_t v6; // w21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_Transform_o *transform; // x0
  int v10; // w21
  float v11; // s0
  UnityEngine_Component_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_Transform_o *v15; // x0
  float v16; // s0
  const MethodInfo *v17; // x1

  useAmount = this->fields.useAmount;
  if ( !useAmount )
    goto LABEL_15;
  if ( useAmount->fields.mOverflow == 2 )
  {
    possessionAmount = this->fields.possessionAmount;
    if ( !possessionAmount )
      goto LABEL_15;
    if ( possessionAmount->fields.mOverflow == 2 )
    {
      mWidth = possessionAmount->fields.mWidth;
      if ( useAmount->fields.mWidth >= mWidth )
        v6 = useAmount->fields.mWidth;
      else
        v6 = mWidth;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)useAmount, 0LL);
      if ( this->fields.useName )
      {
        v8 = gameObject;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.useName, 0LL);
        if ( transform )
        {
          v10 = v6 - 1;
          v11 = COERCE_FLOAT(UnityEngine_Transform__get_localPosition(transform, 0LL));
          GameObjectExtensions__SetLocalPositionX(v8, v11 + (float)v10, 0LL);
          v12 = (UnityEngine_Component_o *)this->fields.possessionAmount;
          if ( v12 )
          {
            v13 = UnityEngine_Component__get_gameObject(v12, 0LL);
            if ( this->fields.possessionName )
            {
              v14 = v13;
              v15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.possessionName, 0LL);
              if ( v15 )
              {
                v16 = COERCE_FLOAT(UnityEngine_Transform__get_localPosition(v15, 0LL));
                GameObjectExtensions__SetLocalPositionX(v14, v16 + (float)v10, 0LL);
                RetryConfirmItem__CenteringWholeLabelHorizontal(this, v17);
                return;
              }
            }
          }
        }
      }
LABEL_15:
      sub_B170D4();
    }
  }
}


void __fastcall RetryConfirmItem__CenteringWholeLabelHorizontal(RetryConfirmItem_o *this, const MethodInfo *method)
{
  struct UILabel_o *useName; // x8
  struct UILabel_o *possessionName; // x9
  UnityEngine_Component_o *useAmount; // x0
  struct UILabel_o *possessionAmount; // x10
  int32_t mWidth; // w20
  intptr_t m_CachedPtr; // w21
  int32_t v9; // w22
  int32_t v10; // w23
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  UnityEngine_Component_o *v13; // x0
  float v14; // s8
  int v15; // w20
  UnityEngine_GameObject_o *v16; // x0
  float v17; // s0
  UnityEngine_GameObject_o *v18; // x0

  useName = this->fields.useName;
  if ( !useName )
    goto LABEL_15;
  if ( useName->fields.mOverflow != 2 )
    return;
  possessionName = this->fields.possessionName;
  if ( !possessionName )
    goto LABEL_15;
  if ( possessionName->fields.mOverflow != 2 )
    return;
  useAmount = (UnityEngine_Component_o *)this->fields.useAmount;
  if ( !useAmount )
    goto LABEL_15;
  possessionAmount = this->fields.possessionAmount;
  if ( !possessionAmount
    || (mWidth = useName->fields.mWidth,
        m_CachedPtr = useAmount[6].fields.m_CachedPtr,
        v9 = possessionName->fields.mWidth,
        v10 = possessionAmount->fields.mWidth,
        gameObject = UnityEngine_Component__get_gameObject(useAmount, 0LL),
        LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL),
        (v13 = (UnityEngine_Component_o *)this->fields.possessionAmount) == 0LL) )
  {
LABEL_15:
    sub_B170D4();
  }
  v14 = LocalPositionX;
  if ( m_CachedPtr + mWidth >= v10 + v9 )
    v15 = m_CachedPtr + mWidth;
  else
    v15 = v10 + v9;
  v16 = UnityEngine_Component__get_gameObject(v13, 0LL);
  v17 = GameObjectExtensions__GetLocalPositionX(v16, 0LL);
  if ( v14 < v17 )
    v14 = v17;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(v18, (float)((float)v15 * 0.5) - v14, 0LL);
}


System_Collections_IEnumerator_o *__fastcall RetryConfirmItem__SetCondensedScalePossessionAmount(
        RetryConfirmItem_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FC878 & 1) == 0 )
  {
    sub_B16FFC(&RetryConfirmItem__SetCondensedScalePossessionAmount_d__7_TypeInfo, method);
    byte_40FC878 = 1;
  }
  v6 = sub_B170CC(RetryConfirmItem__SetCondensedScalePossessionAmount_d__7_TypeInfo, method, v2, v3, v4);
  RetryConfirmItem__SetCondensedScalePossessionAmount_d__7___ctor(
    (RetryConfirmItem__SetCondensedScalePossessionAmount_d__7_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
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
  int32_t _1__state; // w8
  struct RetryConfirmItem_o *_4__this; // x20
  UILabel_o *v5; // x0
  Il2CppObject **p__2__current; // x19
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  bool result; // w0
  struct UILabel_o *possessionAmount; // x8
  int32_t mWidth; // w19
  RetryConfirmItem_c *v16; // x0
  UILabel_o *v17; // x19

  if ( (byte_40F7436 & 1) == 0 )
  {
    sub_B16FFC(&RetryConfirmItem_TypeInfo, method);
    byte_40F7436 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_20;
    possessionAmount = _4__this->fields.possessionAmount;
    if ( !possessionAmount )
      goto LABEL_20;
    mWidth = possessionAmount->fields.mWidth;
    v16 = RetryConfirmItem_TypeInfo;
    if ( (BYTE3(RetryConfirmItem_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RetryConfirmItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RetryConfirmItem_TypeInfo);
      v16 = RetryConfirmItem_TypeInfo;
    }
    if ( mWidth > v16->static_fields->PROSSESSION_AMOUNT_MAX_WIDTH )
    {
      v17 = _4__this->fields.possessionAmount;
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v16);
      if ( !v17 )
        goto LABEL_20;
      UILabel__SetCondensedScale(v17, RetryConfirmItem_TypeInfo->static_fields->PROSSESSION_AMOUNT_MAX_WIDTH, 0LL);
    }
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      v5 = _4__this->fields.possessionAmount;
      if ( v5 )
      {
        UILabel__set_overflowMethod(v5, 2, 0LL);
        this->fields.__2__current = 0LL;
        p__2__current = &this->fields.__2__current;
        sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v7, v8, v9, v10, v11, v12);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
    }
LABEL_20:
    sub_B170D4();
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(
    &Method_RetryConfirmItem__SetCondensedScalePossessionAmount_d__7_System_Collections_IEnumerator_Reset__,
    v8);
  sub_B170A0();
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