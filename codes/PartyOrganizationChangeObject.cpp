void __fastcall PartyOrganizationChangeObject___ctor(PartyOrganizationChangeObject_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall PartyOrganizationChangeObject__Awake(PartyOrganizationChangeObject_o *this, const MethodInfo *method)
{
  if ( (byte_4B62822 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewItemDraw___, method);
    byte_4B62822 = 1;
  }
  this->fields.itemDraw = (struct PartyOrganizationListViewItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                                                          (UnityEngine_Component_o *)this,
                                                                          (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewItemDraw___);
  sub_1BE4A70(&this->fields.itemDraw);
}


void __fastcall PartyOrganizationChangeObject__ClearItem(
        PartyOrganizationChangeObject_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v4; // x1
  PartyOrganizationListViewItemDraw_o *v5; // x0

  if ( (byte_4B62824 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B62824 = 1;
  }
  this->fields.partyItem = 0LL;
  sub_1BE4A70(&this->fields.partyItem);
  this->fields.callbackFunc = 0LL;
  this->fields.member = -1;
  sub_1BE4A70(&this->fields.callbackFunc);
  this->fields.state = 0;
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0LL, 0LL) )
  {
    v5 = this->fields.itemDraw;
    if ( !v5 )
      sub_1BE4D28(0LL, v4);
    PartyOrganizationListViewItemDraw__ClearItem(v5, 0LL);
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

  if ( (byte_4B6282C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B6282C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v3);
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

  if ( (byte_4B6282F & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, isDecide);
    sub_1BE4ACC(&Method_PartyOrganizationChangeObject_EndCloseShowEquip__, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B6282F = 1;
  }
  if ( isDecide )
    PartyOrganizationChangeObject__ModifyItem(this, (const MethodInfo *)isDecide);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyOrganizationChangeObject_EndCloseShowEquip__, 0LL);
  if ( !Instance )
    sub_1BE4D28(v9, v10);
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

  if ( (byte_4B6282A & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, isDecide);
    sub_1BE4ACC(&Method_PartyOrganizationChangeObject_EndCloseShow__, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B6282A = 1;
  }
  if ( isDecide )
    PartyOrganizationChangeObject__ModifyItem(this, (const MethodInfo *)isDecide);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyOrganizationChangeObject_EndCloseShow__, 0LL);
  if ( !Instance )
    sub_1BE4D28(v9, v10);
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

  if ( (byte_4B6282B & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, isDecide);
    sub_1BE4ACC(&Method_PartyOrganizationChangeObject_EndCloseShowQuestJump__, v7);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4B6282B = 1;
  }
  if ( questId < 1 )
  {
    PartyOrganizationChangeObject__EndShowServant(this, isDecide, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationChangeObject_EndCloseShowQuestJump__, 0LL);
    if ( !Instance )
      sub_1BE4D28(v11, v12);
    CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v10, 0LL);
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

  if ( (byte_4B62826 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B62826 = 1;
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
    sub_1BE4D28(partyItem, method);
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

  if ( (byte_4B62828 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_PartyOrganizationChangeObject_OnClickItem__, method);
    byte_4B62828 = 1;
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
            sub_1BE4D28(Member, v6);
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
            v8 = (_QWORD *)sub_1BE4AE4(Method_PartyOrganizationChangeObject_OnClickItem__);
          v9 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v8, v8[4]);
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

  if ( (byte_4B6282D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_PartyOrganizationChangeObject_OnClickItemEquip__, method);
    byte_4B6282D = 1;
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
            v7 = (_QWORD *)sub_1BE4AE4(Method_PartyOrganizationChangeObject_OnClickItemEquip__);
          v8 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v7, v7[4]);
          OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0LL);
        }
        else
        {
          callbackFunc = this->fields.callbackFunc;
          if ( !callbackFunc )
            sub_1BE4D28(Member, v6);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  PartyListViewItem_o *partyItem; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v10; // x20
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  Il2CppObject *Instance; // x21
  int64_t EquipUserSvtId; // x20
  ServantStatusDialog_EndDelegate_o *v15; // x22
  ServantLeaderInfo_o *ServantLeader; // x0
  __int64 v17; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  bool IsNpc; // w22
  Il2CppObject *v22; // x21
  EquipTargetInfo_o *EquipTarget1; // x20
  ServantStatusDialog_EndDelegate_o *v24; // x23
  int32_t v25; // w1
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0

  if ( (byte_4B6282E & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusDialog_EndDelegate_TypeInfo, method);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BE4ACC(&Method_PartyOrganizationChangeObject_EndShowEquip__, v5);
    sub_1BE4ACC(&Method_PartyOrganizationChangeObject_OpenEquipDetail__, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4B6282E = 1;
  }
  partyItem = this->fields.partyItem;
  if ( partyItem )
  {
    Member = PartyListViewItem__GetMember(partyItem, this->fields.member, v2);
    if ( !Member )
      goto LABEL_25;
    v10 = Member;
    if ( PartyOrganizationListViewItem__get_EquipUserSvtId(Member, 0LL) >= 1 )
    {
      v11 = Method_PartyOrganizationChangeObject_OpenEquipDetail__;
      if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenEquipDetail__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1BE4AE4(Method_PartyOrganizationChangeObject_OpenEquipDetail__);
      v12 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v10, 0LL);
      v15 = (ServantStatusDialog_EndDelegate_o *)sub_1BE4D18(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v15,
        (Il2CppObject *)this,
        Method_PartyOrganizationChangeObject_EndShowEquip__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenServantEquipStatusDialog((CommonUI_o *)Instance, 11, EquipUserSvtId, 1, v15, 0LL, 0LL);
        return;
      }
LABEL_28:
      sub_1BE4D28(ServantLeader, v17);
    }
    if ( !PartyOrganizationListViewItem__get_ServantLeader(v10, 0LL) )
      goto LABEL_25;
    ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v10, 0LL);
    if ( !ServantLeader )
      goto LABEL_28;
    if ( ServantLeaderInfo__IsHideEquip(ServantLeader, 0LL) )
      goto LABEL_25;
    EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v10, 0LL);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(EquipSvtId, 0LL) >= 1 )
    {
      v19 = Method_PartyOrganizationChangeObject_OpenEquipDetail__;
      if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenEquipDetail__ + 83) & 2) != 0 )
        v19 = (_QWORD *)sub_1BE4AE4(Method_PartyOrganizationChangeObject_OpenEquipDetail__);
      v20 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v19, v19[4]);
      OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0LL);
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v10, 0LL);
      if ( !ServantLeader )
        goto LABEL_28;
      IsNpc = ServantLeaderInfo__IsNpc(ServantLeader, 0LL);
      v22 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      EquipTarget1 = PartyOrganizationListViewItem__get_EquipTarget1(v10, 0LL);
      v24 = (ServantStatusDialog_EndDelegate_o *)sub_1BE4D18(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v24,
        (Il2CppObject *)this,
        Method_PartyOrganizationChangeObject_EndShowEquip__,
        0LL);
      if ( !v22 )
        goto LABEL_28;
      if ( IsNpc )
        v25 = 19;
      else
        v25 = 14;
      CommonUI__OpenServantEquipStatusDialog_30889236((CommonUI_o *)v22, v25, EquipTarget1, v24, 0LL, 0LL);
    }
    else
    {
LABEL_25:
      v26 = Method_PartyOrganizationChangeObject_OpenEquipDetail__;
      if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenEquipDetail__ + 83) & 2) != 0 )
        v26 = (_QWORD *)sub_1BE4AE4(Method_PartyOrganizationChangeObject_OpenEquipDetail__);
      v27 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v26, v26[4]);
      OverwriteAssetSoundName__PlaySystemSe(v27, 2, 0LL);
    }
  }
}


