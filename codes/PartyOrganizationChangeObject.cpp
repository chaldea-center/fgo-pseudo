void __fastcall PartyOrganizationChangeObject___ctor(PartyOrganizationChangeObject_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall PartyOrganizationChangeObject__Awake(PartyOrganizationChangeObject_o *this, const MethodInfo *method)
{
  WebViewObject_o *Component_WebViewObject; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4217D04 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewItemDraw___, method);
    byte_4217D04 = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewItemDraw___);
  this->fields.partyItem = (struct PartyListViewItem_o *)Component_WebViewObject;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.partyItem,
    (System_Int32_array **)Component_WebViewObject,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void __fastcall PartyOrganizationChangeObject__ClearItem(
        PartyOrganizationChangeObject_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_Object_o *partyItem; // x20
  struct PartyListViewItem_o *v16; // x0

  if ( (byte_4217D06 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4217D06 = 1;
  }
  *(_QWORD *)&this->fields.member = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.member, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.itemDraw = 0LL;
  LODWORD(this[1].klass) = -1;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.itemDraw, 0LL, v9, v10, v11, v12, v13, v14);
  LODWORD(this->fields.callbackFunc) = 0;
  partyItem = (UnityEngine_Object_o *)this->fields.partyItem;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(partyItem, 0LL, 0LL) )
  {
    v16 = this->fields.partyItem;
    if ( !v16 )
      sub_B0D97C(0LL);
    PartyOrganizationListViewItemDraw__ClearItem((PartyOrganizationListViewItemDraw_o *)v16, 0LL);
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
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_4217D0E & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4217D0E = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  AvalonSceneManager__transitionScene(Instance, 34, 1, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeObject__EndShowEquip(
        PartyOrganizationChangeObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x21
  __int64 v11; // x0

  if ( (byte_4217D11 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_PartyOrganizationChangeObject_EndCloseShowEquip__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4217D11 = 1;
  }
  if ( isDecide )
    PartyOrganizationChangeObject__ModifyItem(this, (const MethodInfo *)isDecide);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationChangeObject_EndCloseShowEquip__, 0LL);
  if ( !Instance )
    sub_B0D97C(v11);
  CommonUI__CloseServantEquipStatusDialog(Instance, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeObject__EndShowServant(
        PartyOrganizationChangeObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x21
  __int64 v11; // x0

  if ( (byte_4217D0C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_PartyOrganizationChangeObject_EndCloseShow__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4217D0C = 1;
  }
  if ( isDecide )
    PartyOrganizationChangeObject__ModifyItem(this, (const MethodInfo *)isDecide);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationChangeObject_EndCloseShow__, 0LL);
  if ( !Instance )
    sub_B0D97C(v11);
  CommonUI__CloseServantStatusDialog(Instance, v10, 0LL);
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
  CommonUI_o *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21
  __int64 v13; // x0

  if ( (byte_4217D0D & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_PartyOrganizationChangeObject_EndCloseShowQuestJump__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4217D0D = 1;
  }
  if ( questId < 1 )
  {
    PartyOrganizationChangeObject__EndShowServant(this, isDecide, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyOrganizationChangeObject_EndCloseShowQuestJump__, 0LL);
    if ( !Instance )
      sub_B0D97C(v13);
    CommonUI__CloseServantStatusDialog(Instance, v12, 0LL);
  }
}


void __fastcall PartyOrganizationChangeObject__ModifyItem(
        PartyOrganizationChangeObject_o *this,
        const MethodInfo *method)
{
  PartyListViewItem_o *Member; // x0
  const MethodInfo *v4; // x1
  PartyOrganizationListViewItem_o *v5; // x20
  UnityEngine_Object_o *partyItem; // x21

  if ( (byte_4217D08 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4217D08 = 1;
  }
  Member = *(PartyListViewItem_o **)&this->fields.member;
  if ( !Member )
    goto LABEL_12;
  Member = (PartyListViewItem_o *)PartyListViewItem__GetMember(Member, (int32_t)this[1].klass, 0LL);
  if ( !Member )
    goto LABEL_12;
  v5 = (PartyOrganizationListViewItem_o *)Member;
  PartyOrganizationListViewItem__Modify((PartyOrganizationListViewItem_o *)Member, v4);
  partyItem = (UnityEngine_Object_o *)this->fields.partyItem;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(partyItem, 0LL, 0LL) )
  {
    Member = this->fields.partyItem;
    if ( Member )
    {
      PartyOrganizationListViewItemDraw__SetItem((PartyOrganizationListViewItemDraw_o *)Member, v5, 2, 0LL);
      return;
    }
LABEL_12:
    sub_B0D97C(Member);
  }
}


void __fastcall PartyOrganizationChangeObject__OnClickItem(
        PartyOrganizationChangeObject_o *this,
        const MethodInfo *method)
{
  PartyListViewItem_o *v3; // x0
  PartyOrganizationListViewItem_o *Member; // x0

  if ( (byte_4217D0A & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4217D0A = 1;
  }
  if ( LODWORD(this->fields.callbackFunc) == 2 )
  {
    if ( this->fields.itemDraw )
    {
      v3 = *(PartyListViewItem_o **)&this->fields.member;
      if ( v3 )
      {
        Member = PartyListViewItem__GetMember(v3, (int32_t)this[1].klass, 0LL);
        if ( Member
          && (Member->fields.isMyServantOrNpcRestriction
           || !Member->fields.isFollower && !Member->fields.isServantNumRestriction) )
        {
          if ( !this->fields.itemDraw )
            sub_B0D97C(Member);
          PartyOrganizationChangeObject_CallbackFunc__Invoke(
            (PartyOrganizationChangeObject_CallbackFunc_o *)this->fields.itemDraw,
            1,
            Member->fields.index,
            0LL);
        }
        else
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(2, 0LL);
        }
      }
    }
  }
}


void __fastcall PartyOrganizationChangeObject__OnClickItemEquip(
        PartyOrganizationChangeObject_o *this,
        const MethodInfo *method)
{
  PartyListViewItem_o *v3; // x0
  PartyOrganizationListViewItem_o *Member; // x0

  if ( (byte_4217D0F & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4217D0F = 1;
  }
  if ( LODWORD(this->fields.callbackFunc) == 2 )
  {
    if ( this->fields.itemDraw )
    {
      v3 = *(PartyListViewItem_o **)&this->fields.member;
      if ( v3 )
      {
        Member = PartyListViewItem__GetMember(v3, (int32_t)this[1].klass, 0LL);
        if ( !Member || Member->fields.isFollower || Member->fields.isServantNumRestriction )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(2, 0LL);
        }
        else
        {
          if ( !this->fields.itemDraw )
            sub_B0D97C(Member);
          PartyOrganizationChangeObject_CallbackFunc__Invoke(
            (PartyOrganizationChangeObject_CallbackFunc_o *)this->fields.itemDraw,
            2,
            Member->fields.index,
            0LL);
        }
      }
    }
  }
}


void __fastcall PartyOrganizationChangeObject__OnLongPressItem(
        PartyOrganizationChangeObject_o *this,
        const MethodInfo *method)
{
  if ( LODWORD(this->fields.callbackFunc) == 2 )
  {
    if ( this->fields.itemDraw )
      PartyOrganizationChangeObject__OpenServantDetail(this, method);
  }
}


void __fastcall PartyOrganizationChangeObject__OnLongPressItemEquip(
        PartyOrganizationChangeObject_o *this,
        const MethodInfo *method)
{
  if ( LODWORD(this->fields.callbackFunc) == 2 )
  {
    if ( this->fields.itemDraw )
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
  PartyListViewItem_o *v7; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  const MethodInfo *v9; // x1
  PartyOrganizationListViewItem_o *v10; // x20
  const MethodInfo *v11; // x1
  CommonUI_o *Instance; // x21
  const MethodInfo *v13; // x1
  int64_t EquipUserSvtId; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  ServantStatusDialog_EndDelegate_o *v17; // x22
  ServantLeaderInfo_o *ServantLeader; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  const MethodInfo *v22; // x1
  bool IsNpc; // w22
  CommonUI_o *v24; // x21
  const MethodInfo *v25; // x1
  EquipTargetInfo_o *EquipTarget1; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  ServantStatusDialog_EndDelegate_o *v29; // x23
  int32_t v30; // w1

  if ( (byte_4217D10 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, method);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B0D8A4(&Method_PartyOrganizationChangeObject_EndShowEquip__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    byte_4217D10 = 1;
  }
  v7 = *(PartyListViewItem_o **)&this->fields.member;
  if ( v7 )
  {
    Member = PartyListViewItem__GetMember(v7, (int32_t)this[1].klass, 0LL);
    if ( !Member )
      goto LABEL_35;
    v10 = Member;
    if ( PartyOrganizationListViewItem__get_EquipUserSvtId(Member, v9) >= 1 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v10, v13);
      v17 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v15, v16);
      ServantStatusDialog_EndDelegate___ctor(
        v17,
        (Il2CppObject *)this,
        Method_PartyOrganizationChangeObject_EndShowEquip__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenServantEquipStatusDialog(Instance, 11, EquipUserSvtId, 1, v17, 0LL, 0LL);
        return;
      }
LABEL_32:
      sub_B0D97C(ServantLeader);
    }
    if ( !PartyOrganizationListViewItem__get_ServantLeader(v10, v11) )
      goto LABEL_35;
    ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v10, v19);
    if ( !ServantLeader )
      goto LABEL_32;
    if ( ServantLeaderInfo__IsHideEquip(ServantLeader, 0LL) )
      goto LABEL_35;
    EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v10, v20);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(EquipSvtId, 0LL) >= 1 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v10, v22);
      if ( !ServantLeader )
        goto LABEL_32;
      IsNpc = ServantLeaderInfo__IsNpc(ServantLeader, 0LL);
      v24 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      EquipTarget1 = PartyOrganizationListViewItem__get_EquipTarget1(v10, v25);
      v29 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v27, v28);
      ServantStatusDialog_EndDelegate___ctor(
        v29,
        (Il2CppObject *)this,
        Method_PartyOrganizationChangeObject_EndShowEquip__,
        0LL);
      if ( !v24 )
        goto LABEL_32;
      if ( IsNpc )
        v30 = 19;
      else
        v30 = 14;
      CommonUI__OpenServantEquipStatusDialog_17032132(v24, v30, EquipTarget1, v29, 0LL, 0LL);
    }
    else
    {
LABEL_35:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
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
  PartyListViewItem_o *v9; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v11; // x20
  ServantLeaderInfo_o *ServantLeader; // x0
  __int64 v13; // x8
  int v14; // w22
  WebViewManager_o *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  PartyListViewItem_o *v18; // x20
  int32_t klass; // w21
  bool v20; // zf
  CommonUI_o *v21; // x22
  ServantStatusDialog_FormationEndDelegate_o *v22; // x23
  FollowerInfo_o *followerInfo; // x0
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x1
  __int64 v26; // x21
  __int64 v27; // x22
  CommonUI_o *v28; // x21
  const MethodInfo *v29; // x1
  ServantLeaderInfo_o *v30; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  ServantStatusDialog_EndDelegate_o *v33; // x22
  ServantStatusDialog_EndDelegate_o *v34; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4217D0B & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, method);
    sub_B0D8A4(&ServantStatusDialog_FormationEndDelegate_TypeInfo, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B0D8A4(&Method_PartyOrganizationChangeObject_EndShowServantWithQuest__, v5);
    sub_B0D8A4(&Method_PartyOrganizationChangeObject_EndShowServant__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&SoundManager_TypeInfo, v8);
    byte_4217D0B = 1;
  }
  v9 = *(PartyListViewItem_o **)&this->fields.member;
  if ( v9 )
  {
    Member = PartyListViewItem__GetMember(v9, (int32_t)this[1].klass, 0LL);
    if ( Member )
    {
      v11 = Member;
      if ( Member->fields.userServantEntity )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        v13 = *(_QWORD *)&this->fields.member;
        if ( v13 )
        {
          v14 = *(_DWORD *)(v13 + 112);
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v18 = *(PartyListViewItem_o **)&this->fields.member;
          klass = (int32_t)this[1].klass;
          v20 = v14 == 8;
          v21 = (CommonUI_o *)Instance;
          if ( v20 )
          {
            v22 = (ServantStatusDialog_FormationEndDelegate_o *)sub_B0D974(
                                                                  ServantStatusDialog_FormationEndDelegate_TypeInfo,
                                                                  v16,
                                                                  v17);
            ServantStatusDialog_FormationEndDelegate___ctor(
              v22,
              (Il2CppObject *)this,
              Method_PartyOrganizationChangeObject_EndShowServantWithQuest__,
              0LL);
            if ( v21 )
            {
              CommonUI__OpenServantStatusDialog_17026172(v21, 1, v18, klass, v22, 0, 0LL);
              return;
            }
          }
          else
          {
            v34 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v16, v17);
            ServantStatusDialog_EndDelegate___ctor(
              v34,
              (Il2CppObject *)this,
              Method_PartyOrganizationChangeObject_EndShowServant__,
              0LL);
            if ( v21 )
            {
              CommonUI__OpenServantStatusDialog(v21, 1, v18, klass, v34, 0, 0LL);
              return;
            }
          }
        }
LABEL_34:
        sub_B0D97C(ServantLeader);
      }
      followerInfo = Member->fields.followerInfo;
      if ( followerInfo
        && !FollowerInfo__get_IsNpc(followerInfo, 0LL)
        && PartyOrganizationListViewItem__get_ServantLeader(v11, v24) )
      {
        ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v11, v25);
        if ( !ServantLeader )
          goto LABEL_34;
        v27 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
        v26 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v35.fields.currentCryptoKey = v27;
        *(_QWORD *)&v35.fields.fakeValue = v26;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v35, 0LL) >= 1 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          v28 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v30 = PartyOrganizationListViewItem__get_ServantLeader(v11, v29);
          v33 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v31, v32);
          ServantStatusDialog_EndDelegate___ctor(
            v33,
            (Il2CppObject *)this,
            Method_PartyOrganizationChangeObject_EndShowServant__,
            0LL);
          if ( v28 )
          {
            CommonUI__OpenServantStatusDialog_17029768(v28, 5, v30, v33, 0LL);
            return;
          }
          goto LABEL_34;
        }
      }
    }
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeObject__SetInput(
        PartyOrganizationChangeObject_o *this,
        bool isInput,
        const MethodInfo *method)
{
  PartyOrganizationChangeObject_o *v4; // x20
  int v5; // w8
  UnityEngine_Object_o *partyItem; // x21
  PartyOrganizationListViewItemDraw_o *v7; // x21

  v4 = this;
  if ( (byte_4217D09 & 1) == 0 )
  {
    this = (PartyOrganizationChangeObject_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, isInput);
    byte_4217D09 = 1;
  }
  if ( !v4 )
    goto LABEL_15;
  if ( isInput )
    v5 = 2;
  else
    v5 = 1;
  LODWORD(v4->fields.callbackFunc) = v5;
  partyItem = (UnityEngine_Object_o *)v4->fields.partyItem;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(partyItem, 0LL, 0LL) )
  {
    this = *(PartyOrganizationChangeObject_o **)&v4->fields.member;
    if ( this )
    {
      v7 = (PartyOrganizationListViewItemDraw_o *)v4->fields.partyItem;
      this = (PartyOrganizationChangeObject_o *)PartyListViewItem__GetMember(
                                                  (PartyListViewItem_o *)this,
                                                  (int32_t)v4[1].klass,
                                                  0LL);
      if ( v7 )
      {
        PartyOrganizationListViewItemDraw__SetInput(v7, (PartyOrganizationListViewItem_o *)this, isInput, 0LL);
        return;
      }
    }
LABEL_15:
    sub_B0D97C(this);
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
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  PartyListViewItem_o *v12; // x0
  PartyOrganizationListViewItem_o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_Object_o *v20; // x21

  if ( (byte_4217D07 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, partyItem);
    byte_4217D07 = 1;
  }
  *(_QWORD *)&this->fields.member = partyItem;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.member,
    (System_Int32_array **)partyItem,
    *(System_String_array ***)&member,
    (System_String_array **)callback,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  v12 = *(PartyListViewItem_o **)&this->fields.member;
  LODWORD(this[1].klass) = member;
  if ( !v12 )
    goto LABEL_14;
  v13 = PartyListViewItem__GetMember(v12, member, 0LL);
  this->fields.itemDraw = (struct PartyOrganizationListViewItemDraw_o *)callback;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)callback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( !v13 || LODWORD(this->fields.callbackFunc) != 2 )
    LODWORD(this->fields.callbackFunc) = 1;
  v20 = (UnityEngine_Object_o *)this->fields.partyItem;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
  {
    v12 = this->fields.partyItem;
    if ( v12 )
    {
      PartyOrganizationListViewItemDraw__SetItem((PartyOrganizationListViewItemDraw_o *)v12, v13, 2, 0LL);
      return;
    }
LABEL_14:
    sub_B0D97C(v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeObject__SetVisible(
        PartyOrganizationChangeObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  UnityEngine_Object_o *partyItem; // x21
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4217D05 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, isVisible);
    byte_4217D05 = 1;
  }
  partyItem = (UnityEngine_Object_o *)this->fields.partyItem;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(partyItem, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.partyItem;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_B0D97C(gameObject);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isVisible, 0LL);
  }
}


