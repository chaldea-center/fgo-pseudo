void __fastcall PartyOrganizationChangeObject___ctor(PartyOrganizationChangeObject_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall PartyOrganizationChangeObject__Awake(PartyOrganizationChangeObject_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_49B69F5 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewItemDraw___, method);
    byte_49B69F5 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewItemDraw___);
  this->fields.itemDraw = (struct PartyOrganizationListViewItemDraw_o *)Component_object;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v4, v5);
}


void __fastcall PartyOrganizationChangeObject__ClearItem(
        PartyOrganizationChangeObject_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v8; // x1
  PartyOrganizationListViewItemDraw_o *v9; // x0

  if ( (byte_49B69F7 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B69F7 = 1;
  }
  this->fields.partyItem = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.partyItem, 0, v2, v3);
  this->fields.callbackFunc = 0LL;
  this->fields.member = -1;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v5, v6);
  this->fields.state = 0;
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v9 = this->fields.itemDraw;
    if ( !v9 )
      sub_1B4D1EC(0LL, v8);
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

  if ( (byte_49B69FF & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49B69FF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeObject__EndShowEquip(
        PartyOrganizationChangeObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_49B6A02 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, isDecide);
    sub_1B4CF90(&Method_PartyOrganizationChangeObject_EndCloseShowEquip__, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49B6A02 = 1;
  }
  if ( isDecide )
    PartyOrganizationChangeObject__ModifyItem(this, (const MethodInfo *)isDecide);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyOrganizationChangeObject_EndCloseShowEquip__, 0LL);
  if ( !Instance )
    sub_1B4D1EC(v9, v10);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeObject__EndShowServant(
        PartyOrganizationChangeObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_49B69FD & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, isDecide);
    sub_1B4CF90(&Method_PartyOrganizationChangeObject_EndCloseShow__, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49B69FD = 1;
  }
  if ( isDecide )
    PartyOrganizationChangeObject__ModifyItem(this, (const MethodInfo *)isDecide);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyOrganizationChangeObject_EndCloseShow__, 0LL);
  if ( !Instance )
    sub_1B4D1EC(v9, v10);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeObject__EndShowServantWithQuest(
        PartyOrganizationChangeObject_o *this,
        bool isDecide,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_49B69FE & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, isDecide);
    sub_1B4CF90(&Method_PartyOrganizationChangeObject_EndCloseShowQuestJump__, v7);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_49B69FE = 1;
  }
  if ( questId < 1 )
  {
    PartyOrganizationChangeObject__EndShowServant(this, isDecide, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationChangeObject_EndCloseShowQuestJump__, 0LL);
    if ( !Instance )
      sub_1B4D1EC(v11, v12);
    CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v10, 0LL);
  }
}


void __fastcall PartyOrganizationChangeObject__ModifyItem(
        PartyOrganizationChangeObject_o *this,
        const MethodInfo *method)
{
  PartyListViewItem_o *partyItem; // x0
  PartyOrganizationListViewItem_o *v4; // x20
  UnityEngine_Object_o *itemDraw; // x21

  if ( (byte_49B69F9 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B69F9 = 1;
  }
  partyItem = this->fields.partyItem;
  if ( !partyItem )
    goto LABEL_11;
  partyItem = (PartyListViewItem_o *)PartyListViewItem__GetMember(partyItem, this->fields.member, 0LL);
  if ( !partyItem )
    goto LABEL_11;
  v4 = (PartyOrganizationListViewItem_o *)partyItem;
  PartyOrganizationListViewItem__Modify((PartyOrganizationListViewItem_o *)partyItem, 0LL);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    partyItem = (PartyListViewItem_o *)this->fields.itemDraw;
    if ( partyItem )
    {
      PartyOrganizationListViewItemDraw__SetItem((PartyOrganizationListViewItemDraw_o *)partyItem, v4, 2, 0LL);
      return;
    }
LABEL_11:
    sub_1B4D1EC(partyItem, method);
  }
}


