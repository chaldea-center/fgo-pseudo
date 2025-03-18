void __fastcall BattleDemoRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4C25513 & 1) == 0 )
  {
    sub_1C3B764(&BattleDemoRootComponent_TypeInfo, v1);
    byte_4C25513 = 1;
  }
  LODWORD(BattleDemoRootComponent_TypeInfo->static_fields->BGM_FADEOUT_TIME) = (struct BattleDemoRootComponent_StaticFields)1065353216;
}


void __fastcall BattleDemoRootComponent___ctor(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDemoRootComponent__CreateActorObject(
        BattleDemoRootComponent_o *this,
        int32_t uniqueIdStart,
        System_String_array *chrInfos,
        UnityEngine_GameObject_array *actors,
        bool isPlayer,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 FieldMotion; // x0
  const MethodInfo *v24; // x2
  __int64 v25; // x8
  int32_t v26; // w23
  BattleFieldMotionComponent_o *v27; // x25
  unsigned __int64 v28; // x24
  System_String_o *v29; // x21
  BattleDemoRootComponent_o *ServantIdByInfo; // x0
  const MethodInfo *v31; // x2
  int32_t LimitCountByInfo; // w26
  Il2CppObject *actorPrefab; // x21
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int32_t v40; // w27
  UnityEngine_GameObject_o *v41; // x28
  Il2CppClass **v42; // x0
  UnityEngine_Transform_o *v43; // x21
  UnityEngine_Transform_o *v44; // x21
  UnityEngine_Transform_o *v45; // x21
  UnityEngine_Transform_o *v46; // x21
  BattleFieldMotionComponent_o *v47; // x20
  System_String_array *v48; // x25
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t performance; // x1
  BattleActorControl_o *v56; // x28
  BattleServantData_o *v57; // x22
  System_Collections_Generic_Dictionary_object__int__o *v58; // x21
  UnityEngine_GameObject_o *v59; // x19
  struct BattlePerformance_o *v60; // x8
  UnityEngine_Transform_o *PlayerPopTr; // x0
  UnityEngine_GameObject_o *v62; // x19
  struct BattlePerformance_o *v63; // x8
  UnityEngine_Component_o *v64; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_array *v66; // [xsp+8h] [xbp-88h]
  System_String_o **m_Items; // [xsp+18h] [xbp-78h]
  int32_t v70; // [xsp+20h] [xbp-70h]
  BattleDemoRootComponent_o *v71; // [xsp+28h] [xbp-68h]

  if ( (byte_4C25504 & 1) == 0 )
  {
    sub_1C3B764(&BattleServantData_TypeInfo, *(_QWORD *)&uniqueIdStart);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v10);
    sub_1C3B764(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v11);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v12);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_BattleFieldMotionComponent___, v13);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v15);
    sub_1C3B764(&StringLiteral_21527/*"mstStaffPhoto"*/, v16);
    sub_1C3B764(&StringLiteral_24201/*"verticalImageSet"*/, v17);
    sub_1C3B764(&StringLiteral_21039/*"medium"*/, v18);
    sub_1C3B764(&StringLiteral_24962/*"ストーリークエスト敗北【画面】クエスト"*/, v19);
    sub_1C3B764(&StringLiteral_24683/*"{0}({1}){2}"*/, v20);
    sub_1C3B764(&StringLiteral_16510/*"ar-BH"*/, v21);
    sub_1C3B764(&StringLiteral_16613/*"audio"*/, v22);
    byte_4C25504 = 1;
  }
  FieldMotion = (__int64)this->fields.FieldMotion;
  if ( !FieldMotion
    || (FieldMotion = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)FieldMotion, 0LL)) == 0
    || (v71 = this,
        FieldMotion = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)FieldMotion,
                                 (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_BattleFieldMotionComponent___),
        !chrInfos) )
  {
LABEL_44:
    sub_1C3B9C0(FieldMotion, *(_QWORD *)&uniqueIdStart);
  }
  v25 = *(_QWORD *)&chrInfos->max_length;
  if ( (int)v25 >= 1 )
  {
    m_Items = chrInfos->m_Items;
    v26 = uniqueIdStart;
    v27 = (BattleFieldMotionComponent_o *)FieldMotion;
    v28 = 0LL;
    v66 = actors;
    do
    {
      if ( v28 >= (unsigned int)v25 )
LABEL_45:
        sub_1C3B9C8(FieldMotion, *(_QWORD *)&uniqueIdStart);
      v29 = m_Items[v28];
      if ( v29 )
      {
        ServantIdByInfo = (BattleDemoRootComponent_o *)BattleDemoRootComponent__GetServantIdByInfo(
                                                         (BattleDemoRootComponent_o *)FieldMotion,
                                                         m_Items[v28],
                                                         v24);
        v70 = (int)ServantIdByInfo;
        LimitCountByInfo = BattleDemoRootComponent__GetLimitCountByInfo(ServantIdByInfo, v29, v31);
        actorPrefab = (Il2CppObject *)v71->fields.actorPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        FieldMotion = (__int64)UnityEngine_Object__Instantiate_object_(
                                 actorPrefab,
                                 (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !actors )
          goto LABEL_44;
        v40 = v26 - uniqueIdStart;
        if ( v26 - uniqueIdStart >= actors->max_length )
          goto LABEL_45;
        v41 = (UnityEngine_GameObject_o *)FieldMotion;
        v42 = &actors->obj.klass + v40;
        v42[4] = (Il2CppClass *)v41;
        sub_1C3B708((PartyOrganizationUtility_o *)(v42 + 4), (int64_t)v41, v34, v35, v36, v37, v38, v39);
        if ( !v41 )
          goto LABEL_44;
        FieldMotion = (__int64)UnityEngine_GameObject__get_transform(v41, 0LL);
        if ( !v71->fields.Field )
          goto LABEL_44;
        v43 = (UnityEngine_Transform_o *)FieldMotion;
        FieldMotion = (__int64)UnityEngine_GameObject__get_transform(v71->fields.Field, 0LL);
        if ( !v43 )
          goto LABEL_44;
        UnityEngine_Transform__set_parent(v43, (UnityEngine_Transform_o *)FieldMotion, 0LL);
        FieldMotion = (__int64)UnityEngine_GameObject__get_transform(v41, 0LL);
        v44 = (UnityEngine_Transform_o *)FieldMotion;
        if ( !byte_4C1C511 )
        {
          FieldMotion = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&uniqueIdStart);
          byte_4C1C511 = 1;
        }
        if ( !v44 )
          goto LABEL_44;
        UnityEngine_Transform__set_localPosition(v44, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        FieldMotion = (__int64)UnityEngine_GameObject__get_transform(v41, 0LL);
        v45 = (UnityEngine_Transform_o *)FieldMotion;
        if ( !byte_4C1C511 )
        {
          FieldMotion = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&uniqueIdStart);
          byte_4C1C511 = 1;
        }
        if ( !v45 )
          goto LABEL_44;
        UnityEngine_Transform__set_localEulerAngles(v45, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        FieldMotion = (__int64)UnityEngine_GameObject__get_transform(v41, 0LL);
        v46 = (UnityEngine_Transform_o *)FieldMotion;
        if ( !byte_4C1C516 )
        {
          FieldMotion = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&uniqueIdStart);
          byte_4C1C516 = 1;
        }
        if ( !v46 )
          goto LABEL_44;
        v47 = v27;
        v48 = chrInfos;
        UnityEngine_Transform__set_localScale(v46, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        FieldMotion = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 v41,
                                 (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !FieldMotion )
          goto LABEL_44;
        performance = (int64_t)v71->fields.performance;
        v56 = (BattleActorControl_o *)FieldMotion;
        *(_QWORD *)(FieldMotion + 152) = performance;
        sub_1C3B708((PartyOrganizationUtility_o *)(FieldMotion + 152), performance, v49, v50, v51, v52, v53, v54);
        v57 = (BattleServantData_o *)sub_1C3B9B0(BattleServantData_TypeInfo);
        BattleServantData___ctor(v57, 0LL);
        v58 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_string__int__TypeInfo);
        System_Collections_Generic_Dictionary_object__int____ctor(
          v58,
          (const MethodInfo_334BECC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
        if ( !v58 )
          goto LABEL_44;
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v58,
          (Il2CppObject *)StringLiteral_21039/*"medium"*/,
          v26,
          (const MethodInfo_334C86C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v58,
          (Il2CppObject *)StringLiteral_24683/*"{0}({1}){2}"*/,
          v26,
          (const MethodInfo_334C86C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v58,
          (Il2CppObject *)StringLiteral_24962/*"ストーリークエスト敗北【画面】クエスト"*/,
          v26,
          (const MethodInfo_334C86C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v58,
          (Il2CppObject *)StringLiteral_24201/*"verticalImageSet"*/,
          v70,
          (const MethodInfo_334C86C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v58,
          (Il2CppObject *)StringLiteral_21527/*"mstStaffPhoto"*/,
          LimitCountByInfo,
          (const MethodInfo_334C86C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        if ( !v57 )
          goto LABEL_44;
        BattleServantData__SetFakeData(v57, (System_Collections_Generic_Dictionary_string__int__o *)v58, 0LL);
        if ( isPlayer )
        {
          BattleActorControl__setTypePlayer(v56, 0LL);
          BattleActorControl__setServantData(v56, v57, 0LL);
          BattleActorControl__setDirLeft(v56, 0LL);
          FieldMotion = (__int64)v71->fields.actorCamera;
          if ( !FieldMotion )
            goto LABEL_44;
          FieldMotion = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)FieldMotion, 0LL);
          if ( !v71->fields.CameraFsm )
            goto LABEL_44;
          v59 = (UnityEngine_GameObject_o *)FieldMotion;
          chrInfos = v48;
          FieldMotion = (__int64)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)v71->fields.CameraFsm,
                                   0LL);
          v60 = v71->fields.performance;
          if ( !v60 )
            goto LABEL_44;
          v27 = v47;
          BattleActorControl__setMotionListForDemo(
            v56,
            (System_String_o *)StringLiteral_16613/*"audio"*/,
            v59,
            (UnityEngine_GameObject_o *)FieldMotion,
            v71->fields.CommonMotionPrefab,
            v60->fields._CommonPigMotionPrefab_k__BackingField,
            0LL);
          actors = v66;
          if ( !v27 )
            goto LABEL_44;
          PlayerPopTr = BattleFieldMotionComponent__getPlayerPopTr(v27, v40, 0LL);
        }
        else
        {
          BattleActorControl__setTypeEnemy(v56, 0LL);
          BattleActorControl__setServantData(v56, v57, 0LL);
          BattleActorControl__setDirRight(v56, 0LL);
          FieldMotion = (__int64)v71->fields.actorCamera;
          if ( !FieldMotion )
            goto LABEL_44;
          FieldMotion = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)FieldMotion, 0LL);
          if ( !v71->fields.CameraFsm )
            goto LABEL_44;
          v62 = (UnityEngine_GameObject_o *)FieldMotion;
          chrInfos = v48;
          FieldMotion = (__int64)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)v71->fields.CameraFsm,
                                   0LL);
          v63 = v71->fields.performance;
          if ( !v63 )
            goto LABEL_44;
          v27 = v47;
          BattleActorControl__setMotionListForDemo(
            v56,
            (System_String_o *)StringLiteral_16510/*"ar-BH"*/,
            v62,
            (UnityEngine_GameObject_o *)FieldMotion,
            v71->fields.CommonMotionPrefab,
            v63->fields._CommonPigMotionPrefab_k__BackingField,
            0LL);
          actors = v66;
          if ( !v27 )
            goto LABEL_44;
          PlayerPopTr = BattleFieldMotionComponent__getEnemyPopPoint(v27, v40, 0LL);
        }
        v64 = (UnityEngine_Component_o *)PlayerPopTr;
        BattleActorControl__setCamera(v56, v71->fields.actorCamera, 0LL);
        if ( !v64 )
          goto LABEL_44;
        gameObject = UnityEngine_Component__get_gameObject(v64, 0LL);
        BattleActorControl__setTargetObject(v56, gameObject, 0LL);
        ++v26;
      }
      LODWORD(v25) = chrInfos->max_length;
      ++v28;
    }
    while ( (__int64)v28 < (int)v25 );
  }
}


