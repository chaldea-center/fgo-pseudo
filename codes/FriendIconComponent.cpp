void __fastcall FriendIconComponent___ctor(FriendIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BalanceConfig_c *v6; // x0
  struct UnityEngine_GameObject_array *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  struct SkillIconComponent_array *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct UIIconLabel_array *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  struct UnityEngine_GameObject_array *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  struct SkillIconComponent_array *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  struct UIIconLabel_array *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3

  if ( (byte_4AB5204 & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, method);
    sub_1BAB41C(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1BAB41C(&SkillIconComponent___TypeInfo, v4);
    sub_1BAB41C(&UIIconLabel___TypeInfo, v5);
    byte_4AB5204 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  v7 = (struct UnityEngine_GameObject_array *)sub_1BAB4C4(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v6->static_fields->SvtSkillListMax);
  this->fields.skillBaseList = v7;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.skillBaseList, (int32_t)v7, v8, v9);
  v10 = (struct SkillIconComponent_array *)sub_1BAB4C4(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillIconList = v10;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.skillIconList, (int32_t)v10, v11, v12);
  v13 = (struct UIIconLabel_array *)sub_1BAB4C4(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtSkillListMax);
  this->fields.skillLevelIconLabelList = v13;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.skillLevelIconLabelList, (int32_t)v13, v14, v15);
  v16 = (struct UnityEngine_GameObject_array *)sub_1BAB4C4(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillBaseList = v16;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.appendSkillBaseList, (int32_t)v16, v17, v18);
  v19 = (struct SkillIconComponent_array *)sub_1BAB4C4(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillIconList = v19;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.appendSkillIconList, (int32_t)v19, v20, v21);
  v22 = (struct UIIconLabel_array *)sub_1BAB4C4(
                                      UIIconLabel___TypeInfo,
                                      (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtAppendPassiveSkillListMax);
  this->fields.appendSkillLevelIconLabelList = v22;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.appendSkillLevelIconLabelList, (int32_t)v22, v23, v24);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FriendIconComponent__Awake(FriendIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  UnityEngine_Object_o *skillIconSprite; // x20
  UISprite_o *v14; // x20
  UnityEngine_Object_o *skillTitleSprite; // x20
  UISprite_o *v16; // x20
  UnityEngine_Object_o *appendSkillIconSprite; // x20
  UISprite_o *v18; // x20
  UnityEngine_Object_o *appendSkillTitleSprite; // x20
  UISprite_o *v20; // x19

  if ( (byte_4AB51F7 & 1) == 0 )
  {
    sub_1BAB41C(&AtlasManager_TypeInfo, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_UIWidget___ctor__, v3);
    sub_1BAB41C(&System_Collections_Generic_List_UIWidget__TypeInfo, v4);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v5);
    sub_1BAB41C(&StringLiteral_20208/*"icon_skill_mini"*/, v6);
    sub_1BAB41C(&StringLiteral_20351/*"img_friend_skill"*/, v7);
    sub_1BAB41C(&StringLiteral_20113/*"icon_append_mini"*/, v8);
    sub_1BAB41C(&StringLiteral_20350/*"img_friend_appendskill"*/, v9);
    byte_4AB51F7 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v10;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.switchSkillUIList, (int32_t)v10, v11, v12);
  skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
  {
    v14 = this->fields.skillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v14, (System_String_o *)StringLiteral_20208/*"icon_skill_mini"*/, 0LL);
  }
  skillTitleSprite = (UnityEngine_Object_o *)this->fields.skillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillTitleSprite, 0LL, 0LL) )
  {
    v16 = this->fields.skillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v16, (System_String_o *)StringLiteral_20351/*"img_friend_skill"*/, 0LL);
  }
  appendSkillIconSprite = (UnityEngine_Object_o *)this->fields.appendSkillIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillIconSprite, 0LL, 0LL) )
  {
    v18 = this->fields.appendSkillIconSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v18, (System_String_o *)StringLiteral_20113/*"icon_append_mini"*/, 0LL);
  }
  appendSkillTitleSprite = (UnityEngine_Object_o *)this->fields.appendSkillTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(appendSkillTitleSprite, 0LL, 0LL) )
  {
    v20 = this->fields.appendSkillTitleSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(v20, (System_String_o *)StringLiteral_20350/*"img_friend_appendskill"*/, 0LL);
  }
}


void __fastcall FriendIconComponent__EndCloseClassBoardEffectListDialog(
        FriendIconComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4AB5203 & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4AB5203 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v3);
  CommonUI__CloseClassBoardEffectListDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall FriendIconComponent__EndCloseShowServantEquip(FriendIconComponent_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendIconComponent__EndShowServant(
        FriendIconComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4AB51FB & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4AB51FB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendIconComponent__EndShowServantEquip(
        FriendIconComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4AB51FF & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, isDecide);
    sub_1BAB41C(&Method_FriendIconComponent_EndCloseShowServantEquip__, v4);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4AB51FF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_FriendIconComponent_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    sub_1BAB678(v8, v9);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v7, 0LL);
}


int32_t __fastcall FriendIconComponent__GetTargetDeckId(FriendIconComponent_o *this, const MethodInfo *method)
{
  struct OtherUserGameEntity_o *userGameEntity; // x8
  struct System_Int32_array *eventSupportDeckIds; // x8

  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_7;
  if ( this->fields.displayServantType )
  {
    eventSupportDeckIds = userGameEntity->fields.eventSupportDeckIds;
    if ( eventSupportDeckIds )
      goto LABEL_4;
LABEL_7:
    sub_1BAB678(this, method);
  }
  eventSupportDeckIds = userGameEntity->fields.mainSupportDeckIds;
  if ( !eventSupportDeckIds )
    goto LABEL_7;
LABEL_4:
  if ( !eventSupportDeckIds->max_length )
    sub_1BAB680(this, method);
  return eventSupportDeckIds->m_Items[1];
}


void __fastcall FriendIconComponent__OnClickServantStatus(FriendIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v10; // x20
  Il2CppObject *Instance; // x21
  ServantStatusDialog_EndDelegate_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4AB51FA & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusDialog_EndDelegate_TypeInfo, method);
    sub_1BAB41C(&Method_FriendIconComponent_EndShowServant__, v3);
    sub_1BAB41C(&Method_FriendIconComponent_OnClickServantStatus__, v4);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4AB51FA = 1;
  }
  v6 = Method_FriendIconComponent_OnClickServantStatus__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OnClickServantStatus__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BAB434(Method_FriendIconComponent_OnClickServantStatus__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BAB400(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  userGameEntity = this->fields.userGameEntity;
  if ( userGameEntity )
  {
    ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                          userGameEntity,
                          this->fields.classPos,
                          0,
                          this->fields.displayServantType,
                          this->fields.deckId,
                          0LL);
    if ( ServantLeaderInfo )
    {
      v10 = ServantLeaderInfo;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v12 = (ServantStatusDialog_EndDelegate_o *)sub_1BAB668(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v12,
        (Il2CppObject *)this,
        Method_FriendIconComponent_EndShowServant__,
        0LL);
      if ( !Instance )
        sub_1BAB678(v13, v14);
      CommonUI__OpenServantStatusDialog_30649164((CommonUI_o *)Instance, 5, v10, v12, 0LL);
    }
  }
}


