void __fastcall ShopInfoIndicator___ctor(ShopInfoIndicator_o *this, const MethodInfo *method)
{
  this->fields.isClick = 1;
  ListViewIndicator___ctor((ListViewIndicator_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall ShopInfoIndicator__InformationChangeCR(
        ShopInfoIndicator_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FB20D & 1) == 0 )
  {
    sub_1B64A00(&ShopInfoIndicator__InformationChangeCR_d__8_TypeInfo, method);
    byte_49FB20D = 1;
  }
  v3 = sub_1B64C4C(ShopInfoIndicator__InformationChangeCR_d__8_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall ShopInfoIndicator__InformationPanelTweenAlpha(ShopInfoIndicator_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UIPanel_o *informationPanel; // x0
  Il2CppObject *Component_object; // x19

  if ( (byte_49FB20E & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v3);
    byte_49FB20E = 1;
  }
  informationPanel = this->fields.informationPanel;
  if ( !informationPanel )
    goto LABEL_11;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)informationPanel,
                       (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  informationPanel = (struct UIPanel_o *)UnityEngine_Object__op_Equality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0LL,
                                           0LL);
  if ( ((unsigned __int8)informationPanel & 1) == 0 )
  {
    if ( Component_object )
    {
      if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)Component_object, 0LL) )
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
      return;
    }
LABEL_11:
    sub_1B64C5C(informationPanel, method);
  }
}


