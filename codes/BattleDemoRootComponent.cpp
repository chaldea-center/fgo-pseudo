void BattleDemoRootComponent___cctor(const MethodInfo *method)
{
  if ( (byte_5974584 & 1) == 0 )
  {
    sub_2213A60(&BattleDemoRootComponent_TypeInfo);
    byte_5974584 = 1;
  }
  LODWORD(BattleDemoRootComponent_TypeInfo->static_fields->BGM_FADEOUT_TIME) = (struct BattleDemoRootComponent_StaticFields)1065353216;
}


void BattleDemoRootComponent___ctor(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleDemoRootComponent__CreateActorObject(
        BattleDemoRootComponent_o *this,
        int32_t uniqueIdStart,
        System_String_array *chrInfos,
        UnityEngine_GameObject_array *actors,
        bool isPlayer,
        const MethodInfo *method)
{
  __int64 FieldMotion; // x0
  const MethodInfo *v10; // x2
  il2cpp_array_size_t max_length; // x8
  int32_t v12; // w23
  unsigned __int64 v13; // x24
  System_String_o *v14; // x19
  BattleDemoRootComponent_o *ServantIdByInfo; // x0
  const MethodInfo *v16; // x2
  __int64 v17; // x1
  int32_t LimitCountByInfo; // w19
  Il2CppObject *actorPrefab; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t v26; // w27
  UnityEngine_GameObject_o *v27; // x28
  UnityEngine_Transform_o *v28; // x21
  UnityEngine_Transform_o *v29; // x21
  UnityEngine_Transform_o *v30; // x21
  UnityEngine_Transform_o *v31; // x21
  System_String_array *v32; // x25
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct BattlePerformance_o *performance; // x1
  BattleActorControl_o *v40; // x28
  BattleServantData_o *v41; // x22
  System_Collections_Generic_Dictionary_object__int__o *v42; // x21
  UnityEngine_GameObject_o *v43; // x19
  struct BattlePerformance_o *v44; // x8
  UnityEngine_Transform_o *PlayerPopTr; // x0
  UnityEngine_GameObject_o *v46; // x19
  struct BattlePerformance_o *v47; // x8
  UnityEngine_Component_o *v48; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_array *v50; // [xsp+0h] [xbp-90h]
  BattleFieldMotionComponent_o *v51; // [xsp+8h] [xbp-88h]
  UnityEngine_GameObject_o **m_Items; // [xsp+10h] [xbp-80h]
  System_String_o **v55; // [xsp+20h] [xbp-70h]
  int32_t value; // [xsp+2Ch] [xbp-64h]

  if ( (byte_5974575 & 1) == 0 )
  {
    sub_2213A60(&BattleServantData_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleFieldMotionComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_22303/*"limitCount"*/);
    sub_2213A60(&StringLiteral_25139/*"svtId"*/);
    sub_2213A60(&StringLiteral_21755/*"index"*/);
    sub_2213A60(&StringLiteral_25941/*"userSvtId"*/);
    sub_2213A60(&StringLiteral_25626/*"uniqueId"*/);
    sub_2213A60(&StringLiteral_16837/*"_ENEMY"*/);
    sub_2213A60(&StringLiteral_16950/*"_PLAYER"*/);
    byte_5974575 = 1;
  }
  FieldMotion = (__int64)this->fields.FieldMotion;
  if ( !FieldMotion
    || (FieldMotion = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)FieldMotion, 0)) == 0
    || (FieldMotion = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)FieldMotion,
                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleFieldMotionComponent___),
        !chrInfos) )
  {
LABEL_44:
    sub_2213CDC(FieldMotion, *(_QWORD *)&uniqueIdStart);
  }
  max_length = chrInfos->max_length;
  if ( (int)max_length >= 1 )
  {
    v12 = uniqueIdStart;
    v13 = 0;
    v51 = (BattleFieldMotionComponent_o *)FieldMotion;
    m_Items = actors->m_Items;
    v55 = chrInfos->m_Items;
    v50 = actors;
    do
    {
      if ( v13 >= (unsigned int)max_length )
LABEL_45:
        sub_2213CE4(FieldMotion);
      v14 = v55[v13];
      if ( v14 )
      {
        ServantIdByInfo = (BattleDemoRootComponent_o *)BattleDemoRootComponent__GetServantIdByInfo(
                                                         (BattleDemoRootComponent_o *)FieldMotion,
                                                         v55[v13],
                                                         v10);
        value = (int)ServantIdByInfo;
        LimitCountByInfo = BattleDemoRootComponent__GetLimitCountByInfo(ServantIdByInfo, v14, v16);
        actorPrefab = (Il2CppObject *)this->fields.actorPrefab;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
        FieldMotion = (__int64)UnityEngine_Object__Instantiate_object_(
                                 actorPrefab,
                                 (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !actors )
          goto LABEL_44;
        v26 = v12 - uniqueIdStart;
        if ( (unsigned int)(v12 - uniqueIdStart) >= LODWORD(actors->max_length) )
          goto LABEL_45;
        v27 = (UnityEngine_GameObject_o *)FieldMotion;
        actors->m_Items[v26] = (UnityEngine_GameObject_o *)FieldMotion;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&m_Items[v26], FieldMotion, v20, v21, v22, v23, v24, v25);
        if ( !v27 )
          goto LABEL_44;
        FieldMotion = (__int64)UnityEngine_GameObject__get_transform(v27, 0);
        if ( !this->fields.Field )
          goto LABEL_44;
        v28 = (UnityEngine_Transform_o *)FieldMotion;
        FieldMotion = (__int64)UnityEngine_GameObject__get_transform(this->fields.Field, 0);
        if ( !v28 )
          goto LABEL_44;
        UnityEngine_Transform__set_parent(v28, (UnityEngine_Transform_o *)FieldMotion, 0);
        FieldMotion = (__int64)UnityEngine_GameObject__get_transform(v27, 0);
        v29 = (UnityEngine_Transform_o *)FieldMotion;
        if ( !byte_5969AE0 )
        {
          FieldMotion = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE0 = 1;
        }
        if ( !v29 )
          goto LABEL_44;
        UnityEngine_Transform__set_localPosition(v29, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        FieldMotion = (__int64)UnityEngine_GameObject__get_transform(v27, 0);
        v30 = (UnityEngine_Transform_o *)FieldMotion;
        if ( !byte_5969AE0 )
        {
          FieldMotion = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE0 = 1;
        }
        if ( !v30 )
          goto LABEL_44;
        UnityEngine_Transform__set_localEulerAngles(v30, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        FieldMotion = (__int64)UnityEngine_GameObject__get_transform(v27, 0);
        v31 = (UnityEngine_Transform_o *)FieldMotion;
        if ( !byte_5969AE5 )
        {
          FieldMotion = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE5 = 1;
        }
        if ( !v31 )
          goto LABEL_44;
        v32 = chrInfos;
        UnityEngine_Transform__set_localScale(v31, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
        FieldMotion = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 v27,
                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !FieldMotion )
          goto LABEL_44;
        performance = this->fields.performance;
        v40 = (BattleActorControl_o *)FieldMotion;
        *(_QWORD *)(FieldMotion + 168) = performance;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(FieldMotion + 168),
          (int32_t)performance,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
        v41 = (BattleServantData_o *)sub_2213CCC(BattleServantData_TypeInfo);
        BattleServantData___ctor(v41, 0);
        v42 = (System_Collections_Generic_Dictionary_object__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
        System_Collections_Generic_Dictionary_object__int____ctor(
          v42,
          (const MethodInfo_3FF3708 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
        if ( !v42 )
          goto LABEL_44;
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v42,
          (Il2CppObject *)StringLiteral_21755/*"index"*/,
          v12,
          (const MethodInfo_3FF4088 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v42,
          (Il2CppObject *)StringLiteral_25626/*"uniqueId"*/,
          v12,
          (const MethodInfo_3FF4088 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v42,
          (Il2CppObject *)StringLiteral_25941/*"userSvtId"*/,
          v12,
          (const MethodInfo_3FF4088 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v42,
          (Il2CppObject *)StringLiteral_25139/*"svtId"*/,
          value,
          (const MethodInfo_3FF4088 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v42,
          (Il2CppObject *)StringLiteral_22303/*"limitCount"*/,
          LimitCountByInfo,
          (const MethodInfo_3FF4088 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        if ( !v41 )
          goto LABEL_44;
        BattleServantData__SetFakeData(v41, (System_Collections_Generic_Dictionary_string__int__o *)v42, 0);
        if ( isPlayer )
        {
          BattleActorControl__setTypePlayer(v40, 0);
          BattleActorControl__setServantData(v40, v41, 0);
          BattleActorControl__setDirLeft(v40, 0);
          FieldMotion = (__int64)this->fields.actorCamera;
          if ( !FieldMotion )
            goto LABEL_44;
          FieldMotion = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)FieldMotion, 0);
          if ( !this->fields.CameraFsm )
            goto LABEL_44;
          v43 = (UnityEngine_GameObject_o *)FieldMotion;
          chrInfos = v32;
          FieldMotion = (__int64)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)this->fields.CameraFsm,
                                   0);
          v44 = this->fields.performance;
          if ( !v44 )
            goto LABEL_44;
          BattleActorControl__setMotionListForDemo(
            v40,
            (System_String_o *)StringLiteral_16950/*"_PLAYER"*/,
            v43,
            (UnityEngine_GameObject_o *)FieldMotion,
            this->fields.CommonMotionPrefab,
            v44->fields._CommonPigMotionPrefab_k__BackingField,
            0);
          actors = v50;
          if ( !v51 )
            goto LABEL_44;
          PlayerPopTr = BattleFieldMotionComponent__getPlayerPopTr(v51, v26, 0);
        }
        else
        {
          BattleActorControl__setTypeEnemy(v40, 0);
          BattleActorControl__setServantData(v40, v41, 0);
          BattleActorControl__setDirRight(v40, 0);
          FieldMotion = (__int64)this->fields.actorCamera;
          if ( !FieldMotion )
            goto LABEL_44;
          FieldMotion = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)FieldMotion, 0);
          if ( !this->fields.CameraFsm )
            goto LABEL_44;
          v46 = (UnityEngine_GameObject_o *)FieldMotion;
          chrInfos = v32;
          FieldMotion = (__int64)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)this->fields.CameraFsm,
                                   0);
          v47 = this->fields.performance;
          if ( !v47 )
            goto LABEL_44;
          BattleActorControl__setMotionListForDemo(
            v40,
            (System_String_o *)StringLiteral_16837/*"_ENEMY"*/,
            v46,
            (UnityEngine_GameObject_o *)FieldMotion,
            this->fields.CommonMotionPrefab,
            v47->fields._CommonPigMotionPrefab_k__BackingField,
            0);
          actors = v50;
          if ( !v51 )
            goto LABEL_44;
          PlayerPopTr = BattleFieldMotionComponent__getEnemyPopPoint(v51, v26, 0);
        }
        v48 = (UnityEngine_Component_o *)PlayerPopTr;
        BattleActorControl__setCamera(v40, this->fields.actorCamera, 0);
        if ( !v48 )
          goto LABEL_44;
        gameObject = UnityEngine_Component__get_gameObject(v48, 0);
        BattleActorControl__setTargetObject(v40, gameObject, 0);
        ++v12;
      }
      LODWORD(max_length) = chrInfos->max_length;
      ++v13;
    }
    while ( (__int64)v13 < (int)max_length );
  }
}


void BattleDemoRootComponent__CreateActors(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  BattleDemoRootComponent_o *v2; // x19
  struct System_String_array *PlayerList; // x8
  __int64 v4; // x0
  struct UnityEngine_GameObject_array **p_PlayerActorList; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct System_String_array *EnemyList; // x8
  __int64 v13; // x0
  struct UnityEngine_GameObject_array **p_EnemyActorList; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct BattlePerformance_o *performance; // x8
  struct UnityEngine_GameObject_array *PlayerActorList; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct BattlePerformance_o *v35; // x8
  struct UnityEngine_GameObject_array *EnemyActorList; // x1
  const MethodInfo *v37; // x5
  const MethodInfo *v38; // x5
  struct UnityEngine_GameObject_array *v39; // x8
  unsigned __int64 v40; // x23
  struct System_String_o *BgmName; // x22
  System_String_o *v42; // x0
  struct UnityEngine_GameObject_array *v43; // x8
  struct UnityEngine_GameObject_array *v44; // x8
  unsigned __int64 v45; // x22
  struct System_String_o *v46; // x21
  System_String_o *v47; // x0
  struct UnityEngine_GameObject_array *v48; // x8
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  struct System_String_array *CameraFsm; // x1
  struct UnityEngine_GameObject_array *v56; // x22
  int max_length; // w8
  unsigned int v58; // w9
  UnityEngine_Object_o *v59; // x21
  struct UnityEngine_GameObject_array *v60; // x21
  int v61; // w8
  unsigned int v62; // w9
  UnityEngine_Object_o *v63; // x20
  int v64; // [xsp+Ch] [xbp-64h] BYREF

  v2 = this;
  if ( (byte_5974574 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_GameObject___TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_9120/*"MOTION_ENTRY"*/);
    sub_2213A60(&StringLiteral_5663/*"ENEMY"*/);
    sub_2213A60(&StringLiteral_4115/*"CameraFsm"*/);
    sub_2213A60(&StringLiteral_10816/*"PLAYER"*/);
    this = (BattleDemoRootComponent_o *)sub_2213A60(&StringLiteral_5648/*"END_NP"*/);
    byte_5974574 = 1;
  }
  PlayerList = v2->fields.PlayerList;
  v64 = 0;
  if ( !PlayerList )
    goto LABEL_28;
  v4 = sub_2213B20(UnityEngine_GameObject___TypeInfo, LODWORD(PlayerList->max_length));
  v2->fields.PlayerActorList = (struct UnityEngine_GameObject_array *)v4;
  p_PlayerActorList = &v2->fields.PlayerActorList;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.PlayerActorList, v4, v6, v7, v8, v9, v10, v11);
  EnemyList = v2->fields.EnemyList;
  if ( !EnemyList )
    goto LABEL_28;
  v13 = sub_2213B20(UnityEngine_GameObject___TypeInfo, LODWORD(EnemyList->max_length));
  v2->fields.EnemyActorList = (struct UnityEngine_GameObject_array *)v13;
  p_EnemyActorList = &v2->fields.EnemyActorList;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.EnemyActorList, v13, v15, v16, v17, v18, v19, v20);
  performance = v2->fields.performance;
  if ( !performance )
    goto LABEL_28;
  PlayerActorList = v2->fields.PlayerActorList;
  performance->fields.p_actorlist = PlayerActorList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&performance->fields.p_actorlist,
    (int32_t)PlayerActorList,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v35 = v2->fields.performance;
  if ( !v35 )
    goto LABEL_28;
  EnemyActorList = v2->fields.EnemyActorList;
  v35->fields.e_actorlist = EnemyActorList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v35->fields.e_actorlist,
    (int32_t)EnemyActorList,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  BattleDemoRootComponent__CreateActorObject(v2, 1, v2->fields.PlayerList, v2->fields.PlayerActorList, 1, v37);
  BattleDemoRootComponent__CreateActorObject(v2, 4, v2->fields.EnemyList, v2->fields.EnemyActorList, 0, v38);
  v39 = v2->fields.PlayerActorList;
  if ( !v39 )
    goto LABEL_28;
  v40 = 0;
  while ( (__int64)v40 < SLODWORD(v39->max_length) )
  {
    this = (BattleDemoRootComponent_o *)v2->fields.FieldMotion;
    if ( this )
    {
      this = (BattleDemoRootComponent_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
      if ( this )
      {
        BgmName = this->fields.BgmName;
        v64 = v40 + 1;
        v42 = System_Int32__ToString((int32_t)&v64, 0);
        this = (BattleDemoRootComponent_o *)System_String__Concat_75651716(
                                              (System_String_o *)StringLiteral_10816/*"PLAYER"*/,
                                              v42,
                                              0);
        if ( BgmName )
        {
          this = (BattleDemoRootComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                                (HutongGames_PlayMaker_FsmVariables_o *)BgmName,
                                                (System_String_o *)this,
                                                0);
          v43 = *p_PlayerActorList;
          if ( *p_PlayerActorList )
          {
            if ( v40 >= LODWORD(v43->max_length) )
              goto LABEL_57;
            if ( this )
            {
              HutongGames_PlayMaker_FsmGameObject__set_Value(
                (HutongGames_PlayMaker_FsmGameObject_o *)this,
                v43->m_Items[v40],
                0);
              v39 = *p_PlayerActorList;
              ++v40;
              if ( *p_PlayerActorList )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_28;
  }
  v44 = *p_EnemyActorList;
  if ( !*p_EnemyActorList )
    goto LABEL_28;
  v45 = 0;
  while ( 1 )
  {
    this = (BattleDemoRootComponent_o *)v2->fields.FieldMotion;
    if ( (__int64)v45 >= SLODWORD(v44->max_length) )
      break;
    if ( this )
    {
      this = (BattleDemoRootComponent_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
      if ( this )
      {
        v46 = this->fields.BgmName;
        v64 = v45 + 1;
        v47 = System_Int32__ToString((int32_t)&v64, 0);
        this = (BattleDemoRootComponent_o *)System_String__Concat_75651716(
                                              (System_String_o *)StringLiteral_5663/*"ENEMY"*/,
                                              v47,
                                              0);
        if ( v46 )
        {
          this = (BattleDemoRootComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                                (HutongGames_PlayMaker_FsmVariables_o *)v46,
                                                (System_String_o *)this,
                                                0);
          v48 = *p_EnemyActorList;
          if ( *p_EnemyActorList )
          {
            if ( v45 >= LODWORD(v48->max_length) )
              goto LABEL_57;
            if ( this )
            {
              HutongGames_PlayMaker_FsmGameObject__set_Value(
                (HutongGames_PlayMaker_FsmGameObject_o *)this,
                v48->m_Items[v45],
                0);
              v44 = *p_EnemyActorList;
              ++v45;
              if ( *p_EnemyActorList )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_28;
  }
  if ( !this )
    goto LABEL_28;
  this = (BattleDemoRootComponent_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
  if ( !this )
    goto LABEL_28;
  this = (BattleDemoRootComponent_o *)this->fields.BgmName;
  if ( !this )
    goto LABEL_28;
  this = (BattleDemoRootComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmObject(
                                        (HutongGames_PlayMaker_FsmVariables_o *)this,
                                        (System_String_o *)StringLiteral_4115/*"CameraFsm"*/,
                                        0);
  if ( !this )
    goto LABEL_28;
  CameraFsm = (struct System_String_array *)v2->fields.CameraFsm;
  this->fields.PlayerList = CameraFsm;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.PlayerList,
    (int32_t)CameraFsm,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v56 = v2->fields.PlayerActorList;
  v64 = 0;
  if ( !v56 )
    goto LABEL_28;
  max_length = v56->max_length;
  if ( max_length >= 1 )
  {
    v58 = 0;
    while ( v58 < max_length )
    {
      v59 = (UnityEngine_Object_o *)v56->m_Items[v58];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      this = (BattleDemoRootComponent_o *)UnityEngine_Object__op_Equality(v59, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v59 )
          goto LABEL_28;
        this = (BattleDemoRootComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)v59,
                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !this )
          goto LABEL_28;
        BattleActorControl__playMotion((BattleActorControl_o *)this, (System_String_o *)StringLiteral_9120/*"MOTION_ENTRY"*/, 0);
      }
      max_length = v56->max_length;
      v58 = ++v64;
      if ( v64 >= max_length )
        goto LABEL_44;
    }
LABEL_57:
    sub_2213CE4(this);
  }
LABEL_44:
  v60 = *p_EnemyActorList;
  v64 = 0;
  if ( !v60 )
    goto LABEL_28;
  v61 = v60->max_length;
  if ( v61 >= 1 )
  {
    v62 = 0;
    while ( v62 < v61 )
    {
      v63 = (UnityEngine_Object_o *)v60->m_Items[v62];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      this = (BattleDemoRootComponent_o *)UnityEngine_Object__op_Equality(v63, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v63 )
          goto LABEL_28;
        this = (BattleDemoRootComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)v63,
                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !this )
          goto LABEL_28;
        BattleActorControl__playMotion((BattleActorControl_o *)this, (System_String_o *)StringLiteral_9120/*"MOTION_ENTRY"*/, 0);
      }
      v61 = v60->max_length;
      v62 = ++v64;
      if ( v64 >= v61 )
        goto LABEL_55;
    }
    goto LABEL_57;
  }
LABEL_55:
  this = (BattleDemoRootComponent_o *)v2->fields.FieldMotion;
  if ( !this )
LABEL_28:
    sub_2213CDC(this, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5648/*"END_NP"*/, 0);
}


void BattleDemoRootComponent__EndRequestBattleSetup(
        BattleDemoRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  BattleDemoRootComponent_o *v4; // x19
  __int64 v5; // x1
  void *monitor; // x20
  int32_t klass_high; // w21
  int32_t v8; // w22
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_5974582 & 1) == 0 )
  {
    sub_2213A60(&BattleData_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_BattleMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&StringLiteral_11565/*"REQUEST_OK"*/);
    this = (BattleDemoRootComponent_o *)sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_5974582 = 1;
  }
  entity = 0;
  if ( !result )
    goto LABEL_18;
  if ( System_String__Equals_75686512(result, (System_String_o *)StringLiteral_23336/*"ng"*/, 0) )
  {
    this = (BattleDemoRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
      this = (BattleDemoRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( this )
      {
        AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)this, 34, 1, 0, 0, 0);
        return;
      }
    }
    goto LABEL_18;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
  this = (BattleDemoRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !this )
    goto LABEL_18;
  this = (BattleDemoRootComponent_o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        &entity,
                                        (const MethodInfo_3F132BC *)Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_18;
    monitor = entity[1].monitor;
    klass_high = HIDWORD(entity[2].klass);
    v8 = (int32_t)entity[2].monitor;
    if ( !*(&BattleData_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, result);
    BattleData__setResumeBattleId((int64_t)monitor, klass_high, v8, 0);
  }
  this = (BattleDemoRootComponent_o *)v4->fields.myFSM;
  if ( !this )
LABEL_18:
    sub_2213CDC(this, result);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11565/*"REQUEST_OK"*/, 0);
}


int32_t BattleDemoRootComponent__GetLimitCountByInfo(
        BattleDemoRootComponent_o *this,
        System_String_o *info,
        const MethodInfo *method)
{
  System_String_array *v4; // x0
  System_String_array *v5; // x1

  if ( (byte_5974570 & 1) == 0 )
  {
    sub_2213A60(&char___TypeInfo);
    byte_5974570 = 1;
  }
  v4 = (System_String_array *)sub_2213B20(char___TypeInfo, 1);
  if ( !v4 )
    goto LABEL_9;
  v5 = v4;
  if ( !LODWORD(v4->max_length) )
    goto LABEL_10;
  LOWORD(v4->m_Items[0]) = 58;
  if ( !info || (v4 = System_String__Split_75705984(info, (System_Char_array *)v4, 0)) == 0 )
LABEL_9:
    sub_2213CDC(v4, v5);
  if ( (v4->max_length & 0xFFFFFFFE) == 0 )
LABEL_10:
    sub_2213CE4(v4);
  return System_Int32__Parse(v4->m_Items[1], 0);
}


int32_t BattleDemoRootComponent__GetServantIdByInfo(
        BattleDemoRootComponent_o *this,
        System_String_o *info,
        const MethodInfo *method)
{
  System_String_array *v4; // x0
  System_String_array *v5; // x1

  if ( (byte_597456F & 1) == 0 )
  {
    sub_2213A60(&char___TypeInfo);
    byte_597456F = 1;
  }
  v4 = (System_String_array *)sub_2213B20(char___TypeInfo, 1);
  if ( !v4 )
    goto LABEL_9;
  v5 = v4;
  if ( !LODWORD(v4->max_length) )
    goto LABEL_10;
  LOWORD(v4->m_Items[0]) = 58;
  if ( !info || (v4 = System_String__Split_75705984(info, (System_Char_array *)v4, 0)) == 0 )
LABEL_9:
    sub_2213CDC(v4, v5);
  if ( !LODWORD(v4->max_length) )
LABEL_10:
    sub_2213CE4(v4);
  return System_Int32__Parse(v4->m_Items[0], 0);
}


bool BattleDemoRootComponent__GoToBattleEndTalk(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  int32_t name_high; // w20
  int32_t namespaze; // w21
  ScriptManager_CallbackFunc_o *v6; // x22
  __int64 v7; // x1

  v2 = (Il2CppObject *)this;
  if ( (byte_597457F & 1) == 0 )
  {
    sub_2213A60(&Method_BattleDemoRootComponent_OnBattleEndScript__);
    sub_2213A60(&ScriptManager_CallbackFunc_TypeInfo);
    this = (BattleDemoRootComponent_o *)sub_2213A60(&ScriptManager_TypeInfo);
    byte_597457F = 1;
  }
  klass = v2[14].klass;
  if ( !klass )
    sub_2213CDC(this, method);
  name_high = HIDWORD(klass->_1.name);
  namespaze = (int32_t)klass->_1.namespaze;
  v6 = (ScriptManager_CallbackFunc_o *)sub_2213CCC(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v6, v2, Method_BattleDemoRootComponent_OnBattleEndScript__, 0);
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v7);
  ScriptManager__PlayBattleEnd(name_high, namespaze, 1, v6, 0, -1, 0);
  return 1;
}


bool BattleDemoRootComponent__GoToBattleStartTalk(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  int32_t name_high; // w20
  int32_t namespaze; // w21
  ScriptManager_CallbackFunc_o *v6; // x22
  __int64 v7; // x1

  v2 = (Il2CppObject *)this;
  if ( (byte_597457D & 1) == 0 )
  {
    sub_2213A60(&Method_BattleDemoRootComponent_OnBattleStartScript__);
    sub_2213A60(&ScriptManager_CallbackFunc_TypeInfo);
    this = (BattleDemoRootComponent_o *)sub_2213A60(&ScriptManager_TypeInfo);
    byte_597457D = 1;
  }
  klass = v2[14].klass;
  if ( !klass )
    sub_2213CDC(this, method);
  name_high = HIDWORD(klass->_1.name);
  namespaze = (int32_t)klass->_1.namespaze;
  v6 = (ScriptManager_CallbackFunc_o *)sub_2213CCC(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v6, v2, Method_BattleDemoRootComponent_OnBattleStartScript__, 0);
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v7);
  ScriptManager__PlayBattleStart2_51596900(name_high, namespaze, v6, 0, 0);
  return 1;
}


bool BattleDemoRootComponent__GoToTerminal(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  const MethodInfo_47A29F8 *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_5974581 & 1) == 0 )
  {
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_5974581 = 1;
  }
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, method);
  ScriptManager__DeleteTalkResumeInfo(0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v2);
  if ( !byte_596ABDE )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596ABDE = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v2);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  v5 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
  static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance(v5);
  if ( !Instance )
    sub_2213CDC(0, v7);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
  return 1;
}


void BattleDemoRootComponent__InitializeBattleDemo(
        BattleDemoRootComponent_o *this,
        System_String_o *demoInfo,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleDemoRootComponent_o **p_PlayerList; // x23
  Il2CppObject *v11; // x0
  __int64 naturalAligment; // x10
  System_Collections_Generic_Dictionary_object__object__o *v13; // x21
  struct System_String_array *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_String_array *v21; // x0
  BattleDemoRootComponent_o **p_EnemyList; // x22
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  const MethodInfo_3FFDB90 **v29; // x28
  __int64 *v30; // x29
  char *v31; // x27
  System_String_o *v32; // x0
  BattleDemoRootComponent_c *Item; // x0
  __int64 v34; // x1
  Il2CppObject *v35; // x24
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  _QWORD *p_image; // x8
  unsigned __int64 v43; // x27
  __int64 v44; // x19
  unsigned __int64 v45; // x24
  System_String_o *v46; // x0
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_Collections_Generic_List_object__o *v52; // x23
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  int i; // w19
  System_String_o *v60; // x0
  Il2CppObject *v61; // x24
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  BattleDemoRootComponent_o *v67; // x9
  _QWORD *v68; // x10
  __int64 v69; // x11
  __int64 v70; // x0
  __int64 v71; // x2
  __int64 v72; // x1
  _QWORD *v73; // x0
  const MethodInfo_3FFDB90 *v74; // x2
  _QWORD *v75; // x0
  const MethodInfo_3FFDB90 *v76; // x2
  Il2CppObject *v77; // x0
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  struct System_String_o **p_BgmName; // x0
  System_Collections_Generic_List_object__o *v84; // x20
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  const MethodInfo *v91; // x1
  System_Collections_IEnumerator_o *v92; // x0
  BattleDemoRootComponent_o *v93; // x0
  const MethodInfo *v94; // x1
  BattleDemoRootComponent_o **v95; // [xsp+8h] [xbp-78h]
  BattleDemoRootComponent_o *v96; // [xsp+10h] [xbp-70h]
  int v97; // [xsp+1Ch] [xbp-64h] BYREF

  p_PlayerList = (BattleDemoRootComponent_o **)callback;
  if ( (byte_597456E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantAssetArgs___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_ServantAssetArgs__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_6299/*"Enemy"*/);
    sub_2213A60(&StringLiteral_13235/*"Sequence"*/);
    sub_2213A60(&StringLiteral_13481/*"Sound"*/);
    sub_2213A60(&StringLiteral_3274/*"Bg"*/);
    sub_2213A60(&StringLiteral_11136/*"Player"*/);
    sub_2213A60(&StringLiteral_3281/*"Bgm"*/);
    sub_2213A60(&StringLiteral_3280/*"BgType"*/);
    byte_597456E = 1;
  }
  v97 = 0;
  if ( !demoInfo )
    goto LABEL_49;
  v11 = MiniJSON_Json__Deserialize(demoInfo, 0);
  v95 = p_PlayerList;
  if ( v11
    && (naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment,
        v11->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (System_Collections_Generic_Dictionary_string__object__c *)v11->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
      v13 = (System_Collections_Generic_Dictionary_object__object__o *)v11;
    else
      v13 = 0;
  }
  else
  {
    v13 = 0;
  }
  v14 = (struct System_String_array *)sub_2213B20(string___TypeInfo, 3);
  this->fields.PlayerList = v14;
  p_PlayerList = (BattleDemoRootComponent_o **)&this->fields.PlayerList;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.PlayerList, (int32_t)v14, v15, v16, v17, v18, v19, v20);
  v21 = (struct System_String_array *)sub_2213B20(string___TypeInfo, 3);
  v96 = this;
  this->fields.EnemyList = v21;
  p_EnemyList = (BattleDemoRootComponent_o **)&this->fields.EnemyList;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.EnemyList, (int32_t)v21, v23, v24, v25, v26, v27, v28);
  v29 = 0;
  v30 = &qword_20;
  do
  {
    v31 = (char *)v29 + 1;
    v97 = (_DWORD)v29 + 1;
    v32 = System_Int32__ToString((int32_t)&v97, 0);
    Item = (BattleDemoRootComponent_c *)System_String__Concat_75651716((System_String_o *)StringLiteral_11136/*"Player"*/, v32, 0);
    if ( !v13 )
      goto LABEL_50;
    v35 = (Il2CppObject *)Item;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v13,
           (Il2CppObject *)Item,
           (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      this = *p_PlayerList;
      Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                            v13,
                                            v35,
                                            (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_50;
      p_image = &Item->_1.image;
      if ( Item )
      {
        v34 = qword_5984390;
        if ( Item->_1.image != (void *)qword_5984390 )
          goto LABEL_44;
      }
      if ( (unsigned __int64)v29 >= LODWORD(this->fields.m_CancellationTokenSource) )
LABEL_51:
        sub_2213CE4(Item);
      *(__int64 *)((char *)v30 + (_QWORD)this) = (__int64)Item;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)((char *)v30 + (_QWORD)this),
        (int32_t)Item,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
    }
    ++v30;
    v29 = (const MethodInfo_3FFDB90 **)((char *)v29 + 1);
  }
  while ( v31 != (_BYTE *)&dword_0 + 3 );
  v43 = 0;
  v29 = (const MethodInfo_3FFDB90 **)&Method_System_Collections_Generic_Dictionary_string__object__get_Item__;
  v30 = &qword_5984300;
  v44 = 32;
  do
  {
    v45 = v43 + 1;
    v97 = v43 + 1;
    v46 = System_Int32__ToString((int32_t)&v97, 0);
    p_PlayerList = (BattleDemoRootComponent_o **)System_String__Concat_75651716(
                                                   (System_String_o *)StringLiteral_6299/*"Enemy"*/,
                                                   v46,
                                                   0);
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v13,
           (Il2CppObject *)p_PlayerList,
           (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      this = *p_EnemyList;
      Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                            v13,
                                            (Il2CppObject *)p_PlayerList,
                                            (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_50;
      p_image = &Item->_1.image;
      if ( Item )
      {
        v34 = qword_5984390;
        if ( Item->_1.image != (void *)qword_5984390 )
          goto LABEL_44;
      }
      if ( v43 >= LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_51;
      *(BattleDemoRootComponent_c **)((char *)&this->klass + v44) = Item;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)this + v44), (int32_t)Item, v36, v47, v48, v49, v50, v51);
    }
    v44 += 8;
    ++v43;
  }
  while ( v45 != 3 );
  v52 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  this = v96;
  v96->fields.CueSheetList = (struct System_Collections_Generic_List_string__o *)v52;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v96->fields.CueSheetList, (int32_t)v52, v53, v54, v55, v56, v57, v58);
  for ( i = 1; i != 6; ++i )
  {
    v97 = i;
    v60 = System_Int32__ToString((int32_t)&v97, 0);
    v61 = (Il2CppObject *)System_String__Concat_75651716((System_String_o *)StringLiteral_13481/*"Sound"*/, v60, 0);
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v13,
           v61,
           (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      p_PlayerList = (BattleDemoRootComponent_o **)v96->fields.CueSheetList;
      Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                            v13,
                                            v61,
                                            (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !p_PlayerList )
        goto LABEL_50;
      p_image = &Item->_1.image;
      if ( Item )
      {
        v34 = qword_5984390;
        if ( Item->_1.image != (void *)qword_5984390 )
          goto LABEL_44;
      }
      v67 = p_PlayerList[2];
      v68 = Method_System_Collections_Generic_List_string__Add__;
      ++*((_DWORD *)p_PlayerList + 7);
      if ( !v67 )
        goto LABEL_50;
      v69 = *((int *)p_PlayerList + 6);
      if ( (unsigned int)v69 >= LODWORD(v67->fields.m_CancellationTokenSource) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)p_PlayerList,
          (Il2CppObject *)Item,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
      }
      else
      {
        v70 = (__int64)v67 + 8 * v69;
        *((_DWORD *)p_PlayerList + 6) = v69 + 1;
        *(_QWORD *)(v70 + 32) = p_image;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v70 + 32), (int32_t)p_image, v36, v62, v63, v64, v65, v66);
      }
    }
  }
  Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                        v13,
                                        (Il2CppObject *)StringLiteral_3274/*"Bg"*/,
                                        (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_50;
  v72 = qword_5984368;
  if ( *((_QWORD *)Item->_1.image + 8) != *(_QWORD *)(qword_5984368 + 64) )
    goto LABEL_52;
  v73 = (_QWORD *)j_il2cpp_object_unbox_0(Item, qword_5984368, v71);
  v74 = (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__;
  v96->fields.BgId = *v73;
  Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                        v13,
                                        (Il2CppObject *)StringLiteral_3280/*"BgType"*/,
                                        v74);
  p_PlayerList = v95;
  if ( !Item )
LABEL_50:
    sub_2213CDC(Item, v34);
  v72 = qword_5984368;
  if ( *((_QWORD *)Item->_1.image + 8) != *(_QWORD *)(qword_5984368 + 64) )
    goto LABEL_52;
  v75 = (_QWORD *)j_il2cpp_object_unbox_0(Item, qword_5984368, v71);
  v76 = (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__;
  v96->fields.BgType = *v75;
  v77 = System_Collections_Generic_Dictionary_object__object___get_Item(v13, (Il2CppObject *)StringLiteral_3281/*"Bgm"*/, v76);
  p_image = &v77->klass;
  if ( !v77 )
    goto LABEL_45;
  v34 = qword_5984390;
  if ( v77->klass != (Il2CppClass *)qword_5984390
    || (v96->fields.BgmName = (struct System_String_o *)v77, p_BgmName = &v96->fields.BgmName, *p_image != v34) )
  {
LABEL_44:
    sub_221405C(p_image, v34, v36);
LABEL_45:
    this->fields.BgmName = 0;
    p_BgmName = &this->fields.BgmName;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_BgmName, (int32_t)p_image, v36, v78, v79, v80, v81, v82);
  Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                        v13,
                                        (Il2CppObject *)StringLiteral_13235/*"Sequence"*/,
                                        *v29);
  if ( !Item )
    goto LABEL_50;
  v72 = v30[13];
  if ( *((_QWORD *)Item->_1.image + 8) == *(_QWORD *)(v72 + 64) )
  {
    this->fields.DemoSequenceServantId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, v72, v71);
LABEL_49:
    this->fields.InitializeCallback = (struct System_Action_o *)p_PlayerList;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.InitializeCallback,
      (int32_t)p_PlayerList,
      (System_String_o *)callback,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
    v84 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_ServantAssetArgs__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v84,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_ServantAssetArgs___ctor__);
    this->fields.loadedAssetArgsList = (struct System_Collections_Generic_List_ServantAssetArgs__o *)v84;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.loadedAssetArgsList,
      (int32_t)v84,
      v85,
      v86,
      v87,
      v88,
      v89,
      v90);
    v92 = BattleDemoRootComponent__SetupBattleDemo(this, v91);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v92, 0);
    return;
  }
