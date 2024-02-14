void __fastcall ShopInfoIndicator___ctor(ShopInfoIndicator_o *this, const MethodInfo *method)
{
  this->fields.isClick = 1;
  ListViewIndicator___ctor((ListViewIndicator_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall ShopInfoIndicator__InformationChangeCR(
        ShopInfoIndicator_o *this,
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

  if ( (byte_42160B4 & 1) == 0 )
  {
    sub_B0D8A4(&ShopInfoIndicator__InformationChangeCR_d__8_TypeInfo, method);
    byte_42160B4 = 1;
  }
  v4 = sub_B0D974(ShopInfoIndicator__InformationChangeCR_d__8_TypeInfo, method, v2);
  ShopInfoIndicator__InformationChangeCR_d__8___ctor((ShopInfoIndicator__InformationChangeCR_d__8_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall ShopInfoIndicator__InformationPanelTweenAlpha(ShopInfoIndicator_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UIPanel_o *informationPanel; // x0
  UnityEngine_Object_o *Component_WebViewObject; // x19

  if ( (byte_42160B5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_42160B5 = 1;
  }
  informationPanel = this->fields.informationPanel;
  if ( !informationPanel )
    goto LABEL_12;
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)informationPanel,
                                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  informationPanel = (struct UIPanel_o *)UnityEngine_Object__op_Equality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)informationPanel & 1) == 0 )
  {
    if ( Component_WebViewObject )
    {
      if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, 0LL) )
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, 0, 0LL);
      return;
    }
LABEL_12:
    sub_B0D97C(informationPanel);
  }
}


void __fastcall ShopInfoIndicator__OnClick(ShopInfoIndicator_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_42160B6 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_42160B6 = 1;
  }
  if ( !this->fields.isClick )
  {
    this->fields.isClick = 1;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    ShopInfoIndicator__SwitchInfo(this, v3);
  }
}


void __fastcall ShopInfoIndicator__StartInformationChange(ShopInfoIndicator_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct System_Collections_IEnumerator_o *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  const MethodInfo *v11; // x1

  ShopInfoIndicator__StopInformationChange(this, method);
  v4 = ShopInfoIndicator__InformationChangeCR(this, v3);
  this->fields.InformationChangeCRW = v4;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.InformationChangeCRW,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128(
    (UnityEngine_MonoBehaviour_o *)this,
    this->fields.InformationChangeCRW,
    0LL);
  ShopInfoIndicator__SwitchInfo(this, v11);
}


void __fastcall ShopInfoIndicator__StopInformationChange(ShopInfoIndicator_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *InformationChangeCRW; // x1
  struct System_Collections_IEnumerator_o **p_InformationChangeCRW; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  p_InformationChangeCRW = &this->fields.InformationChangeCRW;
  InformationChangeCRW = this->fields.InformationChangeCRW;
  if ( InformationChangeCRW )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, InformationChangeCRW, 0LL);
    this->fields.InformationChangeCRW = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)p_InformationChangeCRW, 0LL, v5, v6, v7, v8, v9, v10);
  }
}


void __fastcall ShopInfoIndicator__SwitchInfo(ShopInfoIndicator_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *infos; // x20
  int max_length; // w8
  ShopInfoIndicator_o *v4; // x19
  unsigned int v5; // w21
  struct UnityEngine_GameObject_array *v6; // x8
  __int64 infoIndex; // x9
  struct UnityEngine_GameObject_array *v8; // x8
  int v9; // w9
  int32_t v10; // w8
  __int64 v11; // x0

  infos = this->fields.infos;
  if ( !infos )
    goto LABEL_15;
  max_length = infos->max_length;
  v4 = this;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( v5 < max_length )
    {
      this = (ShopInfoIndicator_o *)infos->m_Items[v5];
      if ( !this )
        goto LABEL_15;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      max_length = infos->max_length;
      if ( (int)++v5 >= max_length )
        goto LABEL_7;
    }
LABEL_16:
    v11 = sub_B0D9A8(this);
    sub_B0D948(v11, 0LL);
  }
