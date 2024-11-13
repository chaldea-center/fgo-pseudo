void __fastcall PartyOrganizationChangeObject___ctor(PartyOrganizationChangeObject_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall PartyOrganizationChangeObject__Awake(PartyOrganizationChangeObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Component_object; // x0

  if ( (byte_4B11ED2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewItemDraw___, method, v2);
    byte_4B11ED2 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewItemDraw___);
  this->fields.itemDraw = (struct PartyOrganizationListViewItemDraw_o *)Component_object;
  sub_1BCA784(&this->fields.itemDraw, Component_object);
}


void __fastcall PartyOrganizationChangeObject__ClearItem(
        PartyOrganizationChangeObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v6; // x1
  PartyOrganizationListViewItemDraw_o *v7; // x0

  if ( (byte_4B11ED4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B11ED4 = 1;
  }
  this->fields.partyItem = 0LL;
  sub_1BCA784(&this->fields.partyItem, 0LL);
  this->fields.callbackFunc = 0LL;
  this->fields.member = -1;
  sub_1BCA784(&this->fields.callbackFunc, 0LL);
  this->fields.state = 0;
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v7 = this->fields.itemDraw;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    PartyOrganizationListViewItemDraw__ClearItem(v7, 0LL);
  }
}


void __fastcall PartyOrganizationChangeObject__EndCloseShow(
        PartyOrganizationChangeObject_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall PartyOrganizationChangeObject__EndCloseShowEquip(
        PartyOrganizationChangeObject_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall PartyOrganizationChangeObject__EndCloseShowQuestJump(
        PartyOrganizationChangeObject_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B11EDC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B11EDC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeObject__EndShowEquip(
        PartyOrganizationChangeObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4B11EDF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_PartyOrganizationChangeObject_EndCloseShowEquip__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    byte_4B11EDF = 1;
  }
  if ( isDecide )
    PartyOrganizationChangeObject__ModifyItem(this, (const MethodInfo *)isDecide);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_PartyOrganizationChangeObject_EndCloseShowEquip__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v14, v15);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeObject__EndShowServant(
        PartyOrganizationChangeObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4B11EDA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_PartyOrganizationChangeObject_EndCloseShow__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    byte_4B11EDA = 1;
  }
  if ( isDecide )
    PartyOrganizationChangeObject__ModifyItem(this, (const MethodInfo *)isDecide);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_PartyOrganizationChangeObject_EndCloseShow__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v14, v15);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeObject__EndShowServantWithQuest(
        PartyOrganizationChangeObject_o *this,
        bool isDecide,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_4B11EDB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, *(_QWORD *)&questId);
    sub_1BCA7E0(&Method_PartyOrganizationChangeObject_EndCloseShowQuestJump__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    byte_4B11EDB = 1;
  }
  if ( questId < 1 )
  {
    PartyOrganizationChangeObject__EndShowServant(this, isDecide, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_PartyOrganizationChangeObject_EndCloseShowQuestJump__, 0LL);
    if ( !Instance )
      sub_1BCAA3C(v16, v17);
    CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v15, 0LL);
  }
}


void __fastcall PartyOrganizationChangeObject__ModifyItem(
        PartyOrganizationChangeObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  PartyListViewItem_o *partyItem; // x0
  PartyOrganizationListViewItem_o *v5; // x20
  __int64 v6; // x1
  UnityEngine_Object_o *itemDraw; // x21

  if ( (byte_4B11ED6 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B11ED6 = 1;
  }
  partyItem = this->fields.partyItem;
  if ( !partyItem )
    goto LABEL_11;
  partyItem = (PartyListViewItem_o *)PartyListViewItem__GetMember(partyItem, this->fields.member, v2);
  if ( !partyItem )
    goto LABEL_11;
  v5 = (PartyOrganizationListViewItem_o *)partyItem;
  PartyOrganizationListViewItem__Modify((PartyOrganizationListViewItem_o *)partyItem, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    partyItem = (PartyListViewItem_o *)this->fields.itemDraw;
    if ( partyItem )
    {
      PartyOrganizationListViewItemDraw__SetItem((PartyOrganizationListViewItemDraw_o *)partyItem, v5, 2, 0LL);
      return;
    }
LABEL_11:
    sub_1BCAA3C(partyItem, method);
  }
}


void __fastcall PartyOrganizationChangeObject__OnClickItem(
        PartyOrganizationChangeObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  PartyListViewItem_o *partyItem; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  __int64 v6; // x1
  struct PartyOrganizationChangeObject_CallbackFunc_o *callbackFunc; // x8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0

  if ( (byte_4B11ED8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyOrganizationChangeObject_OnClickItem__, method, v2);
    byte_4B11ED8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.callbackFunc )
    {
      partyItem = this->fields.partyItem;
      if ( partyItem )
      {
        Member = PartyListViewItem__GetMember(partyItem, this->fields.member, v2);
        if ( Member
          && (Member->fields.isMyServantOrNpcRestriction
           || !Member->fields.isFollower && !Member->fields.isServantNumRestriction) )
        {
          callbackFunc = this->fields.callbackFunc;
          if ( !callbackFunc )
            sub_1BCAA3C(Member, v6);
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
            callbackFunc->fields.original_method_info,
            1LL,
            (unsigned int)Member->fields.index,
            *(_QWORD *)&callbackFunc->fields.extra_arg);
        }
        else
        {
          v8 = Method_PartyOrganizationChangeObject_OnClickItem__;
          if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OnClickItem__ + 83) & 2) != 0 )
            v8 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationChangeObject_OnClickItem__);
          v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
          OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0LL);
        }
      }
    }
  }
}