void __fastcall FriendIconComponent__OnClickSupportClassBoardBuff(
        FriendIconComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v15; // x20
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  Il2CppObject *Master_object; // x0
  __int64 v19; // x21
  __int64 v20; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x20
  Il2CppObject *Entity; // x0
  __int64 v23; // x1
  int32_t klass; // w22
  struct OtherUserGameEntity_o *v25; // x8
  struct ClassBoardInfo_array *userClassBoardInfo; // x23
  int max_length; // w8
  int32_t v28; // w20
  unsigned int v29; // w24
  __int64 v30; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  long double v33; // q0
  _QWORD *v34; // x22
  __int64 v35; // x8
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 *v38; // x8
  __int64 v39; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  long double v42; // q0
  _QWORD *v43; // x22
  __int64 v44; // x8
  __int64 v45; // x0
  __int64 v46; // x0
  __int64 *v47; // x8
  __int64 v48; // x1
  Il2CppObject *Instance; // x22
  System_Action_o *v50; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_4AB5202 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_System_Array_Empty_int___, v3);
    sub_1BAB41C(&ClassBoardInfo_TypeInfo, v4);
    sub_1BAB41C(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v5);
    sub_1BAB41C(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_1BAB41C(&DataManager_TypeInfo, v7);
    sub_1BAB41C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1BAB41C(&Method_FriendIconComponent_EndCloseClassBoardEffectListDialog__, v9);
    sub_1BAB41C(&Method_FriendIconComponent_OnClickSupportClassBoardBuff__, v10);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_4AB5202 = 1;
  }
  userGameEntity = this->fields.userGameEntity;
  if ( userGameEntity )
  {
    ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                          userGameEntity,
                          this->fields.classPos,
                          0,
                          this->fields.displayServantType,
                          this->fields.deckId,
                          0LL);
    if ( ServantLeaderInfo )
    {
      v15 = ServantLeaderInfo;
      v16 = Method_FriendIconComponent_OnClickSupportClassBoardBuff__;
      if ( (*((_BYTE *)Method_FriendIconComponent_OnClickSupportClassBoardBuff__ + 83) & 2) != 0 )
        v16 = (_QWORD *)sub_1BAB434(Method_FriendIconComponent_OnClickSupportClassBoardBuff__);
      v17 = (System_Reflection_MethodBase_o *)sub_1BAB400(v16, v16[4]);
      OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ServantMaster___);
      v20 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
      v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v51.fields.currentCryptoKey = v20;
      *(_QWORD *)&v51.fields.fakeValue = v19;
      Entity = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v51, 0LL);
      if ( !v21 )
        goto LABEL_44;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 v21,
                 (int32_t)Entity,
                 (const MethodInfo_3163D90 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_44;
      klass = (int32_t)Entity[5].klass;
      Entity = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
      if ( !Entity )
        goto LABEL_44;
      Entity = (Il2CppObject *)ClassBoardClassMaster__GetClassBoardBaseId((ClassBoardClassMaster_o *)Entity, klass, 0LL);
      v25 = this->fields.userGameEntity;
      if ( !v25 )
        goto LABEL_44;
      userClassBoardInfo = v25->fields.userClassBoardInfo;
      if ( !userClassBoardInfo )
        goto LABEL_44;
      max_length = userClassBoardInfo->max_length;
      v28 = (int)Entity;
      if ( max_length >= 1 )
      {
        v29 = 0;
        do
        {
          if ( v29 >= max_length )
            sub_1BAB680(Entity, v23);
          v30 = (__int64)userClassBoardInfo->m_Items[v29];
          if ( !v30 )
            goto LABEL_44;
          if ( *(_DWORD *)(v30 + 16) == v28 )
          {
            Entity = (Il2CppObject *)ClassBoardInfo__IsReleasedClassId((ClassBoardInfo_o *)v30, klass, 0LL);
            if ( ((unsigned __int8)Entity & 1) != 0 )
              goto LABEL_41;
          }
          max_length = userClassBoardInfo->max_length;
        }
        while ( (int)++v29 < max_length );
      }
      v30 = sub_1BAB668(ClassBoardInfo_TypeInfo);
      ClassBoardInfo___ctor((ClassBoardInfo_o *)v30, 0LL);
      if ( !v30 )
        goto LABEL_44;
      *(_DWORD *)(v30 + 16) = v28;
      v34 = Method_System_Array_Empty_int___;
      v35 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v35 )
      {
        sub_1BFD354(Method_System_Array_Empty_int___);
        v35 = v34[7];
      }
      v36 = *(_QWORD *)(v35 + 16);
      if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
        v36 = sub_1BFD2F8(v33);
      if ( !*(_DWORD *)(v36 + 224) )
        *(__n128 *)&v33 = j_il2cpp_runtime_class_init_0(v36);
      v37 = *(_QWORD *)(v34[7] + 16LL);
      if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
        v37 = sub_1BFD2F8(v33);
      v38 = *(__int64 **)(v37 + 184);
      v39 = *v38;
      *(_QWORD *)(v30 + 24) = *v38;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v30 + 24), v39, v31, v32);
      v43 = Method_System_Array_Empty_int___;
      v44 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v44 )
      {
        sub_1BFD354(Method_System_Array_Empty_int___);
        v44 = v43[7];
      }
      v45 = *(_QWORD *)(v44 + 16);
      if ( (*(_BYTE *)(v45 + 309) & 1) == 0 )
        v45 = sub_1BFD2F8(v42);
      if ( !*(_DWORD *)(v45 + 224) )
        *(__n128 *)&v42 = j_il2cpp_runtime_class_init_0(v45);
      v46 = *(_QWORD *)(v43[7] + 16LL);
      if ( (*(_BYTE *)(v46 + 309) & 1) == 0 )
        v46 = sub_1BFD2F8(v42);
      v47 = *(__int64 **)(v46 + 184);
      v48 = *v47;
      *(_QWORD *)(v30 + 32) = *v47;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v30 + 32), v48, v40, v41);
LABEL_41:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v50 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
      System_Action___ctor(
        v50,
        (Il2CppObject *)this,
        Method_FriendIconComponent_EndCloseClassBoardEffectListDialog__,
        0LL);
      if ( !Instance )
LABEL_44:
        sub_1BAB678(Entity, v23);
      CommonUI__OpenClassBoardEffectListDialog((CommonUI_o *)Instance, 1, v28, 0, v50, 1, (ClassBoardInfo_o *)v30, 0LL);
    }
  }
}


void __fastcall FriendIconComponent__OnClickSupportInfo(FriendIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  OtherUserGameEntity_o *userGameEntity; // x20
  SupportInfoJump_o *v8; // x19
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4AB51FD & 1) == 0 )
  {
    sub_1BAB41C(&Method_FriendIconComponent_OnClickSupportInfo__, method);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    sub_1BAB41C(&SupportInfoJump_TypeInfo, v4);
    byte_4AB51FD = 1;
  }
  v5 = Method_FriendIconComponent_OnClickSupportInfo__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OnClickSupportInfo__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BAB434(Method_FriendIconComponent_OnClickSupportInfo__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BAB400(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  userGameEntity = this->fields.userGameEntity;
  v8 = (SupportInfoJump_o *)sub_1BAB668(SupportInfoJump_TypeInfo);
  SupportInfoJump___ctor(v8, userGameEntity, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v10);
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 60, 1, (Il2CppObject *)v8, 0LL);
}


void __fastcall FriendIconComponent__OnLongPushAppendSkill1(FriendIconComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendIconComponent__OpenAppendSkillInfoDialog(this, 0, v2);
}


void __fastcall FriendIconComponent__OnLongPushAppendSkill2(FriendIconComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendIconComponent__OpenAppendSkillInfoDialog(this, 1, v2);
}


void __fastcall FriendIconComponent__OnLongPushAppendSkill3(FriendIconComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendIconComponent__OpenAppendSkillInfoDialog(this, 2, v2);
}