void __fastcall BattleDemoRootComponent__CreateActors(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  BattleDemoRootComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_String_array *PlayerList; // x8
  int64_t v11; // x0
  struct UnityEngine_GameObject_array **p_PlayerActorList; // x21
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_String_array *EnemyList; // x8
  int64_t v20; // x0
  struct UnityEngine_GameObject_array **p_EnemyActorList; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct BattlePerformance_o *performance; // x8
  int64_t PlayerActorList; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct BattlePerformance_o *v42; // x8
  int64_t EnemyActorList; // x1
  const MethodInfo *v44; // x5
  const MethodInfo *v45; // x5
  struct UnityEngine_GameObject_array *v46; // x8
  unsigned __int64 v47; // x23
  struct System_String_o *BgmName; // x22
  System_String_o *v49; // x0
  struct UnityEngine_GameObject_array *v50; // x8
  struct UnityEngine_GameObject_array *v51; // x8
  unsigned __int64 v52; // x23
  signed __int64 max_length; // x27
  struct System_String_o *v54; // x22
  System_String_o *v55; // x0
  struct UnityEngine_GameObject_array *v56; // x8
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  struct System_String_array *CameraFsm; // x1
  struct UnityEngine_GameObject_array *v64; // x22
  int v65; // w9
  int v66; // w8
  UnityEngine_Object_o *v67; // x21
  struct UnityEngine_GameObject_array *v68; // x21
  int v69; // w9
  int v70; // w8
  UnityEngine_Object_o *v71; // x20
  int v72; // [xsp+Ch] [xbp-64h] BYREF

  v2 = this;
  if ( (byte_4C25503 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_GameObject___TypeInfo, method);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v3);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v4);
    sub_1C3B764(&StringLiteral_8902/*"MissionTransitionConfirmDialog"*/, v5);
    sub_1C3B764(&StringLiteral_5602/*"EVENT_SHOP_BANNER_FINISHED_MSG"*/, v6);
    sub_1C3B764(&StringLiteral_4064/*"Cannot create a multipart form data section without body data"*/, v7);
    sub_1C3B764(&StringLiteral_10604/*"QUEST_CONFIRM_AP_COUNT"*/, v8);
    this = (BattleDemoRootComponent_o *)sub_1C3B764(&StringLiteral_5587/*"EVENT_REWARD_ASSIST_SKILL_TITLE"*/, v9);
    byte_4C25503 = 1;
  }
  v72 = 0;
  PlayerList = v2->fields.PlayerList;
  if ( !PlayerList )
    goto LABEL_55;
  v11 = sub_1C3B80C(UnityEngine_GameObject___TypeInfo, PlayerList->max_length);
  v2->fields.PlayerActorList = (struct UnityEngine_GameObject_array *)v11;
  p_PlayerActorList = &v2->fields.PlayerActorList;
  sub_1C3B708((PartyOrganizationUtility_o *)&v2->fields.PlayerActorList, v11, v13, v14, v15, v16, v17, v18);
  EnemyList = v2->fields.EnemyList;
  if ( !EnemyList )
    goto LABEL_55;
  v20 = sub_1C3B80C(UnityEngine_GameObject___TypeInfo, EnemyList->max_length);
  v2->fields.EnemyActorList = (struct UnityEngine_GameObject_array *)v20;
  p_EnemyActorList = &v2->fields.EnemyActorList;
  sub_1C3B708((PartyOrganizationUtility_o *)&v2->fields.EnemyActorList, v20, v22, v23, v24, v25, v26, v27);
  performance = v2->fields.performance;
  if ( !performance )
    goto LABEL_55;
  PlayerActorList = (int64_t)v2->fields.PlayerActorList;
  performance->fields.p_actorlist = (struct UnityEngine_GameObject_array *)PlayerActorList;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&performance->fields.p_actorlist,
    PlayerActorList,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v42 = v2->fields.performance;
  if ( !v42 )
    goto LABEL_55;
  EnemyActorList = (int64_t)v2->fields.EnemyActorList;
  v42->fields.e_actorlist = (struct UnityEngine_GameObject_array *)EnemyActorList;
  sub_1C3B708((PartyOrganizationUtility_o *)&v42->fields.e_actorlist, EnemyActorList, v36, v37, v38, v39, v40, v41);
  BattleDemoRootComponent__CreateActorObject(v2, 1, v2->fields.PlayerList, v2->fields.PlayerActorList, 1, v44);
  BattleDemoRootComponent__CreateActorObject(v2, 4, v2->fields.EnemyList, v2->fields.EnemyActorList, 0, v45);
  v46 = v2->fields.PlayerActorList;
  if ( !v46 )
    goto LABEL_55;
  v47 = 0LL;
  while ( (__int64)v47 < (int)v46->max_length )
  {
    this = (BattleDemoRootComponent_o *)v2->fields.FieldMotion;
    if ( this )
    {
      this = (BattleDemoRootComponent_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
      if ( this )
      {
        BgmName = this->fields.BgmName;
        v72 = v47 + 1;
        v49 = System_Int32__ToString((int32_t)&v72, 0LL);
        this = (BattleDemoRootComponent_o *)System_String__Concat_63368612(
                                              (System_String_o *)StringLiteral_10604/*"QUEST_CONFIRM_AP_COUNT"*/,
                                              v49,
                                              0LL);
        if ( BgmName )
        {
          this = (BattleDemoRootComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                                (HutongGames_PlayMaker_FsmVariables_o *)BgmName,
                                                (System_String_o *)this,
                                                0LL);
          v50 = *p_PlayerActorList;
          if ( *p_PlayerActorList )
          {
            if ( v47 >= v50->max_length )
              goto LABEL_56;
            if ( this )
            {
              HutongGames_PlayMaker_FsmGameObject__set_Value(
                (HutongGames_PlayMaker_FsmGameObject_o *)this,
                v50->m_Items[v47],
                0LL);
              v46 = *p_PlayerActorList;
              ++v47;
              if ( *p_PlayerActorList )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_55;
  }
  v51 = *p_EnemyActorList;
  if ( !*p_EnemyActorList )
    goto LABEL_55;
  v52 = 0LL;
  while ( 1 )
  {
    this = (BattleDemoRootComponent_o *)v2->fields.FieldMotion;
    if ( !this )
      goto LABEL_55;
    max_length = (int)v51->max_length;
    this = (BattleDemoRootComponent_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
    if ( !this )
      goto LABEL_55;
    v54 = this->fields.BgmName;
    if ( (__int64)v52 >= max_length )
      break;
    v72 = v52 + 1;
    v55 = System_Int32__ToString((int32_t)&v72, 0LL);
    this = (BattleDemoRootComponent_o *)System_String__Concat_63368612((System_String_o *)StringLiteral_5602/*"EVENT_SHOP_BANNER_FINISHED_MSG"*/, v55, 0LL);
    if ( v54 )
    {
      this = (BattleDemoRootComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                            (HutongGames_PlayMaker_FsmVariables_o *)v54,
                                            (System_String_o *)this,
                                            0LL);
      v56 = *p_EnemyActorList;
      if ( *p_EnemyActorList )
      {
        if ( v52 >= v56->max_length )
          goto LABEL_56;
        if ( this )
        {
          HutongGames_PlayMaker_FsmGameObject__set_Value(
            (HutongGames_PlayMaker_FsmGameObject_o *)this,
            v56->m_Items[v52],
            0LL);
          v51 = *p_EnemyActorList;
          ++v52;
          if ( *p_EnemyActorList )
            continue;
        }
      }
    }
    goto LABEL_55;
  }
  if ( !v54 )
    goto LABEL_55;
  this = (BattleDemoRootComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmObject(
                                        (HutongGames_PlayMaker_FsmVariables_o *)this->fields.BgmName,
                                        (System_String_o *)StringLiteral_4064/*"Cannot create a multipart form data section without body data"*/,
                                        0LL);
  if ( !this )
    goto LABEL_55;
  CameraFsm = (struct System_String_array *)v2->fields.CameraFsm;
  this->fields.PlayerList = CameraFsm;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.PlayerList, (int64_t)CameraFsm, v57, v58, v59, v60, v61, v62);
  v64 = *p_PlayerActorList;
  v72 = 0;
  if ( !v64 )
    goto LABEL_55;
  v65 = v64->max_length;
  if ( v65 >= 1 )
  {
    v66 = 0;
    while ( v66 < (unsigned int)v65 )
    {
      v67 = (UnityEngine_Object_o *)v64->m_Items[v66];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleDemoRootComponent_o *)UnityEngine_Object__op_Equality(v67, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v67 )
          goto LABEL_55;
        this = (BattleDemoRootComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)v67,
                                              (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !this )
          goto LABEL_55;
        BattleActorControl__playMotion((BattleActorControl_o *)this, (System_String_o *)StringLiteral_8902/*"MissionTransitionConfirmDialog"*/, 0LL);
      }
      v66 = v72 + 1;
      v72 = v66;
      v65 = v64->max_length;
      if ( v66 >= v65 )
        goto LABEL_42;
    }
LABEL_56:
    sub_1C3B9C8(this, method);
  }
LABEL_42:
  v68 = *p_EnemyActorList;
  v72 = 0;
  if ( !v68 )
    goto LABEL_55;
  v69 = v68->max_length;
  if ( v69 >= 1 )
  {
    v70 = 0;
    while ( v70 < (unsigned int)v69 )
    {
      v71 = (UnityEngine_Object_o *)v68->m_Items[v70];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleDemoRootComponent_o *)UnityEngine_Object__op_Equality(v71, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v71 )
          goto LABEL_55;
        this = (BattleDemoRootComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)v71,
                                              (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !this )
          goto LABEL_55;
        BattleActorControl__playMotion((BattleActorControl_o *)this, (System_String_o *)StringLiteral_8902/*"MissionTransitionConfirmDialog"*/, 0LL);
      }
      v70 = v72 + 1;
      v72 = v70;
      v69 = v68->max_length;
      if ( v70 >= v69 )
        goto LABEL_53;
    }
    goto LABEL_56;
  }
LABEL_53:
  this = (BattleDemoRootComponent_o *)v2->fields.FieldMotion;
  if ( !this )
LABEL_55:
    sub_1C3B9C0(this, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5587/*"EVENT_REWARD_ASSIST_SKILL_TITLE"*/, 0LL);
}


void __fastcall BattleDemoRootComponent__EndRequestBattleSetup(
        BattleDemoRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  BattleDemoRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  void *monitor; // x22
  int32_t v13; // w20
  int32_t klass_high; // w21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4C25511 & 1) == 0 )
  {
    sub_1C3B764(&BattleData_TypeInfo, result);
    sub_1C3B764(&Method_DataManager_GetMaster_BattleMaster___, v5);
    sub_1C3B764(&DataManager_TypeInfo, v6);
    sub_1C3B764(&Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v9);
    sub_1C3B764(&StringLiteral_11289/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/, v10);
    this = (BattleDemoRootComponent_o *)sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, v11);
    byte_4C25511 = 1;
  }
  entity = 0LL;
  if ( !result )
    goto LABEL_18;
  if ( System_String__Equals_63376928(result, (System_String_o *)StringLiteral_22507/*"referrerMapId"*/, 0LL) )
  {
    this = (BattleDemoRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
      this = (BattleDemoRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( this )
      {
        AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)this, 34, 1, 0LL, 0, 0LL);
        return;
      }
    }
    goto LABEL_18;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (BattleDemoRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !this )
    goto LABEL_18;
  this = (BattleDemoRootComponent_o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        &entity,
                                        (const MethodInfo_329D4D0 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_18;
    monitor = entity[1].monitor;
    klass_high = HIDWORD(entity[2].klass);
    v13 = (int32_t)entity[2].monitor;
    if ( !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    BattleData__setResumeBattleId((int64_t)monitor, klass_high, v13, 0LL);
  }
  this = (BattleDemoRootComponent_o *)v4->fields.myFSM;
  if ( !this )
LABEL_18:
    sub_1C3B9C0(this, result);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11289/*"SERVANT_CHECK_COMBINE_DIALOG_TITLE"*/, 0LL);
}


int32_t __fastcall BattleDemoRootComponent__GetLimitCountByInfo(
        BattleDemoRootComponent_o *this,
        System_String_o *info,
        const MethodInfo *method)
{
  System_String_array *v4; // x0
  System_String_array *v5; // x1

  if ( (byte_4C254FF & 1) == 0 )
  {
    sub_1C3B764(&char___TypeInfo, info);
    byte_4C254FF = 1;
  }
  v4 = (System_String_array *)sub_1C3B80C(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_9;
  v5 = v4;
  if ( !v4->max_length )
    goto LABEL_10;
  LOWORD(v4->m_Items[0]) = 58;
  if ( !info || (v4 = System_String__Split_63390768(info, (System_Char_array *)v4, 0LL)) == 0LL )
LABEL_9:
    sub_1C3B9C0(v4, v5);
  if ( v4->max_length <= 1 )
LABEL_10:
    sub_1C3B9C8(v4, v5);
  return System_Int32__Parse(v4->m_Items[1], 0LL);
}


int32_t __fastcall BattleDemoRootComponent__GetServantIdByInfo(
        BattleDemoRootComponent_o *this,
        System_String_o *info,
        const MethodInfo *method)
{
  System_String_array *v4; // x0
  System_String_array *v5; // x1

  if ( (byte_4C254FE & 1) == 0 )
  {
    sub_1C3B764(&char___TypeInfo, info);
    byte_4C254FE = 1;
  }
  v4 = (System_String_array *)sub_1C3B80C(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_9;
  v5 = v4;
  if ( !v4->max_length )
    goto LABEL_10;
  LOWORD(v4->m_Items[0]) = 58;
  if ( !info || (v4 = System_String__Split_63390768(info, (System_Char_array *)v4, 0LL)) == 0LL )
LABEL_9:
    sub_1C3B9C0(v4, v5);
  if ( !v4->max_length )
LABEL_10:
    sub_1C3B9C8(v4, v5);
  return System_Int32__Parse(v4->m_Items[0], 0LL);
}


bool __fastcall BattleDemoRootComponent__GoToBattleEndTalk(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppClass *klass; // x8
  int32_t name_high; // w20
  int32_t namespaze; // w21
  ScriptManager_CallbackFunc_o *v8; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4C2550E & 1) == 0 )
  {
    sub_1C3B764(&Method_BattleDemoRootComponent_OnBattleEndScript__, method);
    sub_1C3B764(&ScriptManager_CallbackFunc_TypeInfo, v3);
    this = (BattleDemoRootComponent_o *)sub_1C3B764(&ScriptManager_TypeInfo, v4);
    byte_4C2550E = 1;
  }
  klass = v2[14].klass;
  if ( !klass )
    sub_1C3B9C0(this, method);
  name_high = HIDWORD(klass->_1.name);
  namespaze = (int32_t)klass->_1.namespaze;
  v8 = (ScriptManager_CallbackFunc_o *)sub_1C3B9B0(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v8, v2, Method_BattleDemoRootComponent_OnBattleEndScript__, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayBattleEnd(name_high, namespaze, 1, v8, 0, -1, 0LL);
  return 1;
}


bool __fastcall BattleDemoRootComponent__GoToBattleStartTalk(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppClass *klass; // x8
  int32_t name_high; // w20
  int32_t namespaze; // w21
  ScriptManager_CallbackFunc_o *v8; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4C2550C & 1) == 0 )
  {
    sub_1C3B764(&Method_BattleDemoRootComponent_OnBattleStartScript__, method);
    sub_1C3B764(&ScriptManager_CallbackFunc_TypeInfo, v3);
    this = (BattleDemoRootComponent_o *)sub_1C3B764(&ScriptManager_TypeInfo, v4);
    byte_4C2550C = 1;
  }
  klass = v2[14].klass;
  if ( !klass )
    sub_1C3B9C0(this, method);
  name_high = HIDWORD(klass->_1.name);
  namespaze = (int32_t)klass->_1.namespaze;
  v8 = (ScriptManager_CallbackFunc_o *)sub_1C3B9B0(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v8, v2, Method_BattleDemoRootComponent_OnBattleStartScript__, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayBattleStart2_42945948(name_high, namespaze, v8, 0, 0LL);
  return 1;
}


bool __fastcall BattleDemoRootComponent__GoToTerminal(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4C25510 & 1) == 0 )
  {
    sub_1C3B764(&ScriptManager_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v3);
    byte_4C25510 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C1CCCA )
  {
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v4);
    byte_4C1CCCA = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v7);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
  return 1;
}


