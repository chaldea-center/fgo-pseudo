void __fastcall RetryConfirmItem___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A3114F & 1) == 0 )
  {
    sub_1B761C0(&RetryConfirmItem_TypeInfo, v1);
    byte_4A3114F = 1;
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
  int32_t klass; // w21
  UnityEngine_GameObject_o *v7; // x20
  int v8; // w21
  float v9; // s0
  UnityEngine_GameObject_o *v10; // x20
  float v11; // s0
  const MethodInfo *v12; // x1

  useAmount = (UnityEngine_Component_o *)this->fields.useAmount;
  if ( !useAmount )
    goto LABEL_15;
  if ( *((_DWORD *)&useAmount[19].fields + 1) == 2 )
  {
    possessionAmount = this->fields.possessionAmount;
    if ( !possessionAmount )
      goto LABEL_15;
    if ( possessionAmount->fields.mOverflow == 2 )
    {
      mWidth = possessionAmount->fields.mWidth;
      if ( SLODWORD(useAmount[7].klass) >= mWidth )
        klass = (int32_t)useAmount[7].klass;
      else
        klass = mWidth;
      useAmount = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(useAmount, 0LL);
      if ( this->fields.useName )
      {
        v7 = (UnityEngine_GameObject_o *)useAmount;
        useAmount = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)this->fields.useName,
                                                 0LL);
        if ( useAmount )
        {
          v8 = klass - 1;
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
      sub_1B7641C(useAmount, method);
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
  int useAmount; // w21
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
        useAmount = (int)this[2].fields.useAmount,
        v8 = possessionName->fields.mWidth,
        v9 = possessionAmount->fields.mWidth,
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL),
        (this = (RetryConfirmItem_o *)v4->fields.possessionAmount) == 0LL) )
  {
LABEL_15:
    sub_1B7641C(this, method);
  }
  v12 = LocalPositionX;
  if ( useAmount + mWidth >= v9 + v8 )
    v13 = useAmount + mWidth;
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
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A3114E & 1) == 0 )
  {
    sub_1B761C0(&RetryConfirmItem__SetCondensedScalePossessionAmount_d__7_TypeInfo, method);
    byte_4A3114E = 1;
  }
  v3 = sub_1B7640C(RetryConfirmItem__SetCondensedScalePossessionAmount_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
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
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v6; // w2
  int32_t v7; // w3
  bool result; // w0
  struct UILabel_o *possessionAmount; // x8
  int32_t mWidth; // w19
  UILabel_o *v11; // x19

  v2 = this;
  if ( (byte_4A31150 & 1) == 0 )
  {
    this = (RetryConfirmItem__SetCondensedScalePossessionAmount_d__7_o *)sub_1B761C0(&RetryConfirmItem_TypeInfo, method);
    byte_4A31150 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_18;
    possessionAmount = _4__this->fields.possessionAmount;
    if ( !possessionAmount )
      goto LABEL_18;
    mWidth = possessionAmount->fields.mWidth;
    this = (RetryConfirmItem__SetCondensedScalePossessionAmount_d__7_o *)RetryConfirmItem_TypeInfo;
    if ( !RetryConfirmItem_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RetryConfirmItem_TypeInfo);
      this = (RetryConfirmItem__SetCondensedScalePossessionAmount_d__7_o *)RetryConfirmItem_TypeInfo;
    }
    if ( mWidth > (__int64)this[4].fields.__2__current->klass )
    {
      v11 = _4__this->fields.possessionAmount;
      if ( !LODWORD(this[5].fields.__2__current) )
        j_il2cpp_runtime_class_init_0(this);
      if ( !v11 )
        goto LABEL_18;
      UILabel__SetCondensedScale(v11, RetryConfirmItem_TypeInfo->static_fields->PROSSESSION_AMOUNT_MAX_WIDTH, 0LL);
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
        p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B76164(p__2__current, 0, v6, v7);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
        return result;
      }
    }
LABEL_18:
    sub_1B7641C(this, method);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B761D4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B7640C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B761D4(&Method_RetryConfirmItem__SetCondensedScalePossessionAmount_d__7_System_Collections_IEnumerator_Reset__);
  sub_1B762E8(v3, v4);
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