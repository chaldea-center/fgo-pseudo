void __fastcall BattleDemoRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B05794 & 1) == 0 )
  {
    sub_1BC3008(&BattleDemoRootComponent_TypeInfo, v1);
    byte_4B05794 = 1;
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
  const MethodInfo *v34; // x3
  int32_t v35; // w27
  UnityEngine_GameObject_o *v36; // x28
  Il2CppClass **v37; // x0
  UnityEngine_Transform_o *v38; // x21
  UnityEngine_Transform_o *v39; // x21
  UnityEngine_Transform_o *v40; // x21
  UnityEngine_Transform_o *v41; // x21
  BattleFieldMotionComponent_o *v42; // x20
  System_String_array *v43; // x25
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct BattlePerformance_o *performance; // x1
  BattleActorControl_o *v47; // x28
  BattleServantData_o *v48; // x22
  System_Collections_Generic_Dictionary_object__int__o *v49; // x21
  UnityEngine_GameObject_o *v50; // x19
  struct BattlePerformance_o *v51; // x8
  UnityEngine_Transform_o *PlayerPopTr; // x0
  UnityEngine_GameObject_o *v53; // x19
  struct BattlePerformance_o *v54; // x8
  UnityEngine_Component_o *v55; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_array *v57; // [xsp+8h] [xbp-88h]
  System_String_o **m_Items; // [xsp+18h] [xbp-78h]
  int32_t v61; // [xsp+20h] [xbp-70h]
  BattleDemoRootComponent_o *v62; // [xsp+28h] [xbp-68h]

  if ( (byte_4B05785 & 1) == 0 )
  {
    sub_1BC3008(&BattleServantData_TypeInfo, *(_QWORD *)&uniqueIdStart);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v10);
    sub_1BC3008(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v11);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v12);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BattleFieldMotionComponent___, v13);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v15);
    sub_1BC3008(&StringLiteral_21020/*"limitCount"*/, v16);
    sub_1BC3008(&StringLiteral_23631/*"svtId"*/, v17);
    sub_1BC3008(&StringLiteral_20550/*"index"*/, v18);
    sub_1BC3008(&StringLiteral_24348/*"userSvtId"*/, v19);
    sub_1BC3008(&StringLiteral_24071/*"uniqueId"*/, v20);
    sub_1BC3008(&StringLiteral_16042/*"_ENEMY"*/, v21);
    sub_1BC3008(&StringLiteral_16151/*"_PLAYER"*/, v22);
    byte_4B05785 = 1;
  }
  FieldMotion = (__int64)this->fields.FieldMotion;
  if ( !FieldMotion
    || (FieldMotion = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)FieldMotion, 0LL)) == 0
    || (v62 = this,
        FieldMotion = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)FieldMotion,
                                 (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BattleFieldMotionComponent___),
        !chrInfos) )
  {
LABEL_44:
    sub_1BC3264(FieldMotion, *(_QWORD *)&uniqueIdStart);
  }
  v25 = *(_QWORD *)&chrInfos->max_length;
  if ( (int)v25 >= 1 )
  {
    m_Items = chrInfos->m_Items;
    v26 = uniqueIdStart;
    v27 = (BattleFieldMotionComponent_o *)FieldMotion;
    v28 = 0LL;
    v57 = actors;
    do
    {
      if ( v28 >= (unsigned int)v25 )
LABEL_45:
        sub_1BC326C(FieldMotion, *(_QWORD *)&uniqueIdStart, v24);
      v29 = m_Items[v28];
      if ( v29 )
      {
        ServantIdByInfo = (BattleDemoRootComponent_o *)BattleDemoRootComponent__GetServantIdByInfo(
                                                         (BattleDemoRootComponent_o *)FieldMotion,
                                                         m_Items[v28],
                                                         v24);
        v61 = (int)ServantIdByInfo;
        LimitCountByInfo = BattleDemoRootComponent__GetLimitCountByInfo(ServantIdByInfo, v29, v31);
        actorPrefab = (Il2CppObject *)v62->fields.actorPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        FieldMotion = (__int64)UnityEngine_Object__Instantiate_object_(
                                 actorPrefab,
                                 (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !actors )
          goto LABEL_44;
        v35 = v26 - uniqueIdStart;
        if ( v26 - uniqueIdStart >= actors->max_length )
          goto LABEL_45;
        v36 = (UnityEngine_GameObject_o *)FieldMotion;
        v37 = &actors->obj.klass + v35;
        v37[4] = (Il2CppClass *)v36;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v37 + 4), (int32_t)v36, (int32_t)v24, v34);
        if ( !v36 )
          goto LABEL_44;
        FieldMotion = (__int64)UnityEngine_GameObject__get_transform(v36, 0LL);
        if ( !v62->fields.Field )
          goto LABEL_44;
        v38 = (UnityEngine_Transform_o *)FieldMotion;
        FieldMotion = (__int64)UnityEngine_GameObject__get_transform(v62->fields.Field, 0LL);
        if ( !v38 )
          goto LABEL_44;
        UnityEngine_Transform__set_parent(v38, (UnityEngine_Transform_o *)FieldMotion, 0LL);
        FieldMotion = (__int64)UnityEngine_GameObject__get_transform(v36, 0LL);
        v39 = (UnityEngine_Transform_o *)FieldMotion;
        if ( !byte_4AFBDB1 )
        {
          FieldMotion = sub_1BC3008(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&uniqueIdStart);
          byte_4AFBDB1 = 1;
        }
        if ( !v39 )
          goto LABEL_44;
        UnityEngine_Transform__set_localPosition(v39, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        FieldMotion = (__int64)UnityEngine_GameObject__get_transform(v36, 0LL);
        v40 = (UnityEngine_Transform_o *)FieldMotion;
        if ( !byte_4AFBDB1 )
        {
          FieldMotion = sub_1BC3008(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&uniqueIdStart);
          byte_4AFBDB1 = 1;
        }
        if ( !v40 )
          goto LABEL_44;
        UnityEngine_Transform__set_localEulerAngles(v40, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        FieldMotion = (__int64)UnityEngine_GameObject__get_transform(v36, 0LL);
        v41 = (UnityEngine_Transform_o *)FieldMotion;
        if ( !byte_4AFBDB6 )
        {
          FieldMotion = sub_1BC3008(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&uniqueIdStart);
          byte_4AFBDB6 = 1;
        }
        if ( !v41 )
          goto LABEL_44;
        v42 = v27;
        v43 = chrInfos;
        UnityEngine_Transform__set_localScale(v41, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        FieldMotion = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 v36,
                                 (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !FieldMotion )
          goto LABEL_44;
        performance = v62->fields.performance;
        v47 = (BattleActorControl_o *)FieldMotion;
        *(_QWORD *)(FieldMotion + 160) = performance;
        sub_1BC2FAC((CGThumbnailListItem_o *)(FieldMotion + 160), (int32_t)performance, v44, v45);
        v48 = (BattleServantData_o *)sub_1BC3254(BattleServantData_TypeInfo);
        BattleServantData___ctor(v48, 0LL);
        v49 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1BC3254(System_Collections_Generic_Dictionary_string__int__TypeInfo);
        System_Collections_Generic_Dictionary_object__int____ctor(
          v49,
          (const MethodInfo_3363694 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
        if ( !v49 )
          goto LABEL_44;
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v49,
          (Il2CppObject *)StringLiteral_20550/*"index"*/,
          v26,
          (const MethodInfo_3364034 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v49,
          (Il2CppObject *)StringLiteral_24071/*"uniqueId"*/,
          v26,
          (const MethodInfo_3364034 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v49,
          (Il2CppObject *)StringLiteral_24348/*"userSvtId"*/,
          v26,
          (const MethodInfo_3364034 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v49,
          (Il2CppObject *)StringLiteral_23631/*"svtId"*/,
          v61,
          (const MethodInfo_3364034 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_object__int___set_Item(
          v49,
          (Il2CppObject *)StringLiteral_21020/*"limitCount"*/,
          LimitCountByInfo,
          (const MethodInfo_3364034 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        if ( !v48 )
          goto LABEL_44;
        BattleServantData__SetFakeData(v48, (System_Collections_Generic_Dictionary_string__int__o *)v49, 0LL);
        if ( isPlayer )
        {
          BattleActorControl__setTypePlayer(v47, 0LL);
          BattleActorControl__setServantData(v47, v48, 0LL);
          BattleActorControl__setDirLeft(v47, 0LL);
          FieldMotion = (__int64)v62->fields.actorCamera;
          if ( !FieldMotion )
            goto LABEL_44;
          FieldMotion = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)FieldMotion, 0LL);
          if ( !v62->fields.CameraFsm )
            goto LABEL_44;
          v50 = (UnityEngine_GameObject_o *)FieldMotion;
          chrInfos = v43;
          FieldMotion = (__int64)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)v62->fields.CameraFsm,
                                   0LL);
          v51 = v62->fields.performance;
          if ( !v51 )
            goto LABEL_44;
          v27 = v42;
          BattleActorControl__setMotionListForDemo(
            v47,
            (System_String_o *)StringLiteral_16151/*"_PLAYER"*/,
            v50,
            (UnityEngine_GameObject_o *)FieldMotion,
            v62->fields.CommonMotionPrefab,
            v51->fields._CommonPigMotionPrefab_k__BackingField,
            0LL);
          actors = v57;
          if ( !v27 )
            goto LABEL_44;
          PlayerPopTr = BattleFieldMotionComponent__getPlayerPopTr(v27, v35, 0LL);
        }
        else
        {
          BattleActorControl__setTypeEnemy(v47, 0LL);
          BattleActorControl__setServantData(v47, v48, 0LL);
          BattleActorControl__setDirRight(v47, 0LL);
          FieldMotion = (__int64)v62->fields.actorCamera;
          if ( !FieldMotion )
            goto LABEL_44;
          FieldMotion = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)FieldMotion, 0LL);
          if ( !v62->fields.CameraFsm )
            goto LABEL_44;
          v53 = (UnityEngine_GameObject_o *)FieldMotion;
          chrInfos = v43;
          FieldMotion = (__int64)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)v62->fields.CameraFsm,
                                   0LL);
          v54 = v62->fields.performance;
          if ( !v54 )
            goto LABEL_44;
          v27 = v42;
          BattleActorControl__setMotionListForDemo(
            v47,
            (System_String_o *)StringLiteral_16042/*"_ENEMY"*/,
            v53,
            (UnityEngine_GameObject_o *)FieldMotion,
            v62->fields.CommonMotionPrefab,
            v54->fields._CommonPigMotionPrefab_k__BackingField,
            0LL);
          actors = v57;
          if ( !v27 )
            goto LABEL_44;
          PlayerPopTr = BattleFieldMotionComponent__getEnemyPopPoint(v27, v35, 0LL);
        }
        v55 = (UnityEngine_Component_o *)PlayerPopTr;
        BattleActorControl__setCamera(v47, v62->fields.actorCamera, 0LL);
        if ( !v55 )
          goto LABEL_44;
        gameObject = UnityEngine_Component__get_gameObject(v55, 0LL);
        BattleActorControl__setTargetObject(v47, gameObject, 0LL);
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
  __int64 v11; // x0
  struct UnityEngine_GameObject_array **p_PlayerActorList; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_String_array *EnemyList; // x8
  __int64 v16; // x0
  struct UnityEngine_GameObject_array **p_EnemyActorList; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct BattlePerformance_o *performance; // x8
  struct UnityEngine_GameObject_array *PlayerActorList; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct BattlePerformance_o *v26; // x8
  struct UnityEngine_GameObject_array *EnemyActorList; // x1
  const MethodInfo *v28; // x5
  const MethodInfo *v29; // x5
  struct UnityEngine_GameObject_array *v30; // x8
  unsigned __int64 v31; // x23
  struct System_String_o *BgmName; // x22
  System_String_o *v33; // x0
  __int64 v34; // x2
  struct UnityEngine_GameObject_array *v35; // x8
  struct UnityEngine_GameObject_array *v36; // x8
  unsigned __int64 v37; // x23
  signed __int64 max_length; // x27
  struct System_String_o *v39; // x22
  System_String_o *v40; // x0
  struct UnityEngine_GameObject_array *v41; // x8
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct System_String_array *CameraFsm; // x1
  struct UnityEngine_GameObject_array *v45; // x22
  int v46; // w9
  int v47; // w8
  UnityEngine_Object_o *v48; // x21
  struct UnityEngine_GameObject_array *v49; // x21
  int v50; // w9
  int v51; // w8
  UnityEngine_Object_o *v52; // x20
  int v53; // [xsp+Ch] [xbp-64h] BYREF

  v2 = this;
  if ( (byte_4B05784 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_GameObject___TypeInfo, method);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v3);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v4);
    sub_1BC3008(&StringLiteral_8675/*"MOTION_ENTRY"*/, v5);
    sub_1BC3008(&StringLiteral_5414/*"ENEMY"*/, v6);
    sub_1BC3008(&StringLiteral_3930/*"CameraFsm"*/, v7);
    sub_1BC3008(&StringLiteral_10295/*"PLAYER"*/, v8);
    this = (BattleDemoRootComponent_o *)sub_1BC3008(&StringLiteral_5399/*"END_NP"*/, v9);
    byte_4B05784 = 1;
  }
  v53 = 0;
  PlayerList = v2->fields.PlayerList;
  if ( !PlayerList )
    goto LABEL_55;
  v11 = sub_1BC30B0(UnityEngine_GameObject___TypeInfo, PlayerList->max_length);
  v2->fields.PlayerActorList = (struct UnityEngine_GameObject_array *)v11;
  p_PlayerActorList = &v2->fields.PlayerActorList;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v2->fields.PlayerActorList, v11, v13, v14);
  EnemyList = v2->fields.EnemyList;
  if ( !EnemyList )
    goto LABEL_55;
  v16 = sub_1BC30B0(UnityEngine_GameObject___TypeInfo, EnemyList->max_length);
  v2->fields.EnemyActorList = (struct UnityEngine_GameObject_array *)v16;
  p_EnemyActorList = &v2->fields.EnemyActorList;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v2->fields.EnemyActorList, v16, v18, v19);
  performance = v2->fields.performance;
  if ( !performance )
    goto LABEL_55;
  PlayerActorList = v2->fields.PlayerActorList;
  performance->fields.p_actorlist = PlayerActorList;
  sub_1BC2FAC((CGThumbnailListItem_o *)&performance->fields.p_actorlist, (int32_t)PlayerActorList, v20, v21);
  v26 = v2->fields.performance;
  if ( !v26 )
    goto LABEL_55;
  EnemyActorList = v2->fields.EnemyActorList;
  v26->fields.e_actorlist = EnemyActorList;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v26->fields.e_actorlist, (int32_t)EnemyActorList, v24, v25);
  BattleDemoRootComponent__CreateActorObject(v2, 1, v2->fields.PlayerList, v2->fields.PlayerActorList, 1, v28);
  BattleDemoRootComponent__CreateActorObject(v2, 4, v2->fields.EnemyList, v2->fields.EnemyActorList, 0, v29);
  v30 = v2->fields.PlayerActorList;
  if ( !v30 )
    goto LABEL_55;
  v31 = 0LL;
  while ( (__int64)v31 < (int)v30->max_length )
  {
    this = (BattleDemoRootComponent_o *)v2->fields.FieldMotion;
    if ( this )
    {
      this = (BattleDemoRootComponent_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
      if ( this )
      {
        BgmName = this->fields.BgmName;
        v53 = v31 + 1;
        v33 = System_Int32__ToString((int32_t)&v53, 0LL);
        this = (BattleDemoRootComponent_o *)System_String__Concat_62348648(
                                              (System_String_o *)StringLiteral_10295/*"PLAYER"*/,
                                              v33,
                                              0LL);
        if ( BgmName )
        {
          this = (BattleDemoRootComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                                (HutongGames_PlayMaker_FsmVariables_o *)BgmName,
                                                (System_String_o *)this,
                                                0LL);
          v35 = *p_PlayerActorList;
          if ( *p_PlayerActorList )
          {
            if ( v31 >= v35->max_length )
              goto LABEL_56;
            if ( this )
            {
              HutongGames_PlayMaker_FsmGameObject__set_Value(
                (HutongGames_PlayMaker_FsmGameObject_o *)this,
                v35->m_Items[v31],
                0LL);
              v30 = *p_PlayerActorList;
              ++v31;
              if ( *p_PlayerActorList )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_55;
  }
  v36 = *p_EnemyActorList;
  if ( !*p_EnemyActorList )
    goto LABEL_55;
  v37 = 0LL;
  while ( 1 )
  {
    this = (BattleDemoRootComponent_o *)v2->fields.FieldMotion;
    if ( !this )
      goto LABEL_55;
    max_length = (int)v36->max_length;
    this = (BattleDemoRootComponent_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
    if ( !this )
      goto LABEL_55;
    v39 = this->fields.BgmName;
    if ( (__int64)v37 >= max_length )
      break;
    v53 = v37 + 1;
    v40 = System_Int32__ToString((int32_t)&v53, 0LL);
    this = (BattleDemoRootComponent_o *)System_String__Concat_62348648((System_String_o *)StringLiteral_5414/*"ENEMY"*/, v40, 0LL);
    if ( v39 )
    {
      this = (BattleDemoRootComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                            (HutongGames_PlayMaker_FsmVariables_o *)v39,
                                            (System_String_o *)this,
                                            0LL);
      v41 = *p_EnemyActorList;
      if ( *p_EnemyActorList )
      {
        if ( v37 >= v41->max_length )
          goto LABEL_56;
        if ( this )
        {
          HutongGames_PlayMaker_FsmGameObject__set_Value(
            (HutongGames_PlayMaker_FsmGameObject_o *)this,
            v41->m_Items[v37],
            0LL);
          v36 = *p_EnemyActorList;
          ++v37;
          if ( *p_EnemyActorList )
            continue;
        }
      }
    }
    goto LABEL_55;
  }
  if ( !v39 )
    goto LABEL_55;
  this = (BattleDemoRootComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmObject(
                                        (HutongGames_PlayMaker_FsmVariables_o *)this->fields.BgmName,
                                        (System_String_o *)StringLiteral_3930/*"CameraFsm"*/,
                                        0LL);
  if ( !this )
    goto LABEL_55;
  CameraFsm = (struct System_String_array *)v2->fields.CameraFsm;
  this->fields.PlayerList = CameraFsm;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.PlayerList, (int32_t)CameraFsm, v42, v43);
  v45 = *p_PlayerActorList;
  v53 = 0;
  if ( !v45 )
    goto LABEL_55;
  v46 = v45->max_length;
  if ( v46 >= 1 )
  {
    v47 = 0;
    while ( v47 < (unsigned int)v46 )
    {
      v48 = (UnityEngine_Object_o *)v45->m_Items[v47];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleDemoRootComponent_o *)UnityEngine_Object__op_Equality(v48, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v48 )
          goto LABEL_55;
        this = (BattleDemoRootComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)v48,
                                              (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !this )
          goto LABEL_55;
        BattleActorControl__playMotion((BattleActorControl_o *)this, (System_String_o *)StringLiteral_8675/*"MOTION_ENTRY"*/, 0LL);
      }
      v47 = v53 + 1;
      v53 = v47;
      v46 = v45->max_length;
      if ( v47 >= v46 )
        goto LABEL_42;
    }
LABEL_56:
    sub_1BC326C(this, method, v34);
  }
LABEL_42:
  v49 = *p_EnemyActorList;
  v53 = 0;
  if ( !v49 )
    goto LABEL_55;
  v50 = v49->max_length;
  if ( v50 >= 1 )
  {
    v51 = 0;
    while ( v51 < (unsigned int)v50 )
    {
      v52 = (UnityEngine_Object_o *)v49->m_Items[v51];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleDemoRootComponent_o *)UnityEngine_Object__op_Equality(v52, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v52 )
          goto LABEL_55;
        this = (BattleDemoRootComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)v52,
                                              (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !this )
          goto LABEL_55;
        BattleActorControl__playMotion((BattleActorControl_o *)this, (System_String_o *)StringLiteral_8675/*"MOTION_ENTRY"*/, 0LL);
      }
      v51 = v53 + 1;
      v53 = v51;
      v50 = v49->max_length;
      if ( v51 >= v50 )
        goto LABEL_53;
    }
    goto LABEL_56;
  }
LABEL_53:
  this = (BattleDemoRootComponent_o *)v2->fields.FieldMotion;
  if ( !this )
LABEL_55:
    sub_1BC3264(this, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5399/*"END_NP"*/, 0LL);
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
  if ( (byte_4B05792 & 1) == 0 )
  {
    sub_1BC3008(&BattleData_TypeInfo, result);
    sub_1BC3008(&Method_DataManager_GetMaster_BattleMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(&Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v9);
    sub_1BC3008(&StringLiteral_10976/*"REQUEST_OK"*/, v10);
    this = (BattleDemoRootComponent_o *)sub_1BC3008(&StringLiteral_21997/*"ng"*/, v11);
    byte_4B05792 = 1;
  }
  entity = 0LL;
  if ( !result )
    goto LABEL_18;
  if ( System_String__Equals_62383952(result, (System_String_o *)StringLiteral_21997/*"ng"*/, 0LL) )
  {
    this = (BattleDemoRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
      this = (BattleDemoRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  this = (BattleDemoRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !this )
    goto LABEL_18;
  this = (BattleDemoRootComponent_o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        &entity,
                                        (const MethodInfo_32B16F8 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__);
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
    sub_1BC3264(this, result);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_10976/*"REQUEST_OK"*/, 0LL);
}


int32_t __fastcall BattleDemoRootComponent__GetLimitCountByInfo(
        BattleDemoRootComponent_o *this,
        System_String_o *info,
        const MethodInfo *method)
{
  System_String_array *v4; // x0
  System_String_array *v5; // x1
  __int64 v6; // x2

  if ( (byte_4B05780 & 1) == 0 )
  {
    sub_1BC3008(&char___TypeInfo, info);
    byte_4B05780 = 1;
  }
  v4 = (System_String_array *)sub_1BC30B0(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_9;
  v5 = v4;
  if ( !v4->max_length )
    goto LABEL_10;
  LOWORD(v4->m_Items[0]) = 58;
  if ( !info || (v4 = System_String__Split_62397724(info, (System_Char_array *)v4, 0LL)) == 0LL )
LABEL_9:
    sub_1BC3264(v4, v5);
  if ( v4->max_length <= 1 )
LABEL_10:
    sub_1BC326C(v4, v5, v6);
  return System_Int32__Parse(v4->m_Items[1], 0LL);
}


int32_t __fastcall BattleDemoRootComponent__GetServantIdByInfo(
        BattleDemoRootComponent_o *this,
        System_String_o *info,
        const MethodInfo *method)
{
  System_String_array *v4; // x0
  System_String_array *v5; // x1
  __int64 v6; // x2

  if ( (byte_4B0577F & 1) == 0 )
  {
    sub_1BC3008(&char___TypeInfo, info);
    byte_4B0577F = 1;
  }
  v4 = (System_String_array *)sub_1BC30B0(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_9;
  v5 = v4;
  if ( !v4->max_length )
    goto LABEL_10;
  LOWORD(v4->m_Items[0]) = 58;
  if ( !info || (v4 = System_String__Split_62397724(info, (System_Char_array *)v4, 0LL)) == 0LL )
LABEL_9:
    sub_1BC3264(v4, v5);
  if ( !v4->max_length )
LABEL_10:
    sub_1BC326C(v4, v5, v6);
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
  if ( (byte_4B0578F & 1) == 0 )
  {
    sub_1BC3008(&Method_BattleDemoRootComponent_OnBattleEndScript__, method);
    sub_1BC3008(&ScriptManager_CallbackFunc_TypeInfo, v3);
    this = (BattleDemoRootComponent_o *)sub_1BC3008(&ScriptManager_TypeInfo, v4);
    byte_4B0578F = 1;
  }
  klass = v2[14].klass;
  if ( !klass )
    sub_1BC3264(this, method);
  name_high = HIDWORD(klass->_1.name);
  namespaze = (int32_t)klass->_1.namespaze;
  v8 = (ScriptManager_CallbackFunc_o *)sub_1BC3254(ScriptManager_CallbackFunc_TypeInfo);
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
  if ( (byte_4B0578D & 1) == 0 )
  {
    sub_1BC3008(&Method_BattleDemoRootComponent_OnBattleStartScript__, method);
    sub_1BC3008(&ScriptManager_CallbackFunc_TypeInfo, v3);
    this = (BattleDemoRootComponent_o *)sub_1BC3008(&ScriptManager_TypeInfo, v4);
    byte_4B0578D = 1;
  }
  klass = v2[14].klass;
  if ( !klass )
    sub_1BC3264(this, method);
  name_high = HIDWORD(klass->_1.name);
  namespaze = (int32_t)klass->_1.namespaze;
  v8 = (ScriptManager_CallbackFunc_o *)sub_1BC3254(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v8, v2, Method_BattleDemoRootComponent_OnBattleStartScript__, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayBattleStart2_43440556(name_high, namespaze, v8, 0, 0LL);
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

  if ( (byte_4B05791 & 1) == 0 )
  {
    sub_1BC3008(&ScriptManager_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v3);
    byte_4B05791 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AFC911 )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v4);
    byte_4AFC911 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v7);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
  return 1;
}


void __fastcall BattleDemoRootComponent__InitializeBattleDemo(
        BattleDemoRootComponent_o *this,
        System_String_o *demoInfo,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct System_Action_o *v4; // x23
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
  __int64 v22; // x1
  __int64 v23; // x1
  Il2CppObject *v24; // x0
  __int64 methodPtr_low; // x10
  System_Collections_Generic_Dictionary_object__object__o *v26; // x21
  __int64 v27; // x19
  struct System_String_array *v28; // x0
  BattleDemoRootComponent_o **p_PlayerList; // x23
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct System_String_array *v32; // x0
  struct System_String_array **p_EnemyList; // x22
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 v36; // x25
  __int64 v37; // x28
  System_String_o *v38; // x0
  BattleDemoRootComponent_c *Item; // x0
  System_String_c *v40; // x1
  Il2CppObject *v41; // x24
  __int64 v42; // x2
  const MethodInfo *v43; // x3
  System_String_c **v44; // x8
  bool v45; // cf
  __int64 v46; // x24
  System_String_o *v47; // x0
  Il2CppObject *v48; // x23
  struct System_String_array *v49; // x25
  const MethodInfo *v50; // x3
  System_Collections_Generic_List_object__o *v51; // x23
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  System_String_o *v54; // x0
  Il2CppObject *v55; // x24
  System_Collections_Generic_List_object__o *CueSheetList; // x23
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  struct System_Object_array *items; // x9
  _QWORD *v60; // x10
  __int64 size; // x11
  Il2CppClass **v62; // x0
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x2
  __int64 v66; // x3
  Il2CppObject *v67; // x0
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  System_String_c *v70; // x1
  struct System_String_o **p_BgmName; // x0
  __int64 v72; // x2
  __int64 v73; // x3
  System_Collections_Generic_List_object__o *v74; // x20
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  const MethodInfo *v77; // x1
  System_Collections_IEnumerator_o *v78; // x0
  BattleDemoRootComponent_o *v79; // x0
  const MethodInfo *v80; // x1
  struct System_Action_o *v81; // [xsp+8h] [xbp-78h]
  BattleDemoRootComponent_o *v82; // [xsp+10h] [xbp-70h]
  int v83; // [xsp+1Ch] [xbp-64h] BYREF

  v4 = callback;
  if ( (byte_4B0577E & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, demoInfo);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1BC3008(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v8);
    sub_1BC3008(&long_TypeInfo, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Add__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantAssetArgs___ctor__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_string___ctor__, v12);
    sub_1BC3008(&System_Collections_Generic_List_ServantAssetArgs__TypeInfo, v13);
    sub_1BC3008(&System_Collections_Generic_List_string__TypeInfo, v14);
    sub_1BC3008(&string___TypeInfo, v15);
    sub_1BC3008(&string_TypeInfo, v16);
    sub_1BC3008(&StringLiteral_5987/*"Enemy"*/, v17);
    sub_1BC3008(&StringLiteral_12571/*"Sequence"*/, v18);
    sub_1BC3008(&StringLiteral_12808/*"Sound"*/, v19);
    sub_1BC3008(&StringLiteral_3123/*"Bg"*/, v20);
    sub_1BC3008(&StringLiteral_10586/*"Player"*/, v21);
    sub_1BC3008(&StringLiteral_3130/*"Bgm"*/, v22);
    sub_1BC3008(&StringLiteral_3129/*"BgType"*/, v23);
    byte_4B0577E = 1;
  }
  v83 = 0;
  if ( !demoInfo )
    goto LABEL_51;
  v24 = MiniJSON_Json__Deserialize(demoInfo, 0LL);
  v81 = v4;
  if ( v24
    && (methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v24->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (System_Collections_Generic_Dictionary_string__object__c *)v24->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
      v26 = (System_Collections_Generic_Dictionary_object__object__o *)v24;
    else
      v26 = 0LL;
  }
  else
  {
    v26 = 0LL;
  }
  v27 = (__int64)&StringLiteral_10586/*"Player"*/;
  v28 = (struct System_String_array *)sub_1BC30B0(string___TypeInfo, 3LL);
  this->fields.PlayerList = v28;
  p_PlayerList = (BattleDemoRootComponent_o **)&this->fields.PlayerList;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.PlayerList, (int32_t)v28, v30, v31);
  v32 = (struct System_String_array *)sub_1BC30B0(string___TypeInfo, 3LL);
  this->fields.EnemyList = v32;
  p_EnemyList = &this->fields.EnemyList;
  v82 = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.EnemyList, (int32_t)v32, v34, v35);
  v36 = -3LL;
  v37 = 32LL;
  do
  {
    v83 = v36 + 4;
    v38 = System_Int32__ToString((int32_t)&v83, 0LL);
    Item = (BattleDemoRootComponent_c *)System_String__Concat_62348648((System_String_o *)StringLiteral_10586/*"Player"*/, v38, 0LL);
    if ( !v26 )
      goto LABEL_52;
    v41 = (Il2CppObject *)Item;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v26,
           (Il2CppObject *)Item,
           (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      this = *p_PlayerList;
      Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                            v26,
                                            v41,
                                            (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !this )
        goto LABEL_52;
      v44 = (System_String_c **)Item;
      if ( Item )
      {
        v40 = string_TypeInfo;
        if ( Item->_1.image != string_TypeInfo )
          goto LABEL_46;
      }
      if ( v36 + 3 >= (unsigned __int64)LODWORD(this->fields.m_CancellationTokenSource) )
LABEL_53:
        sub_1BC326C(Item, v40, v42);
      *(BattleDemoRootComponent_c **)((char *)&this->klass + v37) = Item;
      sub_1BC2FAC((CGThumbnailListItem_o *)((char *)this + v37), (int32_t)Item, v42, v43);
    }
    v45 = __CFADD__(v36++, 1LL);
    v37 += 8LL;
  }
  while ( !v45 );
  this = v82;
  v27 = -3LL;
  v46 = 32LL;
  do
  {
    v83 = v27 + 4;
    v47 = System_Int32__ToString((int32_t)&v83, 0LL);
    v48 = (Il2CppObject *)System_String__Concat_62348648((System_String_o *)StringLiteral_5987/*"Enemy"*/, v47, 0LL);
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v26,
           v48,
           (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v49 = *p_EnemyList;
      Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                            v26,
                                            v48,
                                            (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v49 )
        goto LABEL_52;
      v44 = (System_String_c **)Item;
      if ( Item )
      {
        v40 = string_TypeInfo;
        if ( Item->_1.image != string_TypeInfo )
          goto LABEL_46;
      }
      if ( v27 + 3 >= (unsigned __int64)v49->max_length )
        goto LABEL_53;
      *(Il2CppClass **)((char *)&v49->obj.klass + v46) = (Il2CppClass *)Item;
      sub_1BC2FAC((CGThumbnailListItem_o *)((char *)v49 + v46), (int32_t)Item, v42, v50);
    }
    v45 = __CFADD__(v27++, 1LL);
    v46 += 8LL;
  }
  while ( !v45 );
  v51 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v51,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_string___ctor__);
  v82->fields.CueSheetList = (struct System_Collections_Generic_List_string__o *)v51;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v82->fields.CueSheetList, (int32_t)v51, v52, v53);
  v27 = 1LL;
  do
  {
    v83 = v27;
    v54 = System_Int32__ToString((int32_t)&v83, 0LL);
    v55 = (Il2CppObject *)System_String__Concat_62348648((System_String_o *)StringLiteral_12808/*"Sound"*/, v54, 0LL);
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           v26,
           v55,
           (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      CueSheetList = (System_Collections_Generic_List_object__o *)v82->fields.CueSheetList;
      Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                            v26,
                                            v55,
                                            (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !CueSheetList )
        goto LABEL_52;
      v44 = (System_String_c **)Item;
      if ( Item )
      {
        v40 = string_TypeInfo;
        if ( Item->_1.image != string_TypeInfo )
          goto LABEL_46;
      }
      items = CueSheetList->fields._items;
      v60 = Method_System_Collections_Generic_List_string__Add__;
      ++CueSheetList->fields._version;
      if ( !items )
        goto LABEL_52;
      size = CueSheetList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          CueSheetList,
          (Il2CppObject *)Item,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
      }
      else
      {
        v62 = &items->obj.klass + size;
        CueSheetList->fields._size = size + 1;
        v62[4] = (Il2CppClass *)v44;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v62 + 4), (int32_t)v44, v57, v58);
      }
    }
    v27 = (unsigned int)(v27 + 1);
  }
  while ( (_DWORD)v27 != 6 );
  Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                        v26,
                                        (Il2CppObject *)StringLiteral_3123/*"Bg"*/,
                                        (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_52;
  v27 = (__int64)&long_TypeInfo;
  if ( (Il2CppClass *)*((_QWORD *)Item->_1.image + 8) != long_TypeInfo->_1.element_class )
    goto LABEL_54;
  v82->fields.BgId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v63, v64);
  Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                        v26,
                                        (Il2CppObject *)StringLiteral_3129/*"BgType"*/,
                                        (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
LABEL_52:
    sub_1BC3264(Item, v40);
  if ( (Il2CppClass *)*((_QWORD *)Item->_1.image + 8) != long_TypeInfo->_1.element_class )
    goto LABEL_54;
  v82->fields.BgType = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v65, v66);
  v67 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v26,
          (Il2CppObject *)StringLiteral_3130/*"Bgm"*/,
          (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v44 = (System_String_c **)v67;
  if ( !v67 )
    goto LABEL_47;
  v70 = string_TypeInfo;
  if ( (System_String_c *)v67->klass != string_TypeInfo
    || (v82->fields.BgmName = (struct System_String_o *)v67, p_BgmName = &v82->fields.BgmName, *v44 != v70) )
  {
LABEL_46:
    sub_1BC3524(v44);
LABEL_47:
    this->fields.BgmName = 0LL;
    p_BgmName = &this->fields.BgmName;
  }
  sub_1BC2FAC((CGThumbnailListItem_o *)p_BgmName, (int32_t)v44, v68, v69);
  Item = (BattleDemoRootComponent_c *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                        v26,
                                        (Il2CppObject *)StringLiteral_12571/*"Sequence"*/,
                                        (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_52;
  v4 = v81;
  if ( *((_QWORD *)Item->_1.image + 8) == *(_QWORD *)(*(_QWORD *)v27 + 64LL) )
  {
    this->fields.DemoSequenceServantId = *(_QWORD *)j_il2cpp_object_unbox_0(Item, *(_QWORD *)v27, v72, v73);
LABEL_51:
    this->fields.InitializeCallback = v4;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.InitializeCallback, (int32_t)v4, (int32_t)callback, method);
    v74 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ServantAssetArgs__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v74,
      (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ServantAssetArgs___ctor__);
    this->fields.loadedAssetArgsList = (struct System_Collections_Generic_List_ServantAssetArgs__o *)v74;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.loadedAssetArgsList, (int32_t)v74, v75, v76);
    v78 = BattleDemoRootComponent__SetupBattleDemo(this, v77);
    UnityEngine_MonoBehaviour__StartCoroutine_70019872((UnityEngine_MonoBehaviour_o *)this, v78, 0LL);
    return;
  }
LABEL_54:
  sub_1BC3524(Item);
  BattleDemoRootComponent__ReleaseBattleDemo(v79, v80);
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v23; // x8

  v4 = this;
  if ( (byte_4B05786 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ServantLimitMaster___, chrlist);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantAssetArgs__Add__, v6);
    sub_1BC3008(&ServantAssetArgs_TypeInfo, v7);
    this = (BattleDemoRootComponent_o *)sub_1BC3008(&ServantAssetLoadManager_TypeInfo, v8);
    byte_4B05786 = 1;
  }
  if ( !chrlist )
LABEL_21:
    sub_1BC3264(this, chrlist);
  v9 = *(_QWORD *)&chrlist->max_length;
  if ( (int)v9 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v9; ++i )
    {
      if ( i >= (unsigned int)v9 )
        sub_1BC326C(this, chrlist, method);
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
        this = (BattleDemoRootComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantLimitMaster___);
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
        v17 = (ServantAssetArgs_o *)sub_1BC3254(ServantAssetArgs_TypeInfo);
        ServantAssetArgs___ctor_45476048(v17, v13, LimitCountByInfo, 0, 0, myFSM, 0LL);
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        ServantAssetLoadManager__PreloadAssetsByArgs(v17, 0, 0LL);
        this = (BattleDemoRootComponent_o *)v4->fields.loadedAssetArgsList;
        if ( !this )
          goto LABEL_21;
        v20 = *(_QWORD *)&this->fields.m_CachedPtr;
        v21 = Method_System_Collections_Generic_List_ServantAssetArgs__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v20 )
          goto LABEL_21;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v20 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)v17,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = v20 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v23 + 32) = v17;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v23 + 32), (int32_t)v17, v18, v19);
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

  if ( (byte_4B05781 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_BattleDemoRootComponent__LoadCueSheet_b__28_0__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v8);
    byte_4B05781 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  CueSheetList = this->fields.CueSheetList;
  if ( CueSheetList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_object__o *)CueSheetList,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v15.fields._current;
      ++this->fields.CueSheetCount;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      v12 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_BattleDemoRootComponent__LoadCueSheet_b__28_0__, 0LL);
      if ( !Instance )
        sub_1BC3264(v13, v14);
      SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)current, v12, 1, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
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

  if ( (byte_4B0578A & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, obj);
    byte_4B0578A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance
    || (BattleSequenceManager__setup((BattleSequenceManager_o *)Instance, 0LL, 1, 0LL, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__)) == 0LL) )
  {
    sub_1BC3264(Instance, v5);
  }
  BattleSequenceManager__SetupDemoActor(
    (BattleSequenceManager_o *)Instance,
    this->fields.PlayerActorList,
    this->fields.EnemyActorList,
    0LL);
  v7 = BattleDemoRootComponent__WaitToNoblePhantasmPlay(this, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_70019872((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
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
  if ( (byte_4B05790 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_string__TypeInfo, isExit);
    sub_1BC3008(&Method_BattleDemoRootComponent__OnBattleEndScript_b__47_0__, v4);
    this = (BattleDemoRootComponent_o *)sub_1BC3008(&ScriptManager_TypeInfo, v5);
    byte_4B05790 = 1;
  }
  klass = v3[14].klass;
  if ( !klass )
    sub_1BC3264(this, isExit);
  name_high = HIDWORD(klass->_1.name);
  namespaze = (int32_t)klass->_1.namespaze;
  v9 = (System_Action_object__o *)sub_1BC3254(System_Action_string__TypeInfo);
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

  if ( (byte_4B0578E & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_6912/*"GOTO_BATTLE"*/, isExit);
    byte_4B0578E = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1BC3264(0LL, isExit);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_6912/*"GOTO_BATTLE"*/, 0LL);
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
  __int64 v24; // x2
  struct UnityEngine_GameObject_array *PlayerActorList; // x22
  __int64 v26; // x8
  unsigned __int64 v27; // x23
  UnityEngine_Object_o *v28; // x20
  struct UnityEngine_GameObject_array *EnemyActorList; // x22
  __int64 v30; // x8
  unsigned __int64 v31; // x23
  UnityEngine_Object_o *v32; // x20
  System_Collections_Generic_List_object__o *loadedAssetArgsList; // x20
  System_Action_object__o *v34; // x21
  Il2CppObject *v35; // x22
  struct BattleDemoRootComponent___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x1
  BattleDemoRootComponent_c *v40; // x0
  float BGM_FADEOUT_TIME; // s8
  __int64 *v42; // x8
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  _BOOL4 battleBefore; // w9
  _BOOL4 isBefore; // w8

  if ( (byte_4B0578C & 1) == 0 )
  {
    sub_1BC3008(&System_Action_ServantAssetArgs__TypeInfo, seq);
    sub_1BC3008(&AssetManager_TypeInfo, v4);
    sub_1BC3008(&BattleDemoRootComponent_TypeInfo, v5);
    sub_1BC3008(&BattleFBXComponent_TypeInfo, v6);
    sub_1BC3008(&System_GC_TypeInfo, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantAssetArgs__ForEach__, v8);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v11);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v12);
    sub_1BC3008(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v13);
    sub_1BC3008(&SoundManager_TypeInfo, v14);
    sub_1BC3008(&Method_BattleDemoRootComponent___c__OnNoblePhantasmPlayComplete_b__43_0__, v15);
    sub_1BC3008(&BattleDemoRootComponent___c_TypeInfo, v16);
    sub_1BC3008(&StringLiteral_6916/*"GOTO_TERMINAL"*/, v17);
    sub_1BC3008(&StringLiteral_6914/*"GOTO_BATTLESTARTTALK"*/, v18);
    sub_1BC3008(&StringLiteral_6913/*"GOTO_BATTLENDTALK"*/, v19);
    sub_1BC3008(&StringLiteral_3066/*"Battle/Common"*/, v20);
    sub_1BC3008(&StringLiteral_5391/*"END_DEMO"*/, v21);
    byte_4B0578C = 1;
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
  v26 = *(_QWORD *)&PlayerActorList->max_length;
  if ( (int)v26 >= 1 )
  {
    v27 = 0LL;
    while ( v27 < (unsigned int)v26 )
    {
      v28 = (UnityEngine_Object_o *)PlayerActorList->m_Items[v27];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      performance = (void *)UnityEngine_Object__op_Inequality(v28, 0LL, 0LL);
      if ( ((unsigned __int8)performance & 1) != 0 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70034300(v28, 0LL);
      }
      LODWORD(v26) = PlayerActorList->max_length;
      if ( (__int64)++v27 >= (int)v26 )
        goto LABEL_20;
    }
LABEL_67:
    sub_1BC326C(performance, seq, v24);
  }
LABEL_20:
  EnemyActorList = this->fields.EnemyActorList;
  if ( !EnemyActorList )
    goto LABEL_68;
  v30 = *(_QWORD *)&EnemyActorList->max_length;
  if ( (int)v30 >= 1 )
  {
    v31 = 0LL;
    while ( v31 < (unsigned int)v30 )
    {
      v32 = (UnityEngine_Object_o *)EnemyActorList->m_Items[v31];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      performance = (void *)UnityEngine_Object__op_Inequality(v32, 0LL, 0LL);
      if ( ((unsigned __int8)performance & 1) != 0 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70034300(v32, 0LL);
      }
      LODWORD(v30) = EnemyActorList->max_length;
      if ( (__int64)++v31 >= (int)v30 )
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
  v34 = *(System_Action_object__o **)(*((_QWORD *)performance + 23) + 16LL);
  if ( !v34 )
  {
    if ( !*((_DWORD *)performance + 56) )
    {
      j_il2cpp_runtime_class_init_0(performance);
      performance = BattleDemoRootComponent___c_TypeInfo;
    }
    v35 = (Il2CppObject *)**((_QWORD **)performance + 23);
    v34 = (System_Action_object__o *)sub_1BC3254(System_Action_ServantAssetArgs__TypeInfo);
    System_Action_object____ctor(
      v34,
      v35,
      Method_BattleDemoRootComponent___c__OnNoblePhantasmPlayComplete_b__43_0__,
      0LL);
    static_fields = BattleDemoRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__43_0 = (struct System_Action_ServantAssetArgs__o *)v34;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__43_0, (int32_t)v34, v37, v38);
  }
  if ( !loadedAssetArgsList )
    goto LABEL_68;
  System_Collections_Generic_List_object___ForEach(
    loadedAssetArgsList,
    (System_Action_T__o *)v34,
    (const MethodInfo_36A1880 *)Method_System_Collections_Generic_List_ServantAssetArgs__ForEach__);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_3066/*"Battle/Common"*/, 0LL);
  performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !performance )
    goto LABEL_68;
  ServantAssetLoadManager__releaseNoblePhantasm((ServantAssetLoadManager_o *)performance, 0LL);
  BattleDemoRootComponent__ReleaseCueSheet(this, v39);
  v40 = BattleDemoRootComponent_TypeInfo;
  if ( !BattleDemoRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDemoRootComponent_TypeInfo);
    v40 = BattleDemoRootComponent_TypeInfo;
  }
  BGM_FADEOUT_TIME = v40->static_fields->BGM_FADEOUT_TIME;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__fadeoutBgm(BGM_FADEOUT_TIME, 0LL);
  performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !performance )
    goto LABEL_68;
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)performance, 0LL, 0LL);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect(0LL);
  performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !performance )
