void ShopInfoIndicator___ctor(ShopInfoIndicator_o *this, const MethodInfo *method)
{
  this->fields.isClick = 1;
  ListViewIndicator___ctor((ListViewIndicator_o *)this, 0);
}


System_Collections_IEnumerator_o *ShopInfoIndicator__InformationChangeCR(
        ShopInfoIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5934742 & 1) == 0 )
  {
    sub_21FFC50(&ShopInfoIndicator__InformationChangeCR_d__11_TypeInfo);
    byte_5934742 = 1;
  }
  v3 = sub_21FFEBC(ShopInfoIndicator__InformationChangeCR_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void ShopInfoIndicator__InformationPanelTweenAlpha(ShopInfoIndicator_o *this, const MethodInfo *method)
{
  struct UIPanel_o *informationPanel; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Component_object; // x19

  if ( (byte_5934743 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_TweenAlpha___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934743 = 1;
  }
  informationPanel = this->fields.informationPanel;
  if ( !informationPanel )
    goto LABEL_11;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)informationPanel,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  informationPanel = (struct UIPanel_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)informationPanel & 1) == 0 )
  {
    if ( Component_object )
    {
      if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_object, 0) )
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
      return;
    }
LABEL_11:
    sub_21FFECC(informationPanel, method);
  }
}


void ShopInfoIndicator__OnClick(ShopInfoIndicator_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_5934744 & 1) == 0 )
  {
    sub_21FFC50(&Method_ShopInfoIndicator_OnClick__);
    byte_5934744 = 1;
  }
  if ( this->fields._IsEnableSwitchButton_k__BackingField && !this->fields.isClick )
  {
    this->fields.isClick = 1;
    v3 = Method_ShopInfoIndicator_OnClick__;
    if ( (*((_BYTE *)Method_ShopInfoIndicator_OnClick__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ShopInfoIndicator_OnClick__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ShopInfoIndicator__SwitchInfo(this, v5);
  }
}


void ShopInfoIndicator__StartInformationChange(ShopInfoIndicator_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct System_Collections_IEnumerator_o *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  const MethodInfo *v11; // x1

  ShopInfoIndicator__StopInformationChange(this, method);
  v4 = ShopInfoIndicator__InformationChangeCR(this, v3);
  this->fields.InformationChangeCRW = v4;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.InformationChangeCRW,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452(
    (UnityEngine_MonoBehaviour_o *)this,
    this->fields.InformationChangeCRW,
    0);
  ShopInfoIndicator__SwitchInfo(this, v11);
}


void ShopInfoIndicator__StopInformationChange(ShopInfoIndicator_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *InformationChangeCRW; // x1
  struct System_Collections_IEnumerator_o **p_InformationChangeCRW; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  p_InformationChangeCRW = &this->fields.InformationChangeCRW;
  InformationChangeCRW = this->fields.InformationChangeCRW;
  if ( InformationChangeCRW )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, InformationChangeCRW, 0);
    this->fields.InformationChangeCRW = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_InformationChangeCRW, 0, v5, v6, v7, v8, v9, v10);
  }
}


void ShopInfoIndicator__SwitchInfo(ShopInfoIndicator_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *infos; // x20
  int max_length; // w8
  ShopInfoIndicator_o *v4; // x19
  __int64 v5; // x21
  struct UnityEngine_GameObject_array *v6; // x8
  __int64 infoIndex; // x9
  struct UnityEngine_GameObject_array *v8; // x8
  int v9; // w9
  int32_t v10; // w8

  infos = this->fields.infos;
  if ( !infos )
    goto LABEL_15;
  max_length = infos->max_length;
  v4 = this;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( (unsigned int)v5 < max_length )
    {
      this = (ShopInfoIndicator_o *)infos->m_Items[v5];
      if ( !this )
        goto LABEL_15;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      max_length = infos->max_length;
      if ( (int)++v5 >= max_length )
        goto LABEL_7;
    }
LABEL_16:
    sub_21FFED4(this);
  }
LABEL_7:
  v6 = v4->fields.infos;
  if ( !v6 )
    goto LABEL_15;
  infoIndex = v4->fields.infoIndex;
  if ( (unsigned int)infoIndex >= LODWORD(v6->max_length) )
    goto LABEL_16;
  this = (ShopInfoIndicator_o *)v6->m_Items[infoIndex];
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0), (v8 = v4->fields.infos) == 0) )
  {
LABEL_15:
    sub_21FFECC(this, method);
  }
  v9 = v4->fields.infoIndex;
  if ( v9 < LODWORD(v8->max_length) - 1 )
    v10 = v9 + 1;
  else
    v10 = 0;
  v4->fields.infoIndex = v10;
}