void __fastcall PartyOrganizationChangeObject__OpenServantDetail(
        PartyOrganizationChangeObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  PartyListViewItem_o *partyItem; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v12; // x20
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  ServantLeaderInfo_o *ServantLeader; // x0
  __int64 v16; // x1
  struct PartyListViewItem_o *v17; // x8
  int32_t menuKind; // w22
  Il2CppObject *Instance; // x0
  PartyListViewItem_o *v20; // x20
  int32_t v21; // w21
  bool v22; // zf
  CommonUI_o *v23; // x22
  ServantStatusDialog_FormationEndDelegate_o *v24; // x23
  FollowerInfo_o *followerInfo; // x0
  __int64 v26; // x21
  __int64 v27; // x22
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  Il2CppObject *v30; // x21
  ServantLeaderInfo_o *v31; // x20
  ServantStatusDialog_EndDelegate_o *v32; // x22
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  ServantStatusDialog_EndDelegate_o *v35; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_4B62829 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantStatusDialog_EndDelegate_TypeInfo, method);
    sub_1BE4ACC(&ServantStatusDialog_FormationEndDelegate_TypeInfo, v4);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1BE4ACC(&Method_PartyOrganizationChangeObject_EndShowServantWithQuest__, v6);
    sub_1BE4ACC(&Method_PartyOrganizationChangeObject_EndShowServant__, v7);
    sub_1BE4ACC(&Method_PartyOrganizationChangeObject_OpenServantDetail__, v8);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_4B62829 = 1;
  }
  partyItem = this->fields.partyItem;
  if ( partyItem )
  {
    Member = PartyListViewItem__GetMember(partyItem, this->fields.member, v2);
    if ( Member )
    {
      v12 = Member;
      if ( Member->fields.userServantEntity )
      {
        v13 = Method_PartyOrganizationChangeObject_OpenServantDetail__;
        if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenServantDetail__ + 83) & 2) != 0 )
          v13 = (_QWORD *)sub_1BE4AE4(Method_PartyOrganizationChangeObject_OpenServantDetail__);
        v14 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v13, v13[4]);
        OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
        v17 = this->fields.partyItem;
        if ( v17 )
        {
          menuKind = v17->fields.menuKind;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v20 = this->fields.partyItem;
          v21 = this->fields.member;
          v22 = menuKind == 8;
          v23 = (CommonUI_o *)Instance;
          if ( v22 )
          {
            v24 = (ServantStatusDialog_FormationEndDelegate_o *)sub_1BE4D18(ServantStatusDialog_FormationEndDelegate_TypeInfo);
            ServantStatusDialog_FormationEndDelegate___ctor(
              v24,
              (Il2CppObject *)this,
              Method_PartyOrganizationChangeObject_EndShowServantWithQuest__,
              0LL);
            if ( v23 )
            {
              CommonUI__OpenServantStatusDialog_30882792(v23, 1, v20, v21, v24, 0, 0LL);
              return;
            }
          }
          else
          {
            v35 = (ServantStatusDialog_EndDelegate_o *)sub_1BE4D18(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v35,
              (Il2CppObject *)this,
              Method_PartyOrganizationChangeObject_EndShowServant__,
              0LL);
            if ( v23 )
            {
              CommonUI__OpenServantStatusDialog(v23, 1, v20, v21, v35, 0, 0LL);
              return;
            }
          }
        }