void __fastcall PartyOrganizationChangeObject__OnClickItem(
        PartyOrganizationChangeObject_o *this,
        const MethodInfo *method)
{
  PartyListViewItem_o *partyItem; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  __int64 v5; // x1
  struct PartyOrganizationChangeObject_CallbackFunc_o *callbackFunc; // x8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_49B69FB & 1) == 0 )
  {
    sub_1B4CF90(&Method_PartyOrganizationChangeObject_OnClickItem__, method);
    byte_49B69FB = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.callbackFunc )
    {
      partyItem = this->fields.partyItem;
      if ( partyItem )
      {
        Member = PartyListViewItem__GetMember(partyItem, this->fields.member, 0LL);
        if ( Member
          && (Member->fields.isMyServantOrNpcRestriction
           || !Member->fields.isFollower && !Member->fields.isServantNumRestriction) )
        {
          callbackFunc = this->fields.callbackFunc;
          if ( !callbackFunc )
            sub_1B4D1EC(Member, v5);
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, _QWORD))callbackFunc->fields.m_target)(
            callbackFunc->fields.original_method_info,
            1LL,
            (unsigned int)Member->fields.index,
            *(_QWORD *)&callbackFunc->fields.extra_arg);
        }
        else
        {
          v7 = Method_PartyOrganizationChangeObject_OnClickItem__;
          if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OnClickItem__ + 83) & 2) != 0 )
            v7 = (_QWORD *)sub_1B4CFA8(Method_PartyOrganizationChangeObject_OnClickItem__);
          v8 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v7, v7[4]);
          OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0LL);
        }
      }
    }
  }
}


void __fastcall PartyOrganizationChangeObject__OnClickItemEquip(
        PartyOrganizationChangeObject_o *this,
        const MethodInfo *method)
{
  PartyListViewItem_o *partyItem; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  struct PartyOrganizationChangeObject_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_49B6A00 & 1) == 0 )
  {
    sub_1B4CF90(&Method_PartyOrganizationChangeObject_OnClickItemEquip__, method);
    byte_49B6A00 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.callbackFunc )
    {
      partyItem = this->fields.partyItem;
      if ( partyItem )
      {
        Member = PartyListViewItem__GetMember(partyItem, this->fields.member, 0LL);
        if ( !Member || Member->fields.isFollower || Member->fields.isServantNumRestriction )
        {
          v6 = Method_PartyOrganizationChangeObject_OnClickItemEquip__;
          if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OnClickItemEquip__ + 83) & 2) != 0 )
            v6 = (_QWORD *)sub_1B4CFA8(Method_PartyOrganizationChangeObject_OnClickItemEquip__);
          v7 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v6, v6[4]);
          OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0LL);
        }
        else
        {
          callbackFunc = this->fields.callbackFunc;
          if ( !callbackFunc )
            sub_1B4D1EC(Member, v5);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  PartyListViewItem_o *partyItem; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v9; // x20
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x21
  int64_t EquipUserSvtId; // x20
  ServantStatusDialog_EndDelegate_o *v14; // x22
  ServantLeaderInfo_o *ServantLeader; // x0
  __int64 v16; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  bool IsNpc; // w22
  Il2CppObject *v21; // x21
  EquipTargetInfo_o *EquipTarget1; // x20
  ServantStatusDialog_EndDelegate_o *v23; // x23
  int32_t v24; // w1
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0

  if ( (byte_49B6A01 & 1) == 0 )
  {
    sub_1B4CF90(&ServantStatusDialog_EndDelegate_TypeInfo, method);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1B4CF90(&Method_PartyOrganizationChangeObject_EndShowEquip__, v4);
    sub_1B4CF90(&Method_PartyOrganizationChangeObject_OpenEquipDetail__, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49B6A01 = 1;
  }
  partyItem = this->fields.partyItem;
  if ( partyItem )
  {
    Member = PartyListViewItem__GetMember(partyItem, this->fields.member, 0LL);
    if ( !Member )
      goto LABEL_25;
    v9 = Member;
    if ( PartyOrganizationListViewItem__get_EquipUserSvtId(Member, 0LL) >= 1 )
    {
      v10 = Method_PartyOrganizationChangeObject_OpenEquipDetail__;
      if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenEquipDetail__ + 83) & 2) != 0 )
        v10 = (_QWORD *)sub_1B4CFA8(Method_PartyOrganizationChangeObject_OpenEquipDetail__);
      v11 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v10, v10[4]);
      OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v9, 0LL);
      v14 = (ServantStatusDialog_EndDelegate_o *)sub_1B4D1DC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v14,
        (Il2CppObject *)this,
        Method_PartyOrganizationChangeObject_EndShowEquip__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenServantEquipStatusDialog((CommonUI_o *)Instance, 11, EquipUserSvtId, 1, v14, 0LL, 0LL);
        return;
      }