LABEL_7:
  v6 = v4->fields.infos;
  if ( !v6 )
    goto LABEL_15;
  infoIndex = v4->fields.infoIndex;
  if ( (unsigned int)infoIndex >= v6->max_length )
    goto LABEL_16;
  this = (ShopInfoIndicator_o *)v6->m_Items[infoIndex];
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL), (v8 = v4->fields.infos) == 0LL) )
  {
LABEL_15:
    sub_B0D97C(this);
  }
  v9 = v4->fields.infoIndex;
  if ( v9 < (signed int)(v8->max_length - 1) )
    v10 = v9 + 1;
  else
    v10 = 0;
  v4->fields.infoIndex = v10;
}


void __fastcall ShopInfoIndicator__InformationChangeCR_d__8___ctor(
        ShopInfoIndicator__InformationChangeCR_d__8_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ShopInfoIndicator__InformationChangeCR_d__8__MoveNext(
        ShopInfoIndicator__InformationChangeCR_d__8_o *this,
        const MethodInfo *method)
{
  ShopInfoIndicator__InformationChangeCR_d__8_o *v2; // x19
  __int64 v3; // x1
  struct ShopInfoIndicator_o *_4__this; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_WaitForEndOfFrame_o *v7; // x22
  bool result; // w0
  ShopInfoIndicator__InformationChangeCR_d__8_o **p_ta_5__2; // x21
  ShopInfoIndicator__InformationChangeCR_d__8_o **v10; // x21
  UnityEngine_GameObject_o *v11; // x0
  TweenAlpha_o *v12; // x0
  UnityEngine_Object_o *v13; // x22
  Il2CppObject *v14; // x1
  int v15; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  TweenAlpha_o *v17; // x0
  UnityEngine_Object_o *ta_5__2; // x22
  Il2CppObject *v19; // x1
  Il2CppObject *wait_5__3; // x1

  v2 = this;
  if ( (byte_4212290 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    this = (ShopInfoIndicator__InformationChangeCR_d__8_o *)sub_B0D8A4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v3);
    byte_4212290 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_50;
      ShopInfoIndicator__InformationPanelTweenAlpha(_4__this, 0LL);
      this = (ShopInfoIndicator__InformationChangeCR_d__8_o *)_4__this->fields.informationPanel;
      if ( !this )
        goto LABEL_50;
      ((void (__fastcall *)(ShopInfoIndicator__InformationChangeCR_d__8_o *, void *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
        this,
        this->klass[1]._1.image,
        1.0);
      _4__this->fields.isClick = 1;
      v2->fields._ta_5__2 = 0LL;
      sub_B0D840(&v2->fields._ta_5__2, 0LL);
      v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v5, v6);
      UnityEngine_WaitForEndOfFrame___ctor(v7, 0LL);
      v2->fields._wait_5__3 = v7;
      sub_B0D840(&v2->fields._wait_5__3, v7);
      goto LABEL_15;
    case 1:
      p_ta_5__2 = (ShopInfoIndicator__InformationChangeCR_d__8_o **)&v2->fields._ta_5__2;
      v2->fields.__1__state = -1;
      goto LABEL_25;
    case 2:
      v2->fields.__1__state = -1;
      if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v2->fields._startTime_5__4) >= 3.0 )
      {
        if ( _4__this )
          goto LABEL_34;
        goto LABEL_50;
      }
      if ( !_4__this )
        goto LABEL_50;
      while ( 1 )
      {
        if ( !_4__this->fields.isClick )
        {
          wait_5__3 = (Il2CppObject *)v2->fields._wait_5__3;
          v2->fields.__2__current = wait_5__3;
          sub_B0D840(&v2->fields.__2__current, wait_5__3);
          v15 = 2;
          goto LABEL_48;
        }
LABEL_34:
        if ( _4__this->fields.isClick )
          goto LABEL_15;
        this = (ShopInfoIndicator__InformationChangeCR_d__8_o *)_4__this->fields.informationPanel;
        if ( !this )
          goto LABEL_50;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v17 = TweenAlpha__Begin(gameObject, 0.5, 0.0, 0LL);
        v2->fields._ta_5__2 = v17;
        v10 = (ShopInfoIndicator__InformationChangeCR_d__8_o **)&v2->fields._ta_5__2;
        sub_B0D840(&v2->fields._ta_5__2, v17);
        ta_5__2 = (UnityEngine_Object_o *)v2->fields._ta_5__2;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (ShopInfoIndicator__InformationChangeCR_d__8_o *)UnityEngine_Object__op_Inequality(ta_5__2, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
        while ( 1 )
        {
LABEL_15:
          if ( !_4__this )
            goto LABEL_50;
          ShopInfoIndicator__InformationPanelTweenAlpha(_4__this, 0LL);
          this = (ShopInfoIndicator__InformationChangeCR_d__8_o *)_4__this->fields.informationPanel;
          if ( !this )
            goto LABEL_50;
          if ( _4__this->fields.isClick )
            break;
          v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v12 = TweenAlpha__Begin(v11, 0.5, 1.0, 0LL);
          v2->fields._ta_5__2 = v12;
          p_ta_5__2 = (ShopInfoIndicator__InformationChangeCR_d__8_o **)&v2->fields._ta_5__2;
          sub_B0D840(&v2->fields._ta_5__2, v12);
          ShopInfoIndicator__SwitchInfo(_4__this, 0LL);
          v13 = (UnityEngine_Object_o *)v2->fields._ta_5__2;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          this = (ShopInfoIndicator__InformationChangeCR_d__8_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !*p_ta_5__2 )
              goto LABEL_50;
            LODWORD((*p_ta_5__2)->fields.__2__current) = 6;
LABEL_25:
            this = *p_ta_5__2;
            if ( !*p_ta_5__2 )
              goto LABEL_50;
            this = (ShopInfoIndicator__InformationChangeCR_d__8_o *)UnityEngine_Behaviour__get_enabled(
                                                                      (UnityEngine_Behaviour_o *)this,
                                                                      0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !_4__this )
                goto LABEL_50;
              if ( !_4__this->fields.isClick )
              {
                v14 = (Il2CppObject *)v2->fields._wait_5__3;
                v2->fields.__2__current = v14;
                sub_B0D840(&v2->fields.__2__current, v14);
                v15 = 1;
                goto LABEL_48;
              }
            }
            else if ( !_4__this )
            {
              goto LABEL_50;
            }
          }
          if ( !_4__this->fields.isClick )
            goto LABEL_32;
        }
        ((void (__fastcall *)(ShopInfoIndicator__InformationChangeCR_d__8_o *, void *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
          this,
          this->klass[1]._1.image,
          1.0);
        _4__this->fields.isClick = 0;
LABEL_32:
        v2->fields._startTime_5__4 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      }
      if ( !*v10 )
        goto LABEL_50;
      LODWORD((*v10)->fields.__2__current) = 6;
LABEL_42:
      this = *v10;
      if ( !*v10 )
        goto LABEL_50;
      this = (ShopInfoIndicator__InformationChangeCR_d__8_o *)UnityEngine_Behaviour__get_enabled(
                                                                (UnityEngine_Behaviour_o *)this,
                                                                0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_15;
      if ( !_4__this )
LABEL_50:
        sub_B0D97C(this);
      if ( _4__this->fields.isClick )
        goto LABEL_15;
      v19 = (Il2CppObject *)v2->fields._wait_5__3;
      v2->fields.__2__current = v19;
      sub_B0D840(&v2->fields.__2__current, v19);
      v15 = 3;
LABEL_48:
      result = 1;
      v2->fields.__1__state = v15;
      return result;
    case 3:
      v10 = (ShopInfoIndicator__InformationChangeCR_d__8_o **)&v2->fields._ta_5__2;
      v2->fields.__1__state = -1;
      goto LABEL_42;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall ShopInfoIndicator__InformationChangeCR_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ShopInfoIndicator__InformationChangeCR_d__8_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ShopInfoIndicator__InformationChangeCR_d__8__System_Collections_IEnumerator_Reset(
        ShopInfoIndicator__InformationChangeCR_d__8_o *this,
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
  v6 = sub_B0D8A8(&Method_ShopInfoIndicator__InformationChangeCR_d__8_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
}


Il2CppObject *__fastcall ShopInfoIndicator__InformationChangeCR_d__8__System_Collections_IEnumerator_get_Current(
        ShopInfoIndicator__InformationChangeCR_d__8_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ShopInfoIndicator__InformationChangeCR_d__8__System_IDisposable_Dispose(
        ShopInfoIndicator__InformationChangeCR_d__8_o *this,
        const MethodInfo *method)
{
  ;
}