void __fastcall BattleDemoRootComponent__InitializeBattleDemo(
        BattleDemoRootComponent_o *this,
        System_String_o *demoInfo,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_o *v8; // x23
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
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
  Il2CppObject *v28; // x0
  __int64 methodPtr_low; // x10
  System_Collections_Generic_Dictionary_object__object__o *v30; // x21
  __int64 v31; // x19
  struct System_String_array *v32; // x0
  BattleDemoRootComponent_o **p_PlayerList; // x23
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_String_array *v40; // x0
  struct System_String_array **p_EnemyList; // x22
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  __int64 v48; // x25
  __int64 v49; // x28
  System_String_o *v50; // x0
  BattleDemoRootComponent_c *Item; // x0
  System_String_c *v52; // x1
  Il2CppObject *v53; // x24
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_String_c **v60; // x8
  bool v61; // cf
  __int64 v62; // x24
  System_String_o *v63; // x0
  Il2CppObject *v64; // x23
  struct System_String_array *v65; // x25
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  System_Collections_Generic_List_object__o *v72; // x23
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  System_String_o *v79; // x0
  Il2CppObject *v80; // x24
  System_Collections_Generic_List_object__o *CueSheetList; // x23
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  struct System_Object_array *items; // x9
  _QWORD *v89; // x10
  __int64 size; // x11
  Il2CppClass **v91; // x0
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x2
  __int64 v95; // x3
  Il2CppObject *v96; // x0
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  System_String_c *v103; // x1
  struct System_String_o **p_BgmName; // x0
  __int64 v105; // x2
  __int64 v106; // x3
  System_Collections_Generic_List_object__o *v107; // x20
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  const MethodInfo *v114; // x1
  System_Collections_IEnumerator_o *v115; // x0
  BattleDemoRootComponent_o *v116; // x0
  const MethodInfo *v117; // x1
  struct System_Action_o *v118; // [xsp+8h] [xbp-78h]
  BattleDemoRootComponent_o *v119; // [xsp+10h] [xbp-70h]
  int v120; // [xsp+1Ch] [xbp-64h] BYREF

  v8 = callback;
  if ( (byte_4C254FD & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, demoInfo);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v11);
    sub_1C3B764(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v12);
    sub_1C3B764(&long_TypeInfo, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__Add__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantAssetArgs___ctor__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_string___ctor__, v16);
    sub_1C3B764(&System_Collections_Generic_List_ServantAssetArgs__TypeInfo, v17);
    sub_1C3B764(&System_Collections_Generic_List_string__TypeInfo, v18);
    sub_1C3B764(&string___TypeInfo, v19);
    sub_1C3B764(&string_TypeInfo, v20);
    sub_1C3B764(&StringLiteral_6159/*"EventUsuallyMove2"*/, v21);
    sub_1C3B764(&StringLiteral_12881/*"Syntax error in aggregate argument: Expecting a single column argument with possible 'Child' qualifier."*/, v22);
    sub_1C3B764(&StringLiteral_13122/*"TKey is a reference type and item.Key is null."*/, v23);
    sub_1C3B764(&StringLiteral_3301/*"CCSID01141"*/, v24);
    sub_1C3B764(&StringLiteral_10897/*"Random Insertion is semantically invalid, since this structure does not guarantee ordering."*/, v25);
    sub_1C3B764(&StringLiteral_3307/*"CCSID01147"*/, v26);
    sub_1C3B764(&StringLiteral_3306/*"CCSID01146"*/, v27);
    byte_4C254FD = 1;
  }
  v120 = 0;
  if ( !demoInfo )
    goto LABEL_51;
  v28 = MiniJSON_Json__Deserialize(demoInfo, 0LL);
  v118 = v8;
  if ( v28
    && (methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v28->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (System_Collections_Generic_Dictionary_string__object__c *)v28->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
      v30 = (System_Collections_Generic_Dictionary_object__object__o *)v28;
    else
      v30 = 0LL;
  }
  else
  {
    v30 = 0LL;
  }
  v31 = (__int64)&StringLiteral_10897/*"Random Insertion is semantically invalid, since this structure does not guarantee ordering."*/;
  v32 = (struct System_String_array *)sub_1C3B80C(string___TypeInfo, 3LL);
  this->fields.PlayerList = v32;
  p_PlayerList = (BattleDemoRootComponent_o **)&this->fields.PlayerList;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.PlayerList, (int64_t)v32, v34, v35, v36, v37, v38, v39);
  v40 = (struct System_String_array *)sub_1C3B80C(string___TypeInfo, 3LL);
  this->fields.EnemyList = v40;
  p_EnemyList = &this->fields.EnemyList;
  v119 = this;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.EnemyList, (int64_t)v40, v42, v43, v44, v45, v46, v47);
  v48 = -3LL;
  v49 = 32LL;
  do
  {
    v120 = v48 + 4;
    v50 = System_Int32__ToString((int32_t)&v120, 0LL);
    Item = (BattleDemoRootComponent_c *)System_String__Concat_63368612((System_String_o *)StringLiteral_10897/*"Random Insertion is semantically invalid, since this structure does not guarantee ordering."*/, v50, 0LL);
    if ( !v30 )
      goto LABEL_52;
    v53 = (Il2CppObject *)Item;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v30,
           (Il2CppObject *)Item,
           (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      this = *p_PlayerList;
      Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                            v30,
                                            v53,
                                            (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_52;
      v60 = (System_String_c **)Item;
      if ( Item )
      {
        v52 = string_TypeInfo;
        if ( Item->_1.image != string_TypeInfo )
          goto LABEL_46;
      }
      if ( v48 + 3 >= (unsigned __int64)LODWORD(this->fields.m_CancellationTokenSource) )
LABEL_53:
        sub_1C3B9C8(Item, v52);
      *(BattleDemoRootComponent_c **)((char *)&this->klass + v49) = Item;
      sub_1C3B708((PartyOrganizationUtility_o *)((char *)this + v49), (int64_t)Item, v54, v55, v56, v57, v58, v59);
    }
    v61 = __CFADD__(v48++, 1LL);
    v49 += 8LL;
  }
  while ( !v61 );
  this = v119;
  v31 = -3LL;
  v62 = 32LL;
  do
  {
    v120 = v31 + 4;
    v63 = System_Int32__ToString((int32_t)&v120, 0LL);
    v64 = (Il2CppObject *)System_String__Concat_63368612((System_String_o *)StringLiteral_6159/*"EventUsuallyMove2"*/, v63, 0LL);
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v30,
           v64,
           (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v65 = *p_EnemyList;
      Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                            v30,
                                            v64,
                                            (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v65 )
        goto LABEL_52;
      v60 = (System_String_c **)Item;
      if ( Item )
      {
        v52 = string_TypeInfo;
        if ( Item->_1.image != string_TypeInfo )
          goto LABEL_46;
      }
      if ( v31 + 3 >= (unsigned __int64)v65->max_length )
        goto LABEL_53;
      *(Il2CppClass **)((char *)&v65->obj.klass + v62) = (Il2CppClass *)Item;
      sub_1C3B708((PartyOrganizationUtility_o *)((char *)v65 + v62), (int64_t)Item, v66, v67, v68, v69, v70, v71);
    }
    v61 = __CFADD__(v31++, 1LL);
    v62 += 8LL;
  }
  while ( !v61 );
  v72 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v72,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_string___ctor__);
  v119->fields.CueSheetList = (struct System_Collections_Generic_List_string__o *)v72;
  sub_1C3B708((PartyOrganizationUtility_o *)&v119->fields.CueSheetList, (int64_t)v72, v73, v74, v75, v76, v77, v78);
  v31 = 1LL;
  do
  {
    v120 = v31;
    v79 = System_Int32__ToString((int32_t)&v120, 0LL);
    v80 = (Il2CppObject *)System_String__Concat_63368612((System_String_o *)StringLiteral_13122/*"TKey is a reference type and item.Key is null."*/, v79, 0LL);
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v30,
           v80,
           (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      CueSheetList = (System_Collections_Generic_List_object__o *)v119->fields.CueSheetList;
      Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                            v30,
                                            v80,
                                            (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !CueSheetList )
        goto LABEL_52;
      v60 = (System_String_c **)Item;
      if ( Item )
      {
        v52 = string_TypeInfo;
        if ( Item->_1.image != string_TypeInfo )
          goto LABEL_46;
      }
      items = CueSheetList->fields._items;
      v89 = Method_System_Collections_Generic_List_string__Add__;
      ++CueSheetList->fields._version;
      if ( !items )
        goto LABEL_52;
      size = CueSheetList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          CueSheetList,
          (Il2CppObject *)Item,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
      }
      else
      {
        v91 = &items->obj.klass + size;
        CueSheetList->fields._size = size + 1;
        v91[4] = (Il2CppClass *)v60;
        sub_1C3B708((PartyOrganizationUtility_o *)(v91 + 4), (int64_t)v60, v82, v83, v84, v85, v86, v87);
      }
    }
    v31 = (unsigned int)(v31 + 1);
  }
  while ( (_DWORD)v31 != 6 );
  Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                        v30,
                                        (Il2CppObject *)StringLiteral_3301/*"CCSID01141"*/,
                                        (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_52;
  v31 = (__int64)&long_TypeInfo;
  if ( (Il2CppClass *)*((_QWORD *)Item->_1.image + 8) != long_TypeInfo->_1.element_class )
    goto LABEL_54;
  v119->fields.BgId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v92, v93);
  Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                        v30,
                                        (Il2CppObject *)StringLiteral_3306/*"CCSID01146"*/,
                                        (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
LABEL_52:
    sub_1C3B9C0(Item, v52);
  if ( (Il2CppClass *)*((_QWORD *)Item->_1.image + 8) != long_TypeInfo->_1.element_class )
    goto LABEL_54;
  v119->fields.BgType = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v94, v95);
  v96 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v30,
          (Il2CppObject *)StringLiteral_3307/*"CCSID01147"*/,
          (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v60 = (System_String_c **)v96;
  if ( !v96 )
    goto LABEL_47;
  v103 = string_TypeInfo;
  if ( (System_String_c *)v96->klass != string_TypeInfo
    || (v119->fields.BgmName = (struct System_String_o *)v96, p_BgmName = &v119->fields.BgmName, *v60 != v103) )
  {
LABEL_46:
    sub_1C3BC80(v60);
LABEL_47:
    this->fields.BgmName = 0LL;
    p_BgmName = &this->fields.BgmName;
  }
  sub_1C3B708((PartyOrganizationUtility_o *)p_BgmName, (int64_t)v60, v97, v98, v99, v100, v101, v102);
  Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                        v30,
                                        (Il2CppObject *)StringLiteral_12881/*"Syntax error in aggregate argument: Expecting a single column argument with possible 'Child' qualifier."*/,
                                        (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_52;
  v8 = v118;
  if ( *((_QWORD *)Item->_1.image + 8) == *(_QWORD *)(*(_QWORD *)v31 + 64LL) )
  {
    this->fields.DemoSequenceServantId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, *(_QWORD *)v31, v105, v106);
LABEL_51:
    this->fields.InitializeCallback = v8;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.InitializeCallback,
      (int64_t)v8,
      (int64_t)callback,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    v107 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ServantAssetArgs__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v107,
      (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ServantAssetArgs___ctor__);
    this->fields.loadedAssetArgsList = (struct System_Collections_Generic_List_ServantAssetArgs__o *)v107;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.loadedAssetArgsList,
      (int64_t)v107,
      v108,
      v109,
      v110,
      v111,
      v112,
      v113);
    v115 = BattleDemoRootComponent__SetupBattleDemo(this, v114);
    UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, v115, 0LL);
    return;
  }
