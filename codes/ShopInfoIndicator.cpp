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
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB2532 & 1) == 0 )
  {
    sub_1C6BA08(&ShopInfoIndicator__InformationChangeCR_d__7_TypeInfo);
    byte_4CB2532 = 1;
  }
  v3 = sub_1C6BC54(ShopInfoIndicator__InformationChangeCR_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void ShopInfoIndicator__InformationPanelTweenAlpha(ShopInfoIndicator_o *this, const MethodInfo *method)
{
  struct UIPanel_o *informationPanel; // x0
  Il2CppObject *Component_object; // x19

  if ( (byte_4CB2533 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_TweenAlpha___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB2533 = 1;
  }
  informationPanel = this->fields.informationPanel;
  if ( !informationPanel )
    goto LABEL_11;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)informationPanel,
                       (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C6BC60(informationPanel, method);
  }
}


void ShopInfoIndicator__OnClick(ShopInfoIndicator_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4CB2534 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ShopInfoIndicator_OnClick__);
    byte_4CB2534 = 1;
  }
  if ( !this->fields.isClick )
  {
    this->fields.isClick = 1;
    v3 = Method_ShopInfoIndicator_OnClick__;
    if ( (*((_BYTE *)Method_ShopInfoIndicator_OnClick__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ShopInfoIndicator_OnClick__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    ShopInfoIndicator__SwitchInfo(this, v5);
  }
}


void ShopInfoIndicator__StartInformationChange(ShopInfoIndicator_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct System_Collections_IEnumerator_o *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1

  ShopInfoIndicator__StopInformationChange(this, method);
  v4 = ShopInfoIndicator__InformationChangeCR(this, v3);
  this->fields.InformationChangeCRW = v4;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.InformationChangeCRW, (int32_t)v4, v5, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_71644868(
    (UnityEngine_MonoBehaviour_o *)this,
    this->fields.InformationChangeCRW,
    0);
  ShopInfoIndicator__SwitchInfo(this, v7);
}


void ShopInfoIndicator__StopInformationChange(ShopInfoIndicator_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *InformationChangeCRW; // x1
  struct System_Collections_IEnumerator_o **p_InformationChangeCRW; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  p_InformationChangeCRW = &this->fields.InformationChangeCRW;
  InformationChangeCRW = this->fields.InformationChangeCRW;
  if ( InformationChangeCRW )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, InformationChangeCRW, 0);
    this->fields.InformationChangeCRW = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)p_InformationChangeCRW, 0, v5, v6);
  }
}


void ShopInfoIndicator__SwitchInfo(ShopInfoIndicator_o *this, const MethodInfo *method)
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
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      max_length = infos->max_length;
      if ( (int)++v5 >= max_length )
        goto LABEL_7;
    }
LABEL_16:
    sub_1C6BC68(this);
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
    sub_1C6BC60(this, method);
  }
  v9 = v4->fields.infoIndex;
  if ( v9 < LODWORD(v8->max_length) - 1 )
    v10 = v9 + 1;
  else
    v10 = 0;
  v4->fields.infoIndex = v10;
}