LABEL_28:
      sub_1B4D1EC(ServantLeader, v16);
    }
    if ( !PartyOrganizationListViewItem__get_ServantLeader(v9, 0LL) )
      goto LABEL_25;
    ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v9, 0LL);
    if ( !ServantLeader )
      goto LABEL_28;
    if ( ServantLeaderInfo__IsHideEquip(ServantLeader, 0LL) )
      goto LABEL_25;
    EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v9, 0LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(EquipSvtId, 0LL) >= 1 )
    {
      v18 = Method_PartyOrganizationChangeObject_OpenEquipDetail__;
      if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenEquipDetail__ + 83) & 2) != 0 )
        v18 = (_QWORD *)sub_1B4CFA8(Method_PartyOrganizationChangeObject_OpenEquipDetail__);
      v19 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v18, v18[4]);
      OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0, 0LL);
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v9, 0LL);
      if ( !ServantLeader )
        goto LABEL_28;
      IsNpc = ServantLeaderInfo__IsNpc(ServantLeader, 0LL);
      v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      EquipTarget1 = PartyOrganizationListViewItem__get_EquipTarget1(v9, 0LL);
      v23 = (ServantStatusDialog_EndDelegate_o *)sub_1B4D1DC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v23,
        (Il2CppObject *)this,
        Method_PartyOrganizationChangeObject_EndShowEquip__,
        0LL);
      if ( !v21 )
        goto LABEL_28;
      if ( IsNpc )
        v24 = 19;
      else
        v24 = 14;
      CommonUI__OpenServantEquipStatusDialog_30263656((CommonUI_o *)v21, v24, EquipTarget1, v23, 0LL, 0LL);
    }
    else
    {
LABEL_25:
      v25 = Method_PartyOrganizationChangeObject_OpenEquipDetail__;
      if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenEquipDetail__ + 83) & 2) != 0 )
        v25 = (_QWORD *)sub_1B4CFA8(Method_PartyOrganizationChangeObject_OpenEquipDetail__);
      v26 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v25, v25[4]);
      OverwriteAssetSoundName__PlaySystemSe(v26, 2, 0, 0LL);
    }
  }
}


