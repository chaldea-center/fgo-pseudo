void __fastcall PartyOrganizationChangeObject___ctor(PartyOrganizationChangeObject_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall PartyOrganizationChangeObject__Awake(PartyOrganizationChangeObject_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A56FF5 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewItemDraw___);
    byte_4A56FF5 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewItemDraw___);
  this->fields.itemDraw = (struct PartyOrganizationListViewItemDraw_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v4, v5);
}


void __fastcall PartyOrganizationChangeObject__ClearItem(
        PartyOrganizationChangeObject_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w2
  int32_t v6; // w3
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v8; // x1
  PartyOrganizationListViewItemDraw_o *v9; // x0

  if ( (byte_4A56FF7 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56FF7 = 1;
  }
  this->fields.partyItem = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.partyItem, 0, v2, v3);
  this->fields.callbackFunc = 0LL;
  this->fields.member = -1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, 0, v5, v6);
  this->fields.state = 0;
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1B8880C(0LL, v8);
    PartyOrganizationListViewItemDraw__ClearItem(v9, 0LL);
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
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A56FFF & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A56FFF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeObject__EndShowEquip(
        PartyOrganizationChangeObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4A57002 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationChangeObject_EndCloseShowEquip__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A57002 = 1;
  }
  if ( isDecide )
    PartyOrganizationChangeObject__ModifyItem(this, (const MethodInfo *)isDecide);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationChangeObject_EndCloseShowEquip__, 0LL);
  if ( !Instance )
    sub_1B8880C(v7, v8);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeObject__EndShowServant(
        PartyOrganizationChangeObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4A56FFD & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationChangeObject_EndCloseShow__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56FFD = 1;
  }
  if ( isDecide )
    PartyOrganizationChangeObject__ModifyItem(this, (const MethodInfo *)isDecide);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationChangeObject_EndCloseShow__, 0LL);
  if ( !Instance )
    sub_1B8880C(v7, v8);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeObject__EndShowServantWithQuest(
        PartyOrganizationChangeObject_o *this,
        bool isDecide,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A56FFE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationChangeObject_EndCloseShowQuestJump__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56FFE = 1;
  }
  if ( questId < 1 )
  {
    PartyOrganizationChangeObject__EndShowServant(this, isDecide, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyOrganizationChangeObject_EndCloseShowQuestJump__, 0LL);
    if ( !Instance )
      sub_1B8880C(v9, v10);
    CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v8, 0LL);
  }
}