LABEL_68:
    sub_1BC3264(performance, seq);
  CommonUI__maskFadeout((CommonUI_o *)performance, 1, 1.0, 0LL, 0LL);
  if ( !this->fields.battleSetupInfo )
  {
    performance = this->fields.myFSM;
    if ( !performance )
      goto LABEL_68;
    v42 = &StringLiteral_5391/*"END_DEMO"*/;
LABEL_56:
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)performance, (System_String_o *)*v42, 0LL);
    return;
  }
  performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !performance )
    goto LABEL_68;
  performance = (void *)AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)performance, 0LL);
  if ( ((unsigned __int8)performance & 1) != 0 )
  {
    performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
      v42 = &StringLiteral_6913/*"GOTO_BATTLENDTALK"*/;
    else
      v42 = &StringLiteral_6916/*"GOTO_TERMINAL"*/;
    goto LABEL_56;
  }
  if ( !isBefore )
  {
    performance = this->fields.myFSM;
    if ( !performance )
      goto LABEL_68;
    v42 = &StringLiteral_6914/*"GOTO_BATTLESTARTTALK"*/;
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
  CGThumbnailListItem_o *p_CueSheetList; // x19
  struct System_Collections_Generic_List_string__o *CueSheetList; // t1
  Il2CppObject *current; // x20
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B05782 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__GetEnumerator__, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v6);
    byte_4B05782 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  CueSheetList = this->fields.CueSheetList;
  p_CueSheetList = (CGThumbnailListItem_o *)&this->fields.CueSheetList;
  v7 = (System_Collections_Generic_List_object__o *)CueSheetList;
  if ( CueSheetList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      v7,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v15.fields._current;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !Instance )
        sub_1BC3264(0LL, v12);
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)Instance, (System_String_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    p_CueSheetList->klass = 0LL;
    sub_1BC2FAC(p_CueSheetList, 0, v13, v14);
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
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B05783 & 1) == 0 )
  {
    sub_1BC3008(&BattleDemoRootComponent__SetupBattleDemo_d__30_TypeInfo, method);
    byte_4B05783 = 1;
  }
  v3 = sub_1BC3254(BattleDemoRootComponent__SetupBattleDemo_d__30_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall BattleDemoRootComponent__StartBattle(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B05793 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B05793 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v3);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 10, 1, 0LL, 0, 0LL);
  return 1;
}


