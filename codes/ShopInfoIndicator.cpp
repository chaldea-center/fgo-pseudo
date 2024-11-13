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
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B12748 & 1) == 0 )
  {
    sub_1BCA7E0(&ShopInfoIndicator__InformationChangeCR_d__8_TypeInfo, method, v2);
    byte_4B12748 = 1;
  }
  v5 = sub_1BCAA2C(ShopInfoIndicator__InformationChangeCR_d__8_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall ShopInfoIndicator__InformationPanelTweenAlpha(ShopInfoIndicator_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct UIPanel_o *informationPanel; // x0
  __int64 v7; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_4B12749 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B12749 = 1;
  }
  informationPanel = this->fields.informationPanel;
  if ( !informationPanel )
    goto LABEL_11;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)informationPanel,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
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
    sub_1BCAA3C(informationPanel, method);
  }
}


void __fastcall ShopInfoIndicator__OnClick(ShopInfoIndicator_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B1274A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ShopInfoIndicator_OnClick__, method, v2);
    byte_4B1274A = 1;
  }
  if ( !this->fields.isClick )
  {
    this->fields.isClick = 1;
    v4 = Method_ShopInfoIndicator_OnClick__;
    if ( (*((_BYTE *)Method_ShopInfoIndicator_OnClick__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_ShopInfoIndicator_OnClick__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    ShopInfoIndicator__SwitchInfo(this, v6);
  }
}


void __fastcall ShopInfoIndicator__StartInformationChange(ShopInfoIndicator_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct System_Collections_IEnumerator_o *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  const MethodInfo *v11; // x1

  ShopInfoIndicator__StopInformationChange(this, method);
  v4 = ShopInfoIndicator__InformationChangeCR(this, v3);
  this->fields.InformationChangeCRW = v4;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.InformationChangeCRW, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516(
    (UnityEngine_MonoBehaviour_o *)this,
    this->fields.InformationChangeCRW,
    0LL);
  ShopInfoIndicator__SwitchInfo(this, v11);
}


void __fastcall ShopInfoIndicator__StopInformationChange(ShopInfoIndicator_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *InformationChangeCRW; // x1
  struct System_Collections_IEnumerator_o **p_InformationChangeCRW; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  p_InformationChangeCRW = &this->fields.InformationChangeCRW;
  InformationChangeCRW = this->fields.InformationChangeCRW;
  if ( InformationChangeCRW )
  {
    UnityEngine_MonoBehaviour__StopCoroutine((UnityEngine_MonoBehaviour_o *)this, InformationChangeCRW, 0LL);
    this->fields.InformationChangeCRW = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)p_InformationChangeCRW, 0LL, v5, v6, v7, v8, v9, v10);
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
  il2cpp_array_size_t v9; // w9
  int32_t v10; // w8
  int32_t v11; // w8
  int32_t v12; // w9
  struct UnityEngine_GameObject_array *v13; // x8
  signed int v14; // w10

  infos = this->fields.infos;
  if ( !infos )
    goto LABEL_21;
  max_length = infos->max_length;
  v4 = this;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( v5 < max_length )
    {
      this = (ShopInfoIndicator_o *)infos->m_Items[v5];
      if ( !this )
        goto LABEL_21;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      max_length = infos->max_length;
      if ( (int)++v5 >= max_length )
        goto LABEL_7;
    }
LABEL_22:
    sub_1BCAA44(this, method);
  }
LABEL_7:
  v6 = v4->fields.infos;
  if ( !v6 )
    goto LABEL_21;
  infoIndex = v4->fields.infoIndex;
  if ( (unsigned int)infoIndex >= v6->max_length )
    goto LABEL_22;
  this = (ShopInfoIndicator_o *)v6->m_Items[infoIndex];
  if ( !this )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v8 = v4->fields.infos;
  if ( !v8 )
    goto LABEL_21;
  v9 = v8->max_length;
  v10 = v4->fields.infoIndex;
  if ( v10 >= (int)(v9 - 1) )
  {
    v11 = 0;
    goto LABEL_20;
  }
  if ( !v10 )
  {
    this = (ShopInfoIndicator_o *)ConstantMaster__IsFLAG20241004(0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v12 = v4->fields.infoIndex;
      goto LABEL_19;
    }
    v13 = v4->fields.infos;
    if ( v13 )
    {
      v12 = v4->fields.infoIndex;
      v14 = v13->max_length;
      v11 = v12 + 2;
      if ( v12 + 2 < v14 )
        goto LABEL_20;
LABEL_19:
      v11 = v12 + 1;
      goto LABEL_20;
    }
LABEL_21:
    sub_1BCAA3C(this, method);
  }
  v11 = v10 + 1;
LABEL_20:
  v4->fields.infoIndex = v11;
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
  __int64 v2; // x2
  ShopInfoIndicator__InformationChangeCR_d__8_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct ShopInfoIndicator_o *_4__this; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  UnityEngine_WaitForEndOfFrame_o *v16; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  bool result; // w0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  UnityEngine_GameObject_o *v30; // x0
  TweenAlpha_o *v31; // x0
  ShopInfoIndicator__InformationChangeCR_d__8_o **v32; // x21
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  const MethodInfo *v39; // x1
  __int64 v40; // x1
  UnityEngine_Object_o *v41; // x22
  int64_t wait_5__3; // x1
  ShopInfoIndicator__InformationChangeCR_d__8_o *v43; // x0
  int v44; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  TweenAlpha_o *v46; // x0
  ShopInfoIndicator__InformationChangeCR_d__8_o **p_ta_5__2; // x21
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 v54; // x1
  UnityEngine_Object_o *ta_5__2; // x22

  v3 = this;
  if ( (byte_4B1274B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    this = (ShopInfoIndicator__InformationChangeCR_d__8_o *)sub_1BCA7E0(&UnityEngine_WaitForEndOfFrame_TypeInfo, v4, v5);
    byte_4B1274B = 1;
  }
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
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
      v3->fields._ta_5__2 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields._ta_5__2, 0LL, v7, v8, v9, v10, v11, v12);
      v16 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, v13, v14, v15);
      UnityEngine_WaitForEndOfFrame___ctor(v16, 0LL);
      v3->fields._wait_5__3 = v16;
      sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields._wait_5__3, (int64_t)v16, v17, v18, v19, v20, v21, v22);
      goto LABEL_17;
    case 1:
      this = (ShopInfoIndicator__InformationChangeCR_d__8_o *)v3->fields._ta_5__2;
      v3->fields.__1__state = -1;
      if ( !this )
        goto LABEL_48;
      goto LABEL_26;
    case 2:
      v3->fields.__1__state = -1;
      if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v3->fields._startTime_5__4) >= 3.0 )
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
          wait_5__3 = (int64_t)v3->fields._wait_5__3;
          v43 = v3;
          v44 = 2;
          goto LABEL_46;
        }