bool ShopInfoIndicator__get_IsEnableSwitchButton(ShopInfoIndicator_o *this, const MethodInfo *method)
{
  return this->fields._IsEnableSwitchButton_k__BackingField;
}


void ShopInfoIndicator__set_IsEnableSwitchButton(ShopInfoIndicator_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsEnableSwitchButton_k__BackingField = value;
}


void ShopInfoIndicator__InformationChangeCR_d__11___ctor(
        ShopInfoIndicator__InformationChangeCR_d__11_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ShopInfoIndicator__InformationChangeCR_d__11__MoveNext(
        ShopInfoIndicator__InformationChangeCR_d__11_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct TweenAlpha_o *ta_5__2; // x0
  struct ShopInfoIndicator_o *_4__this; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  UnityEngine_WaitForEndOfFrame_o *v12; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int isClick; // w8
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  Il2CppObject *v32; // x1
  int32_t v33; // w8
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  Il2CppObject *v40; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  struct TweenAlpha_o *v42; // x0
  struct TweenAlpha_o **p_ta_5__2; // x21
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  __int64 v50; // x1
  __int64 v51; // x2
  UnityEngine_Object_o *v52; // x22
  UnityEngine_GameObject_o *v53; // x0
  struct TweenAlpha_o *v54; // x0
  struct TweenAlpha_o **v55; // x21
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  const MethodInfo *v62; // x1
  __int64 v63; // x1
  __int64 v64; // x2
  UnityEngine_Object_o *v65; // x22
  Il2CppObject *wait_5__3; // x1

  if ( (byte_5934745 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_5934745 = 1;
  }
  _1__state = this->fields.__1__state;
  ta_5__2 = 0;
  _4__this = this->fields.__4__this;
  if ( _1__state > 1 )
  {
    if ( _1__state == 2 )
    {
      this->fields.__1__state = -1;
      if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0) - this->fields._startTime_5__4) >= 3.0 )
      {
        if ( _4__this )
        {
          isClick = _4__this->fields.isClick;
          goto LABEL_39;
        }
      }
      else if ( _4__this )
      {
        goto LABEL_38;
      }
    }
    else
    {
      if ( _1__state != 3 )
        return (char)ta_5__2;
      ta_5__2 = this->fields._ta_5__2;
      this->fields.__1__state = -1;
      if ( ta_5__2 )
        goto LABEL_27;
    }
    goto LABEL_53;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      ShopInfoIndicator__InformationPanelTweenAlpha(_4__this, method);
      ta_5__2 = (struct TweenAlpha_o *)_4__this->fields.informationPanel;
      if ( ta_5__2 )
      {
        ((void (__fastcall *)(struct TweenAlpha_o *, const MethodInfo *, float))ta_5__2->klass->vtable._8_SynchronizeTween.methodPtr)(
          ta_5__2,
          ta_5__2->klass->vtable._8_SynchronizeTween.method,
          1.0);
        _4__this->fields.isClick = 1;
        this->fields._ta_5__2 = 0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields._ta_5__2, 0, v6, v7, v8, v9, v10, v11);
        v12 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v12, 0);
        this->fields._wait_5__3 = v12;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields._wait_5__3,
          (int32_t)v12,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18);
        goto LABEL_33;
      }
    }
    goto LABEL_53;
  }
  if ( _1__state != 1 )
    return (char)ta_5__2;
  ta_5__2 = this->fields._ta_5__2;
  this->fields.__1__state = -1;
  if ( !ta_5__2 )
LABEL_53:
    sub_21FFECC(ta_5__2, method);