void __fastcall BattleDemoRootComponent__StartDemo(
        BattleDemoRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleActorControl_o *Component_object; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct UnityEngine_GameObject_array *PlayerActorList; // x8
  UnityEngine_GameObject_o *v15; // x21
  BattleActorControl_o *v16; // x20
  BattleFBXComponent_c *v17; // x0
  struct BattlePerformanceBg_o *perfBg; // x8
  int32_t DemoSequenceServantId; // w22
  BattleSequenceManager_o *v20; // x21
  struct BattleServantData_o *battleSvtData; // x8
  int32_t v22; // w20
  int32_t treasuredvcLevel; // w23
  BattleSequenceManager_onGameObjectLoadComplete_o *v24; // x24

  if ( (byte_4B05789 & 1) == 0 )
  {
    sub_1BC3008(&Method_BattleDemoRootComponent_OnBattleDemoLoadComplete__, callback);
    sub_1BC3008(&BattleFBXComponent_TypeInfo, v6);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v8);
    sub_1BC3008(&StringLiteral_9255/*"NPACTOR"*/, v9);
    sub_1BC3008(&BattleSequenceManager_onGameObjectLoadComplete_TypeInfo, v10);
    byte_4B05789 = 1;
  }
  this->fields.BattleDemoCallback = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.BattleDemoCallback, (int32_t)callback, (int32_t)method, v3);
  PlayerActorList = this->fields.PlayerActorList;
  if ( !PlayerActorList )
    goto LABEL_18;
  if ( !PlayerActorList->max_length )
    sub_1BC326C(Component_object, v12, v13);
  v15 = PlayerActorList->m_Items[0];
  if ( !v15 )
    goto LABEL_18;
  Component_object = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                               v15,
                                               (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !this->fields.FieldMotion )
    goto LABEL_18;
  v16 = Component_object;
  Component_object = (BattleActorControl_o *)PlayMakerFSM__get_Fsm(this->fields.FieldMotion, 0LL);
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (BattleActorControl_o *)Component_object->fields._NodeDamage_k__BackingField;
  if ( !Component_object )
    goto LABEL_18;
  Component_object = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                               (HutongGames_PlayMaker_FsmVariables_o *)Component_object,
                                               (System_String_o *)StringLiteral_9255/*"NPACTOR"*/,
                                               0LL);
  if ( !Component_object )
    goto LABEL_18;
  HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)Component_object, v15, 0LL);
  v17 = BattleFBXComponent_TypeInfo;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v17 = BattleFBXComponent_TypeInfo;
  }
  v17->static_fields->EnableEvent = 0;
  Component_object = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  perfBg = this->fields.perfBg;
  if ( !perfBg )
    goto LABEL_18;
  if ( !Component_object )
    goto LABEL_18;
  BattleSequenceManager__init(
    (BattleSequenceManager_o *)Component_object,
    this->fields.performance,
    v15,
    this->fields.PlayerActorList,
    this->fields.EnemyActorList,
    this->fields.actorCamera,
    perfBg->fields.bgobject,
    0LL);
  Component_object = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v16 )
    goto LABEL_18;
  DemoSequenceServantId = this->fields.DemoSequenceServantId;
  v20 = (BattleSequenceManager_o *)Component_object;
  Component_object = (BattleActorControl_o *)BattleActorControl__getLimitCount(v16, 0LL);
  battleSvtData = v16->fields.battleSvtData;
  if ( !battleSvtData
    || (v22 = (int)Component_object,
        treasuredvcLevel = battleSvtData->fields.treasuredvcLevel,
        v24 = (BattleSequenceManager_onGameObjectLoadComplete_o *)sub_1BC3254(BattleSequenceManager_onGameObjectLoadComplete_TypeInfo),
        BattleSequenceManager_onGameObjectLoadComplete___ctor(
          v24,
          (Il2CppObject *)this,
          Method_BattleDemoRootComponent_OnBattleDemoLoadComplete__,
          0LL),
        !v20) )
  {
LABEL_18:
    sub_1BC3264(Component_object, v12);
  }
  BattleSequenceManager__loadSequence(
    v20,
    DemoSequenceServantId,
    DemoSequenceServantId,
    v22,
    0,
    treasuredvcLevel,
    1,
    v24,
    0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleDemoRootComponent__WaitToNoblePhantasmPlay(
        BattleDemoRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B0578B & 1) == 0 )
  {
    sub_1BC3008(&BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_TypeInfo, method);
    byte_4B0578B = 1;
  }
  v3 = sub_1BC3254(BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  if ( (byte_4B05797 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, demoInfo);
    sub_1BC3008(&StringLiteral_6916/*"GOTO_TERMINAL"*/, v5);
    byte_4B05797 = 1;
  }
  if ( v3 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1BC3264(Instance, demoInfo);
  }
  Instance = (CommonUI_o *)this->fields.myFSM;
  if ( !Instance )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6916/*"GOTO_TERMINAL"*/, 0LL);
}