LABEL_54:
  sub_1C3BC80(Item);
  BattleDemoRootComponent__ReleaseBattleDemo(v116, v117);
}


void __fastcall BattleDemoRootComponent__LoadBattleChrs(
        BattleDemoRootComponent_o *this,
        System_String_array *chrlist,
        const MethodInfo *method)
{
  BattleDemoRootComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x8
  unsigned __int64 i; // x25
  System_String_o *v11; // x21
  BattleDemoRootComponent_o *ServantIdByInfo; // x0
  int32_t v13; // w22
  const MethodInfo *v14; // x2
  int32_t LimitCountByInfo; // w23
  int32_t myFSM; // w24
  ServantAssetArgs_o *v17; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x8
  _QWORD *v25; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v27; // x8

  v4 = this;
  if ( (byte_4C25505 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_ServantLimitMaster___, chrlist);
    sub_1C3B764(&DataManager_TypeInfo, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantAssetArgs__Add__, v6);
    sub_1C3B764(&ServantAssetArgs_TypeInfo, v7);
    this = (BattleDemoRootComponent_o *)sub_1C3B764(&ServantAssetLoadManager_TypeInfo, v8);
    byte_4C25505 = 1;
  }
  if ( !chrlist )
LABEL_21:
    sub_1C3B9C0(this, chrlist);
  v9 = *(_QWORD *)&chrlist->max_length;
  if ( (int)v9 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v9; ++i )
    {
      if ( i >= (unsigned int)v9 )
        sub_1C3B9C8(this, chrlist);
      v11 = chrlist->m_Items[i];
      if ( v11 )
      {
        ServantIdByInfo = (BattleDemoRootComponent_o *)BattleDemoRootComponent__GetServantIdByInfo(
                                                         this,
                                                         chrlist->m_Items[i],
                                                         method);
        v13 = (int)ServantIdByInfo;
        LimitCountByInfo = BattleDemoRootComponent__GetLimitCountByInfo(ServantIdByInfo, v11, v14);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (BattleDemoRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ServantLimitMaster___);
        if ( !this )
          goto LABEL_21;
        this = (BattleDemoRootComponent_o *)ServantLimitMaster__GetEntity(
                                              (ServantLimitMaster_o *)this,
                                              v13,
                                              LimitCountByInfo,
                                              0LL);
        if ( !this )
          goto LABEL_21;
        myFSM = (int32_t)this->fields.myFSM;
        v17 = (ServantAssetArgs_o *)sub_1C3B9B0(ServantAssetArgs_TypeInfo);
        ServantAssetArgs___ctor_44908812(v17, v13, LimitCountByInfo, 0, 0, myFSM, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        ServantAssetLoadManager__PreloadAssetsByArgs(v17, 0, 0LL);
        this = (BattleDemoRootComponent_o *)v4->fields.loadedAssetArgsList;
        if ( !this )
          goto LABEL_21;
        v24 = *(_QWORD *)&this->fields.m_CachedPtr;
        v25 = Method_System_Collections_Generic_List_ServantAssetArgs__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v24 )
          goto LABEL_21;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v24 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v17,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = v24 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v27 + 32) = v17;
          sub_1C3B708((PartyOrganizationUtility_o *)(v27 + 32), (int64_t)v17, v18, v19, v20, v21, v22, v23);
        }
      }
      LODWORD(v9) = chrlist->max_length;
    }
  }
}


