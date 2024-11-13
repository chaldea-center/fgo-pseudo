void __fastcall BattleDemoRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B195F1 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDemoRootComponent_TypeInfo, v1, v2);
    byte_4B195F1 = 1;
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
  System_String_array *v7; // x22
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 FieldMotion; // x0
  const MethodInfo *v38; // x2
  __int64 v39; // x8
  int32_t v40; // w26
  unsigned __int64 v41; // x24
  System_String_o *v42; // x19
  BattleDemoRootComponent_o *ServantIdByInfo; // x0
  const MethodInfo *v44; // x2
  int32_t LimitCountByInfo; // w0
  __int64 v46; // x1
  Il2CppObject *actorPrefab; // x19
  int32_t v48; // w21
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int32_t v55; // w27
  UnityEngine_GameObject_o *v56; // x19
  Il2CppClass **v57; // x0
  UnityEngine_Transform_o *v58; // x21
  __int64 v59; // x2
  UnityEngine_Transform_o *v60; // x21
  __int64 v61; // x2
  UnityEngine_Transform_o *v62; // x21
  __int64 v63; // x2
  UnityEngine_Transform_o *v64; // x21
  System_String_array *v65; // x20
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  struct BattlePerformance_o *performance; // x1
  BattleActorControl_o *v73; // x19
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  BattleServantData_o *v77; // x22
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  System_Collections_Generic_Dictionary_object__int__o *v81; // x21
  UnityEngine_GameObject_o *v82; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *PlayerPopTr; // x0
  UnityEngine_GameObject_o *v85; // x21
  UnityEngine_GameObject_o *v86; // x0
  UnityEngine_Component_o *v87; // x21
  UnityEngine_GameObject_o *v88; // x0
  UnityEngine_GameObject_array *v89; // [xsp+8h] [xbp-88h]
  BattleFieldMotionComponent_o *v90; // [xsp+10h] [xbp-80h]
  System_String_o **m_Items; // [xsp+20h] [xbp-70h]
  int32_t v94; // [xsp+28h] [xbp-68h]
  int32_t value; // [xsp+2Ch] [xbp-64h]

  v7 = chrInfos;
  if ( (byte_4B195E2 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleServantData_TypeInfo, *(_QWORD *)&uniqueIdStart, chrInfos);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v15, v16);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleFieldMotionComponent___, v17, v18);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v19, v20);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v21, v22);
    sub_1BCA7E0(&StringLiteral_21328/*"limitCount"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_23955/*"svtId"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_20843/*"index"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_24707/*"userSvtId"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_24432/*"uniqueId"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_16362/*"_ENEMY"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_16464/*"_PLAYER"*/, v35, v36);
    byte_4B195E2 = 1;
  }
  FieldMotion = (__int64)this->fields.FieldMotion;
  if ( !FieldMotion
    || (FieldMotion = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)FieldMotion, 0LL)) == 0
    || (FieldMotion = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)FieldMotion,
                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleFieldMotionComponent___),
        !v7) )
  {
LABEL_42:
    sub_1BCAA3C(FieldMotion, *(_QWORD *)&uniqueIdStart);
  }
  v39 = *(_QWORD *)&v7->max_length;
  if ( (int)v39 >= 1 )
  {
    m_Items = v7->m_Items;
    v40 = uniqueIdStart;
    v41 = 0LL;
    v89 = actors;
    v90 = (BattleFieldMotionComponent_o *)FieldMotion;
    do
    {
      if ( v41 >= (unsigned int)v39 )
LABEL_43:
        sub_1BCAA44(FieldMotion, *(_QWORD *)&uniqueIdStart);
      v42 = m_Items[v41];
      if ( v42 )
      {
        ServantIdByInfo = (BattleDemoRootComponent_o *)BattleDemoRootComponent__GetServantIdByInfo(
                                                         (BattleDemoRootComponent_o *)FieldMotion,
                                                         m_Items[v41],
                                                         v38);
        value = (int)ServantIdByInfo;
        LimitCountByInfo = BattleDemoRootComponent__GetLimitCountByInfo(ServantIdByInfo, v42, v44);
        actorPrefab = (Il2CppObject *)this->fields.actorPrefab;
        v48 = LimitCountByInfo;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46);
        FieldMotion = (__int64)UnityEngine_Object__Instantiate_object_(
                                 actorPrefab,
                                 (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !actors )
          goto LABEL_42;
        v55 = v40 - uniqueIdStart;
        if ( v40 - uniqueIdStart >= actors->max_length )
          goto LABEL_43;
        v56 = (UnityEngine_GameObject_o *)FieldMotion;
        v57 = &actors->obj.klass + v55;
        v57[4] = (Il2CppClass *)v56;
        v94 = v48;
        sub_1BCA784((PartyOrganizationUtility_o *)(v57 + 4), (int64_t)v56, v49, v50, v51, v52, v53, v54);
        if ( !v56 )
          goto LABEL_42;
        FieldMotion = (__int64)UnityEngine_GameObject__get_transform(v56, 0LL);
        if ( !this->fields.Field )
          goto LABEL_42;
        v58 = (UnityEngine_Transform_o *)FieldMotion;
        FieldMotion = (__int64)UnityEngine_GameObject__get_transform(this->fields.Field, 0LL);
        if ( !v58 )
          goto LABEL_42;
        UnityEngine_Transform__set_parent(v58, (UnityEngine_Transform_o *)FieldMotion, 0LL);
        FieldMotion = (__int64)UnityEngine_GameObject__get_transform(v56, 0LL);
        v60 = (UnityEngine_Transform_o *)FieldMotion;
        if ( !byte_4B109C1 )
        {
          FieldMotion = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&uniqueIdStart, v59);
          byte_4B109C1 = 1;
        }
        if ( !v60 )
          goto LABEL_42;
        UnityEngine_Transform__set_localPosition(v60, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        FieldMotion = (__int64)UnityEngine_GameObject__get_transform(v56, 0LL);
        v62 = (UnityEngine_Transform_o *)FieldMotion;
        if ( !byte_4B109C1 )
        {
          FieldMotion = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&uniqueIdStart, v61);
          byte_4B109C1 = 1;
        }
        if ( !v62 )
          goto LABEL_42;
        UnityEngine_Transform__set_localEulerAngles(v62, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        FieldMotion = (__int64)UnityEngine_GameObject__get_transform(v56, 0LL);
        v64 = (UnityEngine_Transform_o *)FieldMotion;
        if ( !byte_4B109C6 )
        {
          FieldMotion = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&uniqueIdStart, v63);
          byte_4B109C6 = 1;
        }
        if ( !v64 )
          goto LABEL_42;
        v65 = v7;
        UnityEngine_Transform__set_localScale(v64, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        FieldMotion = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 v56,
                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !FieldMotion )
          goto LABEL_42;
        performance = this->fields.performance;
        v73 = (BattleActorControl_o *)FieldMotion;
        *(_QWORD *)(FieldMotion + 136) = performance;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)(FieldMotion + 136),
          (int64_t)performance,
          v66,
          v67,
          v68,
          v69,
          v70,
          v71);
        v77 = (BattleServantData_o *)sub_1BCAA2C(BattleServantData_TypeInfo, v74, v75, v76);
        BattleServantData___ctor(v77, 0LL);
        v81 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1BCAA2C(
                                                                        System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                        v78,
                                                                        v79,
                                                                        v80);
        System_Collections_Generic_Dictionary_object__int____ctor(
          v81,
          (const MethodInfo_325BB64 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
        if ( !v81 )
          goto LABEL_42;
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v81,
          (Il2CppObject *)StringLiteral_20843/*"index"*/,
          v40,
          (const MethodInfo_325C504 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v81,
          (Il2CppObject *)StringLiteral_24432/*"uniqueId"*/,
          v40,
          (const MethodInfo_325C504 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v81,
          (Il2CppObject *)StringLiteral_24707/*"userSvtId"*/,
          v40,
          (const MethodInfo_325C504 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v81,
          (Il2CppObject *)StringLiteral_23955/*"svtId"*/,
          value,
          (const MethodInfo_325C504 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v81,
          (Il2CppObject *)StringLiteral_21328/*"limitCount"*/,
          v94,
          (const MethodInfo_325C504 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        if ( !v77 )
          goto LABEL_42;
        BattleServantData__SetFakeData(v77, (System_Collections_Generic_Dictionary_string__int__o *)v81, 0LL);
        if ( isPlayer )
        {
          BattleActorControl__setTypePlayer(v73, 0LL);
          BattleActorControl__setServantData(v73, v77, 0LL);
          BattleActorControl__setDirLeft(v73, 0LL);
          FieldMotion = (__int64)this->fields.actorCamera;
          if ( !FieldMotion )
            goto LABEL_42;
          FieldMotion = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)FieldMotion, 0LL);
          if ( !this->fields.CameraFsm )
            goto LABEL_42;
          v82 = (UnityEngine_GameObject_o *)FieldMotion;
          v7 = v65;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.CameraFsm, 0LL);
          BattleActorControl__setMotionListForDemo(
            v73,
            (System_String_o *)StringLiteral_16464/*"_PLAYER"*/,
            v82,
            gameObject,
            this->fields.CommonMotionPrefab,
            0LL);
          actors = v89;
          if ( !v90 )
            goto LABEL_42;
          PlayerPopTr = BattleFieldMotionComponent__getPlayerPopTr(v90, v55, 0LL);
        }
        else
        {
          BattleActorControl__setTypeEnemy(v73, 0LL);
          BattleActorControl__setServantData(v73, v77, 0LL);
          BattleActorControl__setDirRight(v73, 0LL);
          FieldMotion = (__int64)this->fields.actorCamera;
          if ( !FieldMotion )
            goto LABEL_42;
          FieldMotion = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)FieldMotion, 0LL);
          if ( !this->fields.CameraFsm )
            goto LABEL_42;
          v85 = (UnityEngine_GameObject_o *)FieldMotion;
          v7 = v65;
          v86 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.CameraFsm, 0LL);
          BattleActorControl__setMotionListForDemo(
            v73,
            (System_String_o *)StringLiteral_16362/*"_ENEMY"*/,
            v85,
            v86,
            this->fields.CommonMotionPrefab,
            0LL);
          actors = v89;
          if ( !v90 )
            goto LABEL_42;
          PlayerPopTr = BattleFieldMotionComponent__getEnemyPopPoint(v90, v55, 0LL);
        }
        v87 = (UnityEngine_Component_o *)PlayerPopTr;
        BattleActorControl__setCamera(v73, this->fields.actorCamera, 0LL);
        if ( !v87 )
          goto LABEL_42;
        v88 = UnityEngine_Component__get_gameObject(v87, 0LL);
        BattleActorControl__setTargetObject(v73, v88, 0LL);
        ++v40;
      }
      LODWORD(v39) = v7->max_length;
      ++v41;
    }
    while ( (__int64)v41 < (int)v39 );
  }
}