LABEL_52:
  sub_221405C(Item, v72, v71);
  BattleDemoRootComponent__ReleaseBattleDemo(v93, v94);
}


void BattleDemoRootComponent__LoadBattleChrs(
        BattleDemoRootComponent_o *this,
        System_String_array *chrlist,
        const MethodInfo *method)
{
  BattleDemoRootComponent_o *v4; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x25
  System_String_o *v7; // x21
  BattleDemoRootComponent_o *ServantIdByInfo; // x0
  int32_t v9; // w22
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  int32_t LimitCountByInfo; // w23
  int32_t myFSM; // w24
  ServantAssetArgs_o *v14; // x21
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v23; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v25; // x8

  v4 = this;
  if ( (byte_5974576 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantAssetArgs__Add__);
    sub_2213A60(&ServantAssetArgs_TypeInfo);
    this = (BattleDemoRootComponent_o *)sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    byte_5974576 = 1;
  }
  if ( !chrlist )
LABEL_21:
    sub_2213CDC(this, chrlist);
  max_length = chrlist->max_length;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_2213CE4(this);
      v7 = chrlist->m_Items[i];
      if ( v7 )
      {
        ServantIdByInfo = (BattleDemoRootComponent_o *)BattleDemoRootComponent__GetServantIdByInfo(
                                                         this,
                                                         chrlist->m_Items[i],
                                                         method);
        v9 = (int)ServantIdByInfo;
        LimitCountByInfo = BattleDemoRootComponent__GetLimitCountByInfo(ServantIdByInfo, v7, v10);
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
        this = (BattleDemoRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitMaster___);
        if ( !this )
          goto LABEL_21;
        this = (BattleDemoRootComponent_o *)ServantLimitMaster__GetEntity(
                                              (ServantLimitMaster_o *)this,
                                              v9,
                                              LimitCountByInfo,
                                              0);
        if ( !this )
          goto LABEL_21;
        myFSM = (int32_t)this->fields.myFSM;
        v14 = (ServantAssetArgs_o *)sub_2213CCC(ServantAssetArgs_TypeInfo);
        ServantAssetArgs___ctor_53671584(v14, v9, LimitCountByInfo, 0, 0, myFSM, 0);
        if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v15);
        ServantAssetLoadManager__PreloadAssetsByArgs(v14, 0, 0, 0);
        this = (BattleDemoRootComponent_o *)v4->fields.loadedAssetArgsList;
        if ( !this )
          goto LABEL_21;
        m_CachedPtr = this->fields.m_CachedPtr;
        v23 = Method_System_Collections_Generic_List_ServantAssetArgs__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          goto LABEL_21;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v14,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v25 + 32) = v14;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 32), (int32_t)v14, v16, v17, v18, v19, v20, v21);
        }
      }
      LODWORD(max_length) = chrlist->max_length;
    }
  }
}