void __fastcall PartyOrganizationChangeObject__OnClickItemEquip(
        PartyOrganizationChangeObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  PartyListViewItem_o *partyItem; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  struct PartyOrganizationChangeObject_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_4B11EDD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyOrganizationChangeObject_OnClickItemEquip__, method, v2);
    byte_4B11EDD = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.callbackFunc )
    {
      partyItem = this->fields.partyItem;
      if ( partyItem )
      {
        Member = PartyListViewItem__GetMember(partyItem, this->fields.member, v2);
        if ( !Member || Member->fields.isFollower || Member->fields.isServantNumRestriction )
        {
          v7 = Method_PartyOrganizationChangeObject_OnClickItemEquip__;
          if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OnClickItemEquip__ + 83) & 2) != 0 )
            v7 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationChangeObject_OnClickItemEquip__);
          v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
          OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0LL);
        }
        else
        {
          callbackFunc = this->fields.callbackFunc;
          if ( !callbackFunc )
            sub_1BCAA3C(Member, v6);
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
            callbackFunc->fields.original_method_info,
            2LL,
            (unsigned int)Member->fields.index,
            *(_QWORD *)&callbackFunc->fields.extra_arg);
        }
      }
    }
  }
}


void __fastcall PartyOrganizationChangeObject__OnLongPressItem(
        PartyOrganizationChangeObject_o *this,
        const MethodInfo *method)
{
  if ( this->fields.state == 2 )
  {
    if ( this->fields.callbackFunc )
      PartyOrganizationChangeObject__OpenServantDetail(this, method);
  }
}


void __fastcall PartyOrganizationChangeObject__OnLongPressItemEquip(
        PartyOrganizationChangeObject_o *this,
        const MethodInfo *method)
{
  if ( this->fields.state == 2 )
  {
    if ( this->fields.callbackFunc )
      PartyOrganizationChangeObject__OpenEquipDetail(this, method);
  }
}


void __fastcall PartyOrganizationChangeObject__OpenEquipDetail(
        PartyOrganizationChangeObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  PartyListViewItem_o *partyItem; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v14; // x20
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  Il2CppObject *Instance; // x21
  int64_t EquipUserSvtId; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  ServantStatusDialog_EndDelegate_o *v22; // x22
  ServantLeaderInfo_o *ServantLeader; // x0
  __int64 v24; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  bool IsNpc; // w22
  Il2CppObject *v29; // x21
  EquipTargetInfo_o *EquipTarget1; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  ServantStatusDialog_EndDelegate_o *v34; // x23
  int32_t v35; // w1
  _QWORD *v36; // x0
  System_Reflection_MethodBase_o *v37; // x0

  if ( (byte_4B11EDE & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_PartyOrganizationChangeObject_EndShowEquip__, v6, v7);
    sub_1BCA7E0(&Method_PartyOrganizationChangeObject_OpenEquipDetail__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    byte_4B11EDE = 1;
  }
  partyItem = this->fields.partyItem;
  if ( partyItem )
  {
    Member = PartyListViewItem__GetMember(partyItem, this->fields.member, v2);
    if ( !Member )
      goto LABEL_25;
    v14 = Member;
    if ( PartyOrganizationListViewItem__get_EquipUserSvtId(Member, 0LL) >= 1 )
    {
      v15 = Method_PartyOrganizationChangeObject_OpenEquipDetail__;
      if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenEquipDetail__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationChangeObject_OpenEquipDetail__);
      v16 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v15, v15[4]);
      OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v14, 0LL);
      v22 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v19, v20, v21);
      ServantStatusDialog_EndDelegate___ctor(
        v22,
        (Il2CppObject *)this,
        Method_PartyOrganizationChangeObject_EndShowEquip__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenServantEquipStatusDialog((CommonUI_o *)Instance, 11, EquipUserSvtId, 1, v22, 0LL, 0LL);
        return;
      }