void __fastcall BattleDemoRootComponent__CreateActors(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleDemoRootComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  struct System_String_array *PlayerList; // x8
  int64_t v19; // x0
  struct UnityEngine_GameObject_array **p_PlayerActorList; // x21
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_String_array *EnemyList; // x8
  int64_t v28; // x0
  struct UnityEngine_GameObject_array **p_EnemyActorList; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct BattlePerformance_o *performance; // x8
  int64_t PlayerActorList; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct BattlePerformance_o *v50; // x8
  int64_t EnemyActorList; // x1
  const MethodInfo *v52; // x5
  const MethodInfo *v53; // x5
  struct UnityEngine_GameObject_array *v54; // x8
  unsigned __int64 v55; // x23
  struct System_String_o *BgmName; // x22
  System_String_o *v57; // x0
  struct UnityEngine_GameObject_array *v58; // x8
  struct UnityEngine_GameObject_array *v59; // x8
  unsigned __int64 v60; // x23
  signed __int64 max_length; // x27
  struct System_String_o *v62; // x22
  System_String_o *v63; // x0
  struct UnityEngine_GameObject_array *v64; // x8
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct System_String_array *CameraFsm; // x1
  struct UnityEngine_GameObject_array *v72; // x22
  int v73; // w9
  int v74; // w8
  UnityEngine_Object_o *v75; // x21
  struct UnityEngine_GameObject_array *v76; // x21
  int v77; // w9
  int v78; // w8
  UnityEngine_Object_o *v79; // x20
  int v80; // [xsp+Ch] [xbp-64h] BYREF

  v3 = this;
  if ( (byte_4B195E1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_GameObject___TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_8850/*"MOTION_ENTRY"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_5571/*"ENEMY"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_4050/*"CameraFsm"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_10520/*"PLAYER"*/, v14, v15);
    this = (BattleDemoRootComponent_o *)sub_1BCA7E0(&StringLiteral_5556/*"END_NP"*/, v16, v17);
    byte_4B195E1 = 1;
  }
  v80 = 0;
  PlayerList = v3->fields.PlayerList;
  if ( !PlayerList )
    goto LABEL_55;
  v19 = sub_1BCA888(UnityEngine_GameObject___TypeInfo, PlayerList->max_length);
  v3->fields.PlayerActorList = (struct UnityEngine_GameObject_array *)v19;
  p_PlayerActorList = &v3->fields.PlayerActorList;
  sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.PlayerActorList, v19, v21, v22, v23, v24, v25, v26);
  EnemyList = v3->fields.EnemyList;
  if ( !EnemyList )
    goto LABEL_55;
  v28 = sub_1BCA888(UnityEngine_GameObject___TypeInfo, EnemyList->max_length);
  v3->fields.EnemyActorList = (struct UnityEngine_GameObject_array *)v28;
  p_EnemyActorList = &v3->fields.EnemyActorList;
  sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.EnemyActorList, v28, v30, v31, v32, v33, v34, v35);
  performance = v3->fields.performance;
  if ( !performance )
    goto LABEL_55;
  PlayerActorList = (int64_t)v3->fields.PlayerActorList;
  performance->fields.p_actorlist = (struct UnityEngine_GameObject_array *)PlayerActorList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&performance->fields.p_actorlist,
    PlayerActorList,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v50 = v3->fields.performance;
  if ( !v50 )
    goto LABEL_55;
  EnemyActorList = (int64_t)v3->fields.EnemyActorList;
  v50->fields.e_actorlist = (struct UnityEngine_GameObject_array *)EnemyActorList;
  sub_1BCA784((PartyOrganizationUtility_o *)&v50->fields.e_actorlist, EnemyActorList, v44, v45, v46, v47, v48, v49);
  BattleDemoRootComponent__CreateActorObject(v3, 1, v3->fields.PlayerList, v3->fields.PlayerActorList, 1, v52);
  BattleDemoRootComponent__CreateActorObject(v3, 4, v3->fields.EnemyList, v3->fields.EnemyActorList, 0, v53);
  v54 = v3->fields.PlayerActorList;
  if ( !v54 )
    goto LABEL_55;
  v55 = 0LL;
  while ( (__int64)v55 < (int)v54->max_length )
  {
    this = (BattleDemoRootComponent_o *)v3->fields.FieldMotion;
    if ( this )
    {
      this = (BattleDemoRootComponent_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
      if ( this )
      {
        BgmName = this->fields.BgmName;
        v80 = v55 + 1;
        v57 = System_Int32__ToString((int32_t)&v80, 0LL);
        this = (BattleDemoRootComponent_o *)System_String__Concat_62401220(
                                              (System_String_o *)StringLiteral_10520/*"PLAYER"*/,
                                              v57,
                                              0LL);
        if ( BgmName )
        {
          this = (BattleDemoRootComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                                (HutongGames_PlayMaker_FsmVariables_o *)BgmName,
                                                (System_String_o *)this,
                                                0LL);
          v58 = *p_PlayerActorList;
          if ( *p_PlayerActorList )
          {
            if ( v55 >= v58->max_length )
              goto LABEL_56;
            if ( this )
            {
              HutongGames_PlayMaker_FsmGameObject__set_Value(
                (HutongGames_PlayMaker_FsmGameObject_o *)this,
                v58->m_Items[v55],
                0LL);
              v54 = *p_PlayerActorList;
              ++v55;
              if ( *p_PlayerActorList )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_55;
  }
  v59 = *p_EnemyActorList;
  if ( !*p_EnemyActorList )
    goto LABEL_55;
  v60 = 0LL;
  while ( 1 )
  {
    this = (BattleDemoRootComponent_o *)v3->fields.FieldMotion;
    if ( !this )
      goto LABEL_55;
    max_length = (int)v59->max_length;
    this = (BattleDemoRootComponent_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
    if ( !this )
      goto LABEL_55;
    v62 = this->fields.BgmName;
    if ( (__int64)v60 >= max_length )
      break;
    v80 = v60 + 1;
    v63 = System_Int32__ToString((int32_t)&v80, 0LL);
    this = (BattleDemoRootComponent_o *)System_String__Concat_62401220((System_String_o *)StringLiteral_5571/*"ENEMY"*/, v63, 0LL);
    if ( v62 )
    {
      this = (BattleDemoRootComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                            (HutongGames_PlayMaker_FsmVariables_o *)v62,
                                            (System_String_o *)this,
                                            0LL);
      v64 = *p_EnemyActorList;
      if ( *p_EnemyActorList )
      {
        if ( v60 >= v64->max_length )
          goto LABEL_56;
        if ( this )
        {
          HutongGames_PlayMaker_FsmGameObject__set_Value(
            (HutongGames_PlayMaker_FsmGameObject_o *)this,
            v64->m_Items[v60],
            0LL);
          v59 = *p_EnemyActorList;
          ++v60;
          if ( *p_EnemyActorList )
            continue;
        }
      }
    }
    goto LABEL_55;
  }
  if ( !v62 )
    goto LABEL_55;
  this = (BattleDemoRootComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmObject(
                                        (HutongGames_PlayMaker_FsmVariables_o *)this->fields.BgmName,
                                        (System_String_o *)StringLiteral_4050/*"CameraFsm"*/,
                                        0LL);
  if ( !this )
    goto LABEL_55;
  CameraFsm = (struct System_String_array *)v3->fields.CameraFsm;
  this->fields.PlayerList = CameraFsm;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.PlayerList, (int64_t)CameraFsm, v65, v66, v67, v68, v69, v70);
  v72 = *p_PlayerActorList;
  v80 = 0;
  if ( !v72 )
    goto LABEL_55;
  v73 = v72->max_length;
  if ( v73 >= 1 )
  {
    v74 = 0;
    while ( v74 < (unsigned int)v73 )
    {
      v75 = (UnityEngine_Object_o *)v72->m_Items[v74];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      this = (BattleDemoRootComponent_o *)UnityEngine_Object__op_Equality(v75, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v75 )
          goto LABEL_55;
        this = (BattleDemoRootComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)v75,
                                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !this )
          goto LABEL_55;
        BattleActorControl__playMotion((BattleActorControl_o *)this, (System_String_o *)StringLiteral_8850/*"MOTION_ENTRY"*/, 0LL);
      }
      v74 = v80 + 1;
      v80 = v74;
      v73 = v72->max_length;
      if ( v74 >= v73 )
        goto LABEL_42;
    }
LABEL_56:
    sub_1BCAA44(this, method);
  }
LABEL_42:
  v76 = *p_EnemyActorList;
  v80 = 0;
  if ( !v76 )
    goto LABEL_55;
  v77 = v76->max_length;
  if ( v77 >= 1 )
  {
    v78 = 0;
    while ( v78 < (unsigned int)v77 )
    {
      v79 = (UnityEngine_Object_o *)v76->m_Items[v78];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      this = (BattleDemoRootComponent_o *)UnityEngine_Object__op_Equality(v79, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v79 )
          goto LABEL_55;
        this = (BattleDemoRootComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)v79,
                                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !this )
          goto LABEL_55;
        BattleActorControl__playMotion((BattleActorControl_o *)this, (System_String_o *)StringLiteral_8850/*"MOTION_ENTRY"*/, 0LL);
      }
      v78 = v80 + 1;
      v80 = v78;
      v77 = v76->max_length;
      if ( v78 >= v77 )
        goto LABEL_53;
    }
    goto LABEL_56;
  }
LABEL_53:
  this = (BattleDemoRootComponent_o *)v3->fields.FieldMotion;
  if ( !this )
LABEL_55:
    sub_1BCAA3C(this, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5556/*"END_NP"*/, 0LL);
}


void __fastcall BattleDemoRootComponent__EndRequestBattleSetup(
        BattleDemoRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  BattleDemoRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  void *monitor; // x22
  int32_t v21; // w20
  int32_t klass_high; // w21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4B195EF & 1) == 0 )
  {
    sub_1BCA7E0(&BattleData_TypeInfo, result, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BattleMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&StringLiteral_11197/*"REQUEST_OK"*/, v15, v16);
    this = (BattleDemoRootComponent_o *)sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v17, v18);
    byte_4B195EF = 1;
  }
  entity = 0LL;
  if ( !result )
    goto LABEL_18;
  if ( System_String__Equals_62409536(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
  {
    this = (BattleDemoRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
      this = (BattleDemoRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( this )
      {
        AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)this, 34, 1, 0LL, 0, 0LL);
        return;
      }
    }
    goto LABEL_18;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19);
  this = (BattleDemoRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !this )
    goto LABEL_18;
  this = (BattleDemoRootComponent_o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        &entity,
                                        (const MethodInfo_31B30C8 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_18;
    monitor = entity[1].monitor;
    klass_high = HIDWORD(entity[2].klass);
    v21 = (int32_t)entity[2].monitor;
    if ( !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, result);
    BattleData__setResumeBattleId((int64_t)monitor, klass_high, v21, 0LL);
  }
  this = (BattleDemoRootComponent_o *)v4->fields.myFSM;
  if ( !this )
LABEL_18:
    sub_1BCAA3C(this, result);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11197/*"REQUEST_OK"*/, 0LL);
}


int32_t __fastcall BattleDemoRootComponent__GetLimitCountByInfo(
        BattleDemoRootComponent_o *this,
        System_String_o *info,
        const MethodInfo *method)
{
  System_String_array *v4; // x0
  System_String_array *v5; // x1

  if ( (byte_4B195DD & 1) == 0 )
  {
    sub_1BCA7E0(&char___TypeInfo, info, method);
    byte_4B195DD = 1;
  }
  v4 = (System_String_array *)sub_1BCA888(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_9;
  v5 = v4;
  if ( !v4->max_length )
    goto LABEL_10;
  LOWORD(v4->m_Items[0]) = 58;
  if ( !info || (v4 = System_String__Split_62423376(info, (System_Char_array *)v4, 0LL)) == 0LL )
LABEL_9:
    sub_1BCAA3C(v4, v5);
  if ( v4->max_length <= 1 )
LABEL_10:
    sub_1BCAA44(v4, v5);
  return System_Int32__Parse(v4->m_Items[1], 0LL);
}


int32_t __fastcall BattleDemoRootComponent__GetServantIdByInfo(
        BattleDemoRootComponent_o *this,
        System_String_o *info,
        const MethodInfo *method)
{
  System_String_array *v4; // x0
  System_String_array *v5; // x1

  if ( (byte_4B195DC & 1) == 0 )
  {
    sub_1BCA7E0(&char___TypeInfo, info, method);
    byte_4B195DC = 1;
  }
  v4 = (System_String_array *)sub_1BCA888(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_9;
  v5 = v4;
  if ( !v4->max_length )
    goto LABEL_10;
  LOWORD(v4->m_Items[0]) = 58;
  if ( !info || (v4 = System_String__Split_62423376(info, (System_Char_array *)v4, 0LL)) == 0LL )
LABEL_9:
    sub_1BCAA3C(v4, v5);
  if ( !v4->max_length )
LABEL_10:
    sub_1BCAA44(v4, v5);
  return System_Int32__Parse(v4->m_Items[0], 0LL);
}


bool __fastcall BattleDemoRootComponent__GoToBattleEndTalk(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppClass *klass; // x8
  int32_t name_high; // w20
  int32_t namespaze; // w21
  ScriptManager_CallbackFunc_o *v12; // x22
  __int64 v13; // x1

  v4 = (Il2CppObject *)this;
  if ( (byte_4B195EC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleDemoRootComponent_OnBattleEndScript__, method, v2);
    sub_1BCA7E0(&ScriptManager_CallbackFunc_TypeInfo, v5, v6);
    this = (BattleDemoRootComponent_o *)sub_1BCA7E0(&ScriptManager_TypeInfo, v7, v8);
    byte_4B195EC = 1;
  }
  klass = v4[14].klass;
  if ( !klass )
    sub_1BCAA3C(this, method);
  name_high = HIDWORD(klass->_1.name);
  namespaze = (int32_t)klass->_1.namespaze;
  v12 = (ScriptManager_CallbackFunc_o *)sub_1BCAA2C(ScriptManager_CallbackFunc_TypeInfo, method, v2, v3);
  ScriptManager_CallbackFunc___ctor(v12, v4, Method_BattleDemoRootComponent_OnBattleEndScript__, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v13);
  ScriptManager__PlayBattleEnd(name_high, namespaze, 1, v12, 0, -1, 0LL);
  return 1;
}


bool __fastcall BattleDemoRootComponent__GoToBattleStartTalk(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppClass *klass; // x8
  int32_t name_high; // w20
  int32_t namespaze; // w21
  ScriptManager_CallbackFunc_o *v12; // x22
  __int64 v13; // x1

  v4 = (Il2CppObject *)this;
  if ( (byte_4B195EA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleDemoRootComponent_OnBattleStartScript__, method, v2);
    sub_1BCA7E0(&ScriptManager_CallbackFunc_TypeInfo, v5, v6);
    this = (BattleDemoRootComponent_o *)sub_1BCA7E0(&ScriptManager_TypeInfo, v7, v8);
    byte_4B195EA = 1;
  }
  klass = v4[14].klass;
  if ( !klass )
    sub_1BCAA3C(this, method);
  name_high = HIDWORD(klass->_1.name);
  namespaze = (int32_t)klass->_1.namespaze;
  v12 = (ScriptManager_CallbackFunc_o *)sub_1BCAA2C(ScriptManager_CallbackFunc_TypeInfo, method, v2, v3);
  ScriptManager_CallbackFunc___ctor(v12, v4, Method_BattleDemoRootComponent_OnBattleStartScript__, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v13);
  ScriptManager__PlayBattleStart2_42179400(name_high, namespaze, v12, 0, 0LL);
  return 1;
}


bool __fastcall BattleDemoRootComponent__GoToTerminal(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  TerminalPramsManager_c *v9; // x0
  Il2CppObject *Instance; // x0
  __int64 v11; // x1

  if ( (byte_4B195EE & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3, v4);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v5, v6);
    byte_4B195EE = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
  if ( !byte_4B11139 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v7, v8);
    byte_4B11139 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v11);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  Il2CppObject *v45; // x0
  __int64 methodPtr_low; // x10
  System_Collections_Generic_Dictionary_object__object__o *v47; // x21
  __int64 v48; // x19
  struct System_String_array *v49; // x0
  BattleDemoRootComponent_o **p_PlayerList; // x23
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct System_String_array *v57; // x0
  struct System_String_array **p_EnemyList; // x22
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  __int64 v65; // x25
  __int64 v66; // x28
  System_String_o *v67; // x0
  BattleDemoRootComponent_c *Item; // x0
  System_String_c *v69; // x1
  Il2CppObject *v70; // x24
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  System_String_c **v77; // x8
  bool v78; // cf
  __int64 v79; // x24
  System_String_o *v80; // x0
  Il2CppObject *v81; // x23
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  struct System_String_array *v85; // x25
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  System_Collections_Generic_List_object__o *v92; // x23
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  System_String_o *v99; // x0
  Il2CppObject *v100; // x24
  System_Collections_Generic_List_object__o *CueSheetList; // x23
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  struct System_Object_array *items; // x9
  _QWORD *v109; // x10
  __int64 size; // x11
  Il2CppClass **v111; // x0
  __int64 v112; // x2
  __int64 v113; // x3
  __int64 v114; // x2
  __int64 v115; // x3
  Il2CppObject *v116; // x0
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  System_String_c *v123; // x1
  struct System_String_o **p_BgmName; // x0
  __int64 v125; // x2
  __int64 v126; // x3
  __int64 v127; // x1
  __int64 v128; // x2
  __int64 v129; // x3
  System_Collections_Generic_List_object__o *v130; // x20
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  const MethodInfo *v137; // x1
  System_Collections_IEnumerator_o *v138; // x0
  BattleDemoRootComponent_o *v139; // x0
  const MethodInfo *v140; // x1
  struct System_Action_o *v141; // [xsp+8h] [xbp-78h]
  BattleDemoRootComponent_o *v142; // [xsp+10h] [xbp-70h]
  int v143; // [xsp+1Ch] [xbp-64h] BYREF

  v8 = callback;
  if ( (byte_4B195DB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, demoInfo, callback);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v13, v14);
    sub_1BCA7E0(&long_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantAssetArgs___ctor__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantAssetArgs__TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v25, v26);
    sub_1BCA7E0(&string___TypeInfo, v27, v28);
    sub_1BCA7E0(&string_TypeInfo, v29, v30);
    sub_1BCA7E0(&StringLiteral_6120/*"Enemy"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_12755/*"Sequence"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_12992/*"Sound"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_3290/*"Bg"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_10808/*"Player"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_3296/*"Bgm"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_3295/*"BgType"*/, v43, v44);
    byte_4B195DB = 1;
  }
  v143 = 0;
  if ( !demoInfo )
    goto LABEL_51;
  v45 = MiniJSON_Json__Deserialize(demoInfo, 0LL);
  v141 = v8;
  if ( v45
    && (methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v45->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (System_Collections_Generic_Dictionary_string__object__c *)v45->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
      v47 = (System_Collections_Generic_Dictionary_object__object__o *)v45;
    else
      v47 = 0LL;
  }
  else
  {
    v47 = 0LL;
  }
  v48 = (__int64)&StringLiteral_10808/*"Player"*/;
  v49 = (struct System_String_array *)sub_1BCA888(string___TypeInfo, 3LL);
  this->fields.PlayerList = v49;
  p_PlayerList = (BattleDemoRootComponent_o **)&this->fields.PlayerList;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.PlayerList, (int64_t)v49, v51, v52, v53, v54, v55, v56);
  v57 = (struct System_String_array *)sub_1BCA888(string___TypeInfo, 3LL);
  this->fields.EnemyList = v57;
  p_EnemyList = &this->fields.EnemyList;
  v142 = this;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.EnemyList, (int64_t)v57, v59, v60, v61, v62, v63, v64);
  v65 = -3LL;
  v66 = 32LL;
  do
  {
    v143 = v65 + 4;
    v67 = System_Int32__ToString((int32_t)&v143, 0LL);
    Item = (BattleDemoRootComponent_c *)System_String__Concat_62401220((System_String_o *)StringLiteral_10808/*"Player"*/, v67, 0LL);
    if ( !v47 )
      goto LABEL_52;
    v70 = (Il2CppObject *)Item;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v47,
           (Il2CppObject *)Item,
           (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      this = *p_PlayerList;
      Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                            v47,
                                            v70,
                                            (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_52;
      v77 = (System_String_c **)Item;
      if ( Item )
      {
        v69 = string_TypeInfo;
        if ( Item->_1.image != string_TypeInfo )
          goto LABEL_46;
      }
      if ( v65 + 3 >= (unsigned __int64)LODWORD(this->fields.m_CancellationTokenSource) )
LABEL_53:
        sub_1BCAA44(Item, v69);
      *(BattleDemoRootComponent_c **)((char *)&this->klass + v66) = Item;
      sub_1BCA784((PartyOrganizationUtility_o *)((char *)this + v66), (int64_t)Item, v71, v72, v73, v74, v75, v76);
    }
    v78 = __CFADD__(v65++, 1LL);
    v66 += 8LL;
  }
  while ( !v78 );
  this = v142;
  v48 = -3LL;
  v79 = 32LL;
  do
  {
    v143 = v48 + 4;
    v80 = System_Int32__ToString((int32_t)&v143, 0LL);
    v81 = (Il2CppObject *)System_String__Concat_62401220((System_String_o *)StringLiteral_6120/*"Enemy"*/, v80, 0LL);
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v47,
           v81,
           (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v85 = *p_EnemyList;
      Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                            v47,
                                            v81,
                                            (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v85 )
        goto LABEL_52;
      v77 = (System_String_c **)Item;
      if ( Item )
      {
        v69 = string_TypeInfo;
        if ( Item->_1.image != string_TypeInfo )
          goto LABEL_46;
      }
      if ( v48 + 3 >= (unsigned __int64)v85->max_length )
        goto LABEL_53;
      *(Il2CppClass **)((char *)&v85->obj.klass + v79) = (Il2CppClass *)Item;
      sub_1BCA784((PartyOrganizationUtility_o *)((char *)v85 + v79), (int64_t)Item, v86, v87, v88, v89, v90, v91);
    }
    v78 = __CFADD__(v48++, 1LL);
    v79 += 8LL;
  }
  while ( !v78 );
  v92 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v82,
                                                       v83,
                                                       v84);
  System_Collections_Generic_List_object____ctor(
    v92,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  v142->fields.CueSheetList = (struct System_Collections_Generic_List_string__o *)v92;
  sub_1BCA784((PartyOrganizationUtility_o *)&v142->fields.CueSheetList, (int64_t)v92, v93, v94, v95, v96, v97, v98);
  v48 = 1LL;
  do
  {
    v143 = v48;
    v99 = System_Int32__ToString((int32_t)&v143, 0LL);
    v100 = (Il2CppObject *)System_String__Concat_62401220((System_String_o *)StringLiteral_12992/*"Sound"*/, v99, 0LL);
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v47,
           v100,
           (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      CueSheetList = (System_Collections_Generic_List_object__o *)v142->fields.CueSheetList;
      Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                            v47,
                                            v100,
                                            (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !CueSheetList )
        goto LABEL_52;
      v77 = (System_String_c **)Item;
      if ( Item )
      {
        v69 = string_TypeInfo;
        if ( Item->_1.image != string_TypeInfo )
          goto LABEL_46;
      }
      items = CueSheetList->fields._items;
      v109 = Method_System_Collections_Generic_List_string__Add__;
      ++CueSheetList->fields._version;
      if ( !items )
        goto LABEL_52;
      size = CueSheetList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          CueSheetList,
          (Il2CppObject *)Item,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
      }
      else
      {
        v111 = &items->obj.klass + size;
        CueSheetList->fields._size = size + 1;
        v111[4] = (Il2CppClass *)v77;
        sub_1BCA784((PartyOrganizationUtility_o *)(v111 + 4), (int64_t)v77, v102, v103, v104, v105, v106, v107);
      }
    }
    v48 = (unsigned int)(v48 + 1);
  }
  while ( (_DWORD)v48 != 6 );
  Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                        v47,
                                        (Il2CppObject *)StringLiteral_3290/*"Bg"*/,
                                        (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_52;
  v48 = (__int64)&long_TypeInfo;
  if ( (Il2CppClass *)*((_QWORD *)Item->_1.image + 8) != long_TypeInfo->_1.element_class )
    goto LABEL_54;
  v142->fields.BgId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v112, v113);
  Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                        v47,
                                        (Il2CppObject *)StringLiteral_3295/*"BgType"*/,
                                        (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
LABEL_52:
    sub_1BCAA3C(Item, v69);
  if ( (Il2CppClass *)*((_QWORD *)Item->_1.image + 8) != long_TypeInfo->_1.element_class )
    goto LABEL_54;
  v142->fields.BgType = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v114, v115);
  v116 = System_Collections_Generic_Dictionary_object__object___get_Item(
           v47,
           (Il2CppObject *)StringLiteral_3296/*"Bgm"*/,
           (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v77 = (System_String_c **)v116;
  if ( !v116 )
    goto LABEL_47;
  v123 = string_TypeInfo;
  if ( (System_String_c *)v116->klass != string_TypeInfo
    || (v142->fields.BgmName = (struct System_String_o *)v116, p_BgmName = &v142->fields.BgmName, *v77 != v123) )
  {
LABEL_46:
    sub_1BCACFC(v77);
LABEL_47:
    this->fields.BgmName = 0LL;
    p_BgmName = &this->fields.BgmName;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)p_BgmName, (int64_t)v77, v117, v118, v119, v120, v121, v122);
  Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                        v47,
                                        (Il2CppObject *)StringLiteral_12755/*"Sequence"*/,
                                        (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_52;
  v8 = v141;
  if ( *((_QWORD *)Item->_1.image + 8) == *(_QWORD *)(*(_QWORD *)v48 + 64LL) )
  {
    this->fields.DemoSequenceServantId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, *(_QWORD *)v48, v125, v126);
LABEL_51:
    this->fields.InitializeCallback = v8;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.InitializeCallback,
      (int64_t)v8,
      (int64_t)callback,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    v130 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_List_ServantAssetArgs__TypeInfo,
                                                          v127,
                                                          v128,
                                                          v129);
    System_Collections_Generic_List_object____ctor(
      v130,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantAssetArgs___ctor__);
    this->fields.loadedAssetArgsList = (struct System_Collections_Generic_List_ServantAssetArgs__o *)v130;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.loadedAssetArgsList,
      (int64_t)v130,
      v131,
      v132,
      v133,
      v134,
      v135,
      v136);
    v138 = BattleDemoRootComponent__SetupBattleDemo(this, v137);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v138, 0LL);
    return;
  }
