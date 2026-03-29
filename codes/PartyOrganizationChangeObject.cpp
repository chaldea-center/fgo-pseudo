void PartyOrganizationChangeObject___ctor(PartyOrganizationChangeObject_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void PartyOrganizationChangeObject__Awake(PartyOrganizationChangeObject_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2C2CA & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewItemDraw___);
    byte_4D2C2CA = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewItemDraw___);
  this->fields.itemDraw = (struct PartyOrganizationListViewItemDraw_o *)Component_object;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.itemDraw, (int32_t)Component_object, v4, v5, v6, v7, v8, v9);
}


void PartyOrganizationChangeObject__ClearItem(PartyOrganizationChangeObject_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v22; // x1
  PartyOrganizationListViewItemDraw_o *v23; // x0

  if ( (byte_4D2C2CC & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2C2CC = 1;
  }
  this->fields.partyItem = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.partyItem, 0, v2, v3, v4, v5, v6, v7);
  this->fields.member = -1;
  this->fields.callbackFunc = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v9, v10, v11, v12, v13, v14);
  this->fields.callbackFuncModify = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callbackFuncModify, 0, v15, v16, v17, v18, v19, v20);
  this->fields.state = 0;
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v23 = this->fields.itemDraw;
    if ( !v23 )
      sub_1C93D2C(0, v22);
    PartyOrganizationListViewItemDraw__ClearItem(v23, 0);
  }
}


void PartyOrganizationChangeObject__EndCloseShow(PartyOrganizationChangeObject_o *this, const MethodInfo *method)
{
  ;
}


void PartyOrganizationChangeObject__EndCloseShowEquip(PartyOrganizationChangeObject_o *this, const MethodInfo *method)
{
  ;
}


void PartyOrganizationChangeObject__EndCloseShowQuestJump(
        PartyOrganizationChangeObject_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4D2C2D4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4D2C2D4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationChangeObject__EndShowEquip(
        PartyOrganizationChangeObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct System_Action_o *callbackFuncModify; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4D2C2D7 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_PartyOrganizationChangeObject_EndCloseShowEquip__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2C2D7 = 1;
  }
  if ( isDecide )
  {
    PartyOrganizationChangeObject__ModifyItem(this, (const MethodInfo *)isDecide);
    callbackFuncModify = this->fields.callbackFuncModify;
    if ( callbackFuncModify )
      ((void (__fastcall *)(intptr_t, intptr_t))callbackFuncModify->fields.invoke_impl)(
        callbackFuncModify->fields.method_code,
        callbackFuncModify->fields.method);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyOrganizationChangeObject_EndCloseShowEquip__, 0);
  if ( !Instance )
    sub_1C93D2C(v8, v9);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationChangeObject__EndShowServant(
        PartyOrganizationChangeObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  struct System_Action_o *callbackFuncModify; // x8
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4D2C2D2 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_PartyOrganizationChangeObject_EndCloseShow__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2C2D2 = 1;
  }
  if ( isDecide )
  {
    PartyOrganizationChangeObject__ModifyItem(this, (const MethodInfo *)isDecide);
    callbackFuncModify = this->fields.callbackFuncModify;
    if ( callbackFuncModify )
      ((void (__fastcall *)(intptr_t, intptr_t))callbackFuncModify->fields.invoke_impl)(
        callbackFuncModify->fields.method_code,
        callbackFuncModify->fields.method);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyOrganizationChangeObject_EndCloseShow__, 0);
  if ( !Instance )
    sub_1C93D2C(v8, v9);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationChangeObject__EndShowServantWithQuest(
        PartyOrganizationChangeObject_o *this,
        bool isDecide,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4D2C2D3 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_PartyOrganizationChangeObject_EndCloseShowQuestJump__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2C2D3 = 1;
  }
  if ( questId < 1 )
  {
    PartyOrganizationChangeObject__EndShowServant(this, isDecide, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyOrganizationChangeObject_EndCloseShowQuestJump__, 0);
    if ( !Instance )
      sub_1C93D2C(v9, v10);
    CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v8, 0);
  }
}


