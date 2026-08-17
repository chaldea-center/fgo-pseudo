void PartyOrganizationChangeObject___ctor(PartyOrganizationChangeObject_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void PartyOrganizationChangeObject__Awake(PartyOrganizationChangeObject_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596BF7E & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewItemDraw___);
    byte_596BF7E = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewItemDraw___);
  this->fields.itemDraw = (struct PartyOrganizationListViewItemDraw_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemDraw,
    (int32_t)Component_object,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void PartyOrganizationChangeObject__ClearItem(PartyOrganizationChangeObject_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_c *v23; // x0
  UnityEngine_Object_o *itemDraw; // x20
  __int64 v25; // x1
  PartyOrganizationListViewItemDraw_o *v26; // x0

  if ( (byte_596BF80 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BF80 = 1;
  }
  this->fields.partyItem = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.partyItem, 0, v2, v3, v4, v5, v6, v7);
  this->fields.member = -1;
  this->fields.callbackFunc = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v9, v10, v11, v12, v13, v14);
  this->fields.callbackFuncModify = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFuncModify, 0, v15, v16, v17, v18, v19, v20);
  v23 = UnityEngine_Object_TypeInfo;
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  this->fields.state = 0;
  if ( !*(&v23->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v23, v21, v22);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v26 = this->fields.itemDraw;
    if ( !v26 )
      sub_2213CDC(0, v25);
    PartyOrganizationListViewItemDraw__ClearItem(v26, 0);
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

  if ( (byte_596BF88 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596BF88 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
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

  if ( (byte_596BF8B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationChangeObject_EndCloseShowEquip__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596BF8B = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyOrganizationChangeObject_EndCloseShowEquip__, 0);
  if ( !Instance )
    sub_2213CDC(v8, v9);
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

  if ( (byte_596BF86 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationChangeObject_EndCloseShow__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596BF86 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyOrganizationChangeObject_EndCloseShow__, 0);
  if ( !Instance )
    sub_2213CDC(v8, v9);
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

  if ( (byte_596BF87 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationChangeObject_EndCloseShowQuestJump__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596BF87 = 1;
  }
  if ( questId < 1 )
  {
    PartyOrganizationChangeObject__EndShowServant(this, isDecide, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyOrganizationChangeObject_EndCloseShowQuestJump__, 0);
    if ( !Instance )
      sub_2213CDC(v9, v10);
    CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v8, 0);
  }
}


void PartyOrganizationChangeObject__ModifyItem(PartyOrganizationChangeObject_o *this, const MethodInfo *method)
{
  PartyListViewItem_o *partyItem; // x0
  PartyOrganizationListViewItem_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *itemDraw; // x21

  if ( (byte_596BF82 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BF82 = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    partyItem = (PartyListViewItem_o *)this->fields.itemDraw;
    if ( partyItem )
    {
      PartyOrganizationListViewItemDraw__SetItem((PartyOrganizationListViewItemDraw_o *)partyItem, v4, 2, 1, 0);
      return;
    }
LABEL_11:
    sub_2213CDC(partyItem, method);
  }
}


void PartyOrganizationChangeObject__OnClickItem(PartyOrganizationChangeObject_o *this, const MethodInfo *method)
{
  PartyListViewItem_o *partyItem; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  __int64 v5; // x1
  struct PartyOrganizationChangeObject_CallbackFunc_o *callbackFunc; // x9
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_596BF84 & 1) == 0 )
  {
    sub_2213A60(&Method_PartyOrganizationChangeObject_OnClickItem__);
    byte_596BF84 = 1;
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
            sub_2213CDC(Member, v5);
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
            v7 = (_QWORD *)sub_2213A78(Method_PartyOrganizationChangeObject_OnClickItem__);
          v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
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
  struct PartyOrganizationChangeObject_CallbackFunc_o *callbackFunc; // x9

  if ( (byte_596BF89 & 1) == 0 )
  {
    sub_2213A60(&Method_PartyOrganizationChangeObject_OnClickItemEquip__);
    byte_596BF89 = 1;
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
            v6 = (_QWORD *)sub_2213A78(Method_PartyOrganizationChangeObject_OnClickItemEquip__);
          v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
          OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
        }
        else
        {
          callbackFunc = this->fields.callbackFunc;
          if ( !callbackFunc )
            sub_2213CDC(Member, v5);
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
  __int64 v13; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  bool IsNpc; // w21
  Il2CppObject *v18; // x22
  EquipTargetInfo_o *EquipTarget1; // x20
  ServantStatusDialog_EndDelegate_o *v20; // x23
  int32_t v21; // w1
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0

  if ( (byte_596BF8A & 1) == 0 )
  {
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationChangeObject_EndShowEquip__);
    sub_2213A60(&Method_PartyOrganizationChangeObject_OpenEquipDetail__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596BF8A = 1;
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
        v6 = (_QWORD *)sub_2213A78(Method_PartyOrganizationChangeObject_OpenEquipDetail__);
      v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v5, 0);
      v10 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
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
      sub_2213CDC(ServantLeader, v12);
    }
    if ( !PartyOrganizationListViewItem__get_ServantLeader(v5, 0) )
      goto LABEL_25;
    ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v5, 0);
    if ( !ServantLeader )
      goto LABEL_28;
    if ( ServantLeaderInfo__IsHideEquip(ServantLeader, 0) )
      goto LABEL_25;
    EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v5, 0);
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
        *(_QWORD *)&EquipSvtId.fields.fakeValue,
        v13);
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(EquipSvtId, 0) >= 1 )
    {
      v15 = Method_PartyOrganizationChangeObject_OpenEquipDetail__;
      if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenEquipDetail__ + 83) & 2) != 0 )
        v15 = (_QWORD *)sub_2213A78(Method_PartyOrganizationChangeObject_OpenEquipDetail__);
      v16 = (System_Reflection_MethodBase_o *)sub_2213A44(v15, v15[4]);
      OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0, 0);
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v5, 0);
      if ( !ServantLeader )
        goto LABEL_28;
      IsNpc = ServantLeaderInfo__IsNpc(ServantLeader, 0);
      v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      EquipTarget1 = PartyOrganizationListViewItem__get_EquipTarget1(v5, 0);
      v20 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v20,
        (Il2CppObject *)this,
        Method_PartyOrganizationChangeObject_EndShowEquip__,
        0);
      if ( !v18 )
        goto LABEL_28;
      if ( IsNpc )
        v21 = 19;
      else
        v21 = 14;
      CommonUI__OpenServantEquipStatusDialog_37388712((CommonUI_o *)v18, v21, EquipTarget1, v20, 0, 0);
    }
    else
    {
LABEL_25:
      v22 = Method_PartyOrganizationChangeObject_OpenEquipDetail__;
      if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenEquipDetail__ + 83) & 2) != 0 )
        v22 = (_QWORD *)sub_2213A78(Method_PartyOrganizationChangeObject_OpenEquipDetail__);
      v23 = (System_Reflection_MethodBase_o *)sub_2213A44(v22, v22[4]);
      OverwriteAssetSoundName__PlaySystemSe(v23, 2, 0, 0);
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
  __int64 v19; // x2
  __int64 v20; // x21
  __int64 v21; // x22
  System_Reflection_MethodBase_o *v22; // x0
  Il2CppObject *v23; // x21
  ServantLeaderInfo_o *v24; // x20
  ServantStatusDialog_EndDelegate_o *v25; // x22
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  ServantStatusDialog_EndDelegate_o *v28; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_596BF85 & 1) == 0 )
  {
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&ServantStatusDialog_FormationEndDelegate_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationChangeObject_EndShowServantWithQuest__);
    sub_2213A60(&Method_PartyOrganizationChangeObject_EndShowServant__);
    sub_2213A60(&Method_PartyOrganizationChangeObject_OpenServantDetail__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596BF85 = 1;
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
          v6 = (_QWORD *)sub_2213A78(Method_PartyOrganizationChangeObject_OpenServantDetail__);
        v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
        OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
        v10 = this->fields.partyItem;
        if ( v10 )
        {
          menuKind = v10->fields.menuKind;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v13 = this->fields.partyItem;
          v14 = this->fields.member;
          v15 = menuKind == 8;
          v16 = (CommonUI_o *)Instance;
          if ( v15 )
          {
            v17 = (ServantStatusDialog_FormationEndDelegate_o *)sub_2213CCC(ServantStatusDialog_FormationEndDelegate_TypeInfo);
            ServantStatusDialog_FormationEndDelegate___ctor(
              v17,
              (Il2CppObject *)this,
              Method_PartyOrganizationChangeObject_EndShowServantWithQuest__,
              0);
            if ( v16 )
            {
              CommonUI__OpenServantStatusDialog_37382388(v16, 1, v13, v14, v17, 0, 0, 0);
              return;
            }
          }
          else
          {
            v28 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
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
LABEL_28:
        sub_2213CDC(ServantLeader, v9);
      }
      followerInfo = Member->fields.followerInfo;
      if ( followerInfo
        && !FollowerInfo__get_IsNpc(followerInfo, 0)
        && PartyOrganizationListViewItem__get_ServantLeader(v5, 0) )
      {
        ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v5, 0);
        if ( !ServantLeader )
          goto LABEL_28;
        v20 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
        v21 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v19);
        *(_QWORD *)&v29.fields.currentCryptoKey = v20;
        *(_QWORD *)&v29.fields.fakeValue = v21;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v29, 0) >= 1 )
        {
          v22 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_PartyOrganizationChangeObject_OpenServantDetail__);
          OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0, 0);
          v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v24 = PartyOrganizationListViewItem__get_ServantLeader(v5, 0);
          v25 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v25,
            (Il2CppObject *)this,
            Method_PartyOrganizationChangeObject_EndShowServant__,
            0);
          if ( v23 )
          {
            CommonUI__OpenServantStatusDialog_37385604((CommonUI_o *)v23, 5, v24, v25, 0);
            return;
          }
          goto LABEL_28;
        }
      }
    }
    v26 = Method_PartyOrganizationChangeObject_OpenServantDetail__;
    if ( (*((_BYTE *)Method_PartyOrganizationChangeObject_OpenServantDetail__ + 83) & 2) != 0 )
      v26 = (_QWORD *)sub_2213A78(Method_PartyOrganizationChangeObject_OpenServantDetail__);
    v27 = (System_Reflection_MethodBase_o *)sub_2213A44(v26, v26[4]);
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
  UnityEngine_Object_o *itemDraw; // x21
  UnityEngine_Object_c *v6; // x0
  int v7; // w8
  int v8; // w9
  PartyOrganizationListViewItemDraw_o *v9; // x21

  v4 = this;
  if ( (byte_596BF83 & 1) == 0 )
  {
    this = (PartyOrganizationChangeObject_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BF83 = 1;
  }
  if ( !v4 )
    goto LABEL_14;
  itemDraw = (UnityEngine_Object_o *)v4->fields.itemDraw;
  v6 = UnityEngine_Object_TypeInfo;
  if ( isInput )
    v7 = 2;
  else
    v7 = 1;
  v8 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  v4->fields.state = v7;
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(v6, isInput, method);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    this = (PartyOrganizationChangeObject_o *)v4->fields.partyItem;
    if ( this )
    {
      v9 = v4->fields.itemDraw;
      this = (PartyOrganizationChangeObject_o *)PartyListViewItem__GetMember(
                                                  (PartyListViewItem_o *)this,
                                                  v4->fields.member,
                                                  0);
      if ( v9 )
      {
        PartyOrganizationListViewItemDraw__SetInput(v9, (PartyOrganizationListViewItem_o *)this, isInput, 0);
        return;
      }
    }
LABEL_14:
    sub_2213CDC(this, isInput);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationChangeObject__SetItem(
        PartyOrganizationChangeObject_o *this,
        PartyListViewItem_o *partyItem,
        int32_t member,
        PartyOrganizationChangeObject_CallbackFunc_o *callback,
        System_Action_o *modifyCallback,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  __int64 v13; // x1
  PartyListViewItem_o *v14; // x0
  PartyOrganizationListViewItem_o *v15; // x20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  __int64 v29; // x2
  UnityEngine_Object_o *itemDraw; // x21

  if ( (byte_596BF81 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BF81 = 1;
  }
  this->fields.partyItem = partyItem;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.partyItem,
    (int32_t)partyItem,
    *(System_String_o **)&member,
    (System_String_o *)callback,
    (int32_t)modifyCallback,
    (int32_t)method,
    v6,
    v7);
  v14 = this->fields.partyItem;
  this->fields.member = member;
  if ( !v14 )
    goto LABEL_13;
  v15 = PartyListViewItem__GetMember(v14, member, 0);
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.callbackFuncModify = modifyCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFuncModify,
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28, v29);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    v14 = (PartyListViewItem_o *)this->fields.itemDraw;
    if ( v14 )
    {
      PartyOrganizationListViewItemDraw__SetItem((PartyOrganizationListViewItemDraw_o *)v14, v15, 2, 1, 0);
      return;
    }
LABEL_13:
    sub_2213CDC(v14, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyOrganizationChangeObject__SetVisible(
        PartyOrganizationChangeObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemDraw; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_596BF7F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BF7F = 1;
  }
  itemDraw = (UnityEngine_Object_o *)this->fields.itemDraw;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isVisible, method);
  if ( UnityEngine_Object__op_Inequality(itemDraw, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.itemDraw;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_2213CDC(gameObject, v6);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  PartyOrganizationChangeObject_o *v13; // x0
  PartyOrganizationChangeObject_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596BF7A & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationChangeObject_CallbackFunc_TypeInfo);
    byte_596BF7A = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (PartyOrganizationChangeObject_o *)sub_221405C(v8, PartyOrganizationChangeObject_CallbackFunc_TypeInfo, v9, v10);
  PartyOrganizationChangeObject__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  PartyOrganizationChangeObject_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596BF7C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596BF7C = 1;
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
    v11 = sub_224B48C(p_callbackFuncModify, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (PartyOrganizationChangeObject_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  PartyOrganizationChangeObject__remove_callbackFuncModify(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  PartyOrganizationChangeObject_o *v13; // x0
  System_Action_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596BF7B & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationChangeObject_CallbackFunc_TypeInfo);
    byte_596BF7B = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (PartyOrganizationChangeObject_o *)sub_221405C(v8, PartyOrganizationChangeObject_CallbackFunc_TypeInfo, v9, v10);
  PartyOrganizationChangeObject__add_callbackFuncModify(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  PartyOrganizationChangeObject_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596BF7D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596BF7D = 1;
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
    v11 = sub_224B48C(p_callbackFuncModify, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (PartyOrganizationChangeObject_o *)sub_221405C(v8, System_Action_TypeInfo, v9, v10);
  PartyOrganizationChangeObject__Awake(v13, v14);
}


void PartyOrganizationChangeObject_CallbackFunc___ctor(
        PartyOrganizationChangeObject_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_20042F8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20042A0;
}


System_IAsyncResult_o *PartyOrganizationChangeObject_CallbackFunc__BeginInvoke(
        PartyOrganizationChangeObject_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = result;
  v11 = n;
  if ( (byte_596BF8C & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationChangeObject_ResultKind_TypeInfo);
    byte_596BF8C = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(PartyOrganizationChangeObject_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_5984348, &v11);
  return (System_IAsyncResult_o *)sub_2213A14(this, v10, callback, object);
}


void PartyOrganizationChangeObject_CallbackFunc__EndInvoke(
        PartyOrganizationChangeObject_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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