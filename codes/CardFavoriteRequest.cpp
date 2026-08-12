void CardFavoriteRequest___ctor(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void CardFavoriteRequest__beginRequest(
        CardFavoriteRequest_o *this,
        UserServantEntity_o *userServantEntity,
        bool isFavorite,
        int32_t commonFlag,
        bool isPush,
        const MethodInfo *method)
{
  CardFavoriteRequest_o *v10; // x21
  __int128 v11; // q1
  int v12; // w8
  int64_t v13; // x0
  __int64 v14; // x1
  __int64 v15; // x19
  __int64 v16; // x20
  int32_t randomSettingOwn; // w22
  int32_t randomSettingSupport; // w24
  int32_t limitCountSupport; // w25
  int32_t imageLimitCount2; // w26
  int32_t dispLimitCount2; // w27
  int32_t commandCardLimitCount2; // w28
  int32_t iconLimitCount2; // w29
  int32_t portraitLimitCount2; // w19
  int32_t randomSettingOwn2; // w20
  int32_t randomSettingSupport2; // w21
  int32_t v27; // w0
  __int64 v28; // x8
  int32_t limitCountSupport2; // w23
  int32_t transformVal; // w0
  const MethodInfo *v31; // [xsp+88h] [xbp-F8h]
  int32_t battleVoice; // [xsp+A0h] [xbp-E0h]
  bool IsChoice; // [xsp+A4h] [xbp-DCh]
  bool IsLock; // [xsp+A8h] [xbp-D8h]
  int32_t v35; // [xsp+ACh] [xbp-D4h]
  int32_t v36; // [xsp+B0h] [xbp-D0h]
  int32_t v37; // [xsp+B4h] [xbp-CCh]
  int32_t v38; // [xsp+B8h] [xbp-C8h]
  int32_t v39; // [xsp+BCh] [xbp-C4h]
  int64_t targetUsrSVtId; // [xsp+C0h] [xbp-C0h]
  bool v41; // [xsp+C8h] [xbp-B8h]
  int32_t v42; // [xsp+CCh] [xbp-B4h]
  CardFavoriteRequest_o *v43; // [xsp+D0h] [xbp-B0h]
  bool v44; // [xsp+DCh] [xbp-A4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+E0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+100h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  v10 = this;
  if ( (byte_5972372 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CardFavoriteRequest_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5972372 = 1;
  }
  if ( !userServantEntity )
    sub_2213CDC(this, userServantEntity);
  v44 = isFavorite;
  v11 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v12 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v46.fields.fakeValue = v11;
  if ( !v12 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, userServantEntity);
  v41 = isPush;
  v42 = commonFlag;
  v43 = v10;
  v45 = v46;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v45, 0);
  v15 = *(_QWORD *)&userServantEntity->fields.imageLimitCount.fields.currentCryptoKey;
  v16 = *(_QWORD *)&userServantEntity->fields.imageLimitCount.fields.fakeValue;
  targetUsrSVtId = v13;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
  *(_QWORD *)&v47.fields.currentCryptoKey = v15;
  *(_QWORD *)&v47.fields.fakeValue = v16;
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v47, 0);
  v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(userServantEntity->fields.dispLimitCount, 0);
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
          userServantEntity->fields.commandCardLimitCount,
          0);
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(userServantEntity->fields.iconLimitCount, 0);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
          userServantEntity->fields.portraitLimitCount,
          0);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0);
  IsChoice = UserServantEntity__IsChoice(userServantEntity, 0);
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                  userServantEntity->fields.battleVoice,
                  0);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                       userServantEntity->fields.randomLimitCount,
                       0);
  randomSettingSupport = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                           userServantEntity->fields.randomLimitCountSupport,
                           0);
  limitCountSupport = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                        userServantEntity->fields.limitCountSupport,
                        0);
  imageLimitCount2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                       userServantEntity->fields.imageLimitCount2,
                       0);
  dispLimitCount2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                      userServantEntity->fields.dispLimitCount2,
                      0);
  commandCardLimitCount2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                             userServantEntity->fields.commandCardLimitCount2,
                             0);
  iconLimitCount2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                      userServantEntity->fields.iconLimitCount2,
                      0);
  portraitLimitCount2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                          userServantEntity->fields.portraitLimitCount2,
                          0);
  randomSettingOwn2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                        userServantEntity->fields.randomLimitCount2,
                        0);
  randomSettingSupport2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                            userServantEntity->fields.randomLimitCountSupport2,
                            0);
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
          userServantEntity->fields.limitCountSupport2,
          0);
  v28 = *(_QWORD *)&userServantEntity->fields.transformVal.fields.currentCryptoKey;
  *(_QWORD *)&v48.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.transformVal.fields.fakeValue;
  limitCountSupport2 = v27;
  *(_QWORD *)&v48.fields.currentCryptoKey = v28;
  transformVal = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v48, 0);
  CardFavoriteRequest__beginRequest_51214180(
    v43,
    targetUsrSVtId,
    v39,
    v38,
    v37,
    v36,
    v35,
    v44,
    IsLock,
    IsChoice,
    v42,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    limitCountSupport,
    v41,
    imageLimitCount2,
    dispLimitCount2,
    commandCardLimitCount2,
    iconLimitCount2,
    portraitLimitCount2,
    randomSettingOwn2,
    randomSettingSupport2,
    limitCountSupport2,
    transformVal,
    v31);
}