LABEL_54:
  sub_1BCACFC(Item);
  BattleDemoRootComponent__ReleaseBattleDemo(v139, v140);
}


void __fastcall BattleDemoRootComponent__LoadBattleChrs(
        BattleDemoRootComponent_o *this,
        System_String_array *chrlist,
        const MethodInfo *method)
{
  BattleDemoRootComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x8
  unsigned __int64 i; // x25
  System_String_o *v15; // x21
  BattleDemoRootComponent_o *ServantIdByInfo; // x0
  int32_t v17; // w22
  const MethodInfo *v18; // x2
  __int64 v19; // x1
  int32_t LimitCountByInfo; // w23
  __int64 v21; // x2
  __int64 v22; // x3
  int32_t myFSM; // w24
  ServantAssetArgs_o *v24; // x21
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x8
  _QWORD *v33; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v35; // x8

  v4 = this;
  if ( (byte_4B195E3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitMaster___, chrlist, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantAssetArgs__Add__, v7, v8);
    sub_1BCA7E0(&ServantAssetArgs_TypeInfo, v9, v10);
    this = (BattleDemoRootComponent_o *)sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v11, v12);
    byte_4B195E3 = 1;
  }
  if ( !chrlist )
LABEL_21:
    sub_1BCAA3C(this, chrlist);
  v13 = *(_QWORD *)&chrlist->max_length;
  if ( (int)v13 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v13; ++i )
    {
      if ( i >= (unsigned int)v13 )
        sub_1BCAA44(this, chrlist);
      v15 = chrlist->m_Items[i];
      if ( v15 )
      {
        ServantIdByInfo = (BattleDemoRootComponent_o *)BattleDemoRootComponent__GetServantIdByInfo(
                                                         this,
                                                         chrlist->m_Items[i],
                                                         method);
        v17 = (int)ServantIdByInfo;
        LimitCountByInfo = BattleDemoRootComponent__GetLimitCountByInfo(ServantIdByInfo, v15, v18);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19);
        this = (BattleDemoRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitMaster___);
        if ( !this )
          goto LABEL_21;
        this = (BattleDemoRootComponent_o *)ServantLimitMaster__GetEntity(
                                              (ServantLimitMaster_o *)this,
                                              v17,
                                              LimitCountByInfo,
                                              0LL);
        if ( !this )
          goto LABEL_21;
        myFSM = (int32_t)this->fields.myFSM;
        v24 = (ServantAssetArgs_o *)sub_1BCAA2C(ServantAssetArgs_TypeInfo, chrlist, v21, v22);
        ServantAssetArgs___ctor_44093352(v24, v17, LimitCountByInfo, 0, 0, myFSM, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v25);
        ServantAssetLoadManager__PreloadAssetsByArgs(v24, 0, 0LL);
        this = (BattleDemoRootComponent_o *)v4->fields.loadedAssetArgsList;
        if ( !this )
          goto LABEL_21;
        v32 = *(_QWORD *)&this->fields.m_CachedPtr;
        v33 = Method_System_Collections_Generic_List_ServantAssetArgs__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v32 )
          goto LABEL_21;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v32 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v24,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = v32 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v35 + 32) = v24;
          sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 32), (int64_t)v24, v26, v27, v28, v29, v30, v31);
        }
      }
      LODWORD(v13) = chrlist->max_length;
    }
  }
}