void BattleDemoRootComponent__LoadCueSheet(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *CueSheetList; // x0
  Il2CppObject *current; // x20
  const MethodInfo_47A29F8 *v5; // x0
  Il2CppObject *Instance; // x21
  System_Action_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v11; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_5974571 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleDemoRootComponent__LoadCueSheet_b__28_0__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_5974571 = 1;
  }
  CueSheetList = this->fields.CueSheetList;
  memset(&v12, 0, sizeof(v12));
  if ( CueSheetList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      (System_Collections_Generic_List_object__o *)CueSheetList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v10 = 0;
    v11 = &v12;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v12.fields._current;
      v5 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__;
      ++this->fields.CueSheetCount;
      Instance = SingletonMonoBehaviour_object___get_Instance(v5);
      v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)this, Method_BattleDemoRootComponent__LoadCueSheet_b__28_0__, 0);
      if ( !Instance )
        sub_2213CDC(v8, v9);
      SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)current, v7, 1, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
}


void BattleDemoRootComponent__OnBattleDemoLoadComplete(
        BattleDemoRootComponent_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_597457A & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_597457A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance
    || (BattleSequenceManager__setup((BattleSequenceManager_o *)Instance, 0, 1, 0, 0, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__)) == 0) )
  {
    sub_2213CDC(Instance, v5);
  }
  BattleSequenceManager__SetupDemoActor(
    (BattleSequenceManager_o *)Instance,
    this->fields.PlayerActorList,
    this->fields.EnemyActorList,
    0);
  v7 = BattleDemoRootComponent__WaitToNoblePhantasmPlay(this, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleDemoRootComponent__OnBattleEndScript(BattleDemoRootComponent_o *this, bool isExit, const MethodInfo *method)
{
  Il2CppObject *v3; // x19
  Il2CppClass *klass; // x8
  int32_t name_high; // w20
  int32_t namespaze; // w21
  System_Action_object__o *v7; // x22
  __int64 v8; // x1

  v3 = (Il2CppObject *)this;
  if ( (byte_5974580 & 1) == 0 )
  {
    sub_2213A60(&System_Action_string__TypeInfo);
    sub_2213A60(&Method_BattleDemoRootComponent__OnBattleEndScript_b__47_0__);
    this = (BattleDemoRootComponent_o *)sub_2213A60(&ScriptManager_TypeInfo);
    byte_5974580 = 1;
  }
  klass = v3[14].klass;
  if ( !klass )
    sub_2213CDC(this, isExit);
  name_high = HIDWORD(klass->_1.name);
  namespaze = (int32_t)klass->_1.namespaze;
  v7 = (System_Action_object__o *)sub_2213CCC(System_Action_string__TypeInfo);
  System_Action_object____ctor(v7, v3, Method_BattleDemoRootComponent__OnBattleEndScript_b__47_0__, 0);
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v8);
  ScriptManager__LoadBattleEndGameDemo(name_high, namespaze, 0, (System_Action_string__o *)v7, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleDemoRootComponent__OnBattleStartScript(
        BattleDemoRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_597457E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7263/*"GOTO_BATTLE"*/);
    byte_597457E = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_2213CDC(0, isExit);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_7263/*"GOTO_BATTLE"*/, 0);
}