void __fastcall ShopInfoIndicator__OnClick(ShopInfoIndicator_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_49FB20F & 1) == 0 )
  {
    sub_1B64A00(&Method_ShopInfoIndicator_OnClick__, method);
    byte_49FB20F = 1;
  }
  if ( !this->fields.isClick )
  {
    this->fields.isClick = 1;
    v3 = Method_ShopInfoIndicator_OnClick__;
    if ( (*((_BYTE *)Method_ShopInfoIndicator_OnClick__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64A18(Method_ShopInfoIndicator_OnClick__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B649E4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    ShopInfoIndicator__SwitchInfo(this, v5);
  }
}


void __fastcall ShopInfoIndicator__StartInformationChange(ShopInfoIndicator_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct System_Collections_IEnumerator_o *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  const MethodInfo *v7; // x1

  ShopInfoIndicator__StopInformationChange(this, method);
  v4 = ShopInfoIndicator__InformationChangeCR(this, v3);
  this->fields.InformationChangeCRW = v4;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.InformationChangeCRW, (int32_t)v4, v5, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_69122748(
    (UnityEngine_MonoBehaviour_o *)this,
    this->fields.InformationChangeCRW,
    0LL);
  ShopInfoIndicator__SwitchInfo(this, v7);
}


void __fastcall ShopInfoIndicator__StopInformationChange(ShopInfoIndicator_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *InformationChangeCRW; // x1
  struct System_Collections_IEnumerator_o **p_InformationChangeCRW; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  p_InformationChangeCRW = &this->fields.InformationChangeCRW;
  InformationChangeCRW = this->fields.InformationChangeCRW;
  if ( InformationChangeCRW )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, InformationChangeCRW, 0LL);
    this->fields.InformationChangeCRW = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)p_InformationChangeCRW, 0, v5, v6);
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
    sub_1B64C64(this, method);
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
    sub_1B64C5C(this, method);
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
  int32_t v5; // w2
  int32_t v6; // w3
  UnityEngine_WaitForEndOfFrame_o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  bool result; // w0
  int32_t v11; // w2
  int32_t v12; // w3
  UnityEngine_GameObject_o *v13; // x0
  TweenAlpha_o *v14; // x0
  ShopInfoIndicator__InformationChangeCR_d__8_o **v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x1
  UnityEngine_Object_o *v19; // x22
  struct UnityEngine_WaitForEndOfFrame_o *wait_5__3; // x1
  ShopInfoIndicator__InformationChangeCR_d__8_o *v21; // x0
  int v22; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  TweenAlpha_o *v24; // x0
  ShopInfoIndicator__InformationChangeCR_d__8_o **p_ta_5__2; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  UnityEngine_Object_o *ta_5__2; // x22

  v2 = this;
  if ( (byte_49FB210 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    this = (ShopInfoIndicator__InformationChangeCR_d__8_o *)sub_1B64A00(&UnityEngine_WaitForEndOfFrame_TypeInfo, v3);
    byte_49FB210 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_48;
      ShopInfoIndicator__InformationPanelTweenAlpha(_4__this, method);
      this = (ShopInfoIndicator__InformationChangeCR_d__8_o *)_4__this->fields.informationPanel;
      if ( !this )
        goto LABEL_48;
      ((void (__fastcall *)(ShopInfoIndicator__InformationChangeCR_d__8_o *, void *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.method)(
        this,
        this->klass[1]._1.image,
        1.0);
      _4__this->fields.isClick = 1;
      v2->fields._ta_5__2 = 0LL;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v2->fields._ta_5__2, 0, v5, v6);
      v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64C4C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v7, 0LL);
      v2->fields._wait_5__3 = v7;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v2->fields._wait_5__3, (int32_t)v7, v8, v9);
      goto LABEL_17;
    case 1:
      this = (ShopInfoIndicator__InformationChangeCR_d__8_o *)v2->fields._ta_5__2;
      v2->fields.__1__state = -1;
      if ( !this )
        goto LABEL_48;
      goto LABEL_26;
    case 2:
      v2->fields.__1__state = -1;
      if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v2->fields._startTime_5__4) >= 3.0 )
      {
        if ( _4__this )
          goto LABEL_34;
        goto LABEL_48;
      }
      if ( !_4__this )
        goto LABEL_48;
      while ( 1 )
      {
        if ( !_4__this->fields.isClick )
        {
          wait_5__3 = v2->fields._wait_5__3;
          v21 = v2;
          v22 = 2;
          goto LABEL_46;
        }
LABEL_34:
        if ( _4__this->fields.isClick )
          goto LABEL_17;
        this = (ShopInfoIndicator__InformationChangeCR_d__8_o *)_4__this->fields.informationPanel;
        if ( !this )
          goto LABEL_48;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v24 = TweenAlpha__Begin(gameObject, 0.5, 0.0, 0LL);
        v2->fields._ta_5__2 = v24;
        p_ta_5__2 = (ShopInfoIndicator__InformationChangeCR_d__8_o **)&v2->fields._ta_5__2;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&v2->fields._ta_5__2, (int32_t)v24, v26, v27);
        ta_5__2 = (UnityEngine_Object_o *)v2->fields._ta_5__2;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (ShopInfoIndicator__InformationChangeCR_d__8_o *)UnityEngine_Object__op_Inequality(ta_5__2, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_17;
        this = *p_ta_5__2;
        if ( !*p_ta_5__2 )
          goto LABEL_48;
        LODWORD(this->fields.__4__this) = 6;
LABEL_41:
        this = (ShopInfoIndicator__InformationChangeCR_d__8_o *)UnityEngine_Behaviour__get_enabled(
                                                                  (UnityEngine_Behaviour_o *)this,
                                                                  0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
        while ( 1 )
        {
LABEL_17:
          if ( !_4__this )
            goto LABEL_48;
          ShopInfoIndicator__InformationPanelTweenAlpha(_4__this, method);
          this = (ShopInfoIndicator__InformationChangeCR_d__8_o *)_4__this->fields.informationPanel;
          if ( !this )
            goto LABEL_48;
          if ( _4__this->fields.isClick )
            break;
          v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v14 = TweenAlpha__Begin(v13, 0.5, 1.0, 0LL);
          v2->fields._ta_5__2 = v14;
          v15 = (ShopInfoIndicator__InformationChangeCR_d__8_o **)&v2->fields._ta_5__2;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)&v2->fields._ta_5__2, (int32_t)v14, v16, v17);
          ShopInfoIndicator__SwitchInfo(_4__this, v18);
          v19 = (UnityEngine_Object_o *)v2->fields._ta_5__2;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (ShopInfoIndicator__InformationChangeCR_d__8_o *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = *v15;
            if ( !*v15 )
              goto LABEL_48;
            LODWORD(this->fields.__4__this) = 6;
LABEL_26:
            this = (ShopInfoIndicator__InformationChangeCR_d__8_o *)UnityEngine_Behaviour__get_enabled(
                                                                      (UnityEngine_Behaviour_o *)this,
                                                                      0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !_4__this )
                goto LABEL_48;
              if ( !_4__this->fields.isClick )
              {
                wait_5__3 = v2->fields._wait_5__3;
                v21 = v2;
                v22 = 1;
                goto LABEL_46;
              }
            }
            else if ( !_4__this )
            {
              goto LABEL_48;
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
      if ( !_4__this )
LABEL_48:
        sub_1B64C5C(this, method);
      if ( _4__this->fields.isClick )
        goto LABEL_17;
      wait_5__3 = v2->fields._wait_5__3;
      v21 = v2;
      v22 = 3;
LABEL_46:
      v21->fields.__2__current = (Il2CppObject *)wait_5__3;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v21->fields.__2__current, (int32_t)wait_5__3, v11, v12);
      result = 1;
      v2->fields.__1__state = v22;
      return result;
    case 3:
      this = (ShopInfoIndicator__InformationChangeCR_d__8_o *)v2->fields._ta_5__2;
      v2->fields.__1__state = -1;
      if ( !this )
        goto LABEL_48;
      goto LABEL_41;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64C4C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64A14(&Method_ShopInfoIndicator__InformationChangeCR_d__8_System_Collections_IEnumerator_Reset__);
  sub_1B64B28(v3, v4);
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