void ShopInfoIndicator__InformationChangeCR_d__7___ctor(
        ShopInfoIndicator__InformationChangeCR_d__7_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ShopInfoIndicator__InformationChangeCR_d__7__MoveNext(
        ShopInfoIndicator__InformationChangeCR_d__7_o *this,
        const MethodInfo *method)
{
  ShopInfoIndicator__InformationChangeCR_d__7_o *v2; // x19
  struct ShopInfoIndicator_o *_4__this; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  UnityEngine_WaitForEndOfFrame_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  bool result; // w0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_GameObject_o *v12; // x0
  TweenAlpha_o *v13; // x0
  ShopInfoIndicator__InformationChangeCR_d__7_o **v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1
  UnityEngine_Object_o *v18; // x22
  struct UnityEngine_WaitForEndOfFrame_o *wait_5__3; // x1
  ShopInfoIndicator__InformationChangeCR_d__7_o *v20; // x0
  int v21; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  TweenAlpha_o *v23; // x0
  ShopInfoIndicator__InformationChangeCR_d__7_o **p_ta_5__2; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  UnityEngine_Object_o *ta_5__2; // x22

  v2 = this;
  if ( (byte_4CB2535 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    this = (ShopInfoIndicator__InformationChangeCR_d__7_o *)sub_1C6BA08(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4CB2535 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_48;
      ShopInfoIndicator__InformationPanelTweenAlpha(_4__this, method);
      this = (ShopInfoIndicator__InformationChangeCR_d__7_o *)_4__this->fields.informationPanel;
      if ( !this )
        goto LABEL_48;
      ((void (__fastcall *)(ShopInfoIndicator__InformationChangeCR_d__7_o *, const MethodInfo *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
        this,
        this->klass->vtable._8_System_Collections_IEnumerator_Reset.method,
        1.0);
      _4__this->fields.isClick = 1;
      v2->fields._ta_5__2 = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v2->fields._ta_5__2, 0, v4, v5);
      v6 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C6BC54(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v6, 0);
      v2->fields._wait_5__3 = v6;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v2->fields._wait_5__3, (int32_t)v6, v7, v8);
      goto LABEL_17;
    case 1:
      this = (ShopInfoIndicator__InformationChangeCR_d__7_o *)v2->fields._ta_5__2;
      v2->fields.__1__state = -1;
      if ( !this )
        goto LABEL_48;
      goto LABEL_26;
    case 2:
      v2->fields.__1__state = -1;
      if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0) - v2->fields._startTime_5__4) >= 3.0 )
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
          v20 = v2;
          v21 = 2;
          goto LABEL_46;
        }
LABEL_34:
        if ( _4__this->fields.isClick )
          goto LABEL_17;
        this = (ShopInfoIndicator__InformationChangeCR_d__7_o *)_4__this->fields.informationPanel;
        if ( !this )
          goto LABEL_48;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        v23 = TweenAlpha__Begin(gameObject, 0.5, 0.0, 0);
        v2->fields._ta_5__2 = v23;
        p_ta_5__2 = (ShopInfoIndicator__InformationChangeCR_d__7_o **)&v2->fields._ta_5__2;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v2->fields._ta_5__2, (int32_t)v23, v25, v26);
        ta_5__2 = (UnityEngine_Object_o *)v2->fields._ta_5__2;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (ShopInfoIndicator__InformationChangeCR_d__7_o *)UnityEngine_Object__op_Inequality(ta_5__2, 0, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_17;
        this = *p_ta_5__2;
        if ( !*p_ta_5__2 )
          goto LABEL_48;
        LODWORD(this->fields.__4__this) = 6;
LABEL_41:
        this = (ShopInfoIndicator__InformationChangeCR_d__7_o *)UnityEngine_Behaviour__get_enabled(
                                                                  (UnityEngine_Behaviour_o *)this,
                                                                  0);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
        while ( 1 )
        {
LABEL_17:
          if ( !_4__this )
            goto LABEL_48;
          ShopInfoIndicator__InformationPanelTweenAlpha(_4__this, method);
          this = (ShopInfoIndicator__InformationChangeCR_d__7_o *)_4__this->fields.informationPanel;
          if ( !this )
            goto LABEL_48;
          if ( _4__this->fields.isClick )
            break;
          v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          v13 = TweenAlpha__Begin(v12, 0.5, 1.0, 0);
          v2->fields._ta_5__2 = v13;
          v14 = (ShopInfoIndicator__InformationChangeCR_d__7_o **)&v2->fields._ta_5__2;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v2->fields._ta_5__2, (int32_t)v13, v15, v16);
          ShopInfoIndicator__SwitchInfo(_4__this, v17);
          v18 = (UnityEngine_Object_o *)v2->fields._ta_5__2;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (ShopInfoIndicator__InformationChangeCR_d__7_o *)UnityEngine_Object__op_Inequality(v18, 0, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = *v14;
            if ( !*v14 )
              goto LABEL_48;
            LODWORD(this->fields.__4__this) = 6;
LABEL_26:
            this = (ShopInfoIndicator__InformationChangeCR_d__7_o *)UnityEngine_Behaviour__get_enabled(
                                                                      (UnityEngine_Behaviour_o *)this,
                                                                      0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !_4__this )
                goto LABEL_48;
              if ( !_4__this->fields.isClick )
              {
                wait_5__3 = v2->fields._wait_5__3;
                v20 = v2;
                v21 = 1;
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
        ((void (__fastcall *)(ShopInfoIndicator__InformationChangeCR_d__7_o *, const MethodInfo *, float))this->klass->vtable._8_System_Collections_IEnumerator_Reset.methodPtr)(
          this,
          this->klass->vtable._8_System_Collections_IEnumerator_Reset.method,
          1.0);
        _4__this->fields.isClick = 0;
LABEL_32:
        v2->fields._startTime_5__4 = UnityEngine_Time__get_realtimeSinceStartup(0);
      }
      if ( !_4__this )
LABEL_48:
        sub_1C6BC60(this, method);
      if ( _4__this->fields.isClick )
        goto LABEL_17;
      wait_5__3 = v2->fields._wait_5__3;
      v20 = v2;
      v21 = 3;
LABEL_46:
      v20->fields.__2__current = (Il2CppObject *)wait_5__3;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v20->fields.__2__current, (int32_t)wait_5__3, v10, v11);
      result = 1;
      v2->fields.__1__state = v21;
      return result;
    case 3:
      this = (ShopInfoIndicator__InformationChangeCR_d__7_o *)v2->fields._ta_5__2;
      v2->fields.__1__state = -1;
      if ( !this )
        goto LABEL_48;
      goto LABEL_41;
    default:
      return 0;
  }
}


Il2CppObject *ShopInfoIndicator__InformationChangeCR_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ShopInfoIndicator__InformationChangeCR_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ShopInfoIndicator__InformationChangeCR_d__7__System_Collections_IEnumerator_Reset(
        ShopInfoIndicator__InformationChangeCR_d__7_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_ShopInfoIndicator__InformationChangeCR_d__7_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *ShopInfoIndicator__InformationChangeCR_d__7__System_Collections_IEnumerator_get_Current(
        ShopInfoIndicator__InformationChangeCR_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ShopInfoIndicator__InformationChangeCR_d__7__System_IDisposable_Dispose(
        ShopInfoIndicator__InformationChangeCR_d__7_o *this,
        const MethodInfo *method)
{
  ;
}