LABEL_20:
  ta_5__2 = (struct TweenAlpha_o *)UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)ta_5__2, 0);
  if ( ((unsigned __int8)ta_5__2 & 1) == 0 )
  {
    if ( !_4__this )
      goto LABEL_53;
    while ( 1 )
    {
LABEL_25:
      if ( _4__this->fields.isClick )
        goto LABEL_33;
      while ( 1 )
      {
        this->fields._startTime_5__4 = UnityEngine_Time__get_realtimeSinceStartup(0);
LABEL_38:
        isClick = 1;
        if ( !_4__this->fields.isClick )
        {
          wait_5__3 = (Il2CppObject *)this->fields._wait_5__3;
          this->fields.__2__current = wait_5__3;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
            (int32_t)wait_5__3,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24);
          v33 = 2;
          goto LABEL_31;
        }
LABEL_39:
        if ( !isClick )
        {
          ta_5__2 = (struct TweenAlpha_o *)_4__this->fields.informationPanel;
          if ( !ta_5__2 )
            goto LABEL_53;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ta_5__2, 0);
          v42 = TweenAlpha__Begin(gameObject, 0.5, 0.0, 0);
          this->fields._ta_5__2 = v42;
          p_ta_5__2 = &this->fields._ta_5__2;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields._ta_5__2,
            (int32_t)v42,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49);
          v52 = (UnityEngine_Object_o *)this->fields._ta_5__2;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50, v51);
          ta_5__2 = (struct TweenAlpha_o *)UnityEngine_Object__op_Inequality(v52, 0, 0);
          if ( ((unsigned __int8)ta_5__2 & 1) != 0 )
          {
            ta_5__2 = *p_ta_5__2;
            if ( !*p_ta_5__2 )
              goto LABEL_53;
            ta_5__2->fields.method = 6;
LABEL_27:
            ta_5__2 = (struct TweenAlpha_o *)UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)ta_5__2, 0);
            if ( ((unsigned __int8)ta_5__2 & 1) != 0 )
            {
              if ( !_4__this )
                goto LABEL_53;
              if ( !_4__this->fields.isClick )
              {
                v40 = (Il2CppObject *)this->fields._wait_5__3;
                this->fields.__2__current = v40;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
                  (int32_t)v40,
                  v34,
                  v35,
                  v36,
                  v37,
                  v38,
                  v39);
                v33 = 3;
                goto LABEL_31;
              }
            }
          }
        }
LABEL_33:
        if ( !_4__this )
          goto LABEL_53;
        ShopInfoIndicator__InformationPanelTweenAlpha(_4__this, method);
        ta_5__2 = (struct TweenAlpha_o *)_4__this->fields.informationPanel;
        if ( !_4__this->fields.isClick )
          break;
        if ( !ta_5__2 )
          goto LABEL_53;
        ((void (__fastcall *)(struct TweenAlpha_o *, const MethodInfo *, float))ta_5__2->klass->vtable._8_SynchronizeTween.methodPtr)(
          ta_5__2,
          ta_5__2->klass->vtable._8_SynchronizeTween.method,
          1.0);
        _4__this->fields.isClick = 0;
      }
      if ( !ta_5__2 )
        goto LABEL_53;
      v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ta_5__2, 0);
      v54 = TweenAlpha__Begin(v53, 0.5, 1.0, 0);
      this->fields._ta_5__2 = v54;
      v55 = &this->fields._ta_5__2;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields._ta_5__2,
        (int32_t)v54,
        v56,
        v57,
        v58,
        v59,
        v60,
        v61);
      ShopInfoIndicator__SwitchInfo(_4__this, v62);
      v65 = (UnityEngine_Object_o *)this->fields._ta_5__2;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v63, v64);
      ta_5__2 = (struct TweenAlpha_o *)UnityEngine_Object__op_Inequality(v65, 0, 0);
      if ( ((unsigned __int8)ta_5__2 & 1) != 0 )
      {
        ta_5__2 = *v55;
        if ( !*v55 )
          goto LABEL_53;
        ta_5__2->fields.method = 6;
        goto LABEL_20;
      }
    }
  }
  if ( !_4__this )
    goto LABEL_53;
  if ( _4__this->fields.isClick )
    goto LABEL_25;
  v32 = (Il2CppObject *)this->fields._wait_5__3;
  this->fields.__2__current = v32;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
    (int32_t)v32,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v33 = 1;
LABEL_31:
  LOBYTE(ta_5__2) = 1;
  this->fields.__1__state = v33;
  return (char)ta_5__2;
}


Il2CppObject *ShopInfoIndicator__InformationChangeCR_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ShopInfoIndicator__InformationChangeCR_d__11_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ShopInfoIndicator__InformationChangeCR_d__11__System_Collections_IEnumerator_Reset(
        ShopInfoIndicator__InformationChangeCR_d__11_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_ShopInfoIndicator__InformationChangeCR_d__11_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *ShopInfoIndicator__InformationChangeCR_d__11__System_Collections_IEnumerator_get_Current(
        ShopInfoIndicator__InformationChangeCR_d__11_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ShopInfoIndicator__InformationChangeCR_d__11__System_IDisposable_Dispose(
        ShopInfoIndicator__InformationChangeCR_d__11_o *this,
        const MethodInfo *method)
{
  ;
}