LABEL_28:
      sub_1BCAA3C(ServantLeader, v24);
    }
    if ( !PartyOrganizationListViewItem__get_ServantLeader(v14, 0LL) )
      goto LABEL_25;
    ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v14, 0LL);
    if ( !ServantLeader )
      goto LABEL_28;
    if ( ServantLeaderInfo__IsHideEquip(ServantLeader, 0LL) )
      goto LABEL_25;
    EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v14, 0LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
        *(_QWORD *)&EquipSvtId.fields.fakeValue);
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(EquipSvtId, 0LL) >= 1 )
    {
      v26 = Method_PartyOrganizationChangeObject_OpenEquipDetail__;
      if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenEquipDetail__ + 83) & 2) != 0 )
        v26 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationChangeObject_OpenEquipDetail__);
      v27 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v26, v26[4]);
      OverwriteAssetSoundName__PlaySystemSe(v27, 0, 0LL);
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v14, 0LL);
      if ( !ServantLeader )
        goto LABEL_28;
      IsNpc = ServantLeaderInfo__IsNpc(ServantLeader, 0LL);
      v29 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      EquipTarget1 = PartyOrganizationListViewItem__get_EquipTarget1(v14, 0LL);
      v34 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v31, v32, v33);
      ServantStatusDialog_EndDelegate___ctor(
        v34,
        (Il2CppObject *)this,
        Method_PartyOrganizationChangeObject_EndShowEquip__,
        0LL);
      if ( !v29 )
        goto LABEL_28;
      if ( IsNpc )
        v35 = 19;
      else
        v35 = 14;
      CommonUI__OpenServantEquipStatusDialog_30781828((CommonUI_o *)v29, v35, EquipTarget1, v34, 0LL, 0LL);
    }
    else
    {
LABEL_25:
      v36 = Method_PartyOrganizationChangeObject_OpenEquipDetail__;
      if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenEquipDetail__ + 83) & 2) != 0 )
        v36 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationChangeObject_OpenEquipDetail__);
      v37 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v36, v36[4]);
      OverwriteAssetSoundName__PlaySystemSe(v37, 2, 0LL);
    }
  }
}