LABEL_30:
        sub_1BE4D28(ServantLeader, v16);
      }
      followerInfo = Member->fields.followerInfo;
      if ( followerInfo
        && !FollowerInfo__get_IsNpc(followerInfo, 0LL)
        && PartyOrganizationListViewItem__get_ServantLeader(v12, 0LL) )
      {
        ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v12, 0LL);
        if ( !ServantLeader )
          goto LABEL_30;
        v27 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
        v26 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v36.fields.currentCryptoKey = v27;
        *(_QWORD *)&v36.fields.fakeValue = v26;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v36, 0LL) >= 1 )
        {
          v28 = Method_PartyOrganizationChangeObject_OpenServantDetail__;
          if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenServantDetail__ + 83) & 2) != 0 )
            v28 = (_QWORD *)sub_1BE4AE4(Method_PartyOrganizationChangeObject_OpenServantDetail__);
          v29 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v28, v28[4]);
          OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0LL);
          v30 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v31 = PartyOrganizationListViewItem__get_ServantLeader(v12, 0LL);
          v32 = (ServantStatusDialog_EndDelegate_o *)sub_1BE4D18(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v32,
            (Il2CppObject *)this,
            Method_PartyOrganizationChangeObject_EndShowServant__,
            0LL);
          if ( v30 )
          {
            CommonUI__OpenServantStatusDialog_30886140((CommonUI_o *)v30, 5, v31, v32, 0LL);
            return;
          }
          goto LABEL_30;
        }
      }
    }
    v33 = Method_PartyOrganizationChangeObject_OpenServantDetail__;
    if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenServantDetail__ + 83) & 2) != 0 )
      v33 = (_QWORD *)sub_1BE4AE4(Method_PartyOrganizationChangeObject_OpenServantDetail__);
    v34 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v33, v33[4]);
    OverwriteAssetSoundName__PlaySystemSe(v34, 2, 0LL);
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
  if ( (byte_4B62827 & 1) == 0 )
  {
    this = (PartyOrganizationChangeObject_o *)sub_1BE4ACC(&UnityEngine_Object_TypeInfo, isInput);
    byte_4B62827 = 1;
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
    sub_1BE4D28(this, isInput);
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
  UnityEngine_Object_o *itemDraw; // x21

  if ( (byte_4B62825 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, partyItem);
    byte_4B62825 = 1;
  }
  this->fields.partyItem = partyItem;
  sub_1BE4A70(&this->fields.partyItem);
  v11 = this->fields.partyItem;
  this->fields.member = member;
  if ( !v11 )
    goto LABEL_13;
  v12 = PartyListViewItem__GetMember(v11, member, v10);
  this->fields.callbackFunc = callback;
  sub_1BE4A70(&this->fields.callbackFunc);
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
    sub_1BE4D28(v11, v9);
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

  if ( (byte_4B62823 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, isVisible);
    byte_4B62823 = 1;
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
      sub_1BE4D28(gameObject, v6);
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

  if ( (byte_4B62820 & 1) == 0 )
  {
    sub_1BE4ACC(&PartyOrganizationChangeObject_CallbackFunc_TypeInfo, value);
    byte_4B62820 = 1;
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
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationChangeObject_o *)sub_1BE4FE8(v8);
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

  if ( (byte_4B62821 & 1) == 0 )
  {
    sub_1BE4ACC(&PartyOrganizationChangeObject_CallbackFunc_TypeInfo, value);
    byte_4B62821 = 1;
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
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationChangeObject_o *)sub_1BE4FE8(v8);
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
  sub_1BE4A70(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BE4B8C(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A20E7C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A20E24;
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
  if ( (byte_4B62831 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, *(_QWORD *)&result);
    sub_1BE4ACC(&PartyOrganizationChangeObject_ResultKind_TypeInfo, v9);
    byte_4B62831 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             PartyOrganizationChangeObject_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&n,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v14, callback, object);
}


void __fastcall PartyOrganizationChangeObject_CallbackFunc__EndInvoke(
        PartyOrganizationChangeObject_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
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