void PartyOrganizationChangeObject__ModifyItem(PartyOrganizationChangeObject_o *this, const MethodInfo *method)
{
  PartyListViewItem_o *partyItem; // x0
  PartyOrganizationListViewItem_o *v4; // x20
  UnityEngine_Object_o *itemDraw; // x21

  if ( (byte_4D2C2CE & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2C2CE = 1;
  }
  partyItem = this->fields.partyItem;
  if ( !partyItem )
    goto LABEL_11;
  partyItem = (PartyListViewItem_o *)PartyListViewItem__GetMember(partyItem, this->fields.member, 0);
  if ( !partyItem )
    goto LABEL_11;
  v4 = (PartyOrganizationListViewItem_o *)partyItem;
  PartyOrganizationListViewItem__Modify((PartyOrganizationListViewItem_o *)partyItem, 0);
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    partyItem = (PartyListViewItem_o *)this->fields.itemDraw;
    if ( partyItem )
    {
      PartyOrganizationListViewItemDraw__SetItem((PartyOrganizationListViewItemDraw_o *)partyItem, v4, 2, 1, 0);
      return;
    }
LABEL_11:
    sub_1C93D2C(partyItem, method);
  }
}


void PartyOrganizationChangeObject__OnClickItem(PartyOrganizationChangeObject_o *this, const MethodInfo *method)
{
  PartyListViewItem_o *partyItem; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  __int64 v5; // x1
  struct PartyOrganizationChangeObject_CallbackFunc_o *callbackFunc; // x8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_4D2C2D0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_PartyOrganizationChangeObject_OnClickItem__);
    byte_4D2C2D0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.callbackFunc )
    {
      partyItem = this->fields.partyItem;
      if ( partyItem )
      {
        Member = PartyListViewItem__GetMember(partyItem, this->fields.member, 0);
        if ( Member
          && (Member->fields.isMyServantOrNpcRestriction
           || !Member->fields.isFollower && !Member->fields.isServantNumRestriction) )
        {
          callbackFunc = this->fields.callbackFunc;
          if ( !callbackFunc )
            sub_1C93D2C(Member, v5);
          ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
            callbackFunc->fields.method_code,
            1,
            (unsigned int)Member->fields.index,
            callbackFunc->fields.method);
        }
        else
        {
          v7 = Method_PartyOrganizationChangeObject_OnClickItem__;
          if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OnClickItem__ + 83) & 2) != 0 )
            v7 = (_QWORD *)sub_1C93AEC(Method_PartyOrganizationChangeObject_OnClickItem__);
          v8 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v7, v7[4]);
          OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
        }
      }
    }
  }
}


void PartyOrganizationChangeObject__OnClickItemEquip(PartyOrganizationChangeObject_o *this, const MethodInfo *method)
{
  PartyListViewItem_o *partyItem; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  struct PartyOrganizationChangeObject_CallbackFunc_o *callbackFunc; // x8

  if ( (byte_4D2C2D5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_PartyOrganizationChangeObject_OnClickItemEquip__);
    byte_4D2C2D5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( this->fields.callbackFunc )
    {
      partyItem = this->fields.partyItem;
      if ( partyItem )
      {
        Member = PartyListViewItem__GetMember(partyItem, this->fields.member, 0);
        if ( !Member || Member->fields.isFollower || Member->fields.isServantNumRestriction )
        {
          v6 = Method_PartyOrganizationChangeObject_OnClickItemEquip__;
          if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OnClickItemEquip__ + 83) & 2) != 0 )
            v6 = (_QWORD *)sub_1C93AEC(Method_PartyOrganizationChangeObject_OnClickItemEquip__);
          v7 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v6, v6[4]);
          OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
        }
        else
        {
          callbackFunc = this->fields.callbackFunc;
          if ( !callbackFunc )
            sub_1C93D2C(Member, v5);
          ((void (__fastcall *)(intptr_t, __int64, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
            callbackFunc->fields.method_code,
            2,
            (unsigned int)Member->fields.index,
            callbackFunc->fields.method);
        }
      }
    }
  }
}