void __fastcall PartyOrganizationChangeObject__OpenServantDetail(
        PartyOrganizationChangeObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  PartyListViewItem_o *partyItem; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v18; // x20
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  ServantLeaderInfo_o *ServantLeader; // x0
  __int64 v22; // x1
  struct PartyListViewItem_o *v23; // x8
  int32_t menuKind; // w22
  Il2CppObject *Instance; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  PartyListViewItem_o *v29; // x20
  int32_t v30; // w21
  bool v31; // zf
  CommonUI_o *v32; // x22
  ServantStatusDialog_FormationEndDelegate_o *v33; // x23
  FollowerInfo_o *followerInfo; // x0
  __int64 v35; // x21
  __int64 v36; // x22
  _QWORD *v37; // x0
  System_Reflection_MethodBase_o *v38; // x0
  Il2CppObject *v39; // x21
  ServantLeaderInfo_o *v40; // x20
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  ServantStatusDialog_EndDelegate_o *v44; // x22
  _QWORD *v45; // x0
  System_Reflection_MethodBase_o *v46; // x0
  ServantStatusDialog_EndDelegate_o *v47; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_4B11ED9 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&ServantStatusDialog_FormationEndDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_PartyOrganizationChangeObject_EndShowServantWithQuest__, v8, v9);
    sub_1BCA7E0(&Method_PartyOrganizationChangeObject_EndShowServant__, v10, v11);
    sub_1BCA7E0(&Method_PartyOrganizationChangeObject_OpenServantDetail__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15);
    byte_4B11ED9 = 1;
  }
  partyItem = this->fields.partyItem;
  if ( partyItem )
  {
    Member = PartyListViewItem__GetMember(partyItem, this->fields.member, v2);
    if ( Member )
    {
      v18 = Member;
      if ( Member->fields.userServantEntity )
      {
        v19 = Method_PartyOrganizationChangeObject_OpenServantDetail__;
        if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenServantDetail__ + 83) & 2) != 0 )
          v19 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationChangeObject_OpenServantDetail__);
        v20 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v19, v19[4]);
        OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0LL);
        v23 = this->fields.partyItem;
        if ( v23 )
        {
          menuKind = v23->fields.menuKind;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v29 = this->fields.partyItem;
          v30 = this->fields.member;
          v31 = menuKind == 8;
          v32 = (CommonUI_o *)Instance;
          if ( v31 )
          {
            v33 = (ServantStatusDialog_FormationEndDelegate_o *)sub_1BCAA2C(
                                                                  ServantStatusDialog_FormationEndDelegate_TypeInfo,
                                                                  v26,
                                                                  v27,
                                                                  v28);
            ServantStatusDialog_FormationEndDelegate___ctor(
              v33,
              (Il2CppObject *)this,
              Method_PartyOrganizationChangeObject_EndShowServantWithQuest__,
              0LL);
            if ( v32 )
            {
              CommonUI__OpenServantStatusDialog_30775384(v32, 1, v29, v30, v33, 0, 0LL);
              return;
            }
          }
          else
          {
            v47 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(
                                                         ServantStatusDialog_EndDelegate_TypeInfo,
                                                         v26,
                                                         v27,
                                                         v28);
            ServantStatusDialog_EndDelegate___ctor(
              v47,
              (Il2CppObject *)this,
              Method_PartyOrganizationChangeObject_EndShowServant__,
              0LL);
            if ( v32 )
            {
              CommonUI__OpenServantStatusDialog(v32, 1, v29, v30, v47, 0, 0LL);
              return;
            }
          }
        }
LABEL_30:
        sub_1BCAA3C(ServantLeader, v22);
      }
      followerInfo = Member->fields.followerInfo;
      if ( followerInfo
        && !FollowerInfo__get_IsNpc(followerInfo, 0LL)
        && PartyOrganizationListViewItem__get_ServantLeader(v18, 0LL) )
      {
        ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v18, 0LL);
        if ( !ServantLeader )
          goto LABEL_30;
        v36 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
        v35 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
        *(_QWORD *)&v48.fields.currentCryptoKey = v36;
        *(_QWORD *)&v48.fields.fakeValue = v35;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v48, 0LL) >= 1 )
        {
          v37 = Method_PartyOrganizationChangeObject_OpenServantDetail__;
          if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenServantDetail__ + 83) & 2) != 0 )
            v37 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationChangeObject_OpenServantDetail__);
          v38 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v37, v37[4]);
          OverwriteAssetSoundName__PlaySystemSe(v38, 0, 0LL);
          v39 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v40 = PartyOrganizationListViewItem__get_ServantLeader(v18, 0LL);
          v44 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(
                                                       ServantStatusDialog_EndDelegate_TypeInfo,
                                                       v41,
                                                       v42,
                                                       v43);
          ServantStatusDialog_EndDelegate___ctor(
            v44,
            (Il2CppObject *)this,
            Method_PartyOrganizationChangeObject_EndShowServant__,
            0LL);
          if ( v39 )
          {
            CommonUI__OpenServantStatusDialog_30778732((CommonUI_o *)v39, 5, v40, v44, 0LL);
            return;
          }
          goto LABEL_30;
        }
      }
    }
    v45 = Method_PartyOrganizationChangeObject_OpenServantDetail__;
    if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenServantDetail__ + 83) & 2) != 0 )
      v45 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationChangeObject_OpenServantDetail__);
    v46 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v45, v45[4]);
    OverwriteAssetSoundName__PlaySystemSe(v46, 2, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeObject__SetInput(
        PartyOrganizationChangeObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  PartyOrganizationChangeObject_o *v4; // x20
  int v5; // w9
  UnityEngine_Object_o *itemDraw; // x21
  const MethodInfo *v7; // x2
  PartyOrganizationListViewItemDraw_o *v8; // x21

  v4 = this;
  if ( (byte_4B11ED7 & 1) == 0 )
  {
    this = (PartyOrganizationChangeObject_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isInput, method);
    byte_4B11ED7 = 1;
  }
  if ( !v4 )
    goto LABEL_14;
  if ( isInput )
    v5 = 2;
  else
    v5 = 1;
  v4->fields.state = v5;
  itemDraw = (UnityEngine_Object_o *)v4->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isInput);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    this = (PartyOrganizationChangeObject_o *)v4->fields.partyItem;
    if ( this )
    {
      v8 = v4->fields.itemDraw;
      this = (PartyOrganizationChangeObject_o *)PartyListViewItem__GetMember(
                                                  (PartyListViewItem_o *)this,
                                                  v4->fields.member,
                                                  v7);
      if ( v8 )
      {
        PartyOrganizationListViewItemDraw__SetInput(v8, (PartyOrganizationListViewItem_o *)this, isInput, 0LL);
        return;
      }
    }
LABEL_14:
    sub_1BCAA3C(this, isInput);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeObject__SetItem(
        PartyOrganizationChangeObject_o *this,
        PartyListViewItem_o *partyItem,
        int32_t member,
        PartyOrganizationChangeObject_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  PartyListViewItem_o *v11; // x0
  PartyOrganizationListViewItem_o *v12; // x20
  __int64 v13; // x1
  UnityEngine_Object_o *itemDraw; // x21

  if ( (byte_4B11ED5 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, partyItem, *(_QWORD *)&member);
    byte_4B11ED5 = 1;
  }
  this->fields.partyItem = partyItem;
  sub_1BCA784(&this->fields.partyItem, partyItem);
  v11 = this->fields.partyItem;
  this->fields.member = member;
  if ( !v11 )
    goto LABEL_13;
  v12 = PartyListViewItem__GetMember(v11, member, v10);
  this->fields.callbackFunc = callback;
  sub_1BCA784(&this->fields.callbackFunc, callback);
  if ( !v12 || this->fields.state != 2 )
    this->fields.state = 1;
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v11 = (PartyListViewItem_o *)this->fields.itemDraw;
    if ( v11 )
    {
      PartyOrganizationListViewItemDraw__SetItem((PartyOrganizationListViewItemDraw_o *)v11, v12, 2, 0LL);
      return;
    }
LABEL_13:
    sub_1BCAA3C(v11, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeObject__SetVisible(
        PartyOrganizationChangeObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4B11ED3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isVisible, method);
    byte_4B11ED3 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isVisible);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.itemDraw;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1BCAA3C(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isVisible, 0LL);
  }
}