void __fastcall FriendIconComponent__OnLongPushEquip(FriendIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v6; // x20
  EquipTargetInfo_o *EquipInfo; // x0
  EquipTargetInfo_o *v8; // x21
  __int64 v9; // x22
  __int64 v10; // x23
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  const MethodInfo *v13; // x3
  int32_t followerType; // w8
  int32_t v15; // w2
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4AB5200 & 1) == 0 )
  {
    sub_1BAB41C(&Method_FriendIconComponent_OnLongPushEquip__, method);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    byte_4AB5200 = 1;
  }
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_25;
  ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                        userGameEntity,
                        this->fields.classPos,
                        0,
                        this->fields.displayServantType,
                        this->fields.deckId,
                        0LL);
  v6 = ServantLeaderInfo;
  if ( ServantLeaderInfo && ServantLeaderInfo__IsHideEquip(ServantLeaderInfo, 0LL) )
    goto LABEL_22;
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
LABEL_25:
    sub_1BAB678(userGameEntity, method);
  EquipInfo = OtherUserGameEntity__getEquipInfo(
                userGameEntity,
                this->fields.classPos,
                this->fields.displayServantType,
                this->fields.deckId,
                0LL);
  if ( EquipInfo )
  {
    v8 = EquipInfo;
    v10 = *(_QWORD *)&EquipInfo->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&EquipInfo->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v18.fields.currentCryptoKey = v10;
    *(_QWORD *)&v18.fields.fakeValue = v9;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v18, 0LL) >= 1 )
    {
      v11 = Method_FriendIconComponent_OnLongPushEquip__;
      if ( (*((_BYTE *)Method_FriendIconComponent_OnLongPushEquip__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1BAB434(Method_FriendIconComponent_OnLongPushEquip__);
      v12 = (System_Reflection_MethodBase_o *)sub_1BAB400(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
      followerType = this->fields.followerType;
      if ( followerType == 5 )
        v15 = 14;
      else
        v15 = 13;
      if ( v6 && followerType != 5 )
      {
        if ( ServantLeaderInfo__IsNpc(v6, 0LL) )
          v15 = 19;
        else
          v15 = 13;
      }
      FriendIconComponent__SelectShowServantEquip(this, v8, v15, v13);
      return;
    }
  }
LABEL_22:
  v16 = Method_FriendIconComponent_OnLongPushEquip__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OnLongPushEquip__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1BAB434(Method_FriendIconComponent_OnLongPushEquip__);
  v17 = (System_Reflection_MethodBase_o *)sub_1BAB400(v16, v16[4]);
  OverwriteAssetSoundName__PlaySystemSe(v17, 2, 0LL);
}


void __fastcall FriendIconComponent__OnLongPushSkill1(FriendIconComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendIconComponent__OpenSkillInfoDialog(this, 0, v2);
}


void __fastcall FriendIconComponent__OnLongPushSkill2(FriendIconComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendIconComponent__OpenSkillInfoDialog(this, 1, v2);
}


void __fastcall FriendIconComponent__OnLongPushSkill3(FriendIconComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FriendIconComponent__OpenSkillInfoDialog(this, 2, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendIconComponent__OpenAppendSkillInfoDialog(
        FriendIconComponent_o *this,
        int32_t skillIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  Il2CppObject *Master_object; // x0
  __int64 v17; // x1
  SkillInfo_o *v18; // x21
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  System_String_o *v21; // x19
  System_String_o *v22; // x20
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x0
  System_String_o *v27; // x0
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  int32_t lv; // [xsp+4h] [xbp-3Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-30h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4AB5201 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_SkillMaster___, *(_QWORD *)&skillIndex);
    sub_1BAB41C(&DataManager_TypeInfo, v5);
    sub_1BAB41C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_1BAB41C(&Method_FriendIconComponent_OpenAppendSkillInfoDialog__, v7);
    sub_1BAB41C(&int_TypeInfo, v8);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v9);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1BAB41C(&StringLiteral_116/*" "*/, v11);
    sub_1BAB41C(&StringLiteral_8526/*"MASTER_EQSKILL_LV_TXT"*/, v12);
    sub_1BAB41C(&StringLiteral_1/*""*/, v13);
    byte_4AB5201 = 1;
  }
  name = 0LL;
  skillInfoList = 0LL;
  detail = 0LL;
  userGameEntity = this->fields.userGameEntity;
  if ( userGameEntity )
  {
    ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                          userGameEntity,
                          this->fields.classPos,
                          0,
                          this->fields.displayServantType,
                          this->fields.deckId,
                          0LL);
    if ( ServantLeaderInfo )
    {
      if ( ServantLeaderInfo->fields.userSvtId )
      {
        ServantLeaderInfo__GetAppendPassiveSkillInfo_40902076(ServantLeaderInfo, &skillInfoList, 0, 0LL);
        if ( !skillInfoList )
          goto LABEL_25;
        if ( skillInfoList->max_length <= skillIndex )
          sub_1BAB680(Master_object, v17);
        v18 = skillInfoList->m_Items[skillIndex];
        if ( v18 && v18->fields.id >= 1 && v18->fields.lv >= 1 )
        {
          v19 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
          if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 83) & 2) != 0 )
            v19 = (_QWORD *)sub_1BAB434(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
          v20 = (System_Reflection_MethodBase_o *)sub_1BAB400(v19, v19[4]);
          OverwriteAssetSoundName__PlaySystemSe(v20, 0, 0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_SkillMaster___);
          if ( Master_object )
          {
            Master_object = DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                              v18->fields.id,
                              (const MethodInfo_3163D90 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
            if ( Master_object )
            {
              SkillEntity__getSkillMessageInfo((SkillEntity_o *)Master_object, &name, &detail, v18->fields.lv, 0LL);
              v21 = name;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v22 = LocalizationManager__Get((System_String_o *)StringLiteral_8526/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
              lv = v18->fields.lv;
              v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v23, v24, v25);
              v27 = System_String__Format(v22, v26, 0LL);
              name = System_String__Concat_62059388(v21, (System_String_o *)StringLiteral_116/*" "*/, v27, 0LL);
              Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
              if ( Master_object )
              {
                CommonUI__OpenDetailLongInfoDialog(
                  (CommonUI_o *)Master_object,
                  name,
                  (System_String_o *)StringLiteral_1/*""*/,
                  detail,
                  1,
                  0,
                  0LL);
                return;
              }
            }
          }
LABEL_25:
          sub_1BAB678(Master_object, v17);
        }
      }
    }
  }
  v28 = Method_FriendIconComponent_OpenAppendSkillInfoDialog__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OpenAppendSkillInfoDialog__ + 83) & 2) != 0 )
    v28 = (_QWORD *)sub_1BAB434(Method_FriendIconComponent_OpenAppendSkillInfoDialog__);
  v29 = (System_Reflection_MethodBase_o *)sub_1BAB400(v28, v28[4]);
  OverwriteAssetSoundName__PlaySystemSe(v29, 2, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendIconComponent__OpenSkillInfoDialog(
        FriendIconComponent_o *this,
        int32_t skillIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  OtherUserGameEntity_o *userGameEntity; // x0
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v17; // x20
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  il2cpp_array_size_t max_length; // w9
  SkillInfo_o *v23; // x22
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  Il2CppObject *Entity; // x20
  DataManager_o *v27; // x19
  System_String_o *v28; // x20
  System_String_o *v29; // x21
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  System_String_o *v38; // x20
  Il2CppObject *v39; // x0
  System_String_o *v40; // x19
  _QWORD *v41; // x0
  System_Reflection_MethodBase_o *v42; // x0
  int m_CancellationTokenSource; // [xsp+8h] [xbp-48h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-44h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-38h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4AB51FC & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&skillIndex);
    sub_1BAB41C(&Method_DataManager_GetMasterData_SkillMaster___, v5);
    sub_1BAB41C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6);
    sub_1BAB41C(&Method_FriendIconComponent_OpenSkillInfoDialog__, v7);
    sub_1BAB41C(&int_TypeInfo, v8);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v9);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BAB41C(&StringLiteral_116/*" "*/, v12);
    sub_1BAB41C(&StringLiteral_8526/*"MASTER_EQSKILL_LV_TXT"*/, v13);
    sub_1BAB41C(&StringLiteral_2979/*"BATTLE_SKILLCHARGETURN"*/, v14);
    byte_4AB51FC = 1;
  }
  skillInfoList = 0LL;
  detail = 0LL;
  name = 0LL;
  userGameEntity = this->fields.userGameEntity;
  if ( !userGameEntity )
    goto LABEL_25;
  ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                        userGameEntity,
                        this->fields.classPos,
                        0,
                        this->fields.displayServantType,
                        this->fields.deckId,
                        0LL);
  if ( !ServantLeaderInfo )
    goto LABEL_25;
  v17 = ServantLeaderInfo;
  if ( !ServantLeaderInfo->fields.userSvtId )
    goto LABEL_25;
  v18 = Method_FriendIconComponent_OpenSkillInfoDialog__;
  if ( (*((_BYTE *)Method_FriendIconComponent_OpenSkillInfoDialog__ + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_1BAB434(Method_FriendIconComponent_OpenSkillInfoDialog__);
  v19 = (System_Reflection_MethodBase_o *)sub_1BAB400(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0LL);
  ServantLeaderInfo__getSkillInfo(v17, &skillInfoList, 0LL);
  if ( !skillInfoList )
    goto LABEL_25;
  max_length = skillInfoList->max_length;
  if ( (int)max_length <= skillIndex )
    goto LABEL_25;
  if ( max_length <= skillIndex )
    sub_1BAB680(v20, v21);
  v23 = skillInfoList->m_Items[skillIndex];
  if ( v23 && v23->fields.id >= 1 && v23->fields.lv >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !Instance )
      goto LABEL_29;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               v23->fields.id,
               (const MethodInfo_3163D90 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    if ( !Instance )
      goto LABEL_29;
    Instance = (DataManager_o *)SkillLvMaster__GetEntity(
                                  (SkillLvMaster_o *)Instance,
                                  v23->fields.id,
                                  v23->fields.lv,
                                  0LL);
    if ( !Entity )
      goto LABEL_29;
    v27 = Instance;
    SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &name, &detail, v23->fields.lv, 0LL);
    v28 = name;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_8526/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
    lv = v23->fields.lv;
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v30, v31, v32);
    v34 = System_String__Format(v29, v33, 0LL);
    name = System_String__Concat_62059388(v28, (System_String_o *)StringLiteral_116/*" "*/, v34, 0LL);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2979/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
    if ( !v27
      || (v38 = (System_String_o *)Instance,
          m_CancellationTokenSource = (int)v27->fields.m_CancellationTokenSource,
          v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource, v35, v36, v37),
          v40 = System_String__Format(v38, v39, 0LL),
          (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
    {
LABEL_29:
      sub_1BAB678(Instance, v25);
    }
    CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, name, v40, detail, 1, 0, 0LL);
  }
  else
  {
LABEL_25:
    v41 = Method_FriendIconComponent_OpenSkillInfoDialog__;
    if ( (*((_BYTE *)Method_FriendIconComponent_OpenSkillInfoDialog__ + 83) & 2) != 0 )
      v41 = (_QWORD *)sub_1BAB434(Method_FriendIconComponent_OpenSkillInfoDialog__);
    v42 = (System_Reflection_MethodBase_o *)sub_1BAB400(v41, v41[4]);
    OverwriteAssetSoundName__PlaySystemSe(v42, 2, 0LL);
  }
}


void __fastcall FriendIconComponent__SelectShowServantEquip(
        FriendIconComponent_o *this,
        EquipTargetInfo_o *equipInfo,
        int32_t statusKind,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x22
  ServantStatusDialog_EndDelegate_o *v10; // x23
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4AB51FE & 1) == 0 )
  {
    sub_1BAB41C(&ServantStatusDialog_EndDelegate_TypeInfo, equipInfo);
    sub_1BAB41C(&Method_FriendIconComponent_EndShowServantEquip__, v7);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4AB51FE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (ServantStatusDialog_EndDelegate_o *)sub_1BAB668(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v10,
    (Il2CppObject *)this,
    Method_FriendIconComponent_EndShowServantEquip__,
    0LL);
  if ( !Instance )
    sub_1BAB678(v11, v12);
  CommonUI__OpenServantEquipStatusDialog_30652260((CommonUI_o *)Instance, statusKind, equipInfo, v10, 0LL, 0LL);
}