void PartyOrganizationChangeObject__OnLongPressItem(PartyOrganizationChangeObject_o *this, const MethodInfo *method)
{
  if ( this->fields.state == 2 )
  {
    if ( this->fields.callbackFunc )
      PartyOrganizationChangeObject__OpenServantDetail(this, method);
  }
}


void PartyOrganizationChangeObject__OnLongPressItemEquip(
        PartyOrganizationChangeObject_o *this,
        const MethodInfo *method)
{
  if ( this->fields.state == 2 )
  {
    if ( this->fields.callbackFunc )
      PartyOrganizationChangeObject__OpenEquipDetail(this, method);
  }
}


void PartyOrganizationChangeObject__OpenEquipDetail(PartyOrganizationChangeObject_o *this, const MethodInfo *method)
{
  PartyListViewItem_o *partyItem; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v5; // x20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x21
  int64_t EquipUserSvtId; // x20
  ServantStatusDialog_EndDelegate_o *v10; // x22
  ServantLeaderInfo_o *ServantLeader; // x0
  __int64 v12; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  bool IsNpc; // w22
  Il2CppObject *v17; // x21
  EquipTargetInfo_o *EquipTarget1; // x20
  ServantStatusDialog_EndDelegate_o *v19; // x23
  int32_t v20; // w1
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0

  if ( (byte_4D2C2D6 & 1) == 0 )
  {
    sub_1C93AD4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_PartyOrganizationChangeObject_EndShowEquip__);
    sub_1C93AD4(&Method_PartyOrganizationChangeObject_OpenEquipDetail__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2C2D6 = 1;
  }
  partyItem = this->fields.partyItem;
  if ( partyItem )
  {
    Member = PartyListViewItem__GetMember(partyItem, this->fields.member, 0);
    if ( !Member )
      goto LABEL_25;
    v5 = Member;
    if ( PartyOrganizationListViewItem__get_EquipUserSvtId(Member, 0) >= 1 )
    {
      v6 = Method_PartyOrganizationChangeObject_OpenEquipDetail__;
      if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenEquipDetail__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C93AEC(Method_PartyOrganizationChangeObject_OpenEquipDetail__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v5, 0);
      v10 = (ServantStatusDialog_EndDelegate_o *)sub_1C93D20(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v10,
        (Il2CppObject *)this,
        Method_PartyOrganizationChangeObject_EndShowEquip__,
        0);
      if ( Instance )
      {
        CommonUI__OpenServantEquipStatusDialog((CommonUI_o *)Instance, 11, EquipUserSvtId, 1, v10, 0, 0, 0);
        return;
      }
LABEL_28:
      sub_1C93D2C(ServantLeader, v12);
    }
    if ( !PartyOrganizationListViewItem__get_ServantLeader(v5, 0) )
      goto LABEL_25;
    ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v5, 0);
    if ( !ServantLeader )
      goto LABEL_28;
    if ( ServantLeaderInfo__IsHideEquip(ServantLeader, 0) )
      goto LABEL_25;
    EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v5, 0);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(EquipSvtId, 0) >= 1 )
    {
      v14 = Method_PartyOrganizationChangeObject_OpenEquipDetail__;
      if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenEquipDetail__ + 83) & 2) != 0 )
        v14 = (_QWORD *)sub_1C93AEC(Method_PartyOrganizationChangeObject_OpenEquipDetail__);
      v15 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v14, v14[4]);
      OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0);
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v5, 0);
      if ( !ServantLeader )
        goto LABEL_28;
      IsNpc = ServantLeaderInfo__IsNpc(ServantLeader, 0);
      v17 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      EquipTarget1 = PartyOrganizationListViewItem__get_EquipTarget1(v5, 0);
      v19 = (ServantStatusDialog_EndDelegate_o *)sub_1C93D20(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v19,
        (Il2CppObject *)this,
        Method_PartyOrganizationChangeObject_EndShowEquip__,
        0);
      if ( !v17 )
        goto LABEL_28;
      if ( IsNpc )
        v20 = 19;
      else
        v20 = 14;
      CommonUI__OpenServantEquipStatusDialog_31596056((CommonUI_o *)v17, v20, EquipTarget1, v19, 0, 0);
    }
    else
    {
LABEL_25:
      v21 = Method_PartyOrganizationChangeObject_OpenEquipDetail__;
      if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenEquipDetail__ + 83) & 2) != 0 )
        v21 = (_QWORD *)sub_1C93AEC(Method_PartyOrganizationChangeObject_OpenEquipDetail__);
      v22 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v21, v21[4]);
      OverwriteAssetSoundName__PlaySystemSe(v22, 2, 0, 0);
    }
  }
}