void CardFavoriteRequest__beginRequestFavorite(
        CardFavoriteRequest_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UserGameEntity_o *SelfUserGame; // x21
  int64_t Master_object; // x0
  __int64 v8; // x1
  UserServantCollectionMaster_o *v9; // x22
  __int64 v10; // x24
  __int64 v11; // x25
  int64_t userId; // x23
  __int64 v13; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  int64_t pushUserSvtId; // x21
  __int128 v16; // q1
  int v17; // w8
  const MethodInfo *v18; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_5972370 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5972370 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !SelfUserGame || !userServantEntity )
    goto LABEL_14;
  v9 = (UserServantCollectionMaster_o *)Master_object;
  v10 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  userId = SelfUserGame->fields.userId;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
  *(_QWORD *)&v21.fields.currentCryptoKey = v10;
  *(_QWORD *)&v21.fields.fakeValue = v11;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v21, 0);
  if ( !v9 )
    goto LABEL_14;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, userId, Master_object, 0);
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  v16 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v17 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v20.fields.fakeValue = v16;
  if ( !v17 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
  v19 = v20;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v19, 0);
  if ( !EntityDefinitely )
LABEL_14:
    sub_2213CDC(Master_object, v8);
  CardFavoriteRequest__beginRequest(
    this,
    userServantEntity,
    1,
    EntityDefinitely->fields.svtCommonFlag,
    pushUserSvtId == Master_object,
    v18);
}


void CardFavoriteRequest__beginRequestPush(
        CardFavoriteRequest_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UserGameEntity_o *SelfUserGame; // x21
  int64_t Master_object; // x0
  __int64 v8; // x1
  UserServantCollectionMaster_o *v9; // x22
  __int64 v10; // x24
  __int64 v11; // x25
  int64_t userId; // x23
  __int64 v13; // x1
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  int64_t favoriteUserSvtId; // x24
  __int128 v16; // q1
  int v17; // w8
  int64_t v18; // x0
  __int128 v19; // q1
  int64_t v20; // x23
  int64_t pushUserSvtId; // x21
  const MethodInfo *v22; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+40h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_5972371 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5972371 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !SelfUserGame || !userServantEntity )
    goto LABEL_14;
  v9 = (UserServantCollectionMaster_o *)Master_object;
  v10 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  userId = SelfUserGame->fields.userId;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
  *(_QWORD *)&v26.fields.currentCryptoKey = v10;
  *(_QWORD *)&v26.fields.fakeValue = v11;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v26, 0);
  if ( !v9 )
    goto LABEL_14;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, userId, Master_object, 0);
  favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
  v16 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v17 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v25.fields.fakeValue = v16;
  if ( !v17 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
  v24 = v25;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v24, 0);
  v19 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v20 = v18;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v23.fields.fakeValue = v19;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v23, 0);
  if ( !EntityDefinitely )
LABEL_14:
    sub_2213CDC(Master_object, v8);
  CardFavoriteRequest__beginRequest(
    this,
    userServantEntity,
    favoriteUserSvtId == v20,
    EntityDefinitely->fields.svtCommonFlag,
    pushUserSvtId != Master_object,
    v22);
}