void __fastcall BattleDemoRootComponent__LoadCueSheet(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_string__o *CueSheetList; // x0
  Il2CppObject *current; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C25500 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_BattleDemoRootComponent__LoadCueSheet_b__28_0__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    sub_1C3B764(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v8);
    byte_4C25500 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  CueSheetList = this->fields.CueSheetList;
  if ( CueSheetList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_object__o *)CueSheetList,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v15.fields._current;
      ++this->fields.CueSheetCount;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      v12 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_BattleDemoRootComponent__LoadCueSheet_b__28_0__, 0LL);
      if ( !Instance )
        sub_1C3B9C0(v13, v14);
      SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)current, v12, 1, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
}


void __fastcall BattleDemoRootComponent__OnBattleDemoLoadComplete(
        BattleDemoRootComponent_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_4C25509 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, obj);
    byte_4C25509 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance
    || (BattleSequenceManager__setup((BattleSequenceManager_o *)Instance, 0LL, 1, 0LL, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__)) == 0LL) )
  {
    sub_1C3B9C0(Instance, v5);
  }
  BattleSequenceManager__SetupDemoActor(
    (BattleSequenceManager_o *)Instance,
    this->fields.PlayerActorList,
    this->fields.EnemyActorList,
    0LL);
  v7 = BattleDemoRootComponent__WaitToNoblePhantasmPlay(this, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDemoRootComponent__OnBattleEndScript(
        BattleDemoRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppClass *klass; // x8
  int32_t name_high; // w20
  int32_t namespaze; // w21
  System_Action_object__o *v9; // x22

  v3 = (Il2CppObject *)this;
  if ( (byte_4C2550F & 1) == 0 )
  {
    sub_1C3B764(&System_Action_string__TypeInfo, isExit);
    sub_1C3B764(&Method_BattleDemoRootComponent__OnBattleEndScript_b__47_0__, v4);
    this = (BattleDemoRootComponent_o *)sub_1C3B764(&ScriptManager_TypeInfo, v5);
    byte_4C2550F = 1;
  }
  klass = v3[14].klass;
  if ( !klass )
    sub_1C3B9C0(this, isExit);
  name_high = HIDWORD(klass->_1.name);
  namespaze = (int32_t)klass->_1.namespaze;
  v9 = (System_Action_object__o *)sub_1C3B9B0(System_Action_string__TypeInfo);
  System_Action_object____ctor(v9, v3, Method_BattleDemoRootComponent__OnBattleEndScript_b__47_0__, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__LoadBattleEndGameDemo(name_high, namespaze, 0, (System_Action_string__o *)v9, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDemoRootComponent__OnBattleStartScript(
        BattleDemoRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C2550D & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_7098/*"Heap invariant violated"*/, isExit);
    byte_4C2550D = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C3B9C0(0LL, isExit);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_7098/*"Heap invariant violated"*/, 0LL);
}


void __fastcall BattleDemoRootComponent__OnNoblePhantasmPlayComplete(
        BattleDemoRootComponent_o *this,
        WellFired_USSequencer_o *seq,
        const MethodInfo *method)
{
  __int64 v4; // x1
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  struct System_Action_o *BattleDemoCallback; // x8
  void *performance; // x0
  struct UnityEngine_GameObject_array *PlayerActorList; // x22
  __int64 v25; // x8
  unsigned __int64 v26; // x23
  UnityEngine_Object_o *v27; // x20
  struct UnityEngine_GameObject_array *EnemyActorList; // x22
  __int64 v29; // x8
  unsigned __int64 v30; // x23
  UnityEngine_Object_o *v31; // x20
  System_Collections_Generic_List_object__o *loadedAssetArgsList; // x20
  System_Action_object__o *v33; // x21
  Il2CppObject *v34; // x22
  struct BattleDemoRootComponent___c_StaticFields *static_fields; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  const MethodInfo *v42; // x1
  BattleDemoRootComponent_c *v43; // x0
  float BGM_FADEOUT_TIME; // s8
  __int64 *v45; // x8
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  _BOOL4 battleBefore; // w9
  _BOOL4 isBefore; // w8

  if ( (byte_4C2550B & 1) == 0 )
  {
    sub_1C3B764(&System_Action_ServantAssetArgs__TypeInfo, seq);
    sub_1C3B764(&AssetManager_TypeInfo, v4);
    sub_1C3B764(&BattleDemoRootComponent_TypeInfo, v5);
    sub_1C3B764(&BattleFBXComponent_TypeInfo, v6);
    sub_1C3B764(&System_GC_TypeInfo, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantAssetArgs__ForEach__, v8);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v9);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v12);
    sub_1C3B764(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v13);
    sub_1C3B764(&SoundManager_TypeInfo, v14);
    sub_1C3B764(&Method_BattleDemoRootComponent___c__OnNoblePhantasmPlayComplete_b__43_0__, v15);
    sub_1C3B764(&BattleDemoRootComponent___c_TypeInfo, v16);
    sub_1C3B764(&StringLiteral_7102/*"HeelPortraitDetailDialogState"*/, v17);
    sub_1C3B764(&StringLiteral_7100/*"Hebrew (Israel)"*/, v18);
    sub_1C3B764(&StringLiteral_7099/*"Hebrew"*/, v19);
    sub_1C3B764(&StringLiteral_3243/*"Buffer is empty"*/, v20);
    sub_1C3B764(&StringLiteral_5579/*"EVENT_RAID_TIME_LIMIT_TXT_"*/, v21);
    byte_4C2550B = 1;
  }
  BattleDemoCallback = this->fields.BattleDemoCallback;
  if ( BattleDemoCallback )
  {
    if ( BattleFBXComponent_TypeInfo->_2.cctor_finished )
    {
      BattleFBXComponent_TypeInfo->static_fields->EnableEvent = 1;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
      BattleDemoCallback = this->fields.BattleDemoCallback;
      BattleFBXComponent_TypeInfo->static_fields->EnableEvent = 1;
      if ( !BattleDemoCallback )
        goto LABEL_68;
    }
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, const MethodInfo *))BattleDemoCallback->fields.m_target)(
      BattleDemoCallback->fields.original_method_info,
      *(_QWORD *)&BattleDemoCallback->fields.extra_arg,
      method);
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_68;
  BattlePerformance__setupCameraFov((BattlePerformance_o *)performance, this->fields.backupFov, 0LL);
  PlayerActorList = this->fields.PlayerActorList;
  if ( !PlayerActorList )
    goto LABEL_68;
  v25 = *(_QWORD *)&PlayerActorList->max_length;
  if ( (int)v25 >= 1 )
  {
    v26 = 0LL;
    while ( v26 < (unsigned int)v25 )
    {
      v27 = (UnityEngine_Object_o *)PlayerActorList->m_Items[v26];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      performance = (void *)UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
      if ( ((unsigned __int8)performance & 1) != 0 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71122748(v27, 0LL);
      }
      LODWORD(v25) = PlayerActorList->max_length;
      if ( (__int64)++v26 >= (int)v25 )
        goto LABEL_20;
    }
LABEL_67:
    sub_1C3B9C8(performance, seq);
  }
LABEL_20:
  EnemyActorList = this->fields.EnemyActorList;
  if ( !EnemyActorList )
    goto LABEL_68;
  v29 = *(_QWORD *)&EnemyActorList->max_length;
  if ( (int)v29 >= 1 )
  {
    v30 = 0LL;
    while ( v30 < (unsigned int)v29 )
    {
      v31 = (UnityEngine_Object_o *)EnemyActorList->m_Items[v30];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      performance = (void *)UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
      if ( ((unsigned __int8)performance & 1) != 0 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71122748(v31, 0LL);
      }
      LODWORD(v29) = EnemyActorList->max_length;
      if ( (__int64)++v30 >= (int)v29 )
        goto LABEL_31;
    }
    goto LABEL_67;
  }
