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
  int64_t v12; // x0
  __int64 v13; // x19
  __int64 v14; // x20
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
  int32_t v25; // w0
  __int64 v26; // x8
  int32_t limitCountSupport2; // w23
  int32_t transformVal; // w0
  const MethodInfo *v29; // [xsp+88h] [xbp-F8h]
  int32_t battleVoice; // [xsp+A0h] [xbp-E0h]
  bool IsChoice; // [xsp+A4h] [xbp-DCh]
  bool IsLock; // [xsp+A8h] [xbp-D8h]
  int32_t portraitLimitCount; // [xsp+ACh] [xbp-D4h]
  int32_t v34; // [xsp+B0h] [xbp-D0h]
  int32_t v35; // [xsp+B4h] [xbp-CCh]
  int32_t v36; // [xsp+B8h] [xbp-C8h]
  int32_t v37; // [xsp+BCh] [xbp-C4h]
  int64_t targetUsrSVtId; // [xsp+C0h] [xbp-C0h]
  bool v39; // [xsp+C8h] [xbp-B8h]
  int32_t v40; // [xsp+CCh] [xbp-B4h]
  CardFavoriteRequest_o *v41; // [xsp+D0h] [xbp-B0h]
  bool v42; // [xsp+DCh] [xbp-A4h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+E0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+100h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  v10 = this;
  if ( (byte_4E79141 & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    this = (CardFavoriteRequest_o *)sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4E79141 = 1;
  }
  if ( !userServantEntity )
    sub_1D0F30C(this, userServantEntity);
  v42 = isFavorite;
  v11 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v39 = isPush;
  v40 = commonFlag;
  v41 = v10;
  v43 = v44;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v43, 0);
  v14 = *(_QWORD *)&userServantEntity->fields.imageLimitCount.fields.currentCryptoKey;
  v13 = *(_QWORD *)&userServantEntity->fields.imageLimitCount.fields.fakeValue;
  targetUsrSVtId = v12;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v45.fields.currentCryptoKey = v14;
  *(_QWORD *)&v45.fields.fakeValue = v13;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v45, 0);
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(userServantEntity->fields.dispLimitCount, 0);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
          userServantEntity->fields.commandCardLimitCount,
          0);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(userServantEntity->fields.iconLimitCount, 0);
  portraitLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                         userServantEntity->fields.portraitLimitCount,
                         0);
  IsLock = UserServantEntity__IsLock(userServantEntity, 0);
  IsChoice = UserServantEntity__IsChoice(userServantEntity, 0);
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                  userServantEntity->fields.battleVoice,
                  0);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                       userServantEntity->fields.randomLimitCount,
                       0);
  randomSettingSupport = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                           userServantEntity->fields.randomLimitCountSupport,
                           0);
  limitCountSupport = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                        userServantEntity->fields.limitCountSupport,
                        0);
  imageLimitCount2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                       userServantEntity->fields.imageLimitCount2,
                       0);
  dispLimitCount2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                      userServantEntity->fields.dispLimitCount2,
                      0);
  commandCardLimitCount2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                             userServantEntity->fields.commandCardLimitCount2,
                             0);
  iconLimitCount2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                      userServantEntity->fields.iconLimitCount2,
                      0);
  portraitLimitCount2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                          userServantEntity->fields.portraitLimitCount2,
                          0);
  randomSettingOwn2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                        userServantEntity->fields.randomLimitCount2,
                        0);
  randomSettingSupport2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
                            userServantEntity->fields.randomLimitCountSupport2,
                            0);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(
          userServantEntity->fields.limitCountSupport2,
          0);
  v26 = *(_QWORD *)&userServantEntity->fields.transformVal.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&userServantEntity->fields.transformVal.fields.fakeValue;
  limitCountSupport2 = v25;
  *(_QWORD *)&v46.fields.currentCryptoKey = v26;
  transformVal = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v46, 0);
  CardFavoriteRequest__beginRequest_45552000(
    v41,
    targetUsrSVtId,
    v37,
    v36,
    v35,
    v34,
    portraitLimitCount,
    v42,
    IsLock,
    IsChoice,
    v40,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    limitCountSupport,
    v39,
    imageLimitCount2,
    dispLimitCount2,
    commandCardLimitCount2,
    iconLimitCount2,
    portraitLimitCount2,
    randomSettingOwn2,
    randomSettingSupport2,
    limitCountSupport2,
    transformVal,
    v29);
}