void PartyOrganizationChangeObject__OpenServantDetail(PartyOrganizationChangeObject_o *this, const MethodInfo *method)
{
  PartyListViewItem_o *partyItem; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v5; // x20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  ServantLeaderInfo_o *ServantLeader; // x0
  __int64 v9; // x1
  struct PartyListViewItem_o *v10; // x8
  int32_t menuKind; // w22
  Il2CppObject *Instance; // x0
  PartyListViewItem_o *v13; // x20
  int32_t v14; // w21
  bool v15; // zf
  CommonUI_o *v16; // x22
  ServantStatusDialog_FormationEndDelegate_o *v17; // x23
  FollowerInfo_o *followerInfo; // x0
  __int64 v19; // x21
  __int64 v20; // x22
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  Il2CppObject *v23; // x21
  ServantLeaderInfo_o *v24; // x20
  ServantStatusDialog_EndDelegate_o *v25; // x22
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  ServantStatusDialog_EndDelegate_o *v28; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4D2C2D1 & 1) == 0 )
  {
    sub_1C93AD4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C93AD4(&ServantStatusDialog_FormationEndDelegate_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&Method_PartyOrganizationChangeObject_EndShowServantWithQuest__);
    sub_1C93AD4(&Method_PartyOrganizationChangeObject_EndShowServant__);
    sub_1C93AD4(&Method_PartyOrganizationChangeObject_OpenServantDetail__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2C2D1 = 1;
  }
  partyItem = this->fields.partyItem;
  if ( partyItem )
  {
    Member = PartyListViewItem__GetMember(partyItem, this->fields.member, 0);
    if ( Member )
    {
      v5 = Member;
      if ( Member->fields.userServantEntity )
      {
        v6 = Method_PartyOrganizationChangeObject_OpenServantDetail__;
        if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenServantDetail__ + 83) & 2) != 0 )
          v6 = (_QWORD *)sub_1C93AEC(Method_PartyOrganizationChangeObject_OpenServantDetail__);
        v7 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v6, v6[4]);
        OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
        v10 = this->fields.partyItem;
        if ( v10 )
        {
          menuKind = v10->fields.menuKind;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v13 = this->fields.partyItem;
          v14 = this->fields.member;
          v15 = menuKind == 8;
          v16 = (CommonUI_o *)Instance;
          if ( v15 )
          {
            v17 = (ServantStatusDialog_FormationEndDelegate_o *)sub_1C93D20(ServantStatusDialog_FormationEndDelegate_TypeInfo);
            ServantStatusDialog_FormationEndDelegate___ctor(
              v17,
              (Il2CppObject *)this,
              Method_PartyOrganizationChangeObject_EndShowServantWithQuest__,
              0);
            if ( v16 )
            {
              CommonUI__OpenServantStatusDialog_31589732(v16, 1, v13, v14, v17, 0, 0, 0);
              return;
            }
          }
          else
          {
            v28 = (ServantStatusDialog_EndDelegate_o *)sub_1C93D20(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v28,
              (Il2CppObject *)this,
              Method_PartyOrganizationChangeObject_EndShowServant__,
              0);
            if ( v16 )
            {
              CommonUI__OpenServantStatusDialog(v16, 1, v13, v14, v28, 0, 0, 0);
              return;
            }
          }
        }