void __fastcall BattleDemoRootComponent___SetupBattleDemo_b__30_0(
        BattleDemoRootComponent_o *this,
        AssetData_o *aData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 performance; // x0
  __int64 v9; // x2
  struct BattlePerformance_o *v10; // x8
  struct BattleFieldMotionComponent_array *fieldmotion; // x8
  struct PlayMakerFSM_o *Fsm; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_GameObject_o *cameraObject; // x23
  UnityEngine_Transform_o *v16; // x22
  struct UnityEngine_GameObject_o **p_cameraObject; // x21
  Il2CppObject *Object_object__50213776; // x0
  struct UnityEngine_GameObject_o *ObjectIfNotExist; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  UnityEngine_Transform_o *v22; // x20
  struct BattlePerformance_o *v23; // x20
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  CGThumbnailListItem_o *v26; // x20
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x8
  __int64 v32; // x1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 v35; // x8
  __int64 v36; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct BattlePerformance_o *v39; // x8
  struct BattleActionCamera_o *actioncamera; // x9
  struct UnityEngine_Camera_o *frontcamera; // x1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct BattlePerformance_o *v44; // x8
  struct BattleActionCamera_o *v45; // x8
  struct UnityEngine_Camera_o *actorcamera; // x1
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct BattlePerformance_o *v49; // x8
  struct PlayMakerFSM_o *camerafsm; // x1
  struct PlayMakerFSM_o **p_CameraFsm; // x19
  __int64 v52; // x8
  __int64 v53; // x19
  int32_t v54; // w2
  const MethodInfo *v55; // x3

  if ( (byte_4B05795 & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_GameObject____76809672, aData);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BattleActionCamera___, v5);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v6);
    sub_1BC3008(&StringLiteral_11311/*"RootCameraPrefab"*/, v7);
    byte_4B05795 = 1;
  }
  performance = (__int64)this->fields.performance;
  if ( !performance )
    goto LABEL_34;
  BattlePerformance__loadStorageObjectCommonMotion((BattlePerformance_o *)performance, aData, 0LL);
  performance = (__int64)this->fields.performance;
  if ( !performance )
    goto LABEL_34;
  BattlePerformance__loadFieldMotion((BattlePerformance_o *)performance, aData, 0LL, 0LL);
  v10 = this->fields.performance;
  if ( !v10 )
    goto LABEL_34;
  fieldmotion = v10->fields.fieldmotion;
  if ( !fieldmotion )
    goto LABEL_34;
  if ( !fieldmotion->max_length )
    sub_1BC326C(performance, aData, v9);
  performance = (__int64)fieldmotion->m_Items[0];
  if ( !performance )
    goto LABEL_34;
  Fsm = BattleFieldMotionComponent__getFsm((BattleFieldMotionComponent_o *)performance, 0LL);
  this->fields.FieldMotion = Fsm;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.FieldMotion, (int32_t)Fsm, v13, v14);
  performance = (__int64)this->fields.GroundObject;
  if ( !performance )
    goto LABEL_34;
  performance = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)performance, 0LL);
  if ( !performance )
    goto LABEL_34;
  performance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)performance, 0LL);
  if ( !aData )
    goto LABEL_34;
  cameraObject = this->fields.cameraObject;
  v16 = (UnityEngine_Transform_o *)performance;
  p_cameraObject = &this->fields.cameraObject;
  Object_object__50213776 = AssetData__GetObject_object__50213776(
                              aData,
                              (System_String_o *)StringLiteral_11311/*"RootCameraPrefab"*/,
                              (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
  ObjectIfNotExist = BaseMonoBehaviour__createObjectIfNotExist(
                       (BaseMonoBehaviour_o *)this,
                       cameraObject,
                       (UnityEngine_GameObject_o *)Object_object__50213776,
                       v16,
                       0LL,
                       0LL);
  this->fields.cameraObject = ObjectIfNotExist;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.cameraObject, (int32_t)ObjectIfNotExist, v20, v21);
  performance = (__int64)this->fields.cameraObject;
  if ( !performance )
    goto LABEL_34;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)performance, (System_String_o *)StringLiteral_11311/*"RootCameraPrefab"*/, 0LL);
  performance = (__int64)*p_cameraObject;
  if ( !*p_cameraObject )
    goto LABEL_34;
  performance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)performance, 0LL);
  v22 = (UnityEngine_Transform_o *)performance;
  if ( !byte_4AFBDB1 )
  {
    performance = sub_1BC3008(&UnityEngine_Vector3_TypeInfo, aData);
    byte_4AFBDB1 = 1;
  }
  if ( !v22 )
    goto LABEL_34;
  UnityEngine_Transform__set_eulerAngles(v22, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  performance = (__int64)this->fields.cameraObject;
  if ( !performance )
    goto LABEL_34;
  v23 = this->fields.performance;
  performance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)performance,
                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v23 )
    goto LABEL_34;
  v23->fields.camerafsm = (struct PlayMakerFSM_o *)performance;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v23->fields.camerafsm, performance, v24, v25);
  performance = (__int64)this->fields.cameraObject;
  if ( !performance )
    goto LABEL_34;
  v26 = (CGThumbnailListItem_o *)this->fields.performance;
  performance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)performance,
                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BattleActionCamera___);
  if ( !v26 )
    goto LABEL_34;
  v26[3].klass = (CGThumbnailListItem_c *)performance;
  sub_1BC2FAC(v26 + 3, performance, v27, v28);
  performance = (__int64)this->fields.performance;
  if ( !performance )
    goto LABEL_34;
  v31 = *(_QWORD *)(performance + 408);
  if ( !v31 )
    goto LABEL_34;
  v32 = *(_QWORD *)(v31 + 72);
  *(_QWORD *)(performance + 160) = v32;
  sub_1BC2FAC((CGThumbnailListItem_o *)(performance + 160), v32, v29, v30);
  performance = (__int64)this->fields.performance;
  if ( !performance )
    goto LABEL_34;
  v35 = *(_QWORD *)(performance + 408);
  if ( !v35 )
    goto LABEL_34;
  v36 = *(_QWORD *)(v35 + 88);
  *(_QWORD *)(performance + 176) = v36;
  sub_1BC2FAC((CGThumbnailListItem_o *)(performance + 176), v36, v33, v34);
  v39 = this->fields.performance;
  if ( !v39 )
    goto LABEL_34;
  actioncamera = v39->fields.actioncamera;
  if ( !actioncamera )
    goto LABEL_34;
  frontcamera = actioncamera->fields.frontcamera;
  v39->fields.cutIncamera = frontcamera;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v39->fields.cutIncamera, (int32_t)frontcamera, v37, v38);
  v44 = this->fields.performance;
  if ( !v44 )
    goto LABEL_34;
  v45 = v44->fields.actioncamera;
  if ( !v45 )
    goto LABEL_34;
  actorcamera = v45->fields.actorcamera;
  this->fields.actorCamera = actorcamera;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.actorCamera, (int32_t)actorcamera, v42, v43);
  v49 = this->fields.performance;
  if ( !v49 )
    goto LABEL_34;
  camerafsm = v49->fields.camerafsm;
  this->fields.CameraFsm = camerafsm;
  p_CameraFsm = &this->fields.CameraFsm;
  sub_1BC2FAC((CGThumbnailListItem_o *)p_CameraFsm, (int32_t)camerafsm, v47, v48);
  v52 = (__int64)*(p_CameraFsm - 7);
  if ( !v52
    || (performance = *(_QWORD *)(v52 + 176)) == 0
    || (v53 = (__int64)*(p_CameraFsm - 4),
        performance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)performance, 0LL),
        !v53) )
  {
LABEL_34:
    sub_1BC3264(performance, aData);
  }
  *(_QWORD *)(v53 + 40) = performance;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v53 + 40), performance, v54, v55);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B05796 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BC3008(&Method_BattleDemoRootComponent___c__beginStartUp_b__36_1__, v4);
    sub_1BC3008(&BattleDemoRootComponent___c_TypeInfo, v5);
    byte_4B05796 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v9 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v9, v10, Method_BattleDemoRootComponent___c__beginStartUp_b__36_1__, 0LL);
    static_fields = BattleDemoRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__36_1 = v9;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__36_1, (int32_t)v9, v12, v13);
  }
  if ( !this )