void BattleDemoRootComponent__OnNoblePhantasmPlayComplete(
        BattleDemoRootComponent_o *this,
        WellFired_USSequencer_o *seq,
        const MethodInfo *method)
{
  struct System_Action_o *BattleDemoCallback; // x8
  void *performance; // x0
  struct UnityEngine_GameObject_array *PlayerActorList; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x23
  UnityEngine_Object_o *v9; // x20
  struct UnityEngine_GameObject_array *EnemyActorList; // x22
  il2cpp_array_size_t v11; // x8
  unsigned __int64 v12; // x23
  UnityEngine_Object_o *v13; // x20
  System_Collections_Generic_List_object__o *loadedAssetArgsList; // x20
  struct BattleDemoRootComponent___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__43_0; // x21
  Il2CppObject *v17; // x22
  struct BattleDemoRootComponent___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x1
  const MethodInfo *v26; // x1
  __int64 v27; // x1
  BattleDemoRootComponent_c *v28; // x0
  float BGM_FADEOUT_TIME; // s8
  __int64 v30; // x1
  __int64 *v31; // x8
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  _BOOL4 battleBefore; // w9
  _BOOL4 isBefore; // w8

  if ( (byte_597457C & 1) == 0 )
  {
    sub_2213A60(&System_Action_ServantAssetArgs__TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&BattleDemoRootComponent_TypeInfo);
    sub_2213A60(&BattleFBXComponent_TypeInfo);
    sub_2213A60(&System_GC_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ServantAssetArgs__ForEach__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&Method_BattleDemoRootComponent___c__OnNoblePhantasmPlayComplete_b__43_0__);
    sub_2213A60(&BattleDemoRootComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_7267/*"GOTO_TERMINAL"*/);
    sub_2213A60(&StringLiteral_7265/*"GOTO_BATTLESTARTTALK"*/);
    sub_2213A60(&StringLiteral_7264/*"GOTO_BATTLENDTALK"*/);
    sub_2213A60(&StringLiteral_3208/*"Battle/Common"*/);
    sub_2213A60(&StringLiteral_5640/*"END_DEMO"*/);
    byte_597457C = 1;
  }
  BattleDemoCallback = this->fields.BattleDemoCallback;
  if ( BattleDemoCallback )
  {
    if ( *(&BattleFBXComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      BattleFBXComponent_TypeInfo->static_fields->EnableEvent = 1;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo, seq);
      BattleDemoCallback = this->fields.BattleDemoCallback;
      BattleFBXComponent_TypeInfo->static_fields->EnableEvent = 1;
      if ( !BattleDemoCallback )
        goto LABEL_69;
    }
    ((void (__fastcall *)(intptr_t, intptr_t, const MethodInfo *))BattleDemoCallback->fields.invoke_impl)(
      BattleDemoCallback->fields.method_code,
      BattleDemoCallback->fields.method,
      method);
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_69;
  BattlePerformance__setupCameraFov((BattlePerformance_o *)performance, this->fields.backupFov, 0);
  PlayerActorList = this->fields.PlayerActorList;
  if ( !PlayerActorList )
    goto LABEL_69;
  max_length = PlayerActorList->max_length;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    while ( v8 < (unsigned int)max_length )
    {
      v9 = (UnityEngine_Object_o *)PlayerActorList->m_Items[v8];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, seq);
      performance = (void *)UnityEngine_Object__op_Inequality(v9, 0, 0);
      if ( ((unsigned __int8)performance & 1) != 0 )
      {
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, seq);
        UnityEngine_Object__Destroy_83459800(v9, 0);
      }
      LODWORD(max_length) = PlayerActorList->max_length;
      if ( (__int64)++v8 >= (int)max_length )
        goto LABEL_20;
    }