void __fastcall FriendIconComponent__SerializeFieldNotNullCheck(FriendIconComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall FriendIconComponent__Set(
        FriendIconComponent_o *this,
        OtherUserGameEntity_o *userGameEntity,
        bool isUseServantStatus,
        int32_t classPos,
        int32_t displayServantType,
        int32_t ftype,
        int32_t followerDeckId,
        System_Collections_Generic_Dictionary_int__int__o *classBoardMaxNumDictionary,
        const MethodInfo *method)
{
  int32_t v13; // w25
  OtherUserGameEntity_o *v15; // x22
  FriendIconComponent_o *v16; // x19
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  Il2CppObject *v58; // x1
  struct OtherUserGameEntity_o **p_userGameEntity; // x28
  const MethodInfo *v60; // x1
  int32_t TargetDeckId; // w0
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *Entity; // x20
  ServantLeaderInfo_o *ServantLeaderInfo; // x0
  ServantLeaderInfo_o *v65; // x23
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v67; // x25
  __int64 v68; // x26
  System_String_o *overwriteServantName; // x25
  Il2CppObject *v70; // x0
  __int64 v71; // x26
  __int64 v72; // x27
  ServantLimitImageMaster_o *v73; // x25
  int32_t ServantLimitCountSealAfter; // w0
  FriendIconComponent_o *v75; // x25
  FriendIconComponent_o *v76; // x1
  UIRangeLabel_o *servantNameLabel; // x25
  UIRangeLabel_o *svtNpTitleLabel; // x25
  UnityEngine_Object_o *svtNpCommandCard; // x20
  int32_t TreasureDeviceLevelIcon; // w20
  long double v81; // q0
  __int64 v82; // x8
  __int64 v83; // x0
  Il2CppObject *v84; // x26
  int32_t FriendNpNameDispLimitCount; // w27
  OtherUserGameEntity_o *v86; // x25
  System_Collections_Generic_Dictionary_int__int__o *v87; // x22
  Il2CppObject *v88; // x0
  __int64 v89; // x20
  __int64 v90; // x29
  ServantLimitImageMaster_o *v91; // x28
  int32_t v92; // w27
  System_String_o *OverwriteTDName; // x0
  System_String_o **v94; // x9
  Il2CppObject *v95; // x25
  System_String_o *v96; // x20
  System_String_o *v97; // x0
  FriendIconComponent_o *v98; // x25
  UIRangeLabel_o *v99; // x26
  UnityEngine_Object_o *v100; // x20
  UILabel_o *loginDataLabel; // x25
  int64_t UpdatedAt; // x20
  UnityEngine_Object_o *switchSkillInfo; // x20
  __int64 v104; // x25
  __int64 v105; // x26
  struct SkillIconComponent_array *skillIconList; // x8
  __int64 v107; // x8
  int v108; // w9
  unsigned __int64 v109; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v111; // x14
  struct SkillIconComponent_array *v112; // x8
  __int64 v113; // x20
  unsigned __int64 v114; // x24
  struct UnityEngine_GameObject_array *v115; // x8
  UnityEngine_Object_o *v116; // x25
  struct UnityEngine_GameObject_array *v117; // x8
  UnityEngine_Object_o *v118; // x20
  const MethodInfo *v119; // x2
  signed __int64 v120; // x20
  __int64 v121; // x24
  struct UnityEngine_GameObject_array *skillBaseList; // x8
  unsigned __int64 v123; // x26
  UnityEngine_Object_o *v124; // x25
  struct UnityEngine_GameObject_array *v125; // x9
  int32_t *v126; // x25
  struct SkillIconComponent_array *v127; // x8
  struct UIIconLabel_array *skillLevelIconLabelList; // x8
  struct UnityEngine_GameObject_array *v129; // x8
  struct SkillIconComponent_array *v130; // x8
  __int64 v131; // x9
  UnityEngine_Object_o *skillInfoUiWidget; // x20
  char v133; // w2
  int32_t v134; // w3
  __int64 v135; // x8
  _QWORD *v136; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v138; // x8
  UnityEngine_Object_o *svtCommandCardList; // x20
  ServantCommandCardListComponent_o *v140; // x25
  __int64 v141; // x26
  __int64 v142; // x27
  int32_t v143; // w0
  System_Int32_array *commandCardParam; // x26
  int32_t v145; // w27
  int32_t Kind_38072636; // w25
  System_String_o *SupportBgImage; // x0
  UISprite_o *baseSpr; // x27
  System_String_o *v149; // x26
  UnityEngine_Object_o *gradeIcon; // x20
  UnityEngine_Object_o *trueTypeFont; // x20
  UILabel_o *playerNameLabel; // x26
  float v153; // s0
  float v154; // s8
  float v155; // s0
  float v156; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  float v159; // s10
  UnityEngine_GameObject_o *v160; // x0
  UnityEngine_GameObject_o *v161; // x0
  __int64 v162; // x24
  __int64 v163; // x25
  Il2CppObject *v164; // x0
  __int64 v165; // x20
  __int64 v166; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v167; // x23
  int32_t v168; // w23
  struct ClassBoardInfo_array *userClassBoardInfo; // x20
  int v170; // w8
  int32_t v171; // w22
  unsigned int v172; // w25
  ClassBoardInfo_o *v173; // x24
  int v174; // w22
  _BOOL4 v175; // w23
  UnityEngine_Object_o *openClassBoardNumLabel; // x20
  __int64 v177; // x2
  __int64 v178; // x3
  __int64 v179; // x4
  Il2CppObject **v180; // x8
  Il2CppObject *v181; // x20
  Il2CppObject *v182; // x0
  UnityEngine_Object_o *classBoardOpenButton; // x20
  UnityEngine_GameObject_o *v184; // x20
  BalanceConfig_c *v185; // x8
  UISprite_o *classBoardBackSprite; // x20
  UnityEngine_GameObject_o *v187; // x0
  UnityEngine_GameObject_o *v188; // x0
  UnityEngine_GameObject_o *v189; // x0
  UnityEngine_Object_o *v190; // x20
  UnityEngine_Object_o *baseButton; // x20
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v193; // x1
  System_Collections_Generic_IEnumerator_T__o *v194; // x24
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v196; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v199; // x8
  __int64 v200; // x9
  int *v201; // x10
  __int64 v202; // x0
  __int64 v203; // x0
  __int64 v204; // x25
  __int64 methodPtr_low; // x9
  Il2CppObject *Master_object; // x0
  __int64 v207; // x1
  ClassBoardSquareEntity_array *OtherThanNoneEntity; // x0
  __int64 v209; // x1
  System_Collections_Generic_IEnumerator_T__c *v210; // x8
  __int64 v211; // x9
  int *v212; // x10
  __int64 v213; // x0
  struct System_Int32_array *squareIds; // x8
  int v215; // [xsp+14h] [xbp-9Ch]
  ServantEntity_o *v216; // [xsp+18h] [xbp-98h]
  int v217; // [xsp+24h] [xbp-8Ch] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-88h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+38h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v220; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v221; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v222; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v223; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v224; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v225; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v226; // 0:x0.16

  v13 = classPos;
  v15 = userGameEntity;
  v16 = this;
  if ( (byte_4AB51F8 & 1) == 0 )
  {
    sub_1BAB41C(&AtlasManager_TypeInfo, userGameEntity);
    sub_1BAB41C(&BalanceConfig_TypeInfo, v17);
    sub_1BAB41C(&ClassBoardBaseEntity_TypeInfo, v18);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v19);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, v20);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___, v21);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantMaster___, v22);
    sub_1BAB41C(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v23);
    sub_1BAB41C(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v24);
    sub_1BAB41C(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v25);
    sub_1BAB41C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v26);
    sub_1BAB41C(&Method_DataManager_GetMaster_ServantMaster___, v27);
    sub_1BAB41C(&DataManager_TypeInfo, v28);
    sub_1BAB41C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v29);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v30);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v31);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v32);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v33);
    sub_1BAB41C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v34);
    sub_1BAB41C(&UnityEngine_Font_TypeInfo, v35);
    sub_1BAB41C(&Grade_TypeInfo, v36);
    sub_1BAB41C(&System_IDisposable_TypeInfo, v37);
    sub_1BAB41C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v38);
    sub_1BAB41C(&System_Collections_IEnumerator_TypeInfo, v39);
    sub_1BAB41C(&int_TypeInfo, v40);
    sub_1BAB41C(&Method_System_Collections_Generic_List_UIWidget__Add__, v41);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v42);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v43);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v44);
    sub_1BAB41C(&OptionManager_TypeInfo, v45);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v46);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__, v47);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v48);
    sub_1BAB41C(&StringLiteral_3770/*"COMMON_NO_ENTRY"*/, v49);
    sub_1BAB41C(&StringLiteral_6772/*"Fonts/FGO-Main-Font"*/, v50);
    sub_1BAB41C(&StringLiteral_6370/*"FFFFFF"*/, v51);
    sub_1BAB41C(&StringLiteral_17515/*"btn_bg_29_2"*/, v52);
    sub_1BAB41C(&StringLiteral_9333/*"NP_MAX_COLOR_NAME"*/, v53);
    sub_1BAB41C(&StringLiteral_6369/*"FFFF00"*/, v54);
    sub_1BAB41C(&StringLiteral_9303/*"NO_ENTRY_NAME"*/, v55);
    sub_1BAB41C(&StringLiteral_9327/*"NP_COLOR_NAME"*/, v56);
    this = (FriendIconComponent_o *)sub_1BAB41C(&StringLiteral_16057/*"[{0}]+{1}[-]"*/, v57);
    byte_4AB51F8 = 1;
  }
  if ( isUseServantStatus )
    v58 = (Il2CppObject *)v15;
  else
    v58 = 0LL;
  tdInfo = 0LL;
  skillInfoList = 0LL;
  if ( !v16 )
    goto LABEL_113;
  p_userGameEntity = &v16->fields.userGameEntity;
  v16->fields.userGameEntity = (struct OtherUserGameEntity_o *)v58;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&v16->fields.userGameEntity,
    (int32_t)v58,
    isUseServantStatus,
    classPos);
  v16->fields.classPos = v13;
  v16->fields.displayServantType = displayServantType;
  v16->fields.followerType = ftype;
  if ( v15 )
  {
    if ( !followerDeckId )
    {
      TargetDeckId = FriendIconComponent__GetTargetDeckId(v16, v60);
      v13 = v16->fields.classPos;
      displayServantType = v16->fields.displayServantType;
      followerDeckId = TargetDeckId;
    }
    v16->fields.deckId = followerDeckId;
    if ( OtherUserGameEntity__getSvtId(v15, v13, displayServantType, followerDeckId, 0LL) )
    {
      this = (FriendIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_113;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantMaster___);
      this = (FriendIconComponent_o *)OtherUserGameEntity__getSvtId(
                                        v15,
                                        v16->fields.classPos,
                                        v16->fields.displayServantType,
                                        v16->fields.deckId,
                                        0LL);
      if ( !MasterData_object )
        goto LABEL_113;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 (int32_t)this,
                 (const MethodInfo_3163D90 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    }
    else
    {
      Entity = 0LL;
    }
    ServantLeaderInfo = OtherUserGameEntity__getServantLeaderInfo(
                          v15,
                          v16->fields.classPos,
                          1,
                          v16->fields.displayServantType,
                          v16->fields.deckId,
                          0LL);
    v65 = ServantLeaderInfo;
    if ( ServantLeaderInfo )
    {
      if ( !ServantLeaderInfo->fields.userSvtId )
      {
        equipTarget1 = ServantLeaderInfo->fields.equipTarget1;
        if ( equipTarget1 )
        {
          v68 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
          v67 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v220.fields.currentCryptoKey = v68;
          *(_QWORD *)&v220.fields.fakeValue = v67;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v220, 0LL) )
            v65 = 0LL;
        }
      }
    }
    this = (FriendIconComponent_o *)v16->fields.servantFaceIcon;
    if ( this )
    {
      ServantFaceIconComponent__Set_38605024((ServantFaceIconComponent_o *)this, v65, 0LL, 0LL, 0, 0, 0LL);
      this = (FriendIconComponent_o *)v16->fields.playerNameLabel;
      if ( this )
      {
        UILabel__set_text((UILabel_o *)this, v15->fields.userName, 0LL);
        this = (FriendIconComponent_o *)v16->fields.playerLevelIconLabel;
        if ( this )
        {
          UIIconLabel__Set_38616660((UIIconLabel_o *)this, 2, v15->fields.userLv, 0, 0, 0LL, 0, 0, 0, 0LL);
          v216 = (ServantEntity_o *)Entity;
          if ( !Entity )
          {
            servantNameLabel = v16->fields.servantNameLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (FriendIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3770/*"COMMON_NO_ENTRY"*/, 0LL);
            if ( !servantNameLabel )
              goto LABEL_113;
            UIRangeLabel__Set(servantNameLabel, (System_String_o *)this, 0LL, 1, 0, 0LL);
            svtNpTitleLabel = v16->fields.svtNpTitleLabel;
            this = (FriendIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9303/*"NO_ENTRY_NAME"*/, 0LL);
            if ( !svtNpTitleLabel )
              goto LABEL_113;
            UIRangeLabel__Set(svtNpTitleLabel, (System_String_o *)this, 0LL, 1, 0, 0LL);
            svtNpCommandCard = (UnityEngine_Object_o *)v16->fields.svtNpCommandCard;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(svtNpCommandCard, 0LL, 0LL) )
            {
              this = (FriendIconComponent_o *)v16->fields.svtNpCommandCard;
              if ( !this )
                goto LABEL_113;
              ServantNpCommandCardComponent__Clear((ServantNpCommandCardComponent_o *)this, 0LL);
            }
LABEL_76:
            loginDataLabel = v16->fields.loginDataLabel;
            UpdatedAt = OtherUserGameEntity__getUpdatedAt(v15, v16->fields.classPos, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            this = (FriendIconComponent_o *)LocalizationManager__GetBeforeTime(UpdatedAt, 0LL);
            if ( !loginDataLabel )
              goto LABEL_113;
            UILabel__set_text(loginDataLabel, (System_String_o *)this, 0LL);
            switchSkillInfo = (UnityEngine_Object_o *)v16->fields.switchSkillInfo;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(switchSkillInfo, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = (FriendIconComponent_o *)v16->fields.switchSkillInfo;
              if ( !this )
                goto LABEL_113;
              SwitchUIWidgetComponent__Clear((SwitchUIWidgetComponent_o *)this, 0LL);
              this = (FriendIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
              if ( !this )
                goto LABEL_113;
              SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)this, 0LL);
            }
            if ( !v65 )
              goto LABEL_100;
            v105 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
            v104 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v223.fields.currentCryptoKey = v105;
            *(_QWORD *)&v223.fields.fakeValue = v104;
            this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
                                              v223,
                                              0LL);
            if ( (int)this >= 1 )
            {
              ServantLeaderInfo__getSkillInfo(v65, &skillInfoList, 0LL);
              skillIconList = v16->fields.skillIconList;
              if ( !skillIconList )
                goto LABEL_113;
              v107 = *(_QWORD *)&skillIconList->max_length;
              if ( v107 << 32 >= 1 )
              {
                v108 = 0;
                v109 = 0LL;
                while ( skillInfoList )
                {
                  max_length = skillInfoList->max_length;
                  if ( (__int64)v109 < (int)max_length )
                  {
                    if ( v109 >= max_length )
                      goto LABEL_298;
                    v111 = skillInfoList->m_Items[v109];
                    if ( v111 && v111->fields.id >= 1 )
                      v108 = v109 + 1;
                  }
                  if ( (__int64)++v109 >= (int)v107 )
                    goto LABEL_121;
                }
                goto LABEL_113;
              }
              v108 = 0;
LABEL_121:
              if ( (int)v107 >= 1 )
              {
                v120 = v108;
                v121 = 4LL;
                do
                {
                  skillBaseList = v16->fields.skillBaseList;
                  if ( !skillBaseList )
                    goto LABEL_113;
                  v123 = v121 - 4;
                  if ( v121 - 4 >= (unsigned __int64)skillBaseList->max_length )
                    goto LABEL_298;
                  v124 = (UnityEngine_Object_o *)*((_QWORD *)&skillBaseList->obj.klass + v121);
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(v124, 0LL, 0LL);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    if ( (__int64)v123 >= v120 )
                    {
                      v129 = v16->fields.skillBaseList;
                      if ( !v129 )
                        goto LABEL_113;
                      if ( v123 >= v129->max_length )
                        goto LABEL_298;
                      this = (FriendIconComponent_o *)*((_QWORD *)&v129->obj.klass + v121);
                      if ( !this )
                        goto LABEL_113;
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                    }
                    else
                    {
                      if ( !skillInfoList )
                        goto LABEL_113;
                      if ( v123 >= skillInfoList->max_length )
                        goto LABEL_298;
                      v125 = v16->fields.skillBaseList;
                      if ( !v125 )
                        goto LABEL_113;
                      if ( v123 >= v125->max_length )
                        goto LABEL_298;
                      this = (FriendIconComponent_o *)*((_QWORD *)&v125->obj.klass + v121);
                      if ( !this )
                        goto LABEL_113;
                      v126 = (int32_t *)*((_QWORD *)&skillInfoList->obj.klass + v121);
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                      v127 = v16->fields.skillIconList;
                      if ( !v127 )
                        goto LABEL_113;
                      if ( v123 >= v127->max_length )
                        goto LABEL_298;
                      if ( !v126 )
                        goto LABEL_113;
                      this = (FriendIconComponent_o *)*((_QWORD *)&v127->obj.klass + v121);
                      if ( !this )
                        goto LABEL_113;
                      SkillIconComponent__Set_38615856(
                        (SkillIconComponent_o *)this,
                        v126[4],
                        v126[5],
                        v126[12],
                        v126[13],
                        0LL);
                      skillLevelIconLabelList = v16->fields.skillLevelIconLabelList;
                      if ( !skillLevelIconLabelList )
                        goto LABEL_113;
                      if ( v123 >= skillLevelIconLabelList->max_length )
                        goto LABEL_298;
                      this = (FriendIconComponent_o *)*((_QWORD *)&skillLevelIconLabelList->obj.klass + v121);
                      if ( !this )
                        goto LABEL_113;
                      UIIconLabel__Set_38616660((UIIconLabel_o *)this, 48, v126[5], 0, 0, 0LL, 0, 0, 0, 0LL);
                    }
                  }
                  v130 = v16->fields.skillIconList;
                  if ( !v130 )
                    goto LABEL_113;
                  v131 = v121 - 3;
                  ++v121;
                }
                while ( v131 < (int)v130->max_length );
              }
              skillInfoUiWidget = (UnityEngine_Object_o *)v16->fields.skillInfoUiWidget;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0LL, 0LL) )
              {
                this = (FriendIconComponent_o *)v16->fields.skillInfoUiWidget;
                if ( !this )
                  goto LABEL_113;
                this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
                if ( !this )
                  goto LABEL_113;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                this = (FriendIconComponent_o *)v16->fields.switchSkillUIList;
                if ( !this )
                  goto LABEL_113;
                v58 = (Il2CppObject *)v16->fields.skillInfoUiWidget;
                v135 = *(_QWORD *)&this->fields.m_CachedPtr;
                v136 = Method_System_Collections_Generic_List_UIWidget__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v135 )
                  goto LABEL_113;
                m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v135 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    v58,
                    *(const MethodInfo_354D8BC **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
                }
                else
                {
                  v138 = v135 + 8 * m_CancellationTokenSource_low;
                  LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v138 + 32) = v58;
                  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v138 + 32), (int32_t)v58, v133, v134);
                }
              }
            }
            else
            {
LABEL_100:
              v112 = v16->fields.skillIconList;
              if ( !v112 )
                goto LABEL_113;
              v113 = 4LL;
              while ( 1 )
              {
                v114 = v113 - 4;
                if ( v113 - 4 >= (int)v112->max_length )
                  break;
                v115 = v16->fields.skillBaseList;
                if ( !v115 )
                  goto LABEL_113;
                if ( v114 >= v115->max_length )
                  goto LABEL_298;
                v116 = (UnityEngine_Object_o *)*((_QWORD *)&v115->obj.klass + v113);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(v116, 0LL, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  v117 = v16->fields.skillBaseList;
                  if ( !v117 )
                    goto LABEL_113;
                  if ( v114 >= v117->max_length )
LABEL_298:
                    sub_1BAB680(this, v58);
                  this = (FriendIconComponent_o *)*((_QWORD *)&v117->obj.klass + v113);
                  if ( !this )
                    goto LABEL_113;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                }
                v112 = v16->fields.skillIconList;
                ++v113;
                if ( !v112 )
                  goto LABEL_113;
              }
              v118 = (UnityEngine_Object_o *)v16->fields.skillInfoUiWidget;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v118, 0LL, 0LL) )
              {
                this = (FriendIconComponent_o *)v16->fields.skillInfoUiWidget;
                if ( !this )
                  goto LABEL_113;
                this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
                if ( !this )
                  goto LABEL_113;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              }
            }
            FriendIconComponent__SetAppendSkill(v16, v65, v119);
            svtCommandCardList = (UnityEngine_Object_o *)v16->fields.svtCommandCardList;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            this = (FriendIconComponent_o *)UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v140 = v16->fields.svtCommandCardList;
              if ( v65 )
              {
                v142 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
                v141 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v224.fields.currentCryptoKey = v142;
                *(_QWORD *)&v224.fields.fakeValue = v141;
                v143 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v224, 0LL);
                commandCardParam = v65->fields.commandCardParam;
                v145 = v143;
                this = (FriendIconComponent_o *)ServantLeaderInfo__getCommandCodeIdList(v65, 0LL);
                if ( !v140 )
                  goto LABEL_113;
                ServantCommandCardListComponent__Set_38594276(
                  v140,
                  v145,
                  commandCardParam,
                  (System_Int32_array *)this,
                  2,
                  1,
                  0LL);
              }
              else
              {
                if ( !v140 )
                  goto LABEL_113;
                ServantCommandCardListComponent__Clear(v16->fields.svtCommandCardList, 0LL);
              }
            }
            if ( !Grade_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
            Kind_38072636 = Grade__GetKind_38072636(v15, 0LL);
            SupportBgImage = Grade__GetSupportBgImage(Kind_38072636, 0LL);
            baseSpr = v16->fields.baseSpr;
            v149 = SupportBgImage;
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            AtlasManager__SetGradeIcon(baseSpr, v149, 0LL);
            gradeIcon = (UnityEngine_Object_o *)v16->fields.gradeIcon;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(gradeIcon, 0LL, 0LL) )
            {
              this = (FriendIconComponent_o *)v16->fields.playerNameLabel;
              if ( !this )
                goto LABEL_113;
              trueTypeFont = (UnityEngine_Object_o *)UILabel__get_trueTypeFont((UILabel_o *)this, 0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Equality(trueTypeFont, 0LL, 0LL) )
              {
                playerNameLabel = v16->fields.playerNameLabel;
                this = (FriendIconComponent_o *)UnityEngine_Resources__Load((System_String_o *)StringLiteral_6772/*"Fonts/FGO-Main-Font"*/, 0LL);
                if ( !playerNameLabel )
                  goto LABEL_113;
                if ( this && (UnityEngine_Font_c *)this->klass != UnityEngine_Font_TypeInfo )
                {
                  sub_1BAB938(this);
                  goto LABEL_304;
                }
                UILabel__set_trueTypeFont(playerNameLabel, (UnityEngine_Font_o *)this, 0LL);
              }
              this = (FriendIconComponent_o *)v16->fields.playerNameLabel;
              if ( !this )
                goto LABEL_113;
              LODWORD(v153) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)this, 0LL);
              this = (FriendIconComponent_o *)v16->fields.gradeIcon;
              if ( !this )
                goto LABEL_113;
              v154 = v153;
              LODWORD(v155) = *(_QWORD *)&UserGradeComponent__GetGradeLocalSize((UserGradeComponent_o *)this, 0LL);
              this = (FriendIconComponent_o *)v16->fields.playerNameLabel;
              if ( !this )
                goto LABEL_113;
              v156 = v155;
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
              this = (FriendIconComponent_o *)v16->fields.gradeIcon;
              if ( !this )
                goto LABEL_113;
              v159 = LocalPositionX;
              v160 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              GameObjectExtensions__SetLocalPositionX(v160, (float)(v156 * 0.5) + (float)(v154 + v159), 0LL);
              this = (FriendIconComponent_o *)v16->fields.gradeIcon;
              if ( !this )
                goto LABEL_113;
              v161 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              GameObjectExtensions__SetLocalPositionY(v161, 57.0, 0LL);
              this = (FriendIconComponent_o *)v16->fields.gradeIcon;
              if ( !this )
                goto LABEL_113;
              UserGradeComponent__Set((UserGradeComponent_o *)this, Kind_38072636, 0LL);
            }
            this = (FriendIconComponent_o *)v16->fields.pushSprite;
            if ( !this )
              goto LABEL_113;
            this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( !this )
              goto LABEL_113;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            if ( v216 )
            {
              if ( !v65 )
                goto LABEL_113;
              if ( v15->fields.pushUserSvtId == v65->fields.userSvtId )
              {
                this = (FriendIconComponent_o *)v16->fields.pushSprite;
                if ( !this )
                  goto LABEL_113;
                this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
                if ( !this )
                  goto LABEL_113;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              }
            }
            else if ( !v65 )
            {
              goto LABEL_246;
            }
            v163 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
            v162 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v225.fields.currentCryptoKey = v163;
            *(_QWORD *)&v225.fields.fakeValue = v162;
            if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v225, 0LL) >= 1
              && v15->fields.userClassBoardInfo )
            {
              if ( classBoardMaxNumDictionary )
                goto LABEL_204;
              classBoardMaxNumDictionary = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BAB668(System_Collections_Generic_Dictionary_int__int__TypeInfo);
              System_Collections_Generic_Dictionary_int__int____ctor(
                classBoardMaxNumDictionary,
                (const MethodInfo_31AD800 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (FriendIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
              if ( !this )
                goto LABEL_113;
              this = (FriendIconComponent_o *)this->fields.servantFaceIcon;
              if ( !this )
                goto LABEL_113;
              Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                             (System_Collections_ObjectModel_Collection_T__o *)this,
                             (const MethodInfo_3100938 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
              v194 = Enumerator;
              if ( Enumerator )
              {
                while ( 1 )
                {
                  klass = v194->klass;
                  v196 = *(unsigned __int16 *)(&v194->klass->_2.bitflags2 + 3);
                  if ( *(_WORD *)(&v194->klass->_2.bitflags2 + 3) )
                  {
                    p_offset = &klass->_1.interfaceOffsets->offset;
                    while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
                    {
                      --v196;
                      p_offset += 4;
                      if ( !v196 )
                        goto LABEL_267;
                    }
                    p_method = (__int64)&klass->vtable[*p_offset].method;
                  }
                  else
                  {
LABEL_267:
                    p_method = sub_1BFD3FC(v194, System_Collections_IEnumerator_TypeInfo, 0LL);
                  }
                  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                          v194,
                          *(_QWORD *)(p_method + 8)) & 1) == 0 )
                    break;
                  v199 = v194->klass;
                  v200 = *(unsigned __int16 *)(&v194->klass->_2.bitflags2 + 3);
                  if ( *(_WORD *)(&v194->klass->_2.bitflags2 + 3) )
                  {
                    v201 = &v199->_1.interfaceOffsets->offset;
                    while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v201 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
                    {
                      --v200;
                      v201 += 4;
                      if ( !v200 )
                        goto LABEL_274;
                    }
                    v202 = (__int64)&v199->vtable[*v201].method;
                  }
                  else
                  {
LABEL_274:
                    v202 = sub_1BFD3FC(v194, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
                  }
                  v203 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v202)(
                           v194,
                           *(_QWORD *)(v202 + 8));
                  v204 = v203;
                  if ( v203 )
                  {
                    methodPtr_low = LOBYTE(ClassBoardBaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
                    if ( *(unsigned __int8 *)(*(_QWORD *)v203 + 304LL) < (unsigned int)methodPtr_low
                      || *(ClassBoardBaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v203 + 200LL) + 8 * methodPtr_low - 8) != ClassBoardBaseEntity_TypeInfo )
                    {
                      sub_1BAB938(v203);
LABEL_300:
                      sub_1BAB678(Master_object, v207);
                    }
                  }
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
                  if ( !v204 )
                    goto LABEL_300;
                  if ( !Master_object )
                    sub_1BAB678(0LL, v207);
                  OtherThanNoneEntity = ClassBoardSquareMaster__GetOtherThanNoneEntity(
                                          (ClassBoardSquareMaster_o *)Master_object,
                                          *(_DWORD *)(v204 + 16),
                                          0LL);
                  if ( OtherThanNoneEntity )
                  {
                    if ( !classBoardMaxNumDictionary )
                      sub_1BAB678(OtherThanNoneEntity, v209);
                    System_Collections_Generic_Dictionary_int__int___Add(
                      classBoardMaxNumDictionary,
                      *(_DWORD *)(v204 + 16),
                      OtherThanNoneEntity->max_length,
                      (const MethodInfo_31AE1C4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
                  }
                }
                if ( v194 )
                {
                  v210 = v194->klass;
                  v211 = *(unsigned __int16 *)(&v194->klass->_2.bitflags2 + 3);
                  if ( *(_WORD *)(&v194->klass->_2.bitflags2 + 3) )
                  {
                    v212 = &v210->_1.interfaceOffsets->offset;
                    while ( *((System_IDisposable_c **)v212 - 1) != System_IDisposable_TypeInfo )
                    {
                      --v211;
                      v212 += 4;
                      if ( !v211 )
                        goto LABEL_291;
                    }
                    v213 = (__int64)&v210->vtable[*v212].method;
                  }
                  else
                  {
LABEL_291:
                    v213 = sub_1BFD3FC(v194, System_IDisposable_TypeInfo, 0LL);
                  }
                  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v213)(
                    v194,
                    *(_QWORD *)(v213 + 8));
                }
LABEL_204:
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                v164 = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ServantMaster___);
                v165 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
                v166 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
                v167 = (DataMasterBase_TMaster__TEntity__PKType__o *)v164;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v226.fields.currentCryptoKey = v165;
                *(_QWORD *)&v226.fields.fakeValue = v166;
                this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
                                                  v226,
                                                  0LL);
                if ( !v167 )
                  goto LABEL_113;
                this = (FriendIconComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                  v167,
                                                  (int32_t)this,
                                                  (const MethodInfo_3163D90 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                if ( !this )
                  goto LABEL_113;
                v168 = (int32_t)this->fields.loginDataLabel;
                this = (FriendIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
                if ( !this )
                  goto LABEL_113;
                this = (FriendIconComponent_o *)ClassBoardClassMaster__GetClassBoardBaseId(
                                                  (ClassBoardClassMaster_o *)this,
                                                  v168,
                                                  0LL);
                userClassBoardInfo = v15->fields.userClassBoardInfo;
                if ( !userClassBoardInfo )
                  goto LABEL_113;
                v170 = userClassBoardInfo->max_length;
                if ( v170 < 1 )
                {
LABEL_221:
                  v174 = 0;
                }
                else
                {
                  v171 = (int)this;
                  v172 = 0;
                  while ( 1 )
                  {
                    if ( v172 >= v170 )
                      goto LABEL_298;
                    v173 = userClassBoardInfo->m_Items[v172];
                    if ( !v173 )
                      goto LABEL_113;
                    if ( v173->fields.classBoardBaseId == v171 )
                    {
                      if ( !classBoardMaxNumDictionary )
                        goto LABEL_113;
                      this = (FriendIconComponent_o *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                                                        classBoardMaxNumDictionary,
                                                        v171,
                                                        (const MethodInfo_31AE3B0 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                      if ( ((unsigned __int8)this & 1) != 0 )
                      {
                        this = (FriendIconComponent_o *)ClassBoardInfo__IsReleasedClassId(v173, v168, 0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                          break;
                      }
                    }
                    v170 = userClassBoardInfo->max_length;
                    if ( (int)++v172 >= v170 )
                      goto LABEL_221;
                  }
                  this = (FriendIconComponent_o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                    classBoardMaxNumDictionary,
                                                    v171,
                                                    (const MethodInfo_31AE128 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
                  squareIds = v173->fields.squareIds;
                  if ( !squareIds )
                    goto LABEL_113;
                  v174 = squareIds->max_length;
                  v175 = (int)this > v174;
                  if ( (int)this > 0 )
                    goto LABEL_223;
                }
                v175 = 1;
LABEL_223:
                openClassBoardNumLabel = (UnityEngine_Object_o *)v16->fields.openClassBoardNumLabel;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(openClassBoardNumLabel, 0LL, 0LL) )
                {
                  v180 = (Il2CppObject **)&StringLiteral_6370/*"FFFFFF"*/;
                  if ( !v175 )
                    v180 = (Il2CppObject **)&StringLiteral_6369/*"FFFF00"*/;
                  v181 = *v180;
                  v217 = v174;
                  v182 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v217, v177, v178, v179);
                  this = (FriendIconComponent_o *)System_String__Format_62062500(
                                                    (System_String_o *)StringLiteral_16057/*"[{0}]+{1}[-]"*/,
                                                    v181,
                                                    v182,
                                                    0LL);
                  if ( !v16->fields.openClassBoardNumLabel )
                    goto LABEL_113;
                  UILabel__set_text(v16->fields.openClassBoardNumLabel, (System_String_o *)this, 0LL);
                }
                classBoardOpenButton = (UnityEngine_Object_o *)v16->fields.classBoardOpenButton;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(classBoardOpenButton, 0LL, 0LL) )
                {
                  this = (FriendIconComponent_o *)v16->fields.classBoardOpenButton;
                  if ( !this )
                    goto LABEL_113;
                  this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
                  if ( !this )
                    goto LABEL_113;
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                  if ( ConstantMaster__IsFLAG20240804(0LL) )
                  {
                    this = (FriendIconComponent_o *)v16->fields.classBoardOpenButton;
                    if ( !this )
                      goto LABEL_113;
                    v184 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    v185 = BalanceConfig_TypeInfo;
                    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                      v185 = BalanceConfig_TypeInfo;
                    }
                    GameObjectExtensions__SetLocalPosition_34019596(
                      v184,
                      v185->static_fields->CLASS_BOARD_BUTTON_POS,
                      0LL);
                    classBoardBackSprite = v16->fields.classBoardBackSprite;
                    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                    AtlasManager__SetDownloadCommonSprite(
                      classBoardBackSprite,
                      (System_String_o *)StringLiteral_17515/*"btn_bg_29_2"*/,
                      0LL);
                    this = (FriendIconComponent_o *)v16->fields.classBoardBackSprite;
                    if ( !this )
                      goto LABEL_113;
                    ((void (__fastcall *)(FriendIconComponent_o *, void *))this->klass[2]._1.typeMetadataHandle)(
                      this,
                      this->klass[2]._1.interopData);
                    this = (FriendIconComponent_o *)v16->fields.classBoardLabel;
                    if ( !this )
                      goto LABEL_113;
                    v187 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    GameObjectExtensions__SetLocalPosition_34019596(
                      v187,
                      BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_LABEL_POS,
                      0LL);
                    this = (FriendIconComponent_o *)v16->fields.classBoardLabel;
                    if ( !this )
                      goto LABEL_113;
                    v188 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    GameObjectExtensions__SetLocalScaleX(
                      v188,
                      BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_LABEL_SCALE_X,
                      0LL);
                    this = (FriendIconComponent_o *)v16->fields.openClassBoardNumLabel;
                    if ( !this )
                      goto LABEL_113;
                    v189 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                    GameObjectExtensions__SetLocalPositionY(
                      v189,
                      (float)BalanceConfig_TypeInfo->static_fields->CLASS_BOARD_NUM_LABEL_POS_Y,
                      0LL);
                  }
                }
                goto LABEL_252;
              }
LABEL_304:
              sub_1BAB678(Enumerator, v193);
            }
LABEL_246:
            v190 = (UnityEngine_Object_o *)v16->fields.classBoardOpenButton;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v190, 0LL, 0LL) )
            {
              this = (FriendIconComponent_o *)v16->fields.classBoardOpenButton;
              if ( !this )
                goto LABEL_113;
              this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
              if ( !this )
                goto LABEL_113;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            }
            goto LABEL_252;
          }
          if ( !v65 )
            goto LABEL_113;
          overwriteServantName = v65->fields.overwriteServantName;
          if ( System_String__IsNullOrEmpty(overwriteServantName, 0LL) )
          {
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v70 = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
            v72 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
            v71 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
            v73 = (ServantLimitImageMaster_o *)v70;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v221.fields.currentCryptoKey = v72;
            *(_QWORD *)&v221.fields.fakeValue = v71;
            this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
                                              v221,
                                              0LL);
            if ( !v73 )
              goto LABEL_113;
            ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                           v73,
                                           (int32_t)this,
                                           v65->fields.limitCount,
                                           0LL);
            v75 = (FriendIconComponent_o *)v16->fields.servantNameLabel;
            this = (FriendIconComponent_o *)ServantEntity__getName(
                                              (ServantEntity_o *)Entity,
                                              ServantLimitCountSealAfter,
                                              -1,
                                              0LL);
            if ( !v75 )
              goto LABEL_113;
            v76 = this;
            this = v75;
          }
          else
          {
            this = (FriendIconComponent_o *)v16->fields.servantNameLabel;
            if ( !this )
              goto LABEL_113;
            v76 = (FriendIconComponent_o *)overwriteServantName;
          }
          UIRangeLabel__Set((UIRangeLabel_o *)this, (System_String_o *)v76, 0LL, 1, 0, 0LL);
          OtherUserGameEntity__getTreasureDeviceInfo(
            v15,
            &tdInfo,
            v16->fields.classPos,
            v16->fields.displayServantType,
            v16->fields.deckId,
            0LL);
          TreasureDeviceLevelIcon = OtherUserGameEntity__getTreasureDeviceLevelIcon(
                                      v15,
                                      v16->fields.classPos,
                                      v16->fields.displayServantType,
                                      v16->fields.deckId,
                                      0LL);
          v82 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
          if ( (*(_BYTE *)(v82 + 309) & 1) == 0 )
            v82 = sub_1BFD2F8(v81);
          v83 = *(_QWORD *)(*(_QWORD *)(v82 + 192) + 16LL);
          if ( (*(_BYTE *)(v83 + 309) & 1) == 0 )
            v83 = sub_1BFD2F8(v81);
          this = **(FriendIconComponent_o ***)(v83 + 184);
          if ( this )
          {
            v84 = DataManager__GetMasterData_object_(
                    (DataManager_o *)this,
                    (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
            FriendNpNameDispLimitCount = ServantLeaderInfo__GetFriendNpNameDispLimitCount(v65, 0LL);
            if ( !OptionManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
            v215 = TreasureDeviceLevelIcon;
            if ( OptionManager__GetSpoilerSetting(0LL) )
            {
              v86 = v15;
            }
            else
            {
              this = (FriendIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_113;
              this = (FriendIconComponent_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantLimitSpoilerProtectionMaster___);
              if ( !this )
                goto LABEL_113;
              v86 = v15;
              FriendNpNameDispLimitCount = ServantLimitSpoilerProtectionMaster__ChangeLimitCountBySpoilerProtection(
                                             (ServantLimitSpoilerProtectionMaster_o *)this,
                                             v65->fields.svtId,
                                             FriendNpNameDispLimitCount,
                                             0LL);
            }
            v87 = classBoardMaxNumDictionary;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v88 = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
            v89 = *(_QWORD *)&v65->fields.svtId.fields.currentCryptoKey;
            v90 = *(_QWORD *)&v65->fields.svtId.fields.fakeValue;
            v91 = (ServantLimitImageMaster_o *)v88;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v222.fields.currentCryptoKey = v89;
            *(_QWORD *)&v222.fields.fakeValue = v90;
            this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
                                              v222,
                                              0LL);
            if ( v91 )
            {
              v92 = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                      v91,
                      (int32_t)this,
                      FriendNpNameDispLimitCount,
                      0LL);
              this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(
                                                v65->fields.svtId,
                                                0LL);
              if ( tdInfo )
              {
                if ( v84 )
                {
                  classBoardMaxNumDictionary = v87;
                  p_userGameEntity = &v16->fields.userGameEntity;
                  v15 = v86;
                  OverwriteTDName = ServantLimitAddMaster__GetOverwriteTDName(
                                      (ServantLimitAddMaster_o *)v84,
                                      (int32_t)this,
                                      v92,
                                      tdInfo->fields.name,
                                      tdInfo->fields.lv,
                                      0LL);
                  v94 = (System_String_o **)&StringLiteral_9333/*"NP_MAX_COLOR_NAME"*/;
                  v95 = (Il2CppObject *)OverwriteTDName;
                  if ( v215 <= 1 )
                    v94 = (System_String_o **)&StringLiteral_9327/*"NP_COLOR_NAME"*/;
                  v96 = *v94;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v97 = LocalizationManager__Get(v96, 0LL);
                  this = (FriendIconComponent_o *)System_String__Format(v97, v95, 0LL);
                  if ( tdInfo )
                  {
                    v98 = this;
                    v99 = v16->fields.svtNpTitleLabel;
                    this = (FriendIconComponent_o *)StrengthStatus__GetIconName(tdInfo->fields.strengthStatus, 0LL);
                    if ( v99 )
                    {
                      UIRangeLabel__Set(v99, (System_String_o *)v98, (System_String_o *)this, 0, 0, 0LL);
                      v100 = (UnityEngine_Object_o *)v16->fields.svtNpCommandCard;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Inequality(v100, 0LL, 0LL) )
                      {
                        this = (FriendIconComponent_o *)v16->fields.svtNpCommandCard;
                        if ( !this )
                          goto LABEL_113;
                        ServantNpCommandCardComponent__Set((ServantNpCommandCardComponent_o *)this, tdInfo, 0LL);
                      }
                      goto LABEL_76;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_113:
    sub_1BAB678(this, v58);
  }
LABEL_252:
  baseButton = (UnityEngine_Object_o *)v16->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    this = (FriendIconComponent_o *)v16->fields.baseButton;
    if ( !this )
      goto LABEL_113;
    UICommonButton__SetColliderEnable((UICommonButton_o *)this, *p_userGameEntity != 0LL, 1, 0LL);
  }
}


void __fastcall FriendIconComponent__SetAppendSkill(
        FriendIconComponent_o *this,
        ServantLeaderInfo_o *info,
        const MethodInfo *method)
{
  ServantLeaderInfo_o *v3; // x20
  FriendIconComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x22
  struct SkillIconComponent_array *appendSkillIconList; // x8
  __int64 v12; // x8
  int v13; // w9
  signed __int64 v14; // x10
  unsigned __int64 max_length; // x14
  SkillInfo_o *v16; // x14
  struct SkillIconComponent_array *v17; // x8
  __int64 v18; // x20
  struct UnityEngine_GameObject_array *v19; // x8
  unsigned __int64 v20; // x21
  signed __int64 v21; // x22
  struct UnityEngine_GameObject_array *appendSkillBaseList; // x8
  UnityEngine_Object_o *v23; // x20
  struct UnityEngine_GameObject_array *v24; // x9
  SkillInfo_o *v25; // x20
  struct SkillIconComponent_array *v26; // x8
  struct UIIconLabel_array *appendSkillLevelIconLabelList; // x8
  struct SkillIconComponent_array *v28; // x9
  int v29; // w8
  struct UnityEngine_GameObject_array *v30; // x9
  struct UnityEngine_GameObject_array *v31; // x8
  struct SkillIconComponent_array *v32; // x8
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x20
  UnityEngine_Object_o *switchSkillInfo; // x20
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 v37; // x8
  _QWORD *v38; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v40; // x8
  SwitchUIWidgetComponent_o *v41; // x19
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  v3 = info;
  v4 = this;
  if ( (byte_4AB51F9 & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, info);
    sub_1BAB41C(&Method_System_Collections_Generic_List_UIWidget__Add__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v6);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v7);
    this = (FriendIconComponent_o *)sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    byte_4AB51F9 = 1;
  }
  skillInfoList = 0LL;
  if ( v4->fields.appendSkillBaseList )
  {
    if ( !v3 )
      goto LABEL_19;
    v10 = *(_QWORD *)&v3->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&v3->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v43.fields.currentCryptoKey = v10;
    *(_QWORD *)&v43.fields.fakeValue = v9;
    this = (FriendIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v43, 0LL);
    if ( (int)this > 0 )
    {
      ServantLeaderInfo__GetAppendPassiveSkillInfo_40902076(v3, &skillInfoList, 0, 0LL);
      appendSkillIconList = v4->fields.appendSkillIconList;
      if ( !appendSkillIconList )
        goto LABEL_82;
      v12 = *(_QWORD *)&appendSkillIconList->max_length;
      if ( v12 << 32 < 1 )
      {
        v13 = 0;
      }
      else
      {
        v13 = 0;
        v14 = 0LL;
        do
        {
          if ( skillInfoList )
          {
            max_length = skillInfoList->max_length;
            if ( v14 < (int)max_length )
            {
              if ( v14 >= max_length )
                goto LABEL_83;
              v16 = skillInfoList->m_Items[v14];
              if ( v16 && v16->fields.id >= 1 )
                v13 = v14 + 1;
            }
          }
          ++v14;
        }
        while ( v14 < (int)v12 );
      }
      if ( (int)v12 >= 1 )
      {
        v20 = 0LL;
        v21 = v13;
        do
        {
          appendSkillBaseList = v4->fields.appendSkillBaseList;
          if ( !appendSkillBaseList )
            goto LABEL_82;
          if ( v20 >= appendSkillBaseList->max_length )
            goto LABEL_83;
          v23 = (UnityEngine_Object_o *)appendSkillBaseList->m_Items[v20];
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (FriendIconComponent_o *)UnityEngine_Object__op_Equality(v23, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            if ( (__int64)v20 >= v21 )
            {
              v31 = v4->fields.appendSkillBaseList;
              if ( !v31 )
                goto LABEL_82;
              if ( v20 >= v31->max_length )
                goto LABEL_83;
              this = (FriendIconComponent_o *)v31->m_Items[v20];
              if ( !this )
                goto LABEL_82;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            }
            else
            {
              if ( !skillInfoList )
                goto LABEL_82;
              if ( v20 >= skillInfoList->max_length )
                goto LABEL_83;
              v24 = v4->fields.appendSkillBaseList;
              if ( !v24 )
                goto LABEL_82;
              if ( v20 >= v24->max_length )
                goto LABEL_83;
              this = (FriendIconComponent_o *)v24->m_Items[v20];
              if ( !this )
                goto LABEL_82;
              v25 = skillInfoList->m_Items[v20];
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              v26 = v4->fields.appendSkillIconList;
              if ( !v26 )
                goto LABEL_82;
              if ( v20 >= v26->max_length )
                goto LABEL_83;
              if ( !v25 )
                goto LABEL_82;
              this = (FriendIconComponent_o *)v26->m_Items[v20];
              if ( !this )
                goto LABEL_82;
              SkillIconComponent__Set_38615856(
                (SkillIconComponent_o *)this,
                v25->fields.id,
                v25->fields.lv,
                v25->fields.strengthStatus,
                v25->fields.skillRecord,
                0LL);
              appendSkillLevelIconLabelList = v4->fields.appendSkillLevelIconLabelList;
              if ( !appendSkillLevelIconLabelList )
                goto LABEL_82;
              if ( v20 >= appendSkillLevelIconLabelList->max_length )
                goto LABEL_83;
              this = (FriendIconComponent_o *)appendSkillLevelIconLabelList->m_Items[v20];
              if ( !this )
                goto LABEL_82;
              UIIconLabel__Set_38616660((UIIconLabel_o *)this, 48, v25->fields.lv, 0, 0, 0LL, 0, 0, 0, 0LL);
              this = (FriendIconComponent_o *)ConstantMaster__IsFLAG20240804(0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                this = (FriendIconComponent_o *)BalanceConfig_TypeInfo;
                if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                  this = (FriendIconComponent_o *)BalanceConfig_TypeInfo;
                }
                v28 = this->fields.appendSkillIconList;
                v29 = HIDWORD(v28->m_Items[143]);
                if ( v20 )
                  v29 += LODWORD(v28->m_Items[144]) * v20;
                v30 = v4->fields.appendSkillBaseList;
                if ( !v30 )
                  goto LABEL_82;
                if ( v20 >= v30->max_length )
                  goto LABEL_83;
                GameObjectExtensions__SetLocalPositionX(v30->m_Items[v20], (float)v29, 0LL);
              }
            }
          }
          v32 = v4->fields.appendSkillIconList;
          if ( !v32 )
            goto LABEL_82;
        }
        while ( (__int64)++v20 < (int)v32->max_length );
      }
      appendSkillInfoUiWidget = (UnityEngine_Object_o *)v4->fields.appendSkillInfoUiWidget;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(appendSkillInfoUiWidget, 0LL, 0LL) )
      {
        switchSkillInfo = (UnityEngine_Object_o *)v4->fields.switchSkillInfo;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0LL, 0LL) )
        {
          this = (FriendIconComponent_o *)v4->fields.appendSkillInfoUiWidget;
          if ( !this )
            goto LABEL_82;
          this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( !this )
            goto LABEL_82;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (FriendIconComponent_o *)v4->fields.switchSkillUIList;
          if ( !this )
            goto LABEL_82;
          info = (ServantLeaderInfo_o *)v4->fields.appendSkillInfoUiWidget;
          v37 = *(_QWORD *)&this->fields.m_CachedPtr;
          v38 = Method_System_Collections_Generic_List_UIWidget__Add__;
          ++HIDWORD(this->fields.m_CancellationTokenSource);
          if ( !v37 )
            goto LABEL_82;
          m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v37 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)info,
              *(const MethodInfo_354D8BC **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            v40 = v37 + 8 * m_CancellationTokenSource_low;
            LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v40 + 32) = info;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v40 + 32), (int32_t)info, v35, v36);
          }
          this = (FriendIconComponent_o *)v4->fields.switchSkillUIList;
          if ( !this )
            goto LABEL_82;
          v41 = v4->fields.switchSkillInfo;
          this = (FriendIconComponent_o *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)this,
                                            (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
          if ( !v41 )
            goto LABEL_82;
          SwitchUIWidgetComponent__Set(v41, (UIWidget_array *)this, 0LL);
        }
      }
    }
    else
    {
LABEL_19:
      v17 = v4->fields.appendSkillIconList;
      if ( !v17 )
        goto LABEL_82;
      v18 = 0LL;
      while ( (int)v18 < (signed int)v17->max_length )
      {
        v19 = v4->fields.appendSkillBaseList;
        if ( v19 )
        {
          if ( (unsigned int)v18 >= v19->max_length )
LABEL_83:
            sub_1BAB680(this, info);
          this = (FriendIconComponent_o *)v19->m_Items[v18];
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            v17 = v4->fields.appendSkillIconList;
            ++v18;
            if ( v17 )
              continue;
          }
        }
        goto LABEL_82;
      }
      this = (FriendIconComponent_o *)v4->fields.appendSkillInfoUiWidget;
      if ( !this
        || (this = (FriendIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
      {
LABEL_82:
        sub_1BAB678(this, info);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
  }
}