void __fastcall PartyOrganizationChangeObject__OpenServantDetail(
        PartyOrganizationChangeObject_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  PartyListViewItem_o *partyItem; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v11; // x20
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  ServantLeaderInfo_o *ServantLeader; // x0
  __int64 v15; // x1
  struct PartyListViewItem_o *v16; // x8
  int32_t menuKind; // w22
  Il2CppObject *Instance; // x0
  PartyListViewItem_o *v19; // x20
  int32_t v20; // w21
  bool v21; // zf
  CommonUI_o *v22; // x22
  ServantStatusDialog_FormationEndDelegate_o *v23; // x23
  FollowerInfo_o *followerInfo; // x0
  __int64 v25; // x21
  __int64 v26; // x22
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  Il2CppObject *v29; // x21
  ServantLeaderInfo_o *v30; // x20
  ServantStatusDialog_EndDelegate_o *v31; // x22
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  ServantStatusDialog_EndDelegate_o *v34; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_49B69FC & 1) == 0 )
  {
    sub_1B4CF90(&ServantStatusDialog_EndDelegate_TypeInfo, method);
    sub_1B4CF90(&ServantStatusDialog_FormationEndDelegate_TypeInfo, v3);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B4CF90(&Method_PartyOrganizationChangeObject_EndShowServantWithQuest__, v5);
    sub_1B4CF90(&Method_PartyOrganizationChangeObject_EndShowServant__, v6);
    sub_1B4CF90(&Method_PartyOrganizationChangeObject_OpenServantDetail__, v7);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_49B69FC = 1;
  }
  partyItem = this->fields.partyItem;
  if ( partyItem )
  {
    Member = PartyListViewItem__GetMember(partyItem, this->fields.member, 0LL);
    if ( Member )
    {
      v11 = Member;
      if ( Member->fields.userServantEntity )
      {
        v12 = Method_PartyOrganizationChangeObject_OpenServantDetail__;
        if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenServantDetail__ + 83) & 2) != 0 )
          v12 = (_QWORD *)sub_1B4CFA8(Method_PartyOrganizationChangeObject_OpenServantDetail__);
        v13 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v12, v12[4]);
        OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0LL);
        v16 = this->fields.partyItem;
        if ( v16 )
        {
          menuKind = v16->fields.menuKind;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v19 = this->fields.partyItem;
          v20 = this->fields.member;
          v21 = menuKind == 8;
          v22 = (CommonUI_o *)Instance;
          if ( v21 )
          {
            v23 = (ServantStatusDialog_FormationEndDelegate_o *)sub_1B4D1DC(ServantStatusDialog_FormationEndDelegate_TypeInfo);
            ServantStatusDialog_FormationEndDelegate___ctor(
              v23,
              (Il2CppObject *)this,
              Method_PartyOrganizationChangeObject_EndShowServantWithQuest__,
              0LL);
            if ( v22 )
            {
              CommonUI__OpenServantStatusDialog_30257212(v22, 1, v19, v20, v23, 0, 0LL);
              return;
            }
          }
          else
          {
            v34 = (ServantStatusDialog_EndDelegate_o *)sub_1B4D1DC(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v34,
              (Il2CppObject *)this,
              Method_PartyOrganizationChangeObject_EndShowServant__,
              0LL);
            if ( v22 )
            {
              CommonUI__OpenServantStatusDialog(v22, 1, v19, v20, v34, 0, 0LL);
              return;
            }
          }
        }
LABEL_30:
        sub_1B4D1EC(ServantLeader, v15);
      }
      followerInfo = Member->fields.followerInfo;
      if ( followerInfo
        && !FollowerInfo__get_IsNpc(followerInfo, 0LL)
        && PartyOrganizationListViewItem__get_ServantLeader(v11, 0LL) )
      {
        ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v11, 0LL);
        if ( !ServantLeader )
          goto LABEL_30;
        v26 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
        v25 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v35.fields.currentCryptoKey = v26;
        *(_QWORD *)&v35.fields.fakeValue = v25;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v35, 0LL) >= 1 )
        {
          v27 = Method_PartyOrganizationChangeObject_OpenServantDetail__;
          if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenServantDetail__ + 83) & 2) != 0 )
            v27 = (_QWORD *)sub_1B4CFA8(Method_PartyOrganizationChangeObject_OpenServantDetail__);
          v28 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v27, v27[4]);
          OverwriteAssetSoundName__PlaySystemSe(v28, 0, 0, 0LL);
          v29 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v30 = PartyOrganizationListViewItem__get_ServantLeader(v11, 0LL);
          v31 = (ServantStatusDialog_EndDelegate_o *)sub_1B4D1DC(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v31,
            (Il2CppObject *)this,
            Method_PartyOrganizationChangeObject_EndShowServant__,
            0LL);
          if ( v29 )
          {
            CommonUI__OpenServantStatusDialog_30260560((CommonUI_o *)v29, 5, v30, v31, 0LL);
            return;
          }
          goto LABEL_30;
        }
      }
    }
    v32 = Method_PartyOrganizationChangeObject_OpenServantDetail__;
    if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenServantDetail__ + 83) & 2) != 0 )
      v32 = (_QWORD *)sub_1B4CFA8(Method_PartyOrganizationChangeObject_OpenServantDetail__);
    v33 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v32, v32[4]);
    OverwriteAssetSoundName__PlaySystemSe(v33, 2, 0, 0LL);
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
  PartyOrganizationListViewItemDraw_o *v7; // x21

  v4 = this;
  if ( (byte_49B69FA & 1) == 0 )
  {
    this = (PartyOrganizationChangeObject_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, isInput);
    byte_49B69FA = 1;
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
      v7 = v4->fields.itemDraw;
      this = (PartyOrganizationChangeObject_o *)PartyListViewItem__GetMember(
                                                  (PartyListViewItem_o *)this,
                                                  v4->fields.member,
                                                  0LL);
      if ( v7 )
      {
        PartyOrganizationListViewItemDraw__SetInput(v7, (PartyOrganizationListViewItem_o *)this, isInput, 0LL);
        return;
      }
    }