LABEL_12:
    sub_1BC3264(Instance, v7);
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

  if ( (byte_4B05787 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_4B05787 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__maskFadeout((CommonUI_o *)Instance, 1, 0.0, 0LL, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1BC3264(Instance, v5);
  }
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall BattleDemoRootComponent__beginStartUp(
        BattleDemoRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Il2CppObject *demoInfo; // x20
  __int64 v6; // x1
  __int64 v7; // x1
  BattleSetupInfo_c *v8; // x1
  __int64 methodPtr_low; // x8
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x3
  struct BattleSetupInfo_o **p_battleSetupInfo; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  demoInfo = data;
  if ( (byte_4B05788 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, data);
    sub_1BC3008(&Method_BattleDemoRootComponent__beginStartUp_b__36_0__, v6);
    sub_1BC3008(&BattleSetupInfo_TypeInfo, v7);
    byte_4B05788 = 1;
  }
  if ( demoInfo )
  {
    v8 = BattleSetupInfo_TypeInfo;
    methodPtr_low = LOBYTE(BattleSetupInfo_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(demoInfo->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
      && (BattleSetupInfo_c *)demoInfo->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleSetupInfo_TypeInfo )
    {
      this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)demoInfo;
      p_battleSetupInfo = &this->fields.battleSetupInfo;
      if ( LOBYTE(demoInfo->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (BattleSetupInfo_c *)demoInfo->klass->_2.typeHierarchy[methodPtr_low - 1] == v8 )
      {
        sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.battleSetupInfo, (int32_t)demoInfo, (int32_t)method, v3);
        if ( *p_battleSetupInfo )
        {
          demoInfo = (Il2CppObject *)(*p_battleSetupInfo)->fields.demoInfo;
          goto LABEL_7;
        }
      }
      else
      {
        sub_1BC3524(demoInfo);
      }
      sub_1BC3264(v13, v14);
    }
    demoInfo = 0LL;
  }
LABEL_7:
  v10 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_BattleDemoRootComponent__beginStartUp_b__36_0__, 0LL);
  BattleDemoRootComponent__InitializeBattleDemo(this, (System_String_o *)demoInfo, v10, v11);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleDemoRootComponent__SetupBattleDemo_d__30_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct BattleDemoRootComponent_o *_4__this; // x20
  AssetLoader_LoadEndDataHandler_o *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  struct System_Action_o *InitializeCallback; // x8
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  CGThumbnailListItem_o *v23; // x19
  int v24; // w8
  System_String_o *BgmName; // x20
  UnityEngine_WaitForSeconds_o *v26; // x20
  int32_t v27; // w2
  const MethodInfo *v28; // x3

  v4 = this;
  if ( (byte_4B0579A & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, method);
    sub_1BC3008(&Method_BattleDemoRootComponent__SetupBattleDemo_b__30_0__, v5);
    sub_1BC3008(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1BC3008(&ServantAssetLoadManager_TypeInfo, v7);
    sub_1BC3008(&SoundManager_TypeInfo, v8);
    sub_1BC3008(&UnityEngine_WaitForSeconds_TypeInfo, v9);
    sub_1BC3008(&StringLiteral_3066/*"Battle/Common"*/, v10);
    this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)sub_1BC3008(&StringLiteral_10985/*"RESET_CAMERA_NOBLEEND"*/, v11);
    byte_4B0579A = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v13 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v13,
        (Il2CppObject *)_4__this,
        Method_BattleDemoRootComponent__SetupBattleDemo_b__30_0__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage((System_String_o *)StringLiteral_3066/*"Battle/Common"*/, v13, 1, 0LL);
      goto LABEL_8;
    case 1:
      v4->fields.__1__state = -1;
LABEL_8:
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)AssetManager__LoadIsBusy(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v4->fields.__2__current = 0LL;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BC2FAC(p__2__current, 0, v14, v15);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
      if ( !_4__this )
        goto LABEL_35;
      this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_35;
      BattlePerformance__ForceLoadBg((BattlePerformance_o *)this, _4__this->fields.BgId, _4__this->fields.BgType, 0LL);
      BattleDemoRootComponent__LoadBattleChrs(_4__this, _4__this->fields.PlayerList, v19);
      BattleDemoRootComponent__LoadBattleChrs(_4__this, _4__this->fields.EnemyList, v20);
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
            v4->fields.__2__current = 0LL;
            v23 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1BC2FAC(v23, 0, v2, v3);
            v24 = 3;
            goto LABEL_34;
          }
          BattleDemoRootComponent__CreateActors(_4__this, method);
          this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)_4__this->fields.CameraFsm;
          if ( this )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_10985/*"RESET_CAMERA_NOBLEEND"*/, 0LL);
            BgmName = _4__this->fields.BgmName;
            if ( !SoundManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
            SoundManager__playBgm(BgmName, 0LL);
            v26 = (UnityEngine_WaitForSeconds_o *)sub_1BC3254(UnityEngine_WaitForSeconds_TypeInfo);
            UnityEngine_WaitForSeconds___ctor(v26, 1.0, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v26;
            v23 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1BC2FAC(v23, (int32_t)v26, v27, v28);
            v24 = 4;
            goto LABEL_34;
          }
        }