LABEL_68:
    sub_2213CE4(performance);
  }
LABEL_20:
  EnemyActorList = this->fields.EnemyActorList;
  if ( !EnemyActorList )
    goto LABEL_69;
  v11 = EnemyActorList->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0;
    while ( v12 < (unsigned int)v11 )
    {
      v13 = (UnityEngine_Object_o *)EnemyActorList->m_Items[v12];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, seq);
      performance = (void *)UnityEngine_Object__op_Inequality(v13, 0, 0);
      if ( ((unsigned __int8)performance & 1) != 0 )
      {
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, seq);
        UnityEngine_Object__Destroy_83459800(v13, 0);
      }
      LODWORD(v11) = EnemyActorList->max_length;
      if ( (__int64)++v12 >= (int)v11 )
        goto LABEL_31;
    }
    goto LABEL_68;
  }
LABEL_31:
  loadedAssetArgsList = (System_Collections_Generic_List_object__o *)this->fields.loadedAssetArgsList;
  performance = BattleDemoRootComponent___c_TypeInfo;
  if ( !*(&BattleDemoRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleDemoRootComponent___c_TypeInfo, seq);
    performance = BattleDemoRootComponent___c_TypeInfo;
  }
  static_fields = (struct BattleDemoRootComponent___c_StaticFields *)*((_QWORD *)performance + 23);
  _9__43_0 = (System_Action_object__o *)static_fields->__9__43_0;
  if ( !_9__43_0 )
  {
    if ( !*((_DWORD *)performance + 57) )
    {
      j_il2cpp_runtime_class_init_0(performance, seq);
      static_fields = BattleDemoRootComponent___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__43_0 = (System_Action_object__o *)sub_2213CCC(System_Action_ServantAssetArgs__TypeInfo);
    System_Action_object____ctor(
      _9__43_0,
      v17,
      Method_BattleDemoRootComponent___c__OnNoblePhantasmPlayComplete_b__43_0__,
      0);
    v18 = BattleDemoRootComponent___c_TypeInfo->static_fields;
    v18->__9__43_0 = (struct System_Action_ServantAssetArgs__o *)_9__43_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->__9__43_0, (int32_t)_9__43_0, v19, v20, v21, v22, v23, v24);
  }
  if ( !loadedAssetArgsList )
    goto LABEL_69;
  System_Collections_Generic_List_object___ForEach(
    loadedAssetArgsList,
    (System_Action_T__o *)_9__43_0,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_ServantAssetArgs__ForEach__);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v25);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_3208/*"Battle/Common"*/, 0);
  performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !performance )
    goto LABEL_69;
  ServantAssetLoadManager__releaseNoblePhantasm((ServantAssetLoadManager_o *)performance, 0);
  BattleDemoRootComponent__ReleaseCueSheet(this, v26);
  v28 = BattleDemoRootComponent_TypeInfo;
  if ( !*(&BattleDemoRootComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleDemoRootComponent_TypeInfo, v27);
    v28 = BattleDemoRootComponent_TypeInfo;
  }
  BGM_FADEOUT_TIME = v28->static_fields->BGM_FADEOUT_TIME;
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v27);
  SoundManager__fadeoutBgm(BGM_FADEOUT_TIME, 0);
  performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !performance )
    goto LABEL_69;
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)performance, 0, 0);
  if ( !*(&System_GC_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, v30);
  System_GC__Collect(0);
  performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !performance )
