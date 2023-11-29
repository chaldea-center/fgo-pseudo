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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FB73D & 1) == 0 )
  {
    sub_B16FFC(&ShopInfoIndicator__InformationChangeCR_d__8_TypeInfo, method);
    byte_40FB73D = 1;
  }
  v6 = sub_B170CC(ShopInfoIndicator__InformationChangeCR_d__8_TypeInfo, method, v2, v3, v4);
  ShopInfoIndicator__InformationChangeCR_d__8___ctor((ShopInfoIndicator__InformationChangeCR_d__8_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall ShopInfoIndicator__InformationPanelTweenAlpha(ShopInfoIndicator_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *informationPanel; // x0
  UnityEngine_Behaviour_o *Component_WebViewObject; // x19

  if ( (byte_40FB73E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FB73E = 1;
  }
  informationPanel = (UnityEngine_Component_o *)this->fields.informationPanel;
  if ( !informationPanel )
    goto LABEL_12;
  Component_WebViewObject = (UnityEngine_Behaviour_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                         informationPanel,
                                                         (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
  {
    if ( Component_WebViewObject )
    {
      if ( UnityEngine_Behaviour__get_enabled(Component_WebViewObject, 0LL) )
        UnityEngine_Behaviour__set_enabled(Component_WebViewObject, 0, 0LL);
      return;
    }
LABEL_12:
    sub_B170D4();
  }
}


void __fastcall ShopInfoIndicator__OnClick(ShopInfoIndicator_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_40FB73F & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FB73F = 1;
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.InformationChangeCRW,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316(
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
    sub_B16F98((BattleServantConfConponent_o *)p_InformationChangeCRW, 0LL, v5, v6, v7, v8, v9, v10);
  }
}


void __fastcall ShopInfoIndicator__SwitchInfo(ShopInfoIndicator_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_GameObject_array *infos; // x20
  int max_length; // w8
  unsigned int v6; // w21
  UnityEngine_GameObject_o *v7; // x0
  struct UnityEngine_GameObject_array *v8; // x8
  __int64 infoIndex; // x9
  UnityEngine_GameObject_o *v10; // x0
  struct UnityEngine_GameObject_array *v11; // x8
  int32_t v12; // w9
  int32_t v13; // w8

  infos = this->fields.infos;
  if ( !infos )
    goto LABEL_15;
  max_length = infos->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    while ( v6 < max_length )
    {
      v7 = infos->m_Items[v6];
      if ( !v7 )
        goto LABEL_15;
      UnityEngine_GameObject__SetActive(v7, 0, 0LL);
      max_length = infos->max_length;
      if ( (int)++v6 >= max_length )
        goto LABEL_7;
    }
LABEL_16:
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
LABEL_7:
  v8 = this->fields.infos;
  if ( !v8 )
    goto LABEL_15;
  infoIndex = this->fields.infoIndex;
  if ( (unsigned int)infoIndex >= v8->max_length )
    goto LABEL_16;
  v10 = v8->m_Items[infoIndex];
  if ( !v10 || (UnityEngine_GameObject__SetActive(v10, 1, 0LL), (v11 = this->fields.infos) == 0LL) )
LABEL_15:
    sub_B170D4();
  v12 = this->fields.infoIndex;
  if ( v12 < (signed int)(v11->max_length - 1) )
    v13 = v12 + 1;
  else
    v13 = 0;
  this->fields.infoIndex = v13;
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
  __int64 v3; // x1
  struct ShopInfoIndicator_o *_4__this; // x20
  struct UIPanel_o *informationPanel; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  UnityEngine_WaitForEndOfFrame_o *v16; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  bool result; // w0
  UnityEngine_Behaviour_o **p_ta_5__2; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_Behaviour_o **v31; // x21
  UnityEngine_Component_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  struct TweenAlpha_o *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  UnityEngine_Object_o *v41; // x22
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  Il2CppObject *v48; // x1
  int32_t v49; // w8
  UnityEngine_Component_o *v50; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct TweenAlpha_o *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  UnityEngine_Object_o *ta_5__2; // x22
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  Il2CppObject *v66; // x1
  Il2CppObject *wait_5__3; // x1

  if ( (byte_40F79E6 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v3);
    byte_40F79E6 = 1;
  }
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_50;
      ShopInfoIndicator__InformationPanelTweenAlpha(_4__this, 0LL);
      informationPanel = _4__this->fields.informationPanel;
      if ( !informationPanel )
        goto LABEL_50;
      ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))informationPanel->klass->vtable._8_set_alpha.method)(
        informationPanel,
        informationPanel->klass->vtable._9_CalculateFinalAlpha.methodPtr,
        1.0);
      _4__this->fields.isClick = 1;
      this->fields._ta_5__2 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields._ta_5__2, 0LL, v6, v7, v8, v9, v10, v11);
      v16 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(UnityEngine_WaitForEndOfFrame_TypeInfo, v12, v13, v14, v15);
      UnityEngine_WaitForEndOfFrame___ctor(v16, 0LL);
      this->fields._wait_5__3 = v16;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._wait_5__3,
        (System_Int32_array **)v16,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      goto LABEL_15;
    case 1:
      p_ta_5__2 = (UnityEngine_Behaviour_o **)&this->fields._ta_5__2;
      this->fields.__1__state = -1;
      goto LABEL_25;
    case 2:
      this->fields.__1__state = -1;
      if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - this->fields._startTime_5__4) >= 3.0 )
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
          wait_5__3 = (Il2CppObject *)this->fields._wait_5__3;
          this->fields.__2__current = wait_5__3;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.__2__current,
            (System_Int32_array **)wait_5__3,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30);
          v49 = 2;
          goto LABEL_48;
        }