LABEL_31:
  loadedAssetArgsList = (System_Collections_Generic_List_object__o *)this->fields.loadedAssetArgsList;
  performance = BattleDemoRootComponent___c_TypeInfo;
  if ( !BattleDemoRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDemoRootComponent___c_TypeInfo);
    performance = BattleDemoRootComponent___c_TypeInfo;
  }
  v33 = *(System_Action_object__o **)(*((_QWORD *)performance + 23) + 16LL);
  if ( !v33 )
  {
    if ( !*((_DWORD *)performance + 56) )
    {
      j_il2cpp_runtime_class_init_0(performance);
      performance = BattleDemoRootComponent___c_TypeInfo;
    }
    v34 = (Il2CppObject *)**((_QWORD **)performance + 23);
    v33 = (System_Action_object__o *)sub_1C3B9B0(System_Action_ServantAssetArgs__TypeInfo);
    System_Action_object____ctor(
      v33,
      v34,
      Method_BattleDemoRootComponent___c__OnNoblePhantasmPlayComplete_b__43_0__,
      0LL);
    static_fields = BattleDemoRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__43_0 = (struct System_Action_ServantAssetArgs__o *)v33;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__43_0, (int64_t)v33, v36, v37, v38, v39, v40, v41);
  }
  if ( !loadedAssetArgsList )
    goto LABEL_68;
  System_Collections_Generic_List_object___ForEach(
    loadedAssetArgsList,
    (System_Action_T__o *)v33,
    (const MethodInfo_368C6AC *)Method_System_Collections_Generic_List_ServantAssetArgs__ForEach__);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_3243/*"Buffer is empty"*/, 0LL);
  performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !performance )
    goto LABEL_68;
  ServantAssetLoadManager__releaseNoblePhantasm((ServantAssetLoadManager_o *)performance, 0LL);
  BattleDemoRootComponent__ReleaseCueSheet(this, v42);
  v43 = BattleDemoRootComponent_TypeInfo;
  if ( !BattleDemoRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDemoRootComponent_TypeInfo);
    v43 = BattleDemoRootComponent_TypeInfo;
  }
  BGM_FADEOUT_TIME = v43->static_fields->BGM_FADEOUT_TIME;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__fadeoutBgm(BGM_FADEOUT_TIME, 0LL);
  performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !performance )
    goto LABEL_68;
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)performance, 0LL, 0LL);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_64415268(0LL);
  performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !performance )
LABEL_68:
    sub_1C3B9C0(performance, seq);
  CommonUI__maskFadeout((CommonUI_o *)performance, 1, 1.0, 0LL, 0LL);
  if ( !this->fields.battleSetupInfo )
  {
    performance = this->fields.myFSM;
    if ( !performance )
      goto LABEL_68;
    v45 = &StringLiteral_5579/*"EVENT_RAID_TIME_LIMIT_TXT_"*/;
LABEL_56:
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)performance, (System_String_o *)*v45, 0LL);
    return;
  }
  performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !performance )
    goto LABEL_68;
  performance = (void *)AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)performance, 0LL);
  if ( ((unsigned __int8)performance & 1) != 0 )
  {
    performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( performance )
    {
      AvalonSceneManager__popSceneRefresh(
        (AvalonSceneManager_o *)performance,
        1,
        (Il2CppObject *)this->fields.battleSetupInfo,
        0LL);
      return;
    }
    goto LABEL_68;
  }
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_68;
  battleBefore = battleSetupInfo->fields.battleBefore;
  isBefore = battleSetupInfo->fields.isBefore;
  if ( !battleBefore )
  {
    performance = this->fields.myFSM;
    if ( !performance )
      goto LABEL_68;
    if ( isBefore )
      v45 = &StringLiteral_7099/*"Hebrew"*/;
    else
      v45 = &StringLiteral_7102/*"HeelPortraitDetailDialogState"*/;
    goto LABEL_56;
  }
  if ( !isBefore )
  {
    performance = this->fields.myFSM;
    if ( !performance )
      goto LABEL_68;
    v45 = &StringLiteral_7100/*"Hebrew (Israel)"*/;
    goto LABEL_56;
  }
}


void __fastcall BattleDemoRootComponent__ReleaseBattleDemo(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BattleDemoRootComponent__ReleaseCueSheet(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x0
  PartyOrganizationUtility_o *p_CueSheetList; // x19
  struct System_Collections_Generic_List_string__o *CueSheetList; // t1
  Il2CppObject *current; // x20
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C25501 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__GetEnumerator__, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v6);
    byte_4C25501 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  CueSheetList = this->fields.CueSheetList;
  p_CueSheetList = (PartyOrganizationUtility_o *)&this->fields.CueSheetList;
  v7 = (System_Collections_Generic_List_object__o *)CueSheetList;
  if ( CueSheetList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      v7,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v19.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !Instance )
        sub_1C3B9C0(0LL, v12);
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    p_CueSheetList->klass = 0LL;
    sub_1C3B708(p_CueSheetList, 0LL, v13, v14, v15, v16, v17, v18);
  }
}


bool __fastcall BattleDemoRootComponent__RequestBattleSetup(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  BattleSetupInfo_o *battleSetupInfo; // x0

  battleSetupInfo = this->fields.battleSetupInfo;
  if ( battleSetupInfo )
    BattleScriptRootComponent__GoForBattle(battleSetupInfo, method);
  return 1;
}


System_Collections_IEnumerator_o *__fastcall BattleDemoRootComponent__SetupBattleDemo(
        BattleDemoRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4C25502 & 1) == 0 )
  {
    sub_1C3B764(&BattleDemoRootComponent__SetupBattleDemo_d__30_TypeInfo, method);
    byte_4C25502 = 1;
  }
  v3 = sub_1C3B9B0(BattleDemoRootComponent__SetupBattleDemo_d__30_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall BattleDemoRootComponent__StartBattle(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C25512 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4C25512 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v3);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 10, 1, 0LL, 0, 0LL);
  return 1;
}


void __fastcall BattleDemoRootComponent__StartDemo(
        BattleDemoRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  BattleActorControl_o *Component_object; // x0
  __int64 v16; // x1
  struct UnityEngine_GameObject_array *PlayerActorList; // x8
  UnityEngine_GameObject_o *v18; // x21
  BattleActorControl_o *v19; // x20
  BattleFBXComponent_c *v20; // x0
  struct BattlePerformanceBg_o *perfBg; // x8
  int32_t DemoSequenceServantId; // w22
  BattleSequenceManager_o *v23; // x21
  struct BattleServantData_o *battleSvtData; // x8
  int32_t v25; // w20
  int32_t treasuredvcLevel; // w23
  BattleSequenceManager_onGameObjectLoadComplete_o *v27; // x24

  if ( (byte_4C25508 & 1) == 0 )
  {
    sub_1C3B764(&Method_BattleDemoRootComponent_OnBattleDemoLoadComplete__, callback);
    sub_1C3B764(&BattleFBXComponent_TypeInfo, v10);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v12);
    sub_1C3B764(&StringLiteral_9498/*"ORT_FIRST_QUEST_ID"*/, v13);
    sub_1C3B764(&BattleSequenceManager_onGameObjectLoadComplete_TypeInfo, v14);
    byte_4C25508 = 1;
  }
  this->fields.BattleDemoCallback = callback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.BattleDemoCallback,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  PlayerActorList = this->fields.PlayerActorList;
  if ( !PlayerActorList )
    goto LABEL_18;
  if ( !PlayerActorList->max_length )
    sub_1C3B9C8(Component_object, v16);
  v18 = PlayerActorList->m_Items[0];
  if ( !v18 )
    goto LABEL_18;
  Component_object = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                               v18,
                                               (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !this->fields.FieldMotion )
    goto LABEL_18;
  v19 = Component_object;
  Component_object = (BattleActorControl_o *)PlayMakerFSM__get_Fsm(this->fields.FieldMotion, 0LL);
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (BattleActorControl_o *)Component_object->fields.nodeDamage;
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                               (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                               (System_String_o *)StringLiteral_9498/*"ORT_FIRST_QUEST_ID"*/,
                                               0LL);
  if ( !Component_object )
    goto LABEL_18;
  HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Component_object, v18, 0LL);
  v20 = BattleFBXComponent_TypeInfo;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v20 = BattleFBXComponent_TypeInfo;
  }
  v20->static_fields->EnableEvent = 0;
  Component_object = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  perfBg = this->fields.perfBg;
  if ( !perfBg )
    goto LABEL_18;
  if ( !Component_object )
    goto LABEL_18;
  BattleSequenceManager__init(
    (BattleSequenceManager_o *)Component_object,
    this->fields.performance,
    v18,
    this->fields.PlayerActorList,
    this->fields.EnemyActorList,
    this->fields.actorCamera,
    perfBg->fields.bgobject,
    0LL);
  Component_object = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v19 )
    goto LABEL_18;
  DemoSequenceServantId = this->fields.DemoSequenceServantId;
  v23 = (BattleSequenceManager_o *)Component_object;
  Component_object = (BattleActorControl_o *)BattleActorControl__getLimitCount(v19, 0LL);
  battleSvtData = v19->fields.battleSvtData;
  if ( !battleSvtData
    || (v25 = (int)Component_object,
        treasuredvcLevel = battleSvtData->fields.treasuredvcLevel,
        v27 = (BattleSequenceManager_onGameObjectLoadComplete_o *)sub_1C3B9B0(BattleSequenceManager_onGameObjectLoadComplete_TypeInfo),
        BattleSequenceManager_onGameObjectLoadComplete___ctor(
          v27,
          (Il2CppObject *)this,
          Method_BattleDemoRootComponent_OnBattleDemoLoadComplete__,
          0LL),
        !v23) )
  {
LABEL_18:
    sub_1C3B9C0(Component_object, v16);
  }
  BattleSequenceManager__loadSequence(
    v23,
    DemoSequenceServantId,
    DemoSequenceServantId,
    v25,
    0,
    treasuredvcLevel,
    1,
    v27,
    0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleDemoRootComponent__WaitToNoblePhantasmPlay(
        BattleDemoRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4C2550A & 1) == 0 )
  {
    sub_1C3B764(&BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_TypeInfo, method);
    byte_4C2550A = 1;
  }
  v3 = sub_1C3B9B0(BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattleDemoRootComponent___LoadCueSheet_b__28_0(
        BattleDemoRootComponent_o *this,
        const MethodInfo *method)
{
  --this->fields.CueSheetCount;
}


void __fastcall BattleDemoRootComponent___OnBattleEndScript_b__47_0(
        BattleDemoRootComponent_o *this,
        System_String_o *demoInfo,
        const MethodInfo *method)
{
  System_String_o *v3; // x20
  __int64 v5; // x1
  CommonUI_o *Instance; // x0

  v3 = demoInfo;
  if ( (byte_4C25516 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, demoInfo);
    sub_1C3B764(&StringLiteral_7102/*"HeelPortraitDetailDialogState"*/, v5);
    byte_4C25516 = 1;
  }
  if ( v3 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 1, 0LL);
      demoInfo = (System_String_o *)this->fields.battleSetupInfo;
      if ( demoInfo )
      {
        BYTE1(demoInfo[4].klass) = 0;
        ((void (__fastcall *)(BattleDemoRootComponent_o *))this->klass->vtable._5_beginStartUp.method)(this);
        return;
      }
    }
LABEL_9:
    sub_1C3B9C0(Instance, demoInfo);
  }
  Instance = (CommonUI_o *)this->fields.myFSM;
  if ( !Instance )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_7102/*"HeelPortraitDetailDialogState"*/, 0LL);
}


