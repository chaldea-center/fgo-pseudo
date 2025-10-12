void RetryConfirmItem___ctor(RetryConfirmItem_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void RetryConfirmItem__CenteringAmountLabel(RetryConfirmItem_o *this, const MethodInfo *method)
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
  if ( HIDWORD(useAmount[19].fields.m_CachedPtr) == 2 )
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
      useAmount = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(useAmount, 0);
      if ( this->fields.useName )
      {
        v7 = (UnityEngine_GameObject_o *)useAmount;
        useAmount = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)this->fields.useName,
                                                 0);
        if ( useAmount )
        {
          v8 = klass - 1;
          v9 = COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)useAmount, 0));
          GameObjectExtensions__SetLocalPositionX(v7, v9 + (float)v8, 0);
          useAmount = (UnityEngine_Component_o *)this->fields.possessionAmount;
          if ( useAmount )
          {
            useAmount = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(useAmount, 0);
            if ( this->fields.possessionName )
            {
              v10 = (UnityEngine_GameObject_o *)useAmount;
              useAmount = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this->fields.possessionName,
                                                       0);
              if ( useAmount )
              {
                v11 = COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)useAmount, 0));
                GameObjectExtensions__SetLocalPositionX(v10, v11 + (float)v8, 0);
                RetryConfirmItem__CenteringWholeLabelHorizontal(this, v12);
                return;
              }
            }
          }
        }
      }
LABEL_15:
      sub_1C32E7C(useAmount);
    }
  }
}


void RetryConfirmItem__CenteringWholeLabelHorizontal(RetryConfirmItem_o *this, const MethodInfo *method)
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
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0),
        (this = (RetryConfirmItem_o *)v4->fields.possessionAmount) == 0) )
  {
LABEL_15:
    sub_1C32E7C(this);
  }
  v12 = LocalPositionX;
  if ( useAmount + mWidth >= v9 + v8 )
    v13 = useAmount + mWidth;
  else
    v13 = v9 + v8;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v15 = GameObjectExtensions__GetLocalPositionX(v14, 0);
  if ( v12 < v15 )
    v12 = v15;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
  GameObjectExtensions__SetLocalPositionX(v16, (float)((float)v13 * 0.5) - v12, 0);
}


System_Collections_IEnumerator_o *RetryConfirmItem__SetCondensedScalePossessionAmount(
        RetryConfirmItem_o *this,
        bool isDispUseItemUI,
        const MethodInfo *method)
{
  bool v5; // w21
  __int64 v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C3B29C & 1) == 0 )
  {
    sub_1C32C20(&RetryConfirmItem__SetCondensedScalePossessionAmount_d__8_TypeInfo);
    byte_4C3B29C = 1;
  }
  v5 = isDispUseItemUI;
  v6 = sub_1C32E6C(RetryConfirmItem__SetCondensedScalePossessionAmount_d__8_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v6 + 32), (int32_t)this, v7, v8);
  *(_BYTE *)(v6 + 40) = v5;
  return (System_Collections_IEnumerator_o *)v6;
}


void RetryConfirmItem__SetCondensedScalePossessionAmount_d__8___ctor(
        RetryConfirmItem__SetCondensedScalePossessionAmount_d__8_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool RetryConfirmItem__SetCondensedScalePossessionAmount_d__8__MoveNext(
        RetryConfirmItem__SetCondensedScalePossessionAmount_d__8_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w9
  struct RetryConfirmItem_o *_4__this; // x8
  RetryConfirmItem__SetCondensedScalePossessionAmount_d__8_o *v4; // x19
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  bool result; // w0
  _BOOL4 isDispUseItemUI; // w9
  int32_t v10; // w1

  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  v4 = this;
  if ( _1__state == 1 )
  {
    isDispUseItemUI = this->fields.isDispUseItemUI;
    this->fields.__1__state = -1;
    if ( isDispUseItemUI )
      v10 = 130;
    else
      v10 = 170;
    if ( !_4__this )
      goto LABEL_14;
    this = (RetryConfirmItem__SetCondensedScalePossessionAmount_d__8_o *)_4__this->fields.possessionAmount;
    if ( !this )
      goto LABEL_14;
    if ( SLODWORD(this[3].fields.__2__current) > v10 )
      UILabel__SetCondensedScale((UILabel_o *)this, v10, 0, 0);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (RetryConfirmItem__SetCondensedScalePossessionAmount_d__8_o *)_4__this->fields.possessionAmount;
      if ( this )
      {
        UILabel__set_overflowMethod((UILabel_o *)this, 2, 0);
        v4->fields.__2__current = 0;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C32BC4(p__2__current, 0, v6, v7);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
    }
LABEL_14:
    sub_1C32E7C(this);
  }
  return 0;
}


Il2CppObject *RetryConfirmItem__SetCondensedScalePossessionAmount_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        RetryConfirmItem__SetCondensedScalePossessionAmount_d__8_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn RetryConfirmItem__SetCondensedScalePossessionAmount_d__8__System_Collections_IEnumerator_Reset(
        RetryConfirmItem__SetCondensedScalePossessionAmount_d__8_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_RetryConfirmItem__SetCondensedScalePossessionAmount_d__8_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *RetryConfirmItem__SetCondensedScalePossessionAmount_d__8__System_Collections_IEnumerator_get_Current(
        RetryConfirmItem__SetCondensedScalePossessionAmount_d__8_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void RetryConfirmItem__SetCondensedScalePossessionAmount_d__8__System_IDisposable_Dispose(
        RetryConfirmItem__SetCondensedScalePossessionAmount_d__8_o *this,
        const MethodInfo *method)
{
  ;
}