LABEL_69:
    sub_2213CDC(performance, seq);
  CommonUI__maskFadeout((CommonUI_o *)performance, 1, 1.0, 0, 0);
  if ( !this->fields.battleSetupInfo )
  {
    performance = this->fields.myFSM;
    if ( !performance )
      goto LABEL_69;
    v31 = &StringLiteral_5640/*"END_DEMO"*/;
LABEL_56:
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)performance, (System_String_o *)*v31, 0);
    return;
  }
  performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !performance )
    goto LABEL_69;
  performance = (void *)AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)performance, 0);
  if ( ((unsigned __int8)performance & 1) != 0 )
  {
    performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( performance )
    {
      AvalonSceneManager__popSceneRefresh(
        (AvalonSceneManager_o *)performance,
        1,
        (Il2CppObject *)this->fields.battleSetupInfo,
        0);
      return;
    }
    goto LABEL_69;
  }
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_69;
  battleBefore = battleSetupInfo->fields.battleBefore;
  isBefore = battleSetupInfo->fields.isBefore;
  if ( !battleBefore )
  {
    performance = this->fields.myFSM;
    if ( isBefore )
    {
      if ( !performance )
        goto LABEL_69;
      v31 = &StringLiteral_7264/*"GOTO_BATTLENDTALK"*/;
    }
    else
    {
      if ( !performance )
        goto LABEL_69;
      v31 = &StringLiteral_7267/*"GOTO_TERMINAL"*/;
    }
    goto LABEL_56;
  }
  if ( !isBefore )
  {
    performance = this->fields.myFSM;
    if ( !performance )
      goto LABEL_69;
    v31 = &StringLiteral_7265/*"GOTO_BATTLESTARTTALK"*/;
    goto LABEL_56;
  }
}


void BattleDemoRootComponent__ReleaseBattleDemo(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void BattleDemoRootComponent__ReleaseCueSheet(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x0
  MissionNaviTransitionBoardItem_o *p_CueSheetList; // x19
  struct System_Collections_Generic_List_string__o *CueSheetList; // t1
  Il2CppObject *current; // x20
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v16; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5974572 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_5974572 = 1;
  }
  CueSheetList = this->fields.CueSheetList;
  p_CueSheetList = (MissionNaviTransitionBoardItem_o *)&this->fields.CueSheetList;
  v3 = (System_Collections_Generic_List_object__o *)CueSheetList;
  memset(&v17, 0, sizeof(v17));
  if ( CueSheetList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      v3,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v15 = 0;
    v16 = &v17;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v17.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !Instance )
        sub_2213CDC(0, v8);
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    p_CueSheetList->klass = 0;
    sub_2213A04(p_CueSheetList, 0, v9, v10, v11, v12, v13, v14);
  }
}


bool BattleDemoRootComponent__RequestBattleSetup(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  BattleSetupInfo_o *battleSetupInfo; // x0

  battleSetupInfo = this->fields.battleSetupInfo;
  if ( battleSetupInfo )
    BattleScriptRootComponent__GoForBattle(battleSetupInfo, method);
  return 1;
}


System_Collections_IEnumerator_o *BattleDemoRootComponent__SetupBattleDemo(
        BattleDemoRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5974573 & 1) == 0 )
  {
    sub_2213A60(&BattleDemoRootComponent__SetupBattleDemo_d__30_TypeInfo);
    byte_5974573 = 1;
  }
  v3 = sub_2213CCC(BattleDemoRootComponent__SetupBattleDemo_d__30_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


bool BattleDemoRootComponent__StartBattle(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_5974583 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_5974583 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 10, 1, 0, 0, 0);
  return 1;
}


void BattleDemoRootComponent__StartDemo(
        BattleDemoRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleActorControl_o *Component_object; // x0
  __int64 v11; // x1
  struct UnityEngine_GameObject_array *PlayerActorList; // x8
  UnityEngine_GameObject_o *v13; // x21
  BattleActorControl_o *v14; // x20
  __int64 v15; // x1
  BattleFBXComponent_c *v16; // x0
  struct BattleFBXComponent_StaticFields *static_fields; // x8
  const MethodInfo_47A29F8 *v18; // x0
  struct BattlePerformanceBg_o *perfBg; // x8
  BattleSequenceManager_o *v20; // x21
  int32_t DemoSequenceServantId; // w22
  struct BattleServantData_o *battleSvtData; // x8
  int32_t v23; // w20
  int32_t treasuredvcLevel; // w23
  BattleSequenceManager_onGameObjectLoadComplete_o *v25; // x24

  if ( (byte_5974579 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleDemoRootComponent_OnBattleDemoLoadComplete__);
    sub_2213A60(&BattleFBXComponent_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_2213A60(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_2213A60(&StringLiteral_9726/*"NPACTOR"*/);
    sub_2213A60(&BattleSequenceManager_onGameObjectLoadComplete_TypeInfo);
    byte_5974579 = 1;
  }
  this->fields.BattleDemoCallback = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.BattleDemoCallback,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  PlayerActorList = this->fields.PlayerActorList;
  if ( !PlayerActorList )
    goto LABEL_18;
  if ( !LODWORD(PlayerActorList->max_length) )
    sub_2213CE4(Component_object);
  v13 = PlayerActorList->m_Items[0];
  if ( !v13 )
    goto LABEL_18;
  Component_object = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                               PlayerActorList->m_Items[0],
                                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !this->fields.FieldMotion )
    goto LABEL_18;
  v14 = Component_object;
  Component_object = (BattleActorControl_o *)PlayMakerFSM__get_Fsm(this->fields.FieldMotion, 0);
  if ( !Component_object )
    goto LABEL_18;
  Component_object = *(BattleActorControl_o **)&Component_object->fields.currentSpShadowEffectId;
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                               (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                               (System_String_o *)StringLiteral_9726/*"NPACTOR"*/,
                                               0);
  if ( !Component_object )
    goto LABEL_18;
  HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Component_object, v13, 0);
  v16 = BattleFBXComponent_TypeInfo;
  if ( !*(&BattleFBXComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo, v15);
    v16 = BattleFBXComponent_TypeInfo;
  }
  static_fields = v16->static_fields;
  v18 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__;
  static_fields->EnableEvent = 0;
  Component_object = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance(v18);
  perfBg = this->fields.perfBg;
  if ( !perfBg )
    goto LABEL_18;
  if ( !Component_object )
    goto LABEL_18;
  BattleSequenceManager__init(
    (BattleSequenceManager_o *)Component_object,
    this->fields.performance,
    v13,
    this->fields.PlayerActorList,
    this->fields.EnemyActorList,
    this->fields.actorCamera,
    perfBg->fields.bgobject,
    0);
  Component_object = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v14 )
    goto LABEL_18;
  v20 = (BattleSequenceManager_o *)Component_object;
  DemoSequenceServantId = this->fields.DemoSequenceServantId;
  Component_object = (BattleActorControl_o *)BattleActorControl__getLimitCount(v14, 0);
  battleSvtData = v14->fields.battleSvtData;
  if ( !battleSvtData
    || (v23 = (int)Component_object,
        treasuredvcLevel = battleSvtData->fields.treasuredvcLevel,
        v25 = (BattleSequenceManager_onGameObjectLoadComplete_o *)sub_2213CCC(BattleSequenceManager_onGameObjectLoadComplete_TypeInfo),
        BattleSequenceManager_onGameObjectLoadComplete___ctor(
          v25,
          (Il2CppObject *)this,
          Method_BattleDemoRootComponent_OnBattleDemoLoadComplete__,
          0),
        !v20) )
  {
LABEL_18:
    sub_2213CDC(Component_object, v11);
  }
  BattleSequenceManager__loadSequence(
    v20,
    DemoSequenceServantId,
    DemoSequenceServantId,
    v23,
    0,
    treasuredvcLevel,
    1,
    v25,
    0);
}


System_Collections_IEnumerator_o *BattleDemoRootComponent__WaitToNoblePhantasmPlay(
        BattleDemoRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_597457B & 1) == 0 )
  {
    sub_2213A60(&BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_TypeInfo);
    byte_597457B = 1;
  }
  v3 = sub_2213CCC(BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void BattleDemoRootComponent___LoadCueSheet_b__28_0(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  --this->fields.CueSheetCount;
}


void BattleDemoRootComponent___OnBattleEndScript_b__47_0(
        BattleDemoRootComponent_o *this,
        System_String_o *demoInfo,
        const MethodInfo *method)
{
  System_String_o *v3; // x20
  CommonUI_o *Instance; // x0

  v3 = demoInfo;
  if ( (byte_5974587 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_7267/*"GOTO_TERMINAL"*/);
    byte_5974587 = 1;
  }
  if ( v3 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 1, 0);
      demoInfo = (System_String_o *)this->fields.battleSetupInfo;
      if ( demoInfo )
      {
        BYTE1(demoInfo[4].klass) = 0;
        ((void (__fastcall *)(BattleDemoRootComponent_o *))this->klass->vtable._5_beginStartUp.methodPtr)(this);
        return;
      }
    }
LABEL_9:
    sub_2213CDC(Instance, demoInfo);
  }
  Instance = (CommonUI_o *)this->fields.myFSM;
  if ( !Instance )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_7267/*"GOTO_TERMINAL"*/, 0);
}