void __fastcall BattleDemoRootComponent__LoadCueSheet(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Collections_Generic_List_string__o *CueSheetList; // x0
  Il2CppObject *current; // x20
  Il2CppObject *Instance; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Action_o *v22; // x22
  __int64 v23; // x0
  __int64 v24; // x1
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B195DE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattleDemoRootComponent__LoadCueSheet_b__28_0__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v14, v15);
    byte_4B195DE = 1;
  }
  memset(&v25, 0, sizeof(v25));
  CueSheetList = this->fields.CueSheetList;
  if ( CueSheetList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      (System_Collections_Generic_List_object__o *)CueSheetList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v25,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v25.fields._current;
      ++this->fields.CueSheetCount;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      v22 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
      System_Action___ctor(v22, (Il2CppObject *)this, Method_BattleDemoRootComponent__LoadCueSheet_b__28_0__, 0LL);
      if ( !Instance )
        sub_1BCAA3C(v23, v24);
      SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)current, v22, 1, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v25,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
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

  if ( (byte_4B195E7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, obj, method);
    byte_4B195E7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance
    || (BattleSequenceManager__setup((BattleSequenceManager_o *)Instance, 0LL, 1, 0LL, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v5);
  }
  BattleSequenceManager__SetupDemoActor(
    (BattleSequenceManager_o *)Instance,
    this->fields.PlayerActorList,
    this->fields.EnemyActorList,
    0LL);
  v7 = BattleDemoRootComponent__WaitToNoblePhantasmPlay(this, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDemoRootComponent__OnBattleEndScript(
        BattleDemoRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppClass *klass; // x8
  int32_t name_high; // w20
  int32_t namespaze; // w21
  System_Action_object__o *v12; // x22
  __int64 v13; // x1

  v4 = (Il2CppObject *)this;
  if ( (byte_4B195ED & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_string__TypeInfo, isExit, method);
    sub_1BCA7E0(&Method_BattleDemoRootComponent__OnBattleEndScript_b__47_0__, v5, v6);
    this = (BattleDemoRootComponent_o *)sub_1BCA7E0(&ScriptManager_TypeInfo, v7, v8);
    byte_4B195ED = 1;
  }
  klass = v4[14].klass;
  if ( !klass )
    sub_1BCAA3C(this, isExit);
  name_high = HIDWORD(klass->_1.name);
  namespaze = (int32_t)klass->_1.namespaze;
  v12 = (System_Action_object__o *)sub_1BCAA2C(System_Action_string__TypeInfo, isExit, method, v3);
  System_Action_object____ctor(v12, v4, Method_BattleDemoRootComponent__OnBattleEndScript_b__47_0__, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v13);
  ScriptManager__LoadBattleEndGameDemo(name_high, namespaze, 0, (System_Action_string__o *)v12, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDemoRootComponent__OnBattleStartScript(
        BattleDemoRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4B195EB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_7052/*"GOTO_BATTLE"*/, isExit, method);
    byte_4B195EB = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1BCAA3C(0LL, isExit);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_7052/*"GOTO_BATTLE"*/, 0LL);
}


void __fastcall BattleDemoRootComponent__OnNoblePhantasmPlayComplete(
        BattleDemoRootComponent_o *this,
        WellFired_USSequencer_o *seq,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  struct System_Action_o *BattleDemoCallback; // x8
  void *performance; // x0
  __int64 v42; // x2
  __int64 v43; // x3
  struct UnityEngine_GameObject_array *PlayerActorList; // x22
  __int64 v45; // x8
  unsigned __int64 v46; // x23
  UnityEngine_Object_o *v47; // x20
  struct UnityEngine_GameObject_array *EnemyActorList; // x22
  __int64 v49; // x8
  unsigned __int64 v50; // x23
  UnityEngine_Object_o *v51; // x20
  System_Collections_Generic_List_object__o *loadedAssetArgsList; // x20
  System_Action_object__o *v53; // x21
  Il2CppObject *v54; // x22
  struct BattleDemoRootComponent___c_StaticFields *static_fields; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x1
  const MethodInfo *v63; // x1
  __int64 v64; // x1
  BattleDemoRootComponent_c *v65; // x0
  float BGM_FADEOUT_TIME; // s8
  __int64 v67; // x1
  __int64 *v68; // x8
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  _BOOL4 battleBefore; // w9
  _BOOL4 isBefore; // w8

  if ( (byte_4B195E9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_ServantAssetArgs__TypeInfo, seq, method);
    sub_1BCA7E0(&AssetManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&BattleDemoRootComponent_TypeInfo, v6, v7);
    sub_1BCA7E0(&BattleFBXComponent_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_GC_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantAssetArgs__ForEach__, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v22, v23);
    sub_1BCA7E0(&SoundManager_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_BattleDemoRootComponent___c__OnNoblePhantasmPlayComplete_b__43_0__, v26, v27);
    sub_1BCA7E0(&BattleDemoRootComponent___c_TypeInfo, v28, v29);
    sub_1BCA7E0(&StringLiteral_7056/*"GOTO_TERMINAL"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_7054/*"GOTO_BATTLESTARTTALK"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_7053/*"GOTO_BATTLENDTALK"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_3233/*"Battle/Common"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_5548/*"END_DEMO"*/, v38, v39);
    byte_4B195E9 = 1;
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
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo, seq);
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
  v45 = *(_QWORD *)&PlayerActorList->max_length;
  if ( (int)v45 >= 1 )
  {
    v46 = 0LL;
    while ( v46 < (unsigned int)v45 )
    {
      v47 = (UnityEngine_Object_o *)PlayerActorList->m_Items[v46];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, seq);
      performance = (void *)UnityEngine_Object__op_Inequality(v47, 0LL, 0LL);
      if ( ((unsigned __int8)performance & 1) != 0 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, seq);
        UnityEngine_Object__Destroy_70154244(v47, 0LL);
      }
      LODWORD(v45) = PlayerActorList->max_length;
      if ( (__int64)++v46 >= (int)v45 )
        goto LABEL_20;
    }
LABEL_67:
    sub_1BCAA44(performance, seq);
  }
LABEL_20:
  EnemyActorList = this->fields.EnemyActorList;
  if ( !EnemyActorList )
    goto LABEL_68;
  v49 = *(_QWORD *)&EnemyActorList->max_length;
  if ( (int)v49 >= 1 )
  {
    v50 = 0LL;
    while ( v50 < (unsigned int)v49 )
    {
      v51 = (UnityEngine_Object_o *)EnemyActorList->m_Items[v50];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, seq);
      performance = (void *)UnityEngine_Object__op_Inequality(v51, 0LL, 0LL);
      if ( ((unsigned __int8)performance & 1) != 0 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, seq);
        UnityEngine_Object__Destroy_70154244(v51, 0LL);
      }
      LODWORD(v49) = EnemyActorList->max_length;
      if ( (__int64)++v50 >= (int)v49 )
        goto LABEL_31;
    }
    goto LABEL_67;
  }