void __fastcall PartyOrganizationChangeObject__ModifyItem(
        PartyOrganizationChangeObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  PartyListViewItem_o *partyItem; // x0
  PartyOrganizationListViewItem_o *v5; // x20
  UnityEngine_Object_o *itemDraw; // x21

  if ( (byte_4A56FF9 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56FF9 = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    partyItem = (PartyListViewItem_o *)this->fields.itemDraw;
    if ( partyItem )
    {
      PartyOrganizationListViewItemDraw__SetItem((PartyOrganizationListViewItemDraw_o *)partyItem, v5, 2, 0LL);
      return;
    }
LABEL_11:
    sub_1B8880C(partyItem, method);
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

  if ( (byte_4A56FFB & 1) == 0 )
  {
    sub_1B885B0(&Method_PartyOrganizationChangeObject_OnClickItem__);
    byte_4A56FFB = 1;
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
            sub_1B8880C(Member, v6);
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
            v8 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationChangeObject_OnClickItem__);
          v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v8, v8[4]);
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

  if ( (byte_4A57000 & 1) == 0 )
  {
    sub_1B885B0(&Method_PartyOrganizationChangeObject_OnClickItemEquip__);
    byte_4A57000 = 1;
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
            v7 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationChangeObject_OnClickItemEquip__);
          v8 = (System_Reflection_MethodBase_o *)sub_1B88594(v7, v7[4]);
          OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0LL);
        }
        else
        {
          callbackFunc = this->fields.callbackFunc;
          if ( !callbackFunc )
            sub_1B8880C(Member, v6);
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
  PartyListViewItem_o *partyItem; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v6; // x20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  Il2CppObject *Instance; // x21
  int64_t EquipUserSvtId; // x20
  ServantStatusDialog_EndDelegate_o *v11; // x22
  ServantLeaderInfo_o *ServantLeader; // x0
  __int64 v13; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  bool IsNpc; // w22
  Il2CppObject *v18; // x21
  EquipTargetInfo_o *EquipTarget1; // x20
  ServantStatusDialog_EndDelegate_o *v20; // x23
  int32_t v21; // w1
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0

  if ( (byte_4A57001 & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationChangeObject_EndShowEquip__);
    sub_1B885B0(&Method_PartyOrganizationChangeObject_OpenEquipDetail__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A57001 = 1;
  }
  partyItem = this->fields.partyItem;
  if ( partyItem )
  {
    Member = PartyListViewItem__GetMember(partyItem, this->fields.member, v2);
    if ( !Member )
      goto LABEL_25;
    v6 = Member;
    if ( PartyOrganizationListViewItem__get_EquipUserSvtId(Member, 0LL) >= 1 )
    {
      v7 = Method_PartyOrganizationChangeObject_OpenEquipDetail__;
      if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenEquipDetail__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationChangeObject_OpenEquipDetail__);
      v8 = (System_Reflection_MethodBase_o *)sub_1B88594(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v6, 0LL);
      v11 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v11,
        (Il2CppObject *)this,
        Method_PartyOrganizationChangeObject_EndShowEquip__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenServantEquipStatusDialog((CommonUI_o *)Instance, 11, EquipUserSvtId, 1, v11, 0LL, 0LL);
        return;
      }
LABEL_28:
      sub_1B8880C(ServantLeader, v13);
    }
    if ( !PartyOrganizationListViewItem__get_ServantLeader(v6, 0LL) )
      goto LABEL_25;
    ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v6, 0LL);
    if ( !ServantLeader )
      goto LABEL_28;
    if ( ServantLeaderInfo__IsHideEquip(ServantLeader, 0LL) )
      goto LABEL_25;
    EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v6, 0LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(EquipSvtId, 0LL) >= 1 )
    {
      v15 = Method_PartyOrganizationChangeObject_OpenEquipDetail__;
      if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenEquipDetail__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationChangeObject_OpenEquipDetail__);
      v16 = (System_Reflection_MethodBase_o *)sub_1B88594(v15, v15[4]);
      OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v6, 0LL);
      if ( !ServantLeader )
        goto LABEL_28;
      IsNpc = ServantLeaderInfo__IsNpc(ServantLeader, 0LL);
      v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      EquipTarget1 = PartyOrganizationListViewItem__get_EquipTarget1(v6, 0LL);
      v20 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v20,
        (Il2CppObject *)this,
        Method_PartyOrganizationChangeObject_EndShowEquip__,
        0LL);
      if ( !v18 )
        goto LABEL_28;
      if ( IsNpc )
        v21 = 19;
      else
        v21 = 14;
      CommonUI__OpenServantEquipStatusDialog_30509528((CommonUI_o *)v18, v21, EquipTarget1, v20, 0LL, 0LL);
    }
    else
    {
LABEL_25:
      v22 = Method_PartyOrganizationChangeObject_OpenEquipDetail__;
      if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenEquipDetail__ + 83) & 2) != 0 )
        v22 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationChangeObject_OpenEquipDetail__);
      v23 = (System_Reflection_MethodBase_o *)sub_1B88594(v22, v22[4]);
      OverwriteAssetSoundName__PlaySystemSe(v23, 2, 0LL);
    }
  }
}


void __fastcall PartyOrganizationChangeObject__OpenServantDetail(
        PartyOrganizationChangeObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  PartyListViewItem_o *partyItem; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v6; // x20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  ServantLeaderInfo_o *ServantLeader; // x0
  __int64 v10; // x1
  struct PartyListViewItem_o *v11; // x8
  int32_t menuKind; // w22
  Il2CppObject *Instance; // x0
  PartyListViewItem_o *v14; // x20
  int32_t v15; // w21
  bool v16; // zf
  CommonUI_o *v17; // x22
  ServantStatusDialog_FormationEndDelegate_o *v18; // x23
  FollowerInfo_o *followerInfo; // x0
  __int64 v20; // x21
  __int64 v21; // x22
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  Il2CppObject *v24; // x21
  ServantLeaderInfo_o *v25; // x20
  ServantStatusDialog_EndDelegate_o *v26; // x22
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  ServantStatusDialog_EndDelegate_o *v29; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4A56FFC & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&ServantStatusDialog_FormationEndDelegate_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_PartyOrganizationChangeObject_EndShowServantWithQuest__);
    sub_1B885B0(&Method_PartyOrganizationChangeObject_EndShowServant__);
    sub_1B885B0(&Method_PartyOrganizationChangeObject_OpenServantDetail__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A56FFC = 1;
  }
  partyItem = this->fields.partyItem;
  if ( partyItem )
  {
    Member = PartyListViewItem__GetMember(partyItem, this->fields.member, v2);
    if ( Member )
    {
      v6 = Member;
      if ( Member->fields.userServantEntity )
      {
        v7 = Method_PartyOrganizationChangeObject_OpenServantDetail__;
        if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenServantDetail__ + 83) & 2) != 0 )
          v7 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationChangeObject_OpenServantDetail__);
        v8 = (System_Reflection_MethodBase_o *)sub_1B88594(v7, v7[4]);
        OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
        v11 = this->fields.partyItem;
        if ( v11 )
        {
          menuKind = v11->fields.menuKind;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v14 = this->fields.partyItem;
          v15 = this->fields.member;
          v16 = menuKind == 8;
          v17 = (CommonUI_o *)Instance;
          if ( v16 )
          {
            v18 = (ServantStatusDialog_FormationEndDelegate_o *)sub_1B887FC(ServantStatusDialog_FormationEndDelegate_TypeInfo);
            ServantStatusDialog_FormationEndDelegate___ctor(
              v18,
              (Il2CppObject *)this,
              Method_PartyOrganizationChangeObject_EndShowServantWithQuest__,
              0LL);
            if ( v17 )
            {
              CommonUI__OpenServantStatusDialog_30503084(v17, 1, v14, v15, v18, 0, 0LL);
              return;
            }
          }
          else
          {
            v29 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v29,
              (Il2CppObject *)this,
              Method_PartyOrganizationChangeObject_EndShowServant__,
              0LL);
            if ( v17 )
            {
              CommonUI__OpenServantStatusDialog(v17, 1, v14, v15, v29, 0, 0LL);
              return;
            }
          }
        }