void CardFavoriteRequest__beginRequest_51214180(
        CardFavoriteRequest_o *this,
        int64_t targetUsrSVtId,
        int32_t imageLimitCount,
        int32_t dispLimitCount,
        int32_t commandCardLimitCount,
        int32_t iconLimitCount,
        int32_t portraitLimitCount,
        bool isFavorite,
        bool isLock,
        bool isChoice,
        int32_t commonFlag,
        int32_t battleVoice,
        int32_t randomSettingOwn,
        int32_t randomSettingSupport,
        int32_t limitCountSupport,
        bool isPush,
        int32_t imageLimitCount2,
        int32_t dispLimitCount2,
        int32_t commandCardLimitCount2,
        int32_t iconLimitCount2,
        int32_t portraitLimitCount2,
        int32_t randomSettingOwn2,
        int32_t randomSettingSupport2,
        int32_t limitCountSupport2,
        int32_t transformVal,
        const MethodInfo *method)
{
  __int64 v33; // x1
  _BOOL8 _47388504; // x0
  __int64 v35; // x1
  int32_t v36; // w21
  int32_t v37; // w29

  if ( (byte_5972373 & 1) == 0 )
  {
    sub_2213A60(&TutorialFlag_TypeInfo);
    sub_2213A60(&StringLiteral_22305/*"limitCountSupport"*/);
    sub_2213A60(&StringLiteral_21094/*"iconLimitCount"*/);
    sub_2213A60(&StringLiteral_23912/*"portraitLimitCount2"*/);
    sub_2213A60(&StringLiteral_24146/*"randomLimitCount2"*/);
    sub_2213A60(&StringLiteral_25134/*"svtCommonFlag"*/);
    sub_2213A60(&StringLiteral_21974/*"isPush"*/);
    sub_2213A60(&StringLiteral_21269/*"imageLimitCount"*/);
    sub_2213A60(&StringLiteral_25941/*"userSvtId"*/);
    sub_2213A60(&StringLiteral_24145/*"randomLimitCount"*/);
    sub_2213A60(&StringLiteral_21095/*"iconLimitCount2"*/);
    sub_2213A60(&StringLiteral_23911/*"portraitLimitCount"*/);
    sub_2213A60(&StringLiteral_19493/*"dispLimitCount"*/);
    sub_2213A60(&StringLiteral_22306/*"limitCountSupport2"*/);
    sub_2213A60(&StringLiteral_25482/*"transformVal"*/);
    sub_2213A60(&StringLiteral_21270/*"imageLimitCount2"*/);
    sub_2213A60(&StringLiteral_17827/*"battleVoice"*/);
    sub_2213A60(&StringLiteral_19494/*"dispLimitCount2"*/);
    sub_2213A60(&StringLiteral_18961/*"commandCardLimitCount2"*/);
    sub_2213A60(&StringLiteral_24148/*"randomLimitCountSupport2"*/);
    sub_2213A60(&StringLiteral_21947/*"isLock"*/);
    sub_2213A60(&StringLiteral_21914/*"isChoice"*/);
    sub_2213A60(&StringLiteral_24147/*"randomLimitCountSupport"*/);
    sub_2213A60(&StringLiteral_18960/*"commandCardLimitCount"*/);
    sub_2213A60(&StringLiteral_21935/*"isFavorite"*/);
    byte_5972373 = 1;
  }
  RequestBase__addField_51256716((RequestBase_o *)this, (System_String_o *)StringLiteral_25941/*"userSvtId"*/, targetUsrSVtId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21269/*"imageLimitCount"*/, imageLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19493/*"dispLimitCount"*/, dispLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18960/*"commandCardLimitCount"*/, commandCardLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21094/*"iconLimitCount"*/, iconLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23911/*"portraitLimitCount"*/, portraitLimitCount, 0);
  if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v33);
  _47388504 = TutorialFlag__Get_47388504(106, 0);
  if ( !_47388504 )
  {
    v36 = limitCountSupport2;
    v37 = transformVal;
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21935/*"isFavorite"*/, -1, 0);
    if ( this )
      goto LABEL_9;
LABEL_10:
    sub_2213CDC(_47388504, v35);
  }
  if ( !this )
    goto LABEL_10;
  v36 = limitCountSupport2;
  v37 = transformVal;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21935/*"isFavorite"*/, isFavorite, 0);
LABEL_9:
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21947/*"isLock"*/, isLock, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21914/*"isChoice"*/, isChoice, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_25134/*"svtCommonFlag"*/, commonFlag, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17827/*"battleVoice"*/, battleVoice, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24145/*"randomLimitCount"*/, randomSettingOwn, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24147/*"randomLimitCountSupport"*/, randomSettingSupport, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22305/*"limitCountSupport"*/, limitCountSupport, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21974/*"isPush"*/, isPush, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21270/*"imageLimitCount2"*/, imageLimitCount2, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19494/*"dispLimitCount2"*/, dispLimitCount2, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18961/*"commandCardLimitCount2"*/, commandCardLimitCount2, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21095/*"iconLimitCount2"*/, iconLimitCount2, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23912/*"portraitLimitCount2"*/, portraitLimitCount2, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24146/*"randomLimitCount2"*/, randomSettingOwn2, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24148/*"randomLimitCountSupport2"*/, randomSettingSupport2, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22306/*"limitCountSupport2"*/, v36, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_25482/*"transformVal"*/, v37, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *CardFavoriteRequest__getMockData(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  if ( (byte_597236F & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_597236F = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *CardFavoriteRequest__getURL(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_597236E & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_18539/*"card/favorite"*/);
    byte_597236E = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_18539/*"card/favorite"*/, 0);
}


void CardFavoriteRequest__requestCompleted(
        CardFavoriteRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_5972374 & 1) == 0 )
  {
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&StringLiteral_23515/*"ok"*/);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_5972374 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(34, responseList, 0);
  if ( v5 && ResponseData__checkError_51257228(v5, 0) )
    v6 = &StringLiteral_23515/*"ok"*/;
  else
    v6 = &StringLiteral_23336/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}