LABEL_35:
        sub_1BC3264(this, method);
      }
      v4->fields.__2__current = 0LL;
      v23 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BC2FAC(v23, 0, v21, v22);
      v24 = 2;
LABEL_34:
      LODWORD(v23[-1].fields._ThumbnailSpritePath_k__BackingField) = v24;
      return 1;
    case 2:
      v4->fields.__1__state = -1;
      goto LABEL_22;
    case 3:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_35;
      goto LABEL_28;
    case 4:
      v4->fields.__1__state = -1;
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

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_BattleDemoRootComponent__SetupBattleDemo_d__30_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  bool result; // w0
  struct BattleDemoRootComponent_o *_4__this; // x19
  struct BattlePerformance_o *performance; // x20
  BattlePerformance_c *v15; // x0
  struct BattlePerformance_o *v16; // x8
  BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *v17; // x20
  Il2CppObject *Instance; // x20
  System_Action_object__o *v19; // x21

  v2 = this;
  if ( (byte_4B0579B & 1) == 0 )
  {
    sub_1BC3008(&System_Action_USSequencer__TypeInfo, method);
    sub_1BC3008(&Method_BattleDemoRootComponent_OnNoblePhantasmPlayComplete__, v3);
    sub_1BC3008(&BattlePerformance_TypeInfo, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v6);
    this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)sub_1BC3008(
                                                                         &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                         v7);
    byte_4B0579B = 1;
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
    v15 = BattlePerformance_TypeInfo;
    if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
      v15 = BattlePerformance_TypeInfo;
    }
    BattlePerformance__setupCameraFov(performance, v15->static_fields->DefaultFov, 0LL);
    v16 = _4__this->fields.performance;
    if ( !v16 )
      goto LABEL_20;
    this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)v16->fields.actorcamera;
    if ( !this )
      goto LABEL_20;
    this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)UnityEngine_Component__get_transform(
                                                                         (UnityEngine_Component_o *)this,
                                                                         0LL);
    v17 = this;
    if ( !byte_4AFBDB1 )
    {
      this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)sub_1BC3008(
                                                                           &UnityEngine_Vector3_TypeInfo,
                                                                           method);
      byte_4AFBDB1 = 1;
    }
    if ( !v17
      || (UnityEngine_Transform__set_localEulerAngles(
            (UnityEngine_Transform_o *)v17,
            UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
            0LL),
          (this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__maskFadein((CommonUI_o *)this, 1.0, 0LL, 0LL),
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__),
          v19 = (System_Action_object__o *)sub_1BC3254(System_Action_USSequencer__TypeInfo),
          System_Action_object____ctor(
            v19,
            (Il2CppObject *)_4__this,
            Method_BattleDemoRootComponent_OnNoblePhantasmPlayComplete__,
            0LL),
          !Instance) )
    {
LABEL_20:
      sub_1BC3264(this, method);
    }
    BattleSequenceManager__play((BattleSequenceManager_o *)Instance, 0, 1, (System_Action_USSequencer__o *)v19, 0LL);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v9 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v9, 0LL);
    v2->fields.__2__current = (Il2CppObject *)v9;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v2->fields.__2__current, (int32_t)v9, v10, v11);
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

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B05798 & 1) == 0 )
  {
    sub_1BC3008(&BattleDemoRootComponent___c_TypeInfo, v1);
    byte_4B05798 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(BattleDemoRootComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleDemoRootComponent___c_TypeInfo->static_fields->__9 = (struct BattleDemoRootComponent___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)BattleDemoRootComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
  if ( (byte_4B05799 & 1) == 0 )
  {
    sub_1BC3008(&ServantAssetLoadManager_TypeInfo, args);
    byte_4B05799 = 1;
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