void __fastcall BattleDemoRootComponent___SetupBattleDemo_b__30_0(
        BattleDemoRootComponent_o *this,
        AssetData_o *aData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t performance; // x0
  struct BattlePerformance_o *v9; // x8
  struct BattleFieldMotionComponent_array *fieldmotion; // x8
  struct PlayMakerFSM_o *Fsm; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  UnityEngine_GameObject_o *cameraObject; // x23
  UnityEngine_Transform_o *v19; // x22
  struct UnityEngine_GameObject_o **p_cameraObject; // x21
  Il2CppObject *Object_object__50142412; // x0
  struct UnityEngine_GameObject_o *ObjectIfNotExist; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  UnityEngine_Transform_o *v29; // x20
  struct BattlePerformance_o *v30; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct BattlePerformance_o *v37; // x20
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x8
  int64_t v51; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  __int64 v58; // x8
  int64_t v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct BattlePerformance_o *v66; // x8
  struct BattleActionCamera_o *actioncamera; // x9
  int64_t frontcamera; // x1
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  struct BattlePerformance_o *v75; // x8
  struct BattleActionCamera_o *v76; // x8
  struct UnityEngine_Camera_o *actorcamera; // x1
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  struct BattlePerformance_o *v84; // x8
  struct PlayMakerFSM_o *camerafsm; // x1
  struct PlayMakerFSM_o **p_CameraFsm; // x19
  __int64 v87; // x8
  __int64 v88; // x19
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7

  if ( (byte_4C25514 & 1) == 0 )
  {
    sub_1C3B764(&Method_AssetData_GetObject_GameObject____77902856, aData);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_BattleActionCamera___, v5);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v6);
    sub_1C3B764(&StringLiteral_11629/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/, v7);
    byte_4C25514 = 1;
  }
  performance = (int64_t)this->fields.performance;
  if ( !performance )
    goto LABEL_34;
  BattlePerformance__loadStorageObjectCommonMotion((BattlePerformance_o *)performance, aData, 0LL);
  performance = (int64_t)this->fields.performance;
  if ( !performance )
    goto LABEL_34;
  BattlePerformance__loadFieldMotion((BattlePerformance_o *)performance, aData, 0LL, 0LL);
  v9 = this->fields.performance;
  if ( !v9 )
    goto LABEL_34;
  fieldmotion = v9->fields.fieldmotion;
  if ( !fieldmotion )
    goto LABEL_34;
  if ( !fieldmotion->max_length )
    sub_1C3B9C8(performance, aData);
  performance = (int64_t)fieldmotion->m_Items[0];
  if ( !performance )
    goto LABEL_34;
  Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)performance, 0LL);
  this->fields.FieldMotion = Fsm;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.FieldMotion, (int64_t)Fsm, v12, v13, v14, v15, v16, v17);
  performance = (int64_t)this->fields.GroundObject;
  if ( !performance )
    goto LABEL_34;
  performance = (int64_t)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)performance, 0LL);
  if ( !performance )
    goto LABEL_34;
  performance = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)performance, 0LL);
  if ( !aData )
    goto LABEL_34;
  cameraObject = this->fields.cameraObject;
  v19 = (UnityEngine_Transform_o *)performance;
  p_cameraObject = &this->fields.cameraObject;
  Object_object__50142412 = AssetData__GetObject_object__50142412(
                              aData,
                              (System_String_o *)StringLiteral_11629/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/,
                              (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  ObjectIfNotExist = BaseMonoBehaviour__createObjectIfNotExist(
                       (BaseMonoBehaviour_o *)this,
                       cameraObject,
                       (UnityEngine_GameObject_o *)Object_object__50142412,
                       v19,
                       0LL,
                       0LL);
  this->fields.cameraObject = ObjectIfNotExist;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.cameraObject,
    (int64_t)ObjectIfNotExist,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  performance = (int64_t)this->fields.cameraObject;
  if ( !performance )
    goto LABEL_34;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)performance, (System_String_o *)StringLiteral_11629/*"SERVANT_STATUS_EXPLANATION_SERVANT_QUEST_RAINFORCEMENT"*/, 0LL);
  performance = (int64_t)*p_cameraObject;
  if ( !*p_cameraObject )
    goto LABEL_34;
  performance = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)performance, 0LL);
  v29 = (UnityEngine_Transform_o *)performance;
  if ( !byte_4C1C511 )
  {
    performance = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, aData);
    byte_4C1C511 = 1;
  }
  if ( !v29 )
    goto LABEL_34;
  UnityEngine_Transform__set_eulerAngles(v29, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  performance = (int64_t)this->fields.cameraObject;
  if ( !performance )
    goto LABEL_34;
  v30 = this->fields.performance;
  performance = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)performance,
                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v30 )
    goto LABEL_34;
  v30->fields.camerafsm = (struct PlayMakerFSM_o *)performance;
  sub_1C3B708((PartyOrganizationUtility_o *)&v30->fields.camerafsm, performance, v31, v32, v33, v34, v35, v36);
  performance = (int64_t)this->fields.cameraObject;
  if ( !performance )
    goto LABEL_34;
  v37 = this->fields.performance;
  performance = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)performance,
                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_BattleActionCamera___);
  if ( !v37 )
    goto LABEL_34;
  v37->fields.actioncamera = (struct BattleActionCamera_o *)performance;
  sub_1C3B708((PartyOrganizationUtility_o *)&v37->fields.actioncamera, performance, v38, v39, v40, v41, v42, v43);
  performance = (int64_t)this->fields.performance;
  if ( !performance )
    goto LABEL_34;
  v50 = *(_QWORD *)(performance + 392);
  if ( !v50 )
    goto LABEL_34;
  v51 = *(_QWORD *)(v50 + 72);
  *(_QWORD *)(performance + 144) = v51;
  sub_1C3B708((PartyOrganizationUtility_o *)(performance + 144), v51, v44, v45, v46, v47, v48, v49);
  performance = (int64_t)this->fields.performance;
  if ( !performance )
    goto LABEL_34;
  v58 = *(_QWORD *)(performance + 392);
  if ( !v58 )
    goto LABEL_34;
  v59 = *(_QWORD *)(v58 + 88);
  *(_QWORD *)(performance + 160) = v59;
  sub_1C3B708((PartyOrganizationUtility_o *)(performance + 160), v59, v52, v53, v54, v55, v56, v57);
  v66 = this->fields.performance;
  if ( !v66 )
    goto LABEL_34;
  actioncamera = v66->fields.actioncamera;
  if ( !actioncamera )
    goto LABEL_34;
  frontcamera = (int64_t)actioncamera->fields.frontcamera;
  v66->fields.cutIncamera = (struct UnityEngine_Camera_o *)frontcamera;
  sub_1C3B708((PartyOrganizationUtility_o *)&v66->fields.cutIncamera, frontcamera, v60, v61, v62, v63, v64, v65);
  v75 = this->fields.performance;
  if ( !v75 )
    goto LABEL_34;
  v76 = v75->fields.actioncamera;
  if ( !v76 )
    goto LABEL_34;
  actorcamera = v76->fields.actorcamera;
  this->fields.actorCamera = actorcamera;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.actorCamera,
    (int64_t)actorcamera,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  v84 = this->fields.performance;
  if ( !v84 )
    goto LABEL_34;
  camerafsm = v84->fields.camerafsm;
  this->fields.CameraFsm = camerafsm;
  p_CameraFsm = &this->fields.CameraFsm;
  sub_1C3B708((PartyOrganizationUtility_o *)p_CameraFsm, (int64_t)camerafsm, v78, v79, v80, v81, v82, v83);
  v87 = (__int64)*(p_CameraFsm - 7);
  if ( !v87
    || (performance = *(_QWORD *)(v87 + 160)) == 0
    || (v88 = (__int64)*(p_CameraFsm - 4),
        performance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)performance, 0LL),
        !v88) )
  {
LABEL_34:
    sub_1C3B9C0(performance, aData);
  }
  *(_QWORD *)(v88 + 40) = performance;
  sub_1C3B708((PartyOrganizationUtility_o *)(v88 + 40), performance, v89, v90, v91, v92, v93, v94);
}


void __fastcall BattleDemoRootComponent___beginStartUp_b__36_0(
        BattleDemoRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_Action_o *v9; // x20
  Il2CppObject *v10; // x21
  struct BattleDemoRootComponent___c_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4C25515 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C3B764(&Method_BattleDemoRootComponent___c__beginStartUp_b__36_1__, v4);
    sub_1C3B764(&BattleDemoRootComponent___c_TypeInfo, v5);
    byte_4C25515 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
  Instance = BattleDemoRootComponent___c_TypeInfo;
  if ( !BattleDemoRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDemoRootComponent___c_TypeInfo);
    Instance = BattleDemoRootComponent___c_TypeInfo;
  }
  v9 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v9 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = BattleDemoRootComponent___c_TypeInfo;
    }
    v10 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v9 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v9, v10, Method_BattleDemoRootComponent___c__beginStartUp_b__36_1__, 0LL);
    static_fields = BattleDemoRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__36_1 = v9;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__36_1, (int64_t)v9, v12, v13, v14, v15, v16, v17);
  }
  if ( !this )
LABEL_12:
    sub_1C3B9C0(Instance, v7);
  BattleDemoRootComponent__StartDemo(this, v9, v8);
}


