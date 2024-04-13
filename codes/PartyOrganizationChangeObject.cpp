void __fastcall PartyOrganizationChangeObject___ctor(PartyOrganizationChangeObject_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall PartyOrganizationChangeObject__Awake(PartyOrganizationChangeObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WebViewObject_o *Component_WebViewObject; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42EB039 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewItemDraw___, (_DWORD)method, v2, v3);
    byte_42EB039 = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_PartyOrganizationListViewItemDraw___);
  this->fields.partyItem = (struct PartyListViewItem_o *)Component_WebViewObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.partyItem,
    (System_Int32_array **)Component_WebViewObject,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  __int64 v16; // x1
  struct PartyListViewItem_o *v17; // x0

  if ( (byte_42EB03B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EB03B = 1;
  }
  *(_QWORD *)&this->fields.member = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.member, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.itemDraw = 0LL;
  LODWORD(this[1].klass) = -1;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.itemDraw, 0LL, v9, v10, v11, v12, v13, v14);
  LODWORD(this->fields.callbackFunc) = 0;
  partyItem = (UnityEngine_Object_o *)this->fields.partyItem;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(partyItem, 0LL, 0LL) )
  {
    v17 = this->fields.partyItem;
    if ( !v17 )
      sub_B5D69C(0LL, v16);
    PartyOrganizationListViewItemDraw__ClearItem((PartyOrganizationListViewItemDraw_o *)v17, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42EB043 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EB043 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  AvalonSceneManager__transitionScene(Instance, 34, 1, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeObject__EndShowEquip(
        PartyOrganizationChangeObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CommonUI_o *Instance; // x20
  System_Action_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_42EB046 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_PartyOrganizationChangeObject_EndCloseShowEquip__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42EB046 = 1;
  }
  if ( isDecide )
    PartyOrganizationChangeObject__ModifyItem(this, (const MethodInfo *)isDecide);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_PartyOrganizationChangeObject_EndCloseShowEquip__, 0LL);
  if ( !Instance )
    sub_B5D69C(v14, v15);
  CommonUI__CloseServantEquipStatusDialog(Instance, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeObject__EndShowServant(
        PartyOrganizationChangeObject_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CommonUI_o *Instance; // x20
  System_Action_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_42EB041 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_PartyOrganizationChangeObject_EndCloseShow__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42EB041 = 1;
  }
  if ( isDecide )
    PartyOrganizationChangeObject__ModifyItem(this, (const MethodInfo *)isDecide);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_PartyOrganizationChangeObject_EndCloseShow__, 0LL);
  if ( !Instance )
    sub_B5D69C(v14, v15);
  CommonUI__CloseServantStatusDialog(Instance, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationChangeObject__EndShowServantWithQuest(
        PartyOrganizationChangeObject_o *this,
        bool isDecide,
        int32_t questId,
        const MethodInfo *method)
{
  char v7; // w1
  int v8; // w2
  __int64 v9; // x3
  char v10; // w1
  int v11; // w2
  __int64 v12; // x3
  CommonUI_o *Instance; // x20
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_42EB042 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, questId, method);
    sub_B5D5C4(&Method_PartyOrganizationChangeObject_EndCloseShowQuestJump__, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11, v12);
    byte_42EB042 = 1;
  }
  if ( questId < 1 )
  {
    PartyOrganizationChangeObject__EndShowServant(this, isDecide, *(const MethodInfo **)&questId);
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_PartyOrganizationChangeObject_EndCloseShowQuestJump__, 0LL);
    if ( !Instance )
      sub_B5D69C(v15, v16);
    CommonUI__CloseServantStatusDialog(Instance, v14, 0LL);
  }
}


void __fastcall PartyOrganizationChangeObject__ModifyItem(
        PartyOrganizationChangeObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PartyListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v6; // x20
  UnityEngine_Object_o *partyItem; // x21

  if ( (byte_42EB03D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB03D = 1;
  }
  Member = *(PartyListViewItem_o **)&this->fields.member;
  if ( !Member )
    goto LABEL_12;
  Member = (PartyListViewItem_o *)PartyListViewItem__GetMember(Member, (int32_t)this[1].klass, 0LL);
  if ( !Member )
    goto LABEL_12;
  v6 = (PartyOrganizationListViewItem_o *)Member;
  PartyOrganizationListViewItem__Modify((PartyOrganizationListViewItem_o *)Member, method);
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
      PartyOrganizationListViewItemDraw__SetItem((PartyOrganizationListViewItemDraw_o *)Member, v6, 2, 0LL);
      return;
    }
LABEL_12:
    sub_B5D69C(Member, method);
  }
}