LABEL_30:
        sub_1C93D2C(ServantLeader, v9);
      }
      followerInfo = Member->fields.followerInfo;
      if ( followerInfo
        && !FollowerInfo__get_IsNpc(followerInfo, 0)
        && PartyOrganizationListViewItem__get_ServantLeader(v5, 0) )
      {
        ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v5, 0);
        if ( !ServantLeader )
          goto LABEL_30;
        v20 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
        v19 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v29.fields.currentCryptoKey = v20;
        *(_QWORD *)&v29.fields.fakeValue = v19;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v29, 0) >= 1 )
        {
          v21 = Method_PartyOrganizationChangeObject_OpenServantDetail__;
          if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenServantDetail__ + 83) & 2) != 0 )
            v21 = (_QWORD *)sub_1C93AEC(Method_PartyOrganizationChangeObject_OpenServantDetail__);
          v22 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v21, v21[4]);
          OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0, 0);
          v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v24 = PartyOrganizationListViewItem__get_ServantLeader(v5, 0);
          v25 = (ServantStatusDialog_EndDelegate_o *)sub_1C93D20(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v25,
            (Il2CppObject *)this,
            Method_PartyOrganizationChangeObject_EndShowServant__,
            0);
          if ( v23 )
          {
            CommonUI__OpenServantStatusDialog_31592948((CommonUI_o *)v23, 5, v24, v25, 0);
            return;
          }
          goto LABEL_30;
        }
      }
    }
    v26 = Method_PartyOrganizationChangeObject_OpenServantDetail__;
    if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenServantDetail__ + 83) & 2) != 0 )
      v26 = (_QWORD *)sub_1C93AEC(Method_PartyOrganizationChangeObject_OpenServantDetail__);
    v27 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v26, v26[4]);
    OverwriteAssetSoundName__PlaySystemSe(v27, 2, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationChangeObject__SetInput(
        PartyOrganizationChangeObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  PartyOrganizationChangeObject_o *v4; // x20
  int v5; // w9
  UnityEngine_Object_o *itemDraw; // x21
  PartyOrganizationListViewItemDraw_o *v7; // x21

  v4 = this;
  if ( (byte_4D2C2CF & 1) == 0 )
  {
    this = (PartyOrganizationChangeObject_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2C2CF = 1;
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
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    this = (PartyOrganizationChangeObject_o *)v4->fields.partyItem;
    if ( this )
    {
      v7 = v4->fields.itemDraw;
      this = (PartyOrganizationChangeObject_o *)PartyListViewItem__GetMember(
                                                  (PartyListViewItem_o *)this,
                                                  v4->fields.member,
                                                  0);
      if ( v7 )
      {
        PartyOrganizationListViewItemDraw__SetInput(v7, (PartyOrganizationListViewItem_o *)this, isInput, 0);
        return;
      }
    }
LABEL_14:
    sub_1C93D2C(this, isInput);
  }
}


void PartyOrganizationChangeObject__SetItem(
        PartyOrganizationChangeObject_o *this,
        PartyListViewItem_o *partyItem,
        int32_t member,
        PartyOrganizationChangeObject_CallbackFunc_o *callback,
        System_Action_o *modifyCallback,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v13; // x1
  PartyListViewItem_o *v14; // x0
  PartyOrganizationListViewItem_o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  UnityEngine_Object_o *itemDraw; // x21

  if ( (byte_4D2C2CD & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2C2CD = 1;
  }
  this->fields.partyItem = partyItem;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.partyItem,
    (int32_t)partyItem,
    member,
    (int32_t)callback,
    (System_String_o *)modifyCallback,
    (int32_t)method,
    v6,
    v7);
  v14 = this->fields.partyItem;
  this->fields.member = member;
  if ( !v14 )
    goto LABEL_13;
  v15 = PartyListViewItem__GetMember(v14, member, 0);
  this->fields.callbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.callbackFuncModify = modifyCallback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFuncModify,
    (int32_t)modifyCallback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( !v15 || this->fields.state != 2 )
    this->fields.state = 1;
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v14 = (PartyListViewItem_o *)this->fields.itemDraw;
    if ( v14 )
    {
      PartyOrganizationListViewItemDraw__SetItem((PartyOrganizationListViewItemDraw_o *)v14, v15, 2, 1, 0);
      return;
    }
LABEL_13:
    sub_1C93D2C(v14, v13);
  }
}


void PartyOrganizationChangeObject__SetVisible(
        PartyOrganizationChangeObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4D2C2CB & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2C2CB = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.itemDraw;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_1C93D2C(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isVisible, 0);
  }
}