LABEL_34:
        if ( _4__this->fields.isClick )
          goto LABEL_15;
        v50 = (UnityEngine_Component_o *)_4__this->fields.informationPanel;
        if ( !v50 )
          goto LABEL_50;
        gameObject = UnityEngine_Component__get_gameObject(v50, 0LL);
        v52 = TweenAlpha__Begin(gameObject, 0.5, 0.0, 0LL);
        this->fields._ta_5__2 = v52;
        v31 = (UnityEngine_Behaviour_o **)&this->fields._ta_5__2;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._ta_5__2,
          (System_Int32_array **)v52,
          v53,
          v54,
          v55,
          v56,
          v57,
          v58);
        ta_5__2 = (UnityEngine_Object_o *)this->fields._ta_5__2;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(ta_5__2, 0LL, 0LL) )
          break;
        while ( 1 )
        {
LABEL_15:
          if ( !_4__this )
            goto LABEL_50;
          ShopInfoIndicator__InformationPanelTweenAlpha(_4__this, 0LL);
          v32 = (UnityEngine_Component_o *)_4__this->fields.informationPanel;
          if ( !v32 )
            goto LABEL_50;
          if ( _4__this->fields.isClick )
            break;
          v33 = UnityEngine_Component__get_gameObject(v32, 0LL);
          v34 = TweenAlpha__Begin(v33, 0.5, 1.0, 0LL);
          this->fields._ta_5__2 = v34;
          p_ta_5__2 = (UnityEngine_Behaviour_o **)&this->fields._ta_5__2;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields._ta_5__2,
            (System_Int32_array **)v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40);
          ShopInfoIndicator__SwitchInfo(_4__this, 0LL);
          v41 = (UnityEngine_Object_o *)this->fields._ta_5__2;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v41, 0LL, 0LL) )
          {
            if ( !*p_ta_5__2 )
              goto LABEL_50;
            LODWORD((*p_ta_5__2)[1].klass) = 6;
LABEL_25:
            if ( !*p_ta_5__2 )
              goto LABEL_50;
            if ( UnityEngine_Behaviour__get_enabled(*p_ta_5__2, 0LL) )
            {
              if ( !_4__this )
                goto LABEL_50;
              if ( !_4__this->fields.isClick )
              {
                v48 = (Il2CppObject *)this->fields._wait_5__3;
                this->fields.__2__current = v48;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&this->fields.__2__current,
                  (System_Int32_array **)v48,
                  v42,
                  v43,
                  v44,
                  v45,
                  v46,
                  v47);
                v49 = 1;
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
        ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))v32->klass[1]._1.castClass)(
          v32,
          v32->klass[1]._1.declaringType,
          1.0);
        _4__this->fields.isClick = 0;
LABEL_32:
        this->fields._startTime_5__4 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      }
      if ( !*v31 )
        goto LABEL_50;
      LODWORD((*v31)[1].klass) = 6;
LABEL_42:
      if ( !*v31 )
        goto LABEL_50;
      if ( !UnityEngine_Behaviour__get_enabled(*v31, 0LL) )
        goto LABEL_15;
      if ( !_4__this )
LABEL_50:
        sub_B170D4();
      if ( _4__this->fields.isClick )
        goto LABEL_15;
      v66 = (Il2CppObject *)this->fields._wait_5__3;
      this->fields.__2__current = v66;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.__2__current,
        (System_Int32_array **)v66,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65);
      v49 = 3;
LABEL_48:
      result = 1;
      this->fields.__1__state = v49;
      return result;
    case 3:
      v31 = (UnityEngine_Behaviour_o **)&this->fields._ta_5__2;
      this->fields.__1__state = -1;
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_ShopInfoIndicator__InformationChangeCR_d__8_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
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