void BattleDemoRootComponent___SetupBattleDemo_b__30_0(
        BattleDemoRootComponent_o *this,
        AssetData_o *aData,
        const MethodInfo *method)
{
  __int64 performance; // x0
  struct BattlePerformance_o *v6; // x8
  struct BattleFieldMotionComponent_array *fieldmotion; // x8
  struct PlayMakerFSM_o *Fsm; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  UnityEngine_Transform_o *v15; // x21
  UnityEngine_GameObject_o *cameraObject; // x22
  Il2CppObject *Object_object__58532980; // x0
  struct UnityEngine_GameObject_o *ObjectIfNotExist; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  UnityEngine_Transform_o *v25; // x20
  struct BattlePerformance_o *v26; // x20
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct BattlePerformance_o *v33; // x20
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  __int64 v46; // x8
  __int64 v47; // x1
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  __int64 v54; // x8
  __int64 v55; // x1
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  struct BattlePerformance_o *v62; // x8
  struct BattleActionCamera_o *actioncamera; // x9
  struct UnityEngine_Camera_o *frontcamera; // x1
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  struct BattlePerformance_o *v71; // x8
  struct BattleActionCamera_o *v72; // x8
  struct UnityEngine_Camera_o *actorcamera; // x1
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  struct BattlePerformance_o *v80; // x8
  struct PlayMakerFSM_o *camerafsm; // x1
  struct PlayMakerFSM_o **p_CameraFsm; // x19
  __int64 v83; // x8
  __int64 v84; // x19
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7

  if ( (byte_5974585 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleActionCamera___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_2213A60(&StringLiteral_11927/*"RootCameraPrefab"*/);
    byte_5974585 = 1;
  }
  performance = (__int64)this->fields.performance;
  if ( !performance )
    goto LABEL_34;
  BattlePerformance__loadStorageObjectCommonMotion((BattlePerformance_o *)performance, aData, 0);
  performance = (__int64)this->fields.performance;
  if ( !performance )
    goto LABEL_34;
  BattlePerformance__loadFieldMotion((BattlePerformance_o *)performance, aData, 0, 0);
  v6 = this->fields.performance;
  if ( !v6 )
    goto LABEL_34;
  fieldmotion = v6->fields.fieldmotion;
  if ( !fieldmotion )
    goto LABEL_34;
  if ( !LODWORD(fieldmotion->max_length) )
    sub_2213CE4(performance);
  performance = (__int64)fieldmotion->m_Items[0];
  if ( !performance )
    goto LABEL_34;
  Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)performance, 0);
  this->fields.FieldMotion = Fsm;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.FieldMotion, (int32_t)Fsm, v9, v10, v11, v12, v13, v14);
  performance = (__int64)this->fields.GroundObject;
  if ( !performance )
    goto LABEL_34;
  performance = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)performance, 0);
  if ( !performance )
    goto LABEL_34;
  performance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)performance, 0);
  if ( !aData )
    goto LABEL_34;
  v15 = (UnityEngine_Transform_o *)performance;
  cameraObject = this->fields.cameraObject;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              aData,
                              (System_String_o *)StringLiteral_11927/*"RootCameraPrefab"*/,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  ObjectIfNotExist = BaseMonoBehaviour__createObjectIfNotExist(
                       (BaseMonoBehaviour_o *)this,
                       cameraObject,
                       (UnityEngine_GameObject_o *)Object_object__58532980,
                       v15,
                       0,
                       0);
  this->fields.cameraObject = ObjectIfNotExist;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cameraObject,
    (int32_t)ObjectIfNotExist,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  performance = (__int64)this->fields.cameraObject;
  if ( !performance )
    goto LABEL_34;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)performance, (System_String_o *)StringLiteral_11927/*"RootCameraPrefab"*/, 0);
  performance = (__int64)this->fields.cameraObject;
  if ( !performance )
    goto LABEL_34;
  performance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)performance, 0);
  v25 = (UnityEngine_Transform_o *)performance;
  if ( !byte_5969AE0 )
  {
    performance = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v25 )
    goto LABEL_34;
  UnityEngine_Transform__set_eulerAngles(v25, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  performance = (__int64)this->fields.cameraObject;
  if ( !performance )
    goto LABEL_34;
  v26 = this->fields.performance;
  performance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)performance,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v26 )
    goto LABEL_34;
  v26->fields.camerafsm = (struct PlayMakerFSM_o *)performance;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->fields.camerafsm, performance, v27, v28, v29, v30, v31, v32);
  performance = (__int64)this->fields.cameraObject;
  if ( !performance )
    goto LABEL_34;
  v33 = this->fields.performance;
  performance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)performance,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActionCamera___);
  if ( !v33 )
    goto LABEL_34;
  v33->fields.actioncamera = (struct BattleActionCamera_o *)performance;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->fields.actioncamera, performance, v34, v35, v36, v37, v38, v39);
  performance = (__int64)this->fields.performance;
  if ( !performance )
    goto LABEL_34;
  v46 = *(_QWORD *)(performance + 408);
  if ( !v46 )
    goto LABEL_34;
  v47 = *(_QWORD *)(v46 + 72);
  *(_QWORD *)(performance + 152) = v47;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(performance + 152), v47, v40, v41, v42, v43, v44, v45);
  performance = (__int64)this->fields.performance;
  if ( !performance )
    goto LABEL_34;
  v54 = *(_QWORD *)(performance + 408);
  if ( !v54 )
    goto LABEL_34;
  v55 = *(_QWORD *)(v54 + 88);
  *(_QWORD *)(performance + 168) = v55;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(performance + 168), v55, v48, v49, v50, v51, v52, v53);
  v62 = this->fields.performance;
  if ( !v62 )
    goto LABEL_34;
  actioncamera = v62->fields.actioncamera;
  if ( !actioncamera )
    goto LABEL_34;
  frontcamera = actioncamera->fields.frontcamera;
  v62->fields.cutIncamera = frontcamera;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v62->fields.cutIncamera,
    (int32_t)frontcamera,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  v71 = this->fields.performance;
  if ( !v71 )
    goto LABEL_34;
  v72 = v71->fields.actioncamera;
  if ( !v72 )
    goto LABEL_34;
  actorcamera = v72->fields.actorcamera;
  this->fields.actorCamera = actorcamera;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.actorCamera,
    (int32_t)actorcamera,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  v80 = this->fields.performance;
  if ( !v80 )
    goto LABEL_34;
  camerafsm = v80->fields.camerafsm;
  this->fields.CameraFsm = camerafsm;
  p_CameraFsm = &this->fields.CameraFsm;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_CameraFsm, (int32_t)camerafsm, v74, v75, v76, v77, v78, v79);
  v83 = (__int64)*(p_CameraFsm - 7);
  if ( !v83
    || (performance = *(_QWORD *)(v83 + 168)) == 0
    || (v84 = (__int64)*(p_CameraFsm - 4),
        performance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)performance, 0),
        !v84) )
  {
LABEL_34:
    sub_2213CDC(performance, aData);
  }
  *(_QWORD *)(v84 + 40) = performance;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v84 + 40), performance, v85, v86, v87, v88, v89, v90);
}


void BattleDemoRootComponent___beginStartUp_b__36_0(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct BattleDemoRootComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__36_1; // x20
  Il2CppObject *v8; // x21
  struct BattleDemoRootComponent___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5974586 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_BattleDemoRootComponent___c__beginStartUp_b__36_1__);
    sub_2213A60(&BattleDemoRootComponent___c_TypeInfo);
    byte_5974586 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0);
  Instance = BattleDemoRootComponent___c_TypeInfo;
  if ( !*(&BattleDemoRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleDemoRootComponent___c_TypeInfo, v4);
    Instance = BattleDemoRootComponent___c_TypeInfo;
  }
  static_fields = (struct BattleDemoRootComponent___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__36_1 = static_fields->__9__36_1;
  if ( !_9__36_1 )
  {
    if ( !*((_DWORD *)Instance + 57) )
    {
      j_il2cpp_runtime_class_init_0(Instance, v4);
      static_fields = BattleDemoRootComponent___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__36_1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__36_1, v8, Method_BattleDemoRootComponent___c__beginStartUp_b__36_1__, 0);
    v9 = BattleDemoRootComponent___c_TypeInfo->static_fields;
    v9->__9__36_1 = _9__36_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__36_1, (int32_t)_9__36_1, v10, v11, v12, v13, v14, v15);
  }
  if ( !this )
LABEL_12:
    sub_2213CDC(Instance, v4);
  BattleDemoRootComponent__StartDemo(this, _9__36_1, v5);
}


void BattleDemoRootComponent__beginFinish(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void BattleDemoRootComponent__beginInitialize(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5974577 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_5974577 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__maskFadeout((CommonUI_o *)Instance, 1, 0.0, 0, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_2213CDC(Instance, v4);
  }
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void BattleDemoRootComponent__beginStartUp(
        BattleDemoRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  Il2CppClass *v10; // x1
  __int64 naturalAligment; // x8
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x3
  struct BattleSetupInfo_o **p_battleSetupInfo; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_5974578 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleDemoRootComponent__beginStartUp_b__36_0__);
    sub_2213A60(&BattleSetupInfo_TypeInfo);
    byte_5974578 = 1;
  }
  if ( data )
  {
    v10 = (Il2CppClass *)BattleSetupInfo_TypeInfo;
    naturalAligment = BattleSetupInfo_TypeInfo->_2.naturalAligment;
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == BattleSetupInfo_TypeInfo )
    {
      this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)data;
      p_battleSetupInfo = &this->fields.battleSetupInfo;
      if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && data->klass->_2.typeHierarchy[naturalAligment - 1] == v10 )
      {
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.battleSetupInfo,
          (int32_t)data,
          (System_String_o *)method,
          v3,
          v4,
          v5,
          v6,
          v7);
        if ( *p_battleSetupInfo )
        {
          data = (Il2CppObject *)(*p_battleSetupInfo)->fields.demoInfo;
          goto LABEL_7;
        }
      }
      else
      {
        sub_221405C(data, v10, method);
      }
      sub_2213CDC(v15, v16);
    }
    data = 0;
  }