LABEL_31:
  loadedAssetArgsList = (System_Collections_Generic_List_object__o *)this->fields.loadedAssetArgsList;
  performance = BattleDemoRootComponent___c_TypeInfo;
  if ( !BattleDemoRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDemoRootComponent___c_TypeInfo, seq);
    performance = BattleDemoRootComponent___c_TypeInfo;
  }
  v53 = *(System_Action_object__o **)(*((_QWORD *)performance + 23) + 16LL);
  if ( !v53 )
  {
    if ( !*((_DWORD *)performance + 56) )
    {
      j_il2cpp_runtime_class_init_0(performance, seq);
      performance = BattleDemoRootComponent___c_TypeInfo;
    }
    v54 = (Il2CppObject *)**((_QWORD **)performance + 23);
    v53 = (System_Action_object__o *)sub_1BCAA2C(System_Action_ServantAssetArgs__TypeInfo, seq, v42, v43);
    System_Action_object____ctor(
      v53,
      v54,
      Method_BattleDemoRootComponent___c__OnNoblePhantasmPlayComplete_b__43_0__,
      0LL);
    static_fields = BattleDemoRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__43_0 = (struct System_Action_ServantAssetArgs__o *)v53;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__43_0, (int64_t)v53, v56, v57, v58, v59, v60, v61);
  }
  if ( !loadedAssetArgsList )
    goto LABEL_68;
  System_Collections_Generic_List_object___ForEach(
    loadedAssetArgsList,
    (System_Action_T__o *)v53,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_ServantAssetArgs__ForEach__);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v62);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_3233/*"Battle/Common"*/, 0LL);
  performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !performance )
    goto LABEL_68;
  ServantAssetLoadManager__releaseNoblePhantasm((ServantAssetLoadManager_o *)performance, 0LL);
  BattleDemoRootComponent__ReleaseCueSheet(this, v63);
  v65 = BattleDemoRootComponent_TypeInfo;
  if ( !BattleDemoRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDemoRootComponent_TypeInfo, v64);
    v65 = BattleDemoRootComponent_TypeInfo;
  }
  BGM_FADEOUT_TIME = v65->static_fields->BGM_FADEOUT_TIME;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v64);
  SoundManager__fadeoutBgm(BGM_FADEOUT_TIME, 0LL);
  performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !performance )
    goto LABEL_68;
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)performance, 0LL, 0LL);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, v67);
  System_GC__Collect_63447616(0LL);
  performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !performance )