void __fastcall PartyOrganizationChangeObject__OnClickItem(
        PartyOrganizationChangeObject_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PartyListViewItem_o *v5; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  __int64 v7; // x1

  if ( (byte_42EB03F & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB03F = 1;
  }
  if ( LODWORD(this->fields.callbackFunc) == 2 )
  {
    if ( this->fields.itemDraw )
    {
      v5 = *(PartyListViewItem_o **)&this->fields.member;
      if ( v5 )
      {
        Member = PartyListViewItem__GetMember(v5, (int32_t)this[1].klass, 0LL);
        if ( Member
          && (Member->fields.isMyServantOrNpcRestriction
           || !Member->fields.isFollower && !Member->fields.isServantNumRestriction) )
        {
          if ( !this->fields.itemDraw )
            sub_B5D69C(Member, v7);
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
  int v2; // w2
  __int64 v3; // x3
  PartyListViewItem_o *v5; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  __int64 v7; // x1

  if ( (byte_42EB044 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB044 = 1;
  }
  if ( LODWORD(this->fields.callbackFunc) == 2 )
  {
    if ( this->fields.itemDraw )
    {
      v5 = *(PartyListViewItem_o **)&this->fields.member;
      if ( v5 )
      {
        Member = PartyListViewItem__GetMember(v5, (int32_t)this[1].klass, 0LL);
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
            sub_B5D69C(Member, v7);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  PartyListViewItem_o *v17; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  const MethodInfo *v19; // x1
  PartyOrganizationListViewItem_o *v20; // x20
  const MethodInfo *v21; // x1
  CommonUI_o *Instance; // x21
  const MethodInfo *v23; // x1
  int64_t EquipUserSvtId; // x20
  ServantStatusDialog_EndDelegate_o *v25; // x22
  ServantLeaderInfo_o *ServantLeader; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o EquipSvtId; // kr00_16
  const MethodInfo *v31; // x1
  bool IsNpc; // w22
  CommonUI_o *v33; // x21
  const MethodInfo *v34; // x1
  EquipTargetInfo_o *EquipTarget1; // x20
  ServantStatusDialog_EndDelegate_o *v36; // x23
  int32_t v37; // w1

  if ( (byte_42EB045 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_PartyOrganizationChangeObject_EndShowEquip__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    byte_42EB045 = 1;
  }
  v17 = *(PartyListViewItem_o **)&this->fields.member;
  if ( v17 )
  {
    Member = PartyListViewItem__GetMember(v17, (int32_t)this[1].klass, 0LL);
    if ( !Member )
      goto LABEL_35;
    v20 = Member;
    if ( PartyOrganizationListViewItem__get_EquipUserSvtId(Member, v19) >= 1 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      EquipUserSvtId = PartyOrganizationListViewItem__get_EquipUserSvtId(v20, v23);
      v25 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v25,
        (Il2CppObject *)this,
        Method_PartyOrganizationChangeObject_EndShowEquip__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenServantEquipStatusDialog(Instance, 11, EquipUserSvtId, 1, v25, 0LL, 0LL);
        return;
      }
LABEL_32:
      sub_B5D69C(ServantLeader, v27);
    }
    if ( !PartyOrganizationListViewItem__get_ServantLeader(v20, v21) )
      goto LABEL_35;
    ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v20, v28);
    if ( !ServantLeader )
      goto LABEL_32;
    if ( ServantLeaderInfo__IsHideEquip(ServantLeader, 0LL) )
      goto LABEL_35;
    EquipSvtId = PartyOrganizationListViewItem__get_EquipSvtId(v20, v29);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(EquipSvtId, 0LL) >= 1 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v20, v31);
      if ( !ServantLeader )
        goto LABEL_32;
      IsNpc = ServantLeaderInfo__IsNpc(ServantLeader, 0LL);
      v33 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      EquipTarget1 = PartyOrganizationListViewItem__get_EquipTarget1(v20, v34);
      v36 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v36,
        (Il2CppObject *)this,
        Method_PartyOrganizationChangeObject_EndShowEquip__,
        0LL);
      if ( !v33 )
        goto LABEL_32;
      if ( IsNpc )
        v37 = 19;
      else
        v37 = 14;
      CommonUI__OpenServantEquipStatusDialog_18217320(v33, v37, EquipTarget1, v36, 0LL, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  PartyListViewItem_o *v23; // x0
  PartyOrganizationListViewItem_o *Member; // x0
  PartyOrganizationListViewItem_o *v25; // x20
  ServantLeaderInfo_o *ServantLeader; // x0
  __int64 v27; // x1
  __int64 v28; // x8
  int v29; // w22
  WebViewManager_o *Instance; // x0
  PartyListViewItem_o *v31; // x20
  int32_t klass; // w21
  bool v33; // zf
  CommonUI_o *v34; // x22
  ServantStatusDialog_FormationEndDelegate_o *v35; // x23
  FollowerInfo_o *followerInfo; // x0
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x1
  __int64 v39; // x21
  __int64 v40; // x22
  CommonUI_o *v41; // x21
  const MethodInfo *v42; // x1
  ServantLeaderInfo_o *v43; // x20
  ServantStatusDialog_EndDelegate_o *v44; // x22
  ServantStatusDialog_EndDelegate_o *v45; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_42EB040 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ServantStatusDialog_FormationEndDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_PartyOrganizationChangeObject_EndShowServantWithQuest__, v11, v12, v13);
    sub_B5D5C4(&Method_PartyOrganizationChangeObject_EndShowServant__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&SoundManager_TypeInfo, v20, v21, v22);
    byte_42EB040 = 1;
  }
  v23 = *(PartyListViewItem_o **)&this->fields.member;
  if ( v23 )
  {
    Member = PartyListViewItem__GetMember(v23, (int32_t)this[1].klass, 0LL);
    if ( Member )
    {
      v25 = Member;
      if ( Member->fields.userServantEntity )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        v28 = *(_QWORD *)&this->fields.member;
        if ( v28 )
        {
          v29 = *(_DWORD *)(v28 + 112);
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v31 = *(PartyListViewItem_o **)&this->fields.member;
          klass = (int32_t)this[1].klass;
          v33 = v29 == 8;
          v34 = (CommonUI_o *)Instance;
          if ( v33 )
          {
            v35 = (ServantStatusDialog_FormationEndDelegate_o *)sub_B5D694(ServantStatusDialog_FormationEndDelegate_TypeInfo);
            ServantStatusDialog_FormationEndDelegate___ctor(
              v35,
              (Il2CppObject *)this,
              Method_PartyOrganizationChangeObject_EndShowServantWithQuest__,
              0LL);
            if ( v34 )
            {
              CommonUI__OpenServantStatusDialog_18211360(v34, 1, v31, klass, v35, 0, 0LL);
              return;
            }
          }
          else
          {
            v45 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v45,
              (Il2CppObject *)this,
              Method_PartyOrganizationChangeObject_EndShowServant__,
              0LL);
            if ( v34 )
            {
              CommonUI__OpenServantStatusDialog(v34, 1, v31, klass, v45, 0, 0LL);
              return;
            }
          }
        }
LABEL_34:
        sub_B5D69C(ServantLeader, v27);
      }
      followerInfo = Member->fields.followerInfo;
      if ( followerInfo
        && !FollowerInfo__get_IsNpc(followerInfo, 0LL)
        && PartyOrganizationListViewItem__get_ServantLeader(v25, v37) )
      {
        ServantLeader = PartyOrganizationListViewItem__get_ServantLeader(v25, v38);
        if ( !ServantLeader )
          goto LABEL_34;
        v40 = *(_QWORD *)&ServantLeader->fields.svtId.fields.currentCryptoKey;
        v39 = *(_QWORD *)&ServantLeader->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v46.fields.currentCryptoKey = v40;
        *(_QWORD *)&v46.fields.fakeValue = v39;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v46, 0LL) >= 1 )
        {
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          v41 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v43 = PartyOrganizationListViewItem__get_ServantLeader(v25, v42);
          v44 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v44,
            (Il2CppObject *)this,
            Method_PartyOrganizationChangeObject_EndShowServant__,
            0LL);
          if ( v41 )
          {
            CommonUI__OpenServantStatusDialog_18214956(v41, 5, v43, v44, 0LL);
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
  __int64 v3; // x3
  PartyOrganizationChangeObject_o *v5; // x20
  int v6; // w8
  UnityEngine_Object_o *partyItem; // x21
  PartyOrganizationListViewItemDraw_o *v8; // x21

  v5 = this;
  if ( (byte_42EB03E & 1) == 0 )
  {
    this = (PartyOrganizationChangeObject_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, isInput, (_DWORD)method, v3);
    byte_42EB03E = 1;
  }
  if ( !v5 )
    goto LABEL_15;
  if ( isInput )
    v6 = 2;
  else
    v6 = 1;
  LODWORD(v5->fields.callbackFunc) = v6;
  partyItem = (UnityEngine_Object_o *)v5->fields.partyItem;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(partyItem, 0LL, 0LL) )
  {
    this = *(PartyOrganizationChangeObject_o **)&v5->fields.member;
    if ( this )
    {
      v8 = (PartyOrganizationListViewItemDraw_o *)v5->fields.partyItem;
      this = (PartyOrganizationChangeObject_o *)PartyListViewItem__GetMember(
                                                  (PartyListViewItem_o *)this,
                                                  (int32_t)v5[1].klass,
                                                  0LL);
      if ( v8 )
      {
        PartyOrganizationListViewItemDraw__SetInput(v8, (PartyOrganizationListViewItem_o *)this, isInput, 0LL);
        return;
      }
    }
LABEL_15:
    sub_B5D69C(this, isInput);
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
  __int64 v12; // x1
  PartyListViewItem_o *v13; // x0
  PartyOrganizationListViewItem_o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UnityEngine_Object_o *v21; // x21

  if ( (byte_42EB03C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)partyItem, member, callback);
    byte_42EB03C = 1;
  }
  *(_QWORD *)&this->fields.member = partyItem;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.member,
    (System_Int32_array **)partyItem,
    *(System_String_array ***)&member,
    (System_String_array **)callback,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  v13 = *(PartyListViewItem_o **)&this->fields.member;
  LODWORD(this[1].klass) = member;
  if ( !v13 )
    goto LABEL_14;
  v14 = PartyListViewItem__GetMember(v13, member, 0LL);
  this->fields.itemDraw = (struct PartyOrganizationListViewItemDraw_o *)callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemDraw,
    (System_Int32_array **)callback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( !v14 || LODWORD(this->fields.callbackFunc) != 2 )
    LODWORD(this->fields.callbackFunc) = 1;
  v21 = (UnityEngine_Object_o *)this->fields.partyItem;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
  {
    v13 = this->fields.partyItem;
    if ( v13 )
    {
      PartyOrganizationListViewItemDraw__SetItem((PartyOrganizationListViewItemDraw_o *)v13, v14, 2, 0LL);
      return;
    }
LABEL_14:
    sub_B5D69C(v13, v12);
  }
}


void __fastcall PartyOrganizationChangeObject__SetVisible(
        PartyOrganizationChangeObject_o *this,
        bool isVisible,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *partyItem; // x21
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_42EB03A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isVisible, (_DWORD)method, v3);
    byte_42EB03A = 1;
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
      sub_B5D69C(gameObject, v7);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isVisible, 0LL);
  }
}


void __fastcall PartyOrganizationChangeObject__add_callbackFunc(
        PartyOrganizationChangeObject_o *this,
        PartyOrganizationChangeObject_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct PartyOrganizationListViewItemDraw_o **p_itemDraw; // x20
  System_Delegate_o *v7; // x21
  struct PartyOrganizationListViewItemDraw_o *itemDraw; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  PartyOrganizationChangeObject_o *v12; // x0
  PartyOrganizationChangeObject_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EB037 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationChangeObject_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB037 = 1;
  }
  itemDraw = this->fields.itemDraw;
  p_itemDraw = &this->fields.itemDraw;
  v7 = (System_Delegate_o *)itemDraw;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (PartyOrganizationChangeObject_CallbackFunc_c *)v9->klass != PartyOrganizationChangeObject_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_itemDraw, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  PartyOrganizationChangeObject__remove_callbackFunc(v12, v13, v14);
}


void __fastcall PartyOrganizationChangeObject__remove_callbackFunc(
        PartyOrganizationChangeObject_o *this,
        PartyOrganizationChangeObject_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct PartyOrganizationListViewItemDraw_o **p_itemDraw; // x20
  System_Delegate_o *v7; // x21
  struct PartyOrganizationListViewItemDraw_o *itemDraw; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  PartyOrganizationChangeObject_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EB038 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationChangeObject_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB038 = 1;
  }
  itemDraw = this->fields.itemDraw;
  p_itemDraw = &this->fields.itemDraw;
  v7 = (System_Delegate_o *)itemDraw;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (PartyOrganizationChangeObject_CallbackFunc_c *)v9->klass != PartyOrganizationChangeObject_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_itemDraw, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  PartyOrganizationChangeObject__Awake(v12, v13);
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall PartyOrganizationChangeObject_CallbackFunc__BeginInvoke(
        PartyOrganizationChangeObject_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v13[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v14; // [xsp+18h] [xbp-28h] BYREF
  int32_t v15; // [xsp+1Ch] [xbp-24h] BYREF

  v14 = n;
  v15 = result;
  if ( (byte_42E5A7A & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, result, n, callback);
    sub_B5D5C4(&PartyOrganizationChangeObject_ResultKind_TypeInfo, v9, v10, v11);
    byte_42E5A7A = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(PartyOrganizationChangeObject_ResultKind_TypeInfo, &v15);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B5D568(this, v13, callback, object);
}


void __fastcall PartyOrganizationChangeObject_CallbackFunc__EndInvoke(
        PartyOrganizationChangeObject_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  PartyOrganizationChangeObject_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  PartyOrganizationChangeObject_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
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
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&n);
      if ( (sub_B5D5F4(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, (unsigned int)n, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, (unsigned int)n, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B5D5EC(v23);
      v26 = sub_B5D9F0(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AF54C0(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B5D674(v18, v23);
        (*v20)(v22, v28, (unsigned int)n, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AF54C0(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            v14,
            (unsigned int)n,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            v34,
            (unsigned int)n,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(v22, v34, (unsigned int)n, v23);
    goto LABEL_38;
  }
}