LABEL_34:
        if ( _4__this->fields.isClick )
          goto LABEL_17;
        this = (ShopInfoIndicator__InformationChangeCR_d__8_o *)_4__this->fields.informationPanel;
        if ( !this )
          goto LABEL_48;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v46 = TweenAlpha__Begin(gameObject, 0.5, 0.0, 0LL);
        v3->fields._ta_5__2 = v46;
        p_ta_5__2 = (ShopInfoIndicator__InformationChangeCR_d__8_o **)&v3->fields._ta_5__2;
        sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields._ta_5__2, (int64_t)v46, v48, v49, v50, v51, v52, v53);
        ta_5__2 = (UnityEngine_Object_o *)v3->fields._ta_5__2;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54);
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
          v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v31 = TweenAlpha__Begin(v30, 0.5, 1.0, 0LL);
          v3->fields._ta_5__2 = v31;
          v32 = (ShopInfoIndicator__InformationChangeCR_d__8_o **)&v3->fields._ta_5__2;
          sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields._ta_5__2, (int64_t)v31, v33, v34, v35, v36, v37, v38);
          ShopInfoIndicator__SwitchInfo(_4__this, v39);
          v41 = (UnityEngine_Object_o *)v3->fields._ta_5__2;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40);
          this = (ShopInfoIndicator__InformationChangeCR_d__8_o *)UnityEngine_Object__op_Inequality(v41, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = *v32;
            if ( !*v32 )
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
                wait_5__3 = (int64_t)v3->fields._wait_5__3;
                v43 = v3;
                v44 = 1;
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
        v3->fields._startTime_5__4 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      }
      if ( !_4__this )
LABEL_48:
        sub_1BCAA3C(this, method);
      if ( _4__this->fields.isClick )
        goto LABEL_17;
      wait_5__3 = (int64_t)v3->fields._wait_5__3;
      v43 = v3;
      v44 = 3;
LABEL_46:
      v43->fields.__2__current = (Il2CppObject *)wait_5__3;
      sub_1BCA784((PartyOrganizationUtility_o *)&v43->fields.__2__current, wait_5__3, v24, v25, v26, v27, v28, v29);
      result = 1;
      v3->fields.__1__state = v44;
      return result;
    case 3:
      this = (ShopInfoIndicator__InformationChangeCR_d__8_o *)v3->fields._ta_5__2;
      v3->fields.__1__state = -1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_ShopInfoIndicator__InformationChangeCR_d__8_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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