LABEL_68:
    sub_1BCAA3C(performance, seq);
  CommonUI__maskFadeout((CommonUI_o *)performance, 1, 1.0, 0LL, 0LL);
  if ( !this->fields.battleSetupInfo )
  {
    performance = this->fields.myFSM;
    if ( !performance )
      goto LABEL_68;
    v68 = &StringLiteral_5548/*"END_DEMO"*/;
LABEL_56:
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)performance, (System_String_o *)*v68, 0LL);
    return;
  }
  performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !performance )
    goto LABEL_68;
  performance = (void *)AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)performance, 0LL);
  if ( ((unsigned __int8)performance & 1) != 0 )
  {
    performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
      v68 = &StringLiteral_7053/*"GOTO_BATTLENDTALK"*/;
    else
      v68 = &StringLiteral_7056/*"GOTO_TERMINAL"*/;
    goto LABEL_56;
  }
  if ( !isBefore )
  {
    performance = this->fields.myFSM;
    if ( !performance )
      goto LABEL_68;
    v68 = &StringLiteral_7054/*"GOTO_BATTLESTARTTALK"*/;
    goto LABEL_56;
  }
}


void __fastcall BattleDemoRootComponent__ReleaseBattleDemo(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BattleDemoRootComponent__ReleaseCueSheet(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *v12; // x0
  PartyOrganizationUtility_o *p_CueSheetList; // x19
  struct System_Collections_Generic_List_string__o *CueSheetList; // t1
  Il2CppObject *current; // x20
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B195DF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v10, v11);
    byte_4B195DF = 1;
  }
  memset(&v24, 0, sizeof(v24));
  CueSheetList = this->fields.CueSheetList;
  p_CueSheetList = (PartyOrganizationUtility_o *)&this->fields.CueSheetList;
  v12 = (System_Collections_Generic_List_object__o *)CueSheetList;
  if ( CueSheetList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v24,
      v12,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v24,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v24.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !Instance )
        sub_1BCAA3C(0LL, v17);
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v24,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    p_CueSheetList->klass = 0LL;
    sub_1BCA784(p_CueSheetList, 0LL, v18, v19, v20, v21, v22, v23);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B195E0 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDemoRootComponent__SetupBattleDemo_d__30_TypeInfo, method, v2);
    byte_4B195E0 = 1;
  }
  v5 = sub_1BCAA2C(BattleDemoRootComponent__SetupBattleDemo_d__30_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


bool __fastcall BattleDemoRootComponent__StartBattle(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B195F0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B195F0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  BattleActorControl_o *Component_object; // x0
  __int64 v21; // x1
  struct UnityEngine_GameObject_array *PlayerActorList; // x8
  UnityEngine_GameObject_o *v23; // x21
  BattleActorControl_o *v24; // x20
  __int64 v25; // x1
  BattleFBXComponent_c *v26; // x0
  struct BattlePerformanceBg_o *perfBg; // x8
  int32_t DemoSequenceServantId; // w22
  BattleSequenceManager_o *v29; // x21
  __int64 v30; // x2
  __int64 v31; // x3
  struct BattleServantData_o *battleSvtData; // x8
  int32_t v33; // w20
  int32_t treasuredvcLevel; // w23
  BattleSequenceManager_onGameObjectLoadComplete_o *v35; // x24

  if ( (byte_4B195E6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleDemoRootComponent_OnBattleDemoLoadComplete__, callback, method);
    sub_1BCA7E0(&BattleFBXComponent_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&StringLiteral_9440/*"NPACTOR"*/, v16, v17);
    sub_1BCA7E0(&BattleSequenceManager_onGameObjectLoadComplete_TypeInfo, v18, v19);
    byte_4B195E6 = 1;
  }
  this->fields.BattleDemoCallback = callback;
  sub_1BCA784(
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
    sub_1BCAA44(Component_object, v21);
  v23 = PlayerActorList->m_Items[0];
  if ( !v23 )
    goto LABEL_18;
  Component_object = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                               v23,
                                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !this->fields.FieldMotion )
    goto LABEL_18;
  v24 = Component_object;
  Component_object = (BattleActorControl_o *)PlayMakerFSM__get_Fsm(this->fields.FieldMotion, 0LL);
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (BattleActorControl_o *)Component_object->fields.nodeText;
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                               (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                               (System_String_o *)StringLiteral_9440/*"NPACTOR"*/,
                                               0LL);
  if ( !Component_object )
    goto LABEL_18;
  HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Component_object, v23, 0LL);
  v26 = BattleFBXComponent_TypeInfo;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo, v25);
    v26 = BattleFBXComponent_TypeInfo;
  }
  v26->static_fields->EnableEvent = 0;
  Component_object = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  perfBg = this->fields.perfBg;
  if ( !perfBg )
    goto LABEL_18;
  if ( !Component_object )
    goto LABEL_18;
  BattleSequenceManager__init(
    (BattleSequenceManager_o *)Component_object,
    this->fields.performance,
    v23,
    this->fields.PlayerActorList,
    this->fields.EnemyActorList,
    this->fields.actorCamera,
    perfBg->fields.bgobject,
    0LL);
  Component_object = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v24 )
    goto LABEL_18;
  DemoSequenceServantId = this->fields.DemoSequenceServantId;
  v29 = (BattleSequenceManager_o *)Component_object;
  Component_object = (BattleActorControl_o *)BattleActorControl__getLimitCount(v24, 0LL);
  battleSvtData = v24->fields.battleSvtData;
  if ( !battleSvtData
    || (v33 = (int)Component_object,
        treasuredvcLevel = battleSvtData->fields.treasuredvcLevel,
        v35 = (BattleSequenceManager_onGameObjectLoadComplete_o *)sub_1BCAA2C(
                                                                    BattleSequenceManager_onGameObjectLoadComplete_TypeInfo,
                                                                    v21,
                                                                    v30,
                                                                    v31),
        BattleSequenceManager_onGameObjectLoadComplete___ctor(
          v35,
          (Il2CppObject *)this,
          Method_BattleDemoRootComponent_OnBattleDemoLoadComplete__,
          0LL),
        !v29) )
  {
LABEL_18:
    sub_1BCAA3C(Component_object, v21);
  }
  BattleSequenceManager__loadSequence(
    v29,
    DemoSequenceServantId,
    DemoSequenceServantId,
    v33,
    0,
    treasuredvcLevel,
    1,
    v35,
    0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleDemoRootComponent__WaitToNoblePhantasmPlay(
        BattleDemoRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B195E8 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_TypeInfo, method, v2);
    byte_4B195E8 = 1;
  }
  v5 = sub_1BCAA2C(BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
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
  __int64 v6; // x2
  CommonUI_o *Instance; // x0

  v3 = demoInfo;
  if ( (byte_4B195F4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, demoInfo, method);
    sub_1BCA7E0(&StringLiteral_7056/*"GOTO_TERMINAL"*/, v5, v6);
    byte_4B195F4 = 1;
  }
  if ( v3 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1BCAA3C(Instance, demoInfo);
  }
  Instance = (CommonUI_o *)this->fields.myFSM;
  if ( !Instance )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_7056/*"GOTO_TERMINAL"*/, 0LL);
}