LABEL_7:
  v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_BattleDemoRootComponent__beginStartUp_b__36_0__, 0);
  BattleDemoRootComponent__InitializeBattleDemo(this, (System_String_o *)data, v12, v13);
}


void BattleDemoRootComponent__SetupBattleDemo_d__30___ctor(
        BattleDemoRootComponent__SetupBattleDemo_d__30_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleDemoRootComponent__SetupBattleDemo_d__30__MoveNext(
        BattleDemoRootComponent__SetupBattleDemo_d__30_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  struct BattleDemoRootComponent_o *_4__this; // x20
  BattlePerformance_o *IsBusy; // x0
  struct System_Action_o *InitializeCallback; // x8
  AssetLoader_LoadEndDataHandler_o *v13; // x21
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  Il2CppObject **p__2__current; // x19
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x2
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  Il2CppObject **v30; // x19
  int v31; // w8
  __int64 v32; // x1
  System_String_o *BgmName; // x20
  UnityEngine_WaitForSeconds_o *v34; // x20
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7

  if ( (byte_597458A & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_BattleDemoRootComponent__SetupBattleDemo_b__30_0__);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_2213A60(&StringLiteral_3208/*"Battle/Common"*/);
    sub_2213A60(&StringLiteral_11574/*"RESET_CAMERA_NOBLEEND"*/);
    byte_597458A = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  IsBusy = 0;
  if ( _1__state <= 1 )
  {
    if ( _1__state )
    {
      if ( _1__state != 1 )
        return (char)IsBusy;
      this->fields.__1__state = -1;
    }
    else
    {
      this->fields.__1__state = -1;
      v13 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v13,
        (Il2CppObject *)_4__this,
        Method_BattleDemoRootComponent__SetupBattleDemo_b__30_0__,
        0);
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v14);
      AssetManager__loadAssetStorage((System_String_o *)StringLiteral_3208/*"Battle/Common"*/, v13, 1, 0, 0);
    }
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    IsBusy = (BattlePerformance_o *)AssetManager__LoadIsBusy(0);
    if ( ((unsigned __int8)IsBusy & 1) != 0 )
    {
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v15, v16, v17, v18, v19, v20);
      *((_DWORD *)p__2__current - 2) = 1;
      LOBYTE(IsBusy) = 1;
      return (char)IsBusy;
    }
    if ( !_4__this || (IsBusy = _4__this->fields.performance) == 0 )
LABEL_41:
      sub_2213CDC(IsBusy, method);
    BattlePerformance__ForceLoadBg(IsBusy, _4__this->fields.BgId, _4__this->fields.BgType, 0);
    BattleDemoRootComponent__LoadBattleChrs(_4__this, _4__this->fields.PlayerList, v22);
    BattleDemoRootComponent__LoadBattleChrs(_4__this, _4__this->fields.EnemyList, v23);
    goto LABEL_27;
  }
  if ( _1__state == 2 )
  {
    this->fields.__1__state = -1;
LABEL_27:
    if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, method);
    IsBusy = (BattlePerformance_o *)ServantAssetLoadManager__checkLoad(0);
    if ( ((unsigned __int8)IsBusy & 1) != 0 )
    {
      this->fields.__2__current = 0;
      v30 = &this->fields.__2__current;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)v30, 0, v24, v25, v26, v27, v28, v29);
      v31 = 2;
      goto LABEL_39;
    }
    if ( !_4__this )
      goto LABEL_41;
    BattleDemoRootComponent__LoadCueSheet(_4__this, method);
LABEL_33:
    if ( _4__this->fields.CueSheetCount )
    {
      this->fields.__2__current = 0;
      v30 = &this->fields.__2__current;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)v30, 0, v2, v3, v4, v5, v6, v7);
      v31 = 3;
    }
    else
    {
      BattleDemoRootComponent__CreateActors(_4__this, method);
      IsBusy = (BattlePerformance_o *)_4__this->fields.CameraFsm;
      if ( !IsBusy )
        goto LABEL_41;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)IsBusy, (System_String_o *)StringLiteral_11574/*"RESET_CAMERA_NOBLEEND"*/, 0);
      BgmName = _4__this->fields.BgmName;
      if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v32);
      SoundManager__playBgm(BgmName, 0);
      v34 = (UnityEngine_WaitForSeconds_o *)sub_2213CCC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v34, 1.0, 0);
      this->fields.__2__current = (Il2CppObject *)v34;
      v30 = &this->fields.__2__current;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)v30, (int32_t)v34, v35, v36, v37, v38, v39, v40);
      v31 = 4;
    }
LABEL_39:
    *((_DWORD *)v30 - 2) = v31;
    LOBYTE(IsBusy) = 1;
    return (char)IsBusy;
  }
  if ( _1__state == 3 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_41;
    goto LABEL_33;
  }
  if ( _1__state != 4 )
    return (char)IsBusy;
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_41;
  InitializeCallback = _4__this->fields.InitializeCallback;
  if ( InitializeCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))InitializeCallback->fields.invoke_impl)(
      InitializeCallback->fields.method_code,
      InitializeCallback->fields.method);
  LOBYTE(IsBusy) = 0;
  return (char)IsBusy;
}


Il2CppObject *BattleDemoRootComponent__SetupBattleDemo_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleDemoRootComponent__SetupBattleDemo_d__30_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleDemoRootComponent__SetupBattleDemo_d__30__System_Collections_IEnumerator_Reset(
        BattleDemoRootComponent__SetupBattleDemo_d__30_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattleDemoRootComponent__SetupBattleDemo_d__30_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BattleDemoRootComponent__SetupBattleDemo_d__30__System_Collections_IEnumerator_get_Current(
        BattleDemoRootComponent__SetupBattleDemo_d__30_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleDemoRootComponent__SetupBattleDemo_d__30__System_IDisposable_Dispose(
        BattleDemoRootComponent__SetupBattleDemo_d__30_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42___ctor(
        BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42__MoveNext(
        BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *this,
        const MethodInfo *method)
{
  BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *v2; // x20
  int32_t _1__state; // w22
  struct BattleDemoRootComponent_o *_4__this; // x19
  struct BattlePerformance_o *performance; // x20
  BattlePerformance_c *v6; // x0
  struct BattlePerformance_o *v7; // x8
  BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *v8; // x20
  Il2CppObject *Instance; // x20
  System_Action_object__o *v10; // x21
  UnityEngine_WaitForEndOfFrame_o *v11; // x19
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  v2 = this;
  if ( (byte_597458B & 1) == 0 )
  {
    sub_2213A60(&System_Action_USSequencer__TypeInfo);
    sub_2213A60(&Method_BattleDemoRootComponent_OnNoblePhantasmPlayComplete__);
    sub_2213A60(&BattlePerformance_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)sub_2213A60(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_597458B = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      _4__this = v2->fields.__4__this;
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_20;
      this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_20;
      BattlePerformance__FlipAll((BattlePerformance_o *)this, 0, 0);
      performance = _4__this->fields.performance;
      if ( !performance )
        goto LABEL_20;
      v6 = BattlePerformance_TypeInfo;
      _4__this->fields.backupFov = performance->fields.currentFov;
      if ( !*(&v6->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v6, method);
        v6 = BattlePerformance_TypeInfo;
      }
      BattlePerformance__setupCameraFov(performance, v6->static_fields->DefaultFov, 0);
      v7 = _4__this->fields.performance;
      if ( !v7 )
        goto LABEL_20;
      this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)v7->fields.actorcamera;
      if ( !this )
        goto LABEL_20;
      this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)UnityEngine_Component__get_transform(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0);
      v8 = this;
      if ( !byte_5969AE0 )
      {
        this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      if ( !v8
        || (UnityEngine_Transform__set_localEulerAngles(
              (UnityEngine_Transform_o *)v8,
              UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
              0),
            (this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
        || (CommonUI__maskFadein((CommonUI_o *)this, 1.0, 0, 0),
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__),
            v10 = (System_Action_object__o *)sub_2213CCC(System_Action_USSequencer__TypeInfo),
            System_Action_object____ctor(
              v10,
              (Il2CppObject *)_4__this,
              Method_BattleDemoRootComponent_OnNoblePhantasmPlayComplete__,
              0),
            !Instance) )
      {
LABEL_20:
        sub_2213CDC(this, method);
      }
      BattleSequenceManager__play((BattleSequenceManager_o *)Instance, 0, 1, (System_Action_USSequencer__o *)v10, 0);
    }
  }
  else
  {
    v2->fields.__1__state = -1;
    v11 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v11, 0);
    v2->fields.__2__current = (Il2CppObject *)v11;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current,
      (int32_t)v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    v2->fields.__1__state = 1;
  }
  return _1__state == 0;
}


Il2CppObject *BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42__System_Collections_IEnumerator_Reset(
        BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42__System_Collections_IEnumerator_get_Current(
        BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42__System_IDisposable_Dispose(
        BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleDemoRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5974588 & 1) == 0 )
  {
    sub_2213A60(&BattleDemoRootComponent___c_TypeInfo);
    byte_5974588 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleDemoRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleDemoRootComponent___c_TypeInfo->static_fields->__9 = (struct BattleDemoRootComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleDemoRootComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleDemoRootComponent___c___ctor(BattleDemoRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleDemoRootComponent___c___OnNoblePhantasmPlayComplete_b__43_0(
        BattleDemoRootComponent___c_o *this,
        ServantAssetArgs_o *args,
        const MethodInfo *method)
{
  if ( (byte_5974589 & 1) == 0 )
  {
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    byte_5974589 = 1;
  }
  if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, args);
  ServantAssetLoadManager__UnloadAssetsByArgs(args, 0, 0);
}


void BattleDemoRootComponent___c___beginStartUp_b__36_1(BattleDemoRootComponent___c_o *this, const MethodInfo *method)
{
  ;
}