void CardFavoriteRequest__beginRequestFavorite(
        CardFavoriteRequest_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x21
  int64_t Master_object; // x0
  __int64 v7; // x1
  UserServantCollectionMaster_o *v8; // x22
  int64_t userId; // x23
  __int64 v10; // x24
  __int64 v11; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int128 v13; // q0
  int64_t pushUserSvtId; // x22
  UserServantCollectionEntity_o *v15; // x21
  const MethodInfo *v16; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4E7913F & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4E7913F = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !SelfUserGame || !userServantEntity )
    goto LABEL_14;
  v8 = (UserServantCollectionMaster_o *)Master_object;
  userId = SelfUserGame->fields.userId;
  v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v11;
  *(_QWORD *)&v19.fields.fakeValue = v10;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v19, 0);
  if ( !v8 )
    goto LABEL_14;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v8, userId, Master_object, 0);
  v13 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  v15 = EntityDefinitely;
  *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v18.fields.fakeValue = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v17 = v18;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v17, 0);
  if ( !v15 )
LABEL_14:
    sub_1D0F30C(Master_object, v7);
  CardFavoriteRequest__beginRequest(
    this,
    userServantEntity,
    1,
    v15->fields.svtCommonFlag,
    pushUserSvtId == Master_object,
    v16);
}


void CardFavoriteRequest__beginRequestPush(
        CardFavoriteRequest_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x21
  int64_t Master_object; // x0
  __int64 v7; // x1
  UserServantCollectionMaster_o *v8; // x22
  int64_t userId; // x23
  __int64 v10; // x24
  __int64 v11; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int128 v13; // q0
  UserServantCollectionEntity_o *v14; // x22
  int64_t favoriteUserSvtId; // x24
  int64_t v16; // x0
  __int128 v17; // q1
  int64_t pushUserSvtId; // x21
  int64_t v19; // x23
  const MethodInfo *v20; // x5
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+40h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4E79140 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4E79140 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !SelfUserGame || !userServantEntity )
    goto LABEL_14;
  v8 = (UserServantCollectionMaster_o *)Master_object;
  userId = SelfUserGame->fields.userId;
  v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v11;
  *(_QWORD *)&v24.fields.fakeValue = v10;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v24, 0);
  if ( !v8 )
    goto LABEL_14;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v8, userId, Master_object, 0);
  v13 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  v14 = EntityDefinitely;
  favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
  *(_OWORD *)&v23.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v23.fields.fakeValue = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v22 = v23;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v22, 0);
  v17 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  pushUserSvtId = SelfUserGame->fields.pushUserSvtId;
  v19 = v16;
  *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v21.fields.fakeValue = v17;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_50334724(&v21, 0);
  if ( !v14 )
LABEL_14:
    sub_1D0F30C(Master_object, v7);
  CardFavoriteRequest__beginRequest(
    this,
    userServantEntity,
    favoriteUserSvtId == v19,
    v14->fields.svtCommonFlag,
    pushUserSvtId != Master_object,
    v20);
}