void __fastcall BattleDemoRootComponent___SetupBattleDemo_b__30_0(
        BattleDemoRootComponent_o *this,
        AssetData_o *aData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int64_t performance; // x0
  struct BattlePerformance_o *v12; // x8
  struct BattleFieldMotionComponent_array *fieldmotion; // x8
  struct PlayMakerFSM_o *Fsm; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  UnityEngine_GameObject_o *cameraObject; // x23
  UnityEngine_Transform_o *v22; // x22
  struct UnityEngine_GameObject_o **p_cameraObject; // x21
  Il2CppObject *Object_object__49237568; // x0
  struct UnityEngine_GameObject_o *ObjectIfNotExist; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x2
  UnityEngine_Transform_o *v33; // x20
  struct BattlePerformance_o *v34; // x20
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct BattlePerformance_o *v41; // x20
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 v54; // x8
  int64_t v55; // x1
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x8
  int64_t v63; // x1
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  struct BattlePerformance_o *v70; // x8
  struct BattleActionCamera_o *actioncamera; // x9
  int64_t frontcamera; // x1
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  struct BattlePerformance_o *v79; // x8
  struct BattleActionCamera_o *v80; // x8
  struct UnityEngine_Camera_o *actorcamera; // x1
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  struct BattlePerformance_o *v88; // x8
  struct PlayMakerFSM_o *camerafsm; // x1
  struct PlayMakerFSM_o **p_CameraFsm; // x19
  __int64 v91; // x8
  __int64 v92; // x19
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7

  if ( (byte_4B195F2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, aData, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleActionCamera___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v7, v8);
    sub_1BCA7E0(&StringLiteral_11532/*"RootCameraPrefab"*/, v9, v10);
    byte_4B195F2 = 1;
  }
  performance = (int64_t)this->fields.performance;
  if ( !performance )
    goto LABEL_33;
  BattlePerformance__loadFieldMotion((BattlePerformance_o *)performance, aData, 0LL, 0LL);
  v12 = this->fields.performance;
  if ( !v12 )
    goto LABEL_33;
  fieldmotion = v12->fields.fieldmotion;
  if ( !fieldmotion )
    goto LABEL_33;
  if ( !fieldmotion->max_length )
    sub_1BCAA44(performance, aData);
  performance = (int64_t)fieldmotion->m_Items[0];
  if ( !performance )
    goto LABEL_33;
  Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)performance, 0LL);
  this->fields.FieldMotion = Fsm;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.FieldMotion, (int64_t)Fsm, v15, v16, v17, v18, v19, v20);
  performance = (int64_t)this->fields.GroundObject;
  if ( !performance )
    goto LABEL_33;
  performance = (int64_t)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)performance, 0LL);
  if ( !performance )
    goto LABEL_33;
  performance = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)performance, 0LL);
  if ( !aData )
    goto LABEL_33;
  cameraObject = this->fields.cameraObject;
  v22 = (UnityEngine_Transform_o *)performance;
  p_cameraObject = &this->fields.cameraObject;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              aData,
                              (System_String_o *)StringLiteral_11532/*"RootCameraPrefab"*/,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  ObjectIfNotExist = BaseMonoBehaviour__createObjectIfNotExist(
                       (BaseMonoBehaviour_o *)this,
                       cameraObject,
                       (UnityEngine_GameObject_o *)Object_object__49237568,
                       v22,
                       0LL,
                       0LL);
  this->fields.cameraObject = ObjectIfNotExist;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.cameraObject,
    (int64_t)ObjectIfNotExist,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  performance = (int64_t)this->fields.cameraObject;
  if ( !performance )
    goto LABEL_33;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)performance, (System_String_o *)StringLiteral_11532/*"RootCameraPrefab"*/, 0LL);
  performance = (int64_t)*p_cameraObject;
  if ( !*p_cameraObject )
    goto LABEL_33;
  performance = (int64_t)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)performance, 0LL);
  v33 = (UnityEngine_Transform_o *)performance;
  if ( !byte_4B109C1 )
  {
    performance = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, aData, v32);
    byte_4B109C1 = 1;
  }
  if ( !v33 )
    goto LABEL_33;
  UnityEngine_Transform__set_eulerAngles(v33, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  performance = (int64_t)this->fields.cameraObject;
  if ( !performance )
    goto LABEL_33;
  v34 = this->fields.performance;
  performance = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)performance,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v34 )
    goto LABEL_33;
  v34->fields.camerafsm = (struct PlayMakerFSM_o *)performance;
  sub_1BCA784((PartyOrganizationUtility_o *)&v34->fields.camerafsm, performance, v35, v36, v37, v38, v39, v40);
  performance = (int64_t)this->fields.cameraObject;
  if ( !performance )
    goto LABEL_33;
  v41 = this->fields.performance;
  performance = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)performance,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActionCamera___);
  if ( !v41 )
    goto LABEL_33;
  v41->fields.actioncamera = (struct BattleActionCamera_o *)performance;
  sub_1BCA784((PartyOrganizationUtility_o *)&v41->fields.actioncamera, performance, v42, v43, v44, v45, v46, v47);
  performance = (int64_t)this->fields.performance;
  if ( !performance )
    goto LABEL_33;
  v54 = *(_QWORD *)(performance + 376);
  if ( !v54 )
    goto LABEL_33;
  v55 = *(_QWORD *)(v54 + 64);
  *(_QWORD *)(performance + 128) = v55;
  sub_1BCA784((PartyOrganizationUtility_o *)(performance + 128), v55, v48, v49, v50, v51, v52, v53);
  performance = (int64_t)this->fields.performance;
  if ( !performance )
    goto LABEL_33;
  v62 = *(_QWORD *)(performance + 376);
  if ( !v62 )
    goto LABEL_33;
  v63 = *(_QWORD *)(v62 + 80);
  *(_QWORD *)(performance + 144) = v63;
  sub_1BCA784((PartyOrganizationUtility_o *)(performance + 144), v63, v56, v57, v58, v59, v60, v61);
  v70 = this->fields.performance;
  if ( !v70 )
    goto LABEL_33;
  actioncamera = v70->fields.actioncamera;
  if ( !actioncamera )
    goto LABEL_33;
  frontcamera = (int64_t)actioncamera->fields.frontcamera;
  v70->fields.cutIncamera = (struct UnityEngine_Camera_o *)frontcamera;
  sub_1BCA784((PartyOrganizationUtility_o *)&v70->fields.cutIncamera, frontcamera, v64, v65, v66, v67, v68, v69);
  v79 = this->fields.performance;
  if ( !v79 )
    goto LABEL_33;
  v80 = v79->fields.actioncamera;
  if ( !v80 )
    goto LABEL_33;
  actorcamera = v80->fields.actorcamera;
  this->fields.actorCamera = actorcamera;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.actorCamera,
    (int64_t)actorcamera,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  v88 = this->fields.performance;
  if ( !v88 )
    goto LABEL_33;
  camerafsm = v88->fields.camerafsm;
  this->fields.CameraFsm = camerafsm;
  p_CameraFsm = &this->fields.CameraFsm;
  sub_1BCA784((PartyOrganizationUtility_o *)p_CameraFsm, (int64_t)camerafsm, v82, v83, v84, v85, v86, v87);
  v91 = (__int64)*(p_CameraFsm - 7);
  if ( !v91
    || (performance = *(_QWORD *)(v91 + 144)) == 0
    || (v92 = (__int64)*(p_CameraFsm - 4),
        performance = (int64_t)UnityEngine_Component__get_transform((UnityEngine_Component_o *)performance, 0LL),
        !v92) )
  {
LABEL_33:
    sub_1BCAA3C(performance, aData);
  }
  *(_QWORD *)(v92 + 40) = performance;
  sub_1BCA784((PartyOrganizationUtility_o *)(v92 + 40), performance, v93, v94, v95, v96, v97, v98);
}