void __fastcall PartyOrganizationChangeObject__add_callbackFunc(
        PartyOrganizationChangeObject_o *this,
        PartyOrganizationChangeObject_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationChangeObject_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationChangeObject_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationChangeObject_o *v11; // x0
  PartyOrganizationChangeObject_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B11ED0 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationChangeObject_CallbackFunc_TypeInfo, value, method);
    byte_4B11ED0 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationChangeObject_CallbackFunc_c *)v8->klass != PartyOrganizationChangeObject_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationChangeObject_o *)sub_1BCACFC(v8);
  PartyOrganizationChangeObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall PartyOrganizationChangeObject__remove_callbackFunc(
        PartyOrganizationChangeObject_o *this,
        PartyOrganizationChangeObject_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationChangeObject_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationChangeObject_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationChangeObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4B11ED1 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationChangeObject_CallbackFunc_TypeInfo, value, method);
    byte_4B11ED1 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationChangeObject_CallbackFunc_c *)v8->klass != PartyOrganizationChangeObject_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationChangeObject_o *)sub_1BCACFC(v8);
  PartyOrganizationChangeObject__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeObject_CallbackFunc___ctor(
        PartyOrganizationChangeObject_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A070AC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A07054;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PartyOrganizationChangeObject_CallbackFunc__BeginInvoke(
        PartyOrganizationChangeObject_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v12[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v13; // [xsp+28h] [xbp-38h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v13 = n;
  v14 = result;
  if ( (byte_4B11EE1 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&n);
    sub_1BCA7E0(&PartyOrganizationChangeObject_ResultKind_TypeInfo, v9, v10);
    byte_4B11EE1 = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(PartyOrganizationChangeObject_ResultKind_TypeInfo, &v14);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall PartyOrganizationChangeObject_CallbackFunc__EndInvoke(
        PartyOrganizationChangeObject_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall PartyOrganizationChangeObject_CallbackFunc__Invoke(
        PartyOrganizationChangeObject_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    n,
    *(_QWORD *)&this->fields.extra_arg);
}