void CardFavoriteRequest__beginRequest_45552000(
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
  _BOOL8 _41786532; // x0
  __int64 v34; // x1
  int32_t v35; // w29

  if ( (byte_4E79142 & 1) == 0 )
  {
    sub_1D0F0B4(&TutorialFlag_TypeInfo);
    sub_1D0F0B4(&StringLiteral_21657/*"limitCountSupport"*/);
    sub_1D0F0B4(&StringLiteral_20503/*"iconLimitCount"*/);
    sub_1D0F0B4(&StringLiteral_23197/*"portraitLimitCount2"*/);
    sub_1D0F0B4(&StringLiteral_23420/*"randomLimitCount2"*/);
    sub_1D0F0B4(&StringLiteral_24350/*"svtCommonFlag"*/);
    sub_1D0F0B4(&StringLiteral_21354/*"isPush"*/);
    sub_1D0F0B4(&StringLiteral_20673/*"imageLimitCount"*/);
    sub_1D0F0B4(&StringLiteral_25099/*"userSvtId"*/);
    sub_1D0F0B4(&StringLiteral_23419/*"randomLimitCount"*/);
    sub_1D0F0B4(&StringLiteral_20504/*"iconLimitCount2"*/);
    sub_1D0F0B4(&StringLiteral_23196/*"portraitLimitCount"*/);
    sub_1D0F0B4(&StringLiteral_18946/*"dispLimitCount"*/);
    sub_1D0F0B4(&StringLiteral_21658/*"limitCountSupport2"*/);
    sub_1D0F0B4(&StringLiteral_24680/*"transformVal"*/);
    sub_1D0F0B4(&StringLiteral_20674/*"imageLimitCount2"*/);
    sub_1D0F0B4(&StringLiteral_17347/*"battleVoice"*/);
    sub_1D0F0B4(&StringLiteral_18947/*"dispLimitCount2"*/);
    sub_1D0F0B4(&StringLiteral_18436/*"commandCardLimitCount2"*/);
    sub_1D0F0B4(&StringLiteral_23422/*"randomLimitCountSupport2"*/);
    sub_1D0F0B4(&StringLiteral_21330/*"isLock"*/);
    sub_1D0F0B4(&StringLiteral_21303/*"isChoice"*/);
    sub_1D0F0B4(&StringLiteral_23421/*"randomLimitCountSupport"*/);
    sub_1D0F0B4(&StringLiteral_18435/*"commandCardLimitCount"*/);
    sub_1D0F0B4(&StringLiteral_21319/*"isFavorite"*/);
    byte_4E79142 = 1;
  }
  RequestBase__addField_45612144((RequestBase_o *)this, (System_String_o *)StringLiteral_25099/*"userSvtId"*/, targetUsrSVtId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20673/*"imageLimitCount"*/, imageLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18946/*"dispLimitCount"*/, dispLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18435/*"commandCardLimitCount"*/, commandCardLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20503/*"iconLimitCount"*/, iconLimitCount, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23196/*"portraitLimitCount"*/, portraitLimitCount, 0);
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _41786532 = TutorialFlag__Get_41786532(106, 0);
  v34 = StringLiteral_21319/*"isFavorite"*/;
  if ( !_41786532 )
  {
    v35 = transformVal;
    RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21319/*"isFavorite"*/, -1, 0);
    if ( this )
      goto LABEL_9;
LABEL_10:
    sub_1D0F30C(_41786532, v34);
  }
  if ( !this )
    goto LABEL_10;
  v35 = transformVal;
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21319/*"isFavorite"*/, isFavorite, 0);
LABEL_9:
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21330/*"isLock"*/, isLock, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21303/*"isChoice"*/, isChoice, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24350/*"svtCommonFlag"*/, commonFlag, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17347/*"battleVoice"*/, battleVoice, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23419/*"randomLimitCount"*/, randomSettingOwn, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23421/*"randomLimitCountSupport"*/, randomSettingSupport, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21657/*"limitCountSupport"*/, limitCountSupport, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21354/*"isPush"*/, isPush, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20674/*"imageLimitCount2"*/, imageLimitCount2, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18947/*"dispLimitCount2"*/, dispLimitCount2, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18436/*"commandCardLimitCount2"*/, commandCardLimitCount2, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_20504/*"iconLimitCount2"*/, iconLimitCount2, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23197/*"portraitLimitCount2"*/, portraitLimitCount2, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23420/*"randomLimitCount2"*/, randomSettingOwn2, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23422/*"randomLimitCountSupport2"*/, randomSettingSupport2, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21658/*"limitCountSupport2"*/, limitCountSupport2, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24680/*"transformVal"*/, v35, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *CardFavoriteRequest__getMockData(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4E7913E & 1) == 0 )
  {
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E7913E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_1/*""*/, 0);
}


System_String_o *CardFavoriteRequest__getURL(CardFavoriteRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4E7913D & 1) == 0 )
  {
    sub_1D0F0B4(&NetworkManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_18026/*"card/favorite"*/);
    byte_4E7913D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_65562772(BaseUrl, (System_String_o *)StringLiteral_18026/*"card/favorite"*/, 0);
}


void CardFavoriteRequest__requestCompleted(
        CardFavoriteRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_4E79143 & 1) == 0 )
  {
    sub_1D0F0B4(&ResponseCommandKind_TypeInfo);
    sub_1D0F0B4(&StringLiteral_22821/*"ok"*/);
    sub_1D0F0B4(&StringLiteral_22648/*"ng"*/);
    byte_4E79143 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(34, responseList, 0);
  if ( v5 && ResponseData__checkError_45600864(v5, 0) )
    v6 = &StringLiteral_22821/*"ok"*/;
  else
    v6 = &StringLiteral_22648/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0);
}