void PartyOrganizationChangeObject__add_callbackFunc(
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

  if ( (byte_4D2C2C6 & 1) == 0 )
  {
    sub_1C93AD4(&PartyOrganizationChangeObject_CallbackFunc_TypeInfo);
    byte_4D2C2C6 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationChangeObject_CallbackFunc_c *)v8->klass != PartyOrganizationChangeObject_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationChangeObject_o *)sub_1C940C8(v8);
  PartyOrganizationChangeObject__remove_callbackFunc(v11, v12, v13);
}


void PartyOrganizationChangeObject__add_callbackFuncModify(
        PartyOrganizationChangeObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFuncModify; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFuncModify; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationChangeObject_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4D2C2C8 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2C2C8 = 1;
  }
  callbackFuncModify = this->fields.callbackFuncModify;
  p_callbackFuncModify = &this->fields.callbackFuncModify;
  v6 = (System_Delegate_o *)callbackFuncModify;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_callbackFuncModify, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationChangeObject_o *)sub_1C940C8(v8);
  PartyOrganizationChangeObject__remove_callbackFuncModify(v11, v12, v13);
}


void PartyOrganizationChangeObject__remove_callbackFunc(
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
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4D2C2C7 & 1) == 0 )
  {
    sub_1C93AD4(&PartyOrganizationChangeObject_CallbackFunc_TypeInfo);
    byte_4D2C2C7 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationChangeObject_CallbackFunc_c *)v8->klass != PartyOrganizationChangeObject_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationChangeObject_o *)sub_1C940C8(v8);
  PartyOrganizationChangeObject__add_callbackFuncModify(v11, v12, v13);
}


void PartyOrganizationChangeObject__remove_callbackFuncModify(
        PartyOrganizationChangeObject_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFuncModify; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFuncModify; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationChangeObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4D2C2C9 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D2C2C9 = 1;
  }
  callbackFuncModify = this->fields.callbackFuncModify;
  p_callbackFuncModify = &this->fields.callbackFuncModify;
  v6 = (System_Delegate_o *)callbackFuncModify;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_callbackFuncModify, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationChangeObject_o *)sub_1C940C8(v8);
  PartyOrganizationChangeObject__Awake(v11, v12);
}


void PartyOrganizationChangeObject_CallbackFunc___ctor(
        PartyOrganizationChangeObject_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC2BE4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC2B8C;
}


System_IAsyncResult_o *PartyOrganizationChangeObject_CallbackFunc__BeginInvoke(
        PartyOrganizationChangeObject_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v11; // [xsp+28h] [xbp-38h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v11 = n;
  v12 = result;
  if ( (byte_4D2C2D8 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&PartyOrganizationChangeObject_ResultKind_TypeInfo);
    byte_4D2C2D8 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(PartyOrganizationChangeObject_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return sub_1C93A88(this, v10, callback, object);
}


void PartyOrganizationChangeObject_CallbackFunc__EndInvoke(
        PartyOrganizationChangeObject_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void PartyOrganizationChangeObject_CallbackFunc__Invoke(
        PartyOrganizationChangeObject_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    n,
    this->fields.method);
}