void __fastcall BattleDemoRootComponent__beginFinish(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BattleDemoRootComponent__beginInitialize(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C25506 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_4C25506 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__maskFadeout((CommonUI_o *)Instance, 1, 0.0, 0LL, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1C3B9C0(Instance, v5);
  }
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall BattleDemoRootComponent__beginStartUp(
        BattleDemoRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  Il2CppObject *demoInfo; // x20
  __int64 v10; // x1
  __int64 v11; // x1
  BattleSetupInfo_c *v12; // x1
  __int64 methodPtr_low; // x8
  System_Action_o *v14; // x21
  const MethodInfo *v15; // x3
  struct BattleSetupInfo_o **p_battleSetupInfo; // x21
  __int64 v17; // x0
  __int64 v18; // x1

  demoInfo = data;
  if ( (byte_4C25507 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, data);
    sub_1C3B764(&Method_BattleDemoRootComponent__beginStartUp_b__36_0__, v10);
    sub_1C3B764(&BattleSetupInfo_TypeInfo, v11);
    byte_4C25507 = 1;
  }
  if ( demoInfo )
  {
    v12 = BattleSetupInfo_TypeInfo;
    methodPtr_low = LOBYTE(BattleSetupInfo_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(demoInfo->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
      && (BattleSetupInfo_c *)demoInfo->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleSetupInfo_TypeInfo )
    {
      this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)demoInfo;
      p_battleSetupInfo = &this->fields.battleSetupInfo;
      if ( LOBYTE(demoInfo->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (BattleSetupInfo_c *)demoInfo->klass->_2.typeHierarchy[methodPtr_low - 1] == v12 )
      {
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&this->fields.battleSetupInfo,
          (int64_t)demoInfo,
          (int64_t)method,
          v3,
          v4,
          v5,
          v6,
          v7);
        if ( *p_battleSetupInfo )
        {
          demoInfo = (Il2CppObject *)(*p_battleSetupInfo)->fields.demoInfo;
          goto LABEL_7;
        }
      }
      else
      {
        sub_1C3BC80(demoInfo);
      }
      sub_1C3B9C0(v17, v18);
    }
    demoInfo = 0LL;
  }
LABEL_7:
  v14 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_BattleDemoRootComponent__beginStartUp_b__36_0__, 0LL);
  BattleDemoRootComponent__InitializeBattleDemo(this, (System_String_o *)demoInfo, v14, v15);
}


void __fastcall BattleDemoRootComponent__SetupBattleDemo_d__30___ctor(
        BattleDemoRootComponent__SetupBattleDemo_d__30_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleDemoRootComponent__SetupBattleDemo_d__30__MoveNext(
        BattleDemoRootComponent__SetupBattleDemo_d__30_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleDemoRootComponent__SetupBattleDemo_d__30_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct BattleDemoRootComponent_o *_4__this; // x20
  AssetLoader_LoadEndDataHandler_o *v17; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  struct System_Action_o *InitializeCallback; // x8
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  PartyOrganizationUtility_o *v35; // x19
  int v36; // w8
  System_String_o *BgmName; // x20
  UnityEngine_WaitForSeconds_o *v38; // x20
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7

  v8 = this;
  if ( (byte_4C25519 & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, method);
    sub_1C3B764(&Method_BattleDemoRootComponent__SetupBattleDemo_b__30_0__, v9);
    sub_1C3B764(&AssetLoader_LoadEndDataHandler_TypeInfo, v10);
    sub_1C3B764(&ServantAssetLoadManager_TypeInfo, v11);
    sub_1C3B764(&SoundManager_TypeInfo, v12);
    sub_1C3B764(&UnityEngine_WaitForSeconds_TypeInfo, v13);
    sub_1C3B764(&StringLiteral_3243/*"Buffer is empty"*/, v14);
    this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)sub_1C3B764(&StringLiteral_11298/*"SERVANT_COIN_CONFIRM_GET_TITLE"*/, v15);
    byte_4C25519 = 1;
  }
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3B9B0(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v17,
        (Il2CppObject *)_4__this,
        Method_BattleDemoRootComponent__SetupBattleDemo_b__30_0__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage((System_String_o *)StringLiteral_3243/*"Buffer is empty"*/, v17, 1, 0LL);
      goto LABEL_8;
    case 1:
      v8->fields.__1__state = -1;
LABEL_8:
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)AssetManager__LoadIsBusy(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v8->fields.__2__current = 0LL;
        p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C3B708(p__2__current, 0LL, v18, v19, v20, v21, v22, v23);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return result;
      }
      if ( !_4__this )
        goto LABEL_35;
      this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_35;
      BattlePerformance__ForceLoadBg((BattlePerformance_o *)this, _4__this->fields.BgId, _4__this->fields.BgType, 0LL);
      BattleDemoRootComponent__LoadBattleChrs(_4__this, _4__this->fields.PlayerList, v27);
      BattleDemoRootComponent__LoadBattleChrs(_4__this, _4__this->fields.EnemyList, v28);
LABEL_22:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( _4__this )
        {
          BattleDemoRootComponent__LoadCueSheet(_4__this, method);
LABEL_28:
          if ( _4__this->fields.CueSheetCount )
          {
            v8->fields.__2__current = 0LL;
            v35 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1C3B708(v35, 0LL, v2, v3, v4, v5, v6, v7);
            v36 = 3;
            goto LABEL_34;
          }
          BattleDemoRootComponent__CreateActors(_4__this, method);
          this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)_4__this->fields.CameraFsm;
          if ( this )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11298/*"SERVANT_COIN_CONFIRM_GET_TITLE"*/, 0LL);
            BgmName = _4__this->fields.BgmName;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            SoundManager__playBgm(BgmName, 0LL);
            v38 = (UnityEngine_WaitForSeconds_o *)sub_1C3B9B0(UnityEngine_WaitForSeconds_TypeInfo);
            UnityEngine_WaitForSeconds___ctor(v38, 1.0, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v38;
            v35 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1C3B708(v35, (int64_t)v38, v39, v40, v41, v42, v43, v44);
            v36 = 4;
            goto LABEL_34;
          }
        }
LABEL_35:
        sub_1C3B9C0(this, method);
      }
      v8->fields.__2__current = 0LL;
      v35 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C3B708(v35, 0LL, v29, v30, v31, v32, v33, v34);
      v36 = 2;
LABEL_34:
      *(_DWORD *)&v35[-1].fields._IsQuestStartMenuMode_k__BackingField = v36;
      return 1;
    case 2:
      v8->fields.__1__state = -1;
      goto LABEL_22;
    case 3:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_35;
      goto LABEL_28;
    case 4:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_35;
      InitializeCallback = _4__this->fields.InitializeCallback;
      if ( InitializeCallback )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))InitializeCallback->fields.m_target)(
          InitializeCallback->fields.original_method_info,
          *(_QWORD *)&InitializeCallback->fields.extra_arg);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattleDemoRootComponent__SetupBattleDemo_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleDemoRootComponent__SetupBattleDemo_d__30_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleDemoRootComponent__SetupBattleDemo_d__30__System_Collections_IEnumerator_Reset(
        BattleDemoRootComponent__SetupBattleDemo_d__30_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_BattleDemoRootComponent__SetupBattleDemo_d__30_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
}


Il2CppObject *__fastcall BattleDemoRootComponent__SetupBattleDemo_d__30__System_Collections_IEnumerator_get_Current(
        BattleDemoRootComponent__SetupBattleDemo_d__30_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleDemoRootComponent__SetupBattleDemo_d__30__System_IDisposable_Dispose(
        BattleDemoRootComponent__SetupBattleDemo_d__30_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42___ctor(
        BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42__MoveNext(
        BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *this,
        const MethodInfo *method)
{
  BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v9; // x19
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  bool result; // w0
  struct BattleDemoRootComponent_o *_4__this; // x19
  struct BattlePerformance_o *performance; // x20
  BattlePerformance_c *v19; // x0
  struct BattlePerformance_o *v20; // x8
  BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *v21; // x20
  Il2CppObject *Instance; // x20
  System_Action_object__o *v23; // x21

  v2 = this;
  if ( (byte_4C2551A & 1) == 0 )
  {
    sub_1C3B764(&System_Action_USSequencer__TypeInfo, method);
    sub_1C3B764(&Method_BattleDemoRootComponent_OnNoblePhantasmPlayComplete__, v3);
    sub_1C3B764(&BattlePerformance_TypeInfo, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v6);
    this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)sub_1C3B764(
                                                                         &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                         v7);
    byte_4C2551A = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_20;
    this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)_4__this->fields.performance;
    if ( !this )
      goto LABEL_20;
    BattlePerformance__FlipAll((BattlePerformance_o *)this, 0, 0LL);
    performance = _4__this->fields.performance;
    if ( !performance )
      goto LABEL_20;
    _4__this->fields.backupFov = performance->fields.currentFov;
    v19 = BattlePerformance_TypeInfo;
    if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
      v19 = BattlePerformance_TypeInfo;
    }
    BattlePerformance__setupCameraFov(performance, v19->static_fields->DefaultFov, 0LL);
    v20 = _4__this->fields.performance;
    if ( !v20 )
      goto LABEL_20;
    this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)v20->fields.actorcamera;
    if ( !this )
      goto LABEL_20;
    this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)UnityEngine_Component__get_transform(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0LL);
    v21 = this;
    if ( !byte_4C1C511 )
    {
      this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)sub_1C3B764(
                                                                           &UnityEngine_Vector3_TypeInfo,
                                                                           method);
      byte_4C1C511 = 1;
    }
    if ( !v21
      || (UnityEngine_Transform__set_localEulerAngles(
            (UnityEngine_Transform_o *)v21,
            UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
            0LL),
          (this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__maskFadein((CommonUI_o *)this, 1.0, 0LL, 0LL),
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__),
          v23 = (System_Action_object__o *)sub_1C3B9B0(System_Action_USSequencer__TypeInfo),
          System_Action_object____ctor(
            v23,
            (Il2CppObject *)_4__this,
            Method_BattleDemoRootComponent_OnNoblePhantasmPlayComplete__,
            0LL),
          !Instance) )
    {
LABEL_20:
      sub_1C3B9C0(this, method);
    }
    BattleSequenceManager__play((BattleSequenceManager_o *)Instance, 0, 1, (System_Action_USSequencer__o *)v23, 0LL);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v9 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3B9B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v9, 0LL);
    v2->fields.__2__current = (Il2CppObject *)v9;
    sub_1C3B708((PartyOrganizationUtility_o *)&v2->fields.__2__current, (int64_t)v9, v10, v11, v12, v13, v14, v15);
    result = 1;
    v2->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42__System_Collections_IEnumerator_Reset(
        BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
}


Il2CppObject *__fastcall BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42__System_Collections_IEnumerator_get_Current(
        BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42__System_IDisposable_Dispose(
        BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleDemoRootComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C25517 & 1) == 0 )
  {
    sub_1C3B764(&BattleDemoRootComponent___c_TypeInfo, v1);
    byte_4C25517 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(BattleDemoRootComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleDemoRootComponent___c_TypeInfo->static_fields->__9 = (struct BattleDemoRootComponent___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)BattleDemoRootComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall BattleDemoRootComponent___c___ctor(BattleDemoRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleDemoRootComponent___c___OnNoblePhantasmPlayComplete_b__43_0(
        BattleDemoRootComponent___c_o *this,
        ServantAssetArgs_o *args,
        const MethodInfo *method)
{
  if ( (byte_4C25518 & 1) == 0 )
  {
    sub_1C3B764(&ServantAssetLoadManager_TypeInfo, args);
    byte_4C25518 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__UnloadAssetsByArgs(args, 0LL);
}


void __fastcall BattleDemoRootComponent___c___beginStartUp_b__36_1(
        BattleDemoRootComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}