LABEL_30:
        sub_1B8880C(ServantLeader, v10);
      }
      followerInfo = Member->fields.followerInfo;
      if ( followerInfo
        && !FollowerInfo__get_IsNpc(followerInfo, 0LL)
        && PartyOrganizationListViewItem__get_ServantLeader(v6, 0LL) )
      {
        ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v6, 0LL);
        if ( !ServantLeader )
          goto LABEL_30;
        v21 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
        v20 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v30.fields.currentCryptoKey = v21;
        *(_QWORD *)&v30.fields.fakeValue = v20;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v30, 0LL) >= 1 )
        {
          v22 = Method_PartyOrganizationChangeObject_OpenServantDetail__;
          if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenServantDetail__ + 83) & 2) != 0 )
            v22 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationChangeObject_OpenServantDetail__);
          v23 = (System_Reflection_MethodBase_o *)sub_1B88594(v22, v22[4]);
          OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0LL);
          v24 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v25 = PartyOrganizationListViewItem__get_ServantLeader(v6, 0LL);
          v26 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v26,
            (Il2CppObject *)this,
            Method_PartyOrganizationChangeObject_EndShowServant__,
            0LL);
          if ( v24 )
          {
            CommonUI__OpenServantStatusDialog_30506432((CommonUI_o *)v24, 5, v25, v26, 0LL);
            return;
          }
          goto LABEL_30;
        }
      }
    }
    v27 = Method_PartyOrganizationChangeObject_OpenServantDetail__;
    if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenServantDetail__ + 83) & 2) != 0 )
      v27 = (_QWORD *)sub_1B885C8(Method_PartyOrganizationChangeObject_OpenServantDetail__);
    v28 = (System_Reflection_MethodBase_o *)sub_1B88594(v27, v27[4]);
    OverwriteAssetSoundName__PlaySystemSe(v28, 2, 0LL);
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
  if ( (byte_4A56FFA & 1) == 0 )
  {
    this = (PartyOrganizationChangeObject_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56FFA = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1B8880C(this, isInput);
  }
}


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
  int32_t v13; // w2
  int32_t v14; // w3
  UnityEngine_Object_o *itemDraw; // x21

  if ( (byte_4A56FF8 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56FF8 = 1;
  }
  this->fields.partyItem = partyItem;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.partyItem,
    (int32_t)partyItem,
    member,
    (int32_t)callback);
  v11 = this->fields.partyItem;
  this->fields.member = member;
  if ( !v11 )
    goto LABEL_13;
  v12 = PartyListViewItem__GetMember(v11, member, v10);
  this->fields.callbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v13, v14);
  if ( !v12 || this->fields.state != 2 )
    this->fields.state = 1;
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v11 = (PartyListViewItem_o *)this->fields.itemDraw;
    if ( v11 )
    {
      PartyOrganizationListViewItemDraw__SetItem((PartyOrganizationListViewItemDraw_o *)v11, v12, 2, 0LL);
      return;
    }
LABEL_13:
    sub_1B8880C(v11, v9);
  }
}


void __fastcall PartyOrganizationChangeObject__SetVisible(
        PartyOrganizationChangeObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4A56FF6 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56FF6 = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.itemDraw;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1B8880C(gameObject, v6);
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

  if ( (byte_4A56FF3 & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationChangeObject_CallbackFunc_TypeInfo);
    byte_4A56FF3 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationChangeObject_o *)sub_1B88ACC(v8);
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

  if ( (byte_4A56FF4 & 1) == 0 )
  {
    sub_1B885B0(&PartyOrganizationChangeObject_CallbackFunc_TypeInfo);
    byte_4A56FF4 = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationChangeObject_o *)sub_1B88ACC(v8);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19C8DFC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C8DA4;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = n;
  v15 = result;
  if ( (byte_4A57004 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&PartyOrganizationChangeObject_ResultKind_TypeInfo);
    byte_4A57004 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(
             PartyOrganizationChangeObject_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&n,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1B88564(this, v13, callback, object);
}


void __fastcall PartyOrganizationChangeObject_CallbackFunc__EndInvoke(
        PartyOrganizationChangeObject_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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