void __fastcall PartyOrganizationChangeObject__add_callbackFunc(
        PartyOrganizationChangeObject_o *this,
        PartyOrganizationChangeObject_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItemDraw_o **p_itemDraw; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationListViewItemDraw_o *itemDraw; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationChangeObject_o *v11; // x0
  PartyOrganizationChangeObject_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4217D02 & 1) == 0 )
  {
    sub_B0D8A4(&PartyOrganizationChangeObject_CallbackFunc_TypeInfo, value);
    byte_4217D02 = 1;
  }
  itemDraw = this->fields.itemDraw;
  p_itemDraw = &this->fields.itemDraw;
  v6 = (System_Delegate_o *)itemDraw;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationChangeObject_CallbackFunc_c *)v8->klass != PartyOrganizationChangeObject_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B022BC(p_itemDraw, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B0DC70(v8);
  PartyOrganizationChangeObject__remove_callbackFunc(v11, v12, v13);
}


void __fastcall PartyOrganizationChangeObject__remove_callbackFunc(
        PartyOrganizationChangeObject_o *this,
        PartyOrganizationChangeObject_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationListViewItemDraw_o **p_itemDraw; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationListViewItemDraw_o *itemDraw; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationChangeObject_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4217D03 & 1) == 0 )
  {
    sub_B0D8A4(&PartyOrganizationChangeObject_CallbackFunc_TypeInfo, value);
    byte_4217D03 = 1;
  }
  itemDraw = this->fields.itemDraw;
  p_itemDraw = &this->fields.itemDraw;
  v6 = (System_Delegate_o *)itemDraw;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationChangeObject_CallbackFunc_c *)v8->klass != PartyOrganizationChangeObject_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B022BC(p_itemDraw, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B0DC70(v8);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
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
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = n;
  v13 = result;
  if ( (byte_4212174 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&result);
    sub_B0D8A4(&PartyOrganizationChangeObject_ResultKind_TypeInfo, v9);
    byte_4212174 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(PartyOrganizationChangeObject_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B0D848(this, v11, callback, object);
}


void __fastcall PartyOrganizationChangeObject_CallbackFunc__EndInvoke(
        PartyOrganizationChangeObject_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeObject_CallbackFunc__Invoke(
        PartyOrganizationChangeObject_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  PartyOrganizationChangeObject_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  PartyOrganizationChangeObject_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, _QWORD, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  PartyOrganizationChangeObject_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v33;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (PartyOrganizationChangeObject_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&n, method);
      if ( (sub_B0D8D4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, (unsigned int)n, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, (unsigned int)n, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B0D8CC(v22);
      v25 = sub_B0DCD0(v22);
      if ( (v24 & 1) != 0 )
      {
        v26 = v32;
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AA67A0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B0D954(v17, v22);
        (*v19)(v21, v26, (unsigned int)n, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v32;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AA67A0(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v16)(
            v21,
            v13,
            (unsigned int)n,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v32,
            (unsigned int)n,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v23)(v21, v32, (unsigned int)n, v22);
    goto LABEL_38;
  }
}