void __fastcall BattleDemoRootComponent___beginStartUp_b__36_0(
        BattleDemoRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  void *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x20
  Il2CppObject *v15; // x21
  struct BattleDemoRootComponent___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B195F3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_BattleDemoRootComponent___c__beginStartUp_b__36_1__, v6, v7);
    sub_1BCA7E0(&BattleDemoRootComponent___c_TypeInfo, v8, v9);
    byte_4B195F3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
  Instance = BattleDemoRootComponent___c_TypeInfo;
  if ( !BattleDemoRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDemoRootComponent___c_TypeInfo, v11);
    Instance = BattleDemoRootComponent___c_TypeInfo;
  }
  v14 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 8LL);
  if ( !v14 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v11);
      Instance = BattleDemoRootComponent___c_TypeInfo;
    }
    v15 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
    System_Action___ctor(v14, v15, Method_BattleDemoRootComponent___c__beginStartUp_b__36_1__, 0LL);
    static_fields = BattleDemoRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__36_1 = v14;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__36_1, (int64_t)v14, v17, v18, v19, v20, v21, v22);
  }
  if ( !this )
LABEL_12:
    sub_1BCAA3C(Instance, v11);
  BattleDemoRootComponent__StartDemo(this, v14, v12);
}


void __fastcall BattleDemoRootComponent__beginFinish(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BattleDemoRootComponent__beginInitialize(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B195E4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5);
    byte_4B195E4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__maskFadeout((CommonUI_o *)Instance, 1, 0.0, 0LL, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v7);
  }
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall BattleDemoRootComponent__beginStartUp(
        BattleDemoRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  Il2CppObject *demoInfo; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 methodPtr_low; // x8
  System_Action_o *v15; // x21
  const MethodInfo *v16; // x3
  struct BattleSetupInfo_o **p_battleSetupInfo; // x21
  __int64 v18; // x0

  demoInfo = data;
  if ( (byte_4B195E5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, data, method);
    sub_1BCA7E0(&Method_BattleDemoRootComponent__beginStartUp_b__36_0__, v10, v11);
    sub_1BCA7E0(&BattleSetupInfo_TypeInfo, v12, v13);
    byte_4B195E5 = 1;
  }
  if ( demoInfo )
  {
    data = (Il2CppObject *)BattleSetupInfo_TypeInfo;
    methodPtr_low = LOBYTE(BattleSetupInfo_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(demoInfo->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
      && (BattleSetupInfo_c *)demoInfo->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleSetupInfo_TypeInfo )
    {
      this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)demoInfo;
      p_battleSetupInfo = &this->fields.battleSetupInfo;
      if ( LOBYTE(demoInfo->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (Il2CppObject *)demoInfo->klass->_2.typeHierarchy[methodPtr_low - 1] == data )
      {
        sub_1BCA784(
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
        sub_1BCACFC(demoInfo);
      }
      sub_1BCAA3C(v18, data);
    }
    demoInfo = 0LL;
  }
LABEL_7:
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, data, method, v3);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_BattleDemoRootComponent__beginStartUp_b__36_0__, 0LL);
  BattleDemoRootComponent__InitializeBattleDemo(this, (System_String_o *)demoInfo, v15, v16);
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
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleDemoRootComponent__SetupBattleDemo_d__30_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  struct BattleDemoRootComponent_o *_4__this; // x20
  AssetLoader_LoadEndDataHandler_o *v24; // x21
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  struct System_Action_o *InitializeCallback; // x8
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x2
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  PartyOrganizationUtility_o *v43; // x19
  int v44; // w8
  __int64 v45; // x1
  System_String_o *BgmName; // x20
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  UnityEngine_WaitForSeconds_o *v50; // x20
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7

  v8 = this;
  if ( (byte_4B195F7 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattleDemoRootComponent__SetupBattleDemo_b__30_0__, v9, v10);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v11, v12);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&SoundManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_3233/*"Battle/Common"*/, v19, v20);
    this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)sub_1BCA7E0(&StringLiteral_11206/*"RESET_CAMERA_NOBLEEND"*/, v21, v22);
    byte_4B195F7 = 1;
  }
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v24 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, method, v2, v3);
      AssetLoader_LoadEndDataHandler___ctor(
        v24,
        (Il2CppObject *)_4__this,
        Method_BattleDemoRootComponent__SetupBattleDemo_b__30_0__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v25);
      AssetManager__loadAssetStorage((System_String_o *)StringLiteral_3233/*"Battle/Common"*/, v24, 1, 0LL);
      goto LABEL_8;
    case 1:
      v8->fields.__1__state = -1;
LABEL_8:
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
      this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)AssetManager__LoadIsBusy(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v8->fields.__2__current = 0LL;
        p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BCA784(p__2__current, 0LL, v26, v27, v28, v29, v30, v31);
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
      BattleDemoRootComponent__LoadBattleChrs(_4__this, _4__this->fields.PlayerList, v35);
      BattleDemoRootComponent__LoadBattleChrs(_4__this, _4__this->fields.EnemyList, v36);
LABEL_22:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, method);
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
            v43 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1BCA784(v43, 0LL, v2, v3, v4, v5, v6, v7);
            v44 = 3;
            goto LABEL_34;
          }
          BattleDemoRootComponent__CreateActors(_4__this, method);
          this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)_4__this->fields.CameraFsm;
          if ( this )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11206/*"RESET_CAMERA_NOBLEEND"*/, 0LL);
            BgmName = _4__this->fields.BgmName;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v45);
            SoundManager__playBgm(BgmName, 0LL);
            v50 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, v47, v48, v49);
            UnityEngine_WaitForSeconds___ctor(v50, 1.0, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v50;
            v43 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1BCA784(v43, (int64_t)v50, v51, v52, v53, v54, v55, v56);
            v44 = 4;
            goto LABEL_34;
          }
        }
LABEL_35:
        sub_1BCAA3C(this, method);
      }
      v8->fields.__2__current = 0LL;
      v43 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(v43, 0LL, v37, v38, v39, v40, v41, v42);
      v44 = 2;
LABEL_34:
      *(_DWORD *)&v43[-1].fields._IsQuestStartMenuMode_k__BackingField = v44;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BattleDemoRootComponent__SetupBattleDemo_d__30_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  __int64 v3; // x3
  BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v16; // x19
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  bool result; // w0
  struct BattleDemoRootComponent_o *_4__this; // x19
  struct BattlePerformance_o *performance; // x20
  BattlePerformance_c *v26; // x0
  struct BattlePerformance_o *v27; // x8
  __int64 v28; // x2
  BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *v29; // x20
  Il2CppObject *Instance; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Action_object__o *v34; // x21

  v4 = this;
  if ( (byte_4B195F8 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_USSequencer__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattleDemoRootComponent_OnNoblePhantasmPlayComplete__, v5, v6);
    sub_1BCA7E0(&BattlePerformance_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v11, v12);
    this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)sub_1BCA7E0(
                                                                         &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                         v13,
                                                                         v14);
    byte_4B195F8 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
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
    v26 = BattlePerformance_TypeInfo;
    if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo, method);
      v26 = BattlePerformance_TypeInfo;
    }
    BattlePerformance__setupCameraFov(performance, v26->static_fields->DefaultFov, 0LL);
    v27 = _4__this->fields.performance;
    if ( !v27 )
      goto LABEL_20;
    this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)v27->fields.actorcamera;
    if ( !this )
      goto LABEL_20;
    this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)UnityEngine_Component__get_transform(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0LL);
    v29 = this;
    if ( !byte_4B109C1 )
    {
      this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)sub_1BCA7E0(
                                                                           &UnityEngine_Vector3_TypeInfo,
                                                                           method,
                                                                           v28);
      byte_4B109C1 = 1;
    }
    if ( !v29
      || (UnityEngine_Transform__set_localEulerAngles(
            (UnityEngine_Transform_o *)v29,
            UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
            0LL),
          (this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__maskFadein((CommonUI_o *)this, 1.0, 0LL, 0LL),
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__),
          v34 = (System_Action_object__o *)sub_1BCAA2C(System_Action_USSequencer__TypeInfo, v31, v32, v33),
          System_Action_object____ctor(
            v34,
            (Il2CppObject *)_4__this,
            Method_BattleDemoRootComponent_OnNoblePhantasmPlayComplete__,
            0LL),
          !Instance) )
    {
LABEL_20:
      sub_1BCAA3C(this, method);
    }
    BattleSequenceManager__play((BattleSequenceManager_o *)Instance, 0, 1, (System_Action_USSequencer__o *)v34, 0LL);
  }
  else if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    v16 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3);
    UnityEngine_WaitForEndOfFrame___ctor(v16, 0LL);
    v4->fields.__2__current = (Il2CppObject *)v16;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__2__current, (int64_t)v16, v17, v18, v19, v20, v21, v22);
    result = 1;
    v4->fields.__1__state = 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B195F5 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDemoRootComponent___c_TypeInfo, v1, v2);
    byte_4B195F5 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleDemoRootComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleDemoRootComponent___c_TypeInfo->static_fields->__9 = (struct BattleDemoRootComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleDemoRootComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  if ( (byte_4B195F6 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, args, method);
    byte_4B195F6 = 1;
  }
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, args);
  ServantAssetLoadManager__UnloadAssetsByArgs(args, 0LL);
}


void __fastcall BattleDemoRootComponent___c___beginStartUp_b__36_1(
        BattleDemoRootComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}