LABEL_14:
    sub_1B4D1EC(this, isInput);
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
  PartyListViewItem_o *v10; // x0
  PartyOrganizationListViewItem_o *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_Object_o *itemDraw; // x21

  if ( (byte_49B69F8 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, partyItem);
    byte_49B69F8 = 1;
  }
  this->fields.partyItem = partyItem;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields.partyItem,
    (int32_t)partyItem,
    member,
    (const MethodInfo *)callback);
  v10 = this->fields.partyItem;
  this->fields.member = member;
  if ( !v10 )
    goto LABEL_13;
  v11 = PartyListViewItem__GetMember(v10, member, 0LL);
  this->fields.callbackFunc = callback;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v12, v13);
  if ( !v11 || this->fields.state != 2 )
    this->fields.state = 1;
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v10 = (PartyListViewItem_o *)this->fields.itemDraw;
    if ( v10 )
    {
      PartyOrganizationListViewItemDraw__SetItem((PartyOrganizationListViewItemDraw_o *)v10, v11, 2, 0LL);
      return;
    }
LABEL_13:
    sub_1B4D1EC(v10, v9);
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

  if ( (byte_49B69F6 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, isVisible);
    byte_49B69F6 = 1;
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
      sub_1B4D1EC(gameObject, v6);
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

  if ( (byte_49B69F3 & 1) == 0 )
  {
    sub_1B4CF90(&PartyOrganizationChangeObject_CallbackFunc_TypeInfo, value);
    byte_49B69F3 = 1;
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
    v9 = sub_1B8724C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationChangeObject_o *)sub_1B4D4AC(v8);
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

  if ( (byte_49B69F4 & 1) == 0 )
  {
    sub_1B4CF90(&PartyOrganizationChangeObject_CallbackFunc_TypeInfo, value);
    byte_49B69F4 = 1;
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
    v9 = sub_1B8724C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationChangeObject_o *)sub_1B4D4AC(v8);
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
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B4D050(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B4D208(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B4D0B8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1996670;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1996618;
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
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = n;
  v16 = result;
  if ( (byte_49B6A03 & 1) == 0 )
  {
    sub_1B4CF90(&int_TypeInfo, *(_QWORD *)&result);
    sub_1B4CF90(&PartyOrganizationChangeObject_ResultKind_TypeInfo, v9);
    byte_49B6A03 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             PartyOrganizationChangeObject_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&n,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1B4CF44(this, v14, callback, object);
}


void __fastcall PartyOrganizationChangeObject_CallbackFunc__EndInvoke(
        PartyOrganizationChangeObject_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B4CF48(result, 0LL, method);
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