void __fastcall BattleDemoRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418689D & 1) == 0 )
  {
    sub_B2C35C(&BattleDemoRootComponent_TypeInfo, v1);
    byte_418689D = 1;
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
  char *FieldMotion; // x0
  const MethodInfo *v24; // x2
  __int64 v25; // x8
  int32_t v26; // w25
  unsigned __int64 v27; // x24
  System_String_o *v28; // x19
  BattleDemoRootComponent_o *ServantIdByInfo; // x0
  int32_t v30; // w28
  const MethodInfo *v31; // x2
  int32_t LimitCountByInfo; // w0
  struct UnityEngine_GameObject_o *actorPrefab; // x19
  int32_t v34; // w21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x19
  Il2CppClass **v42; // x0
  UnityEngine_Transform_o *v43; // x21
  UnityEngine_Transform_o *transform; // x21
  int v45; // s0
  UnityEngine_Transform_o *v48; // x21
  int v49; // s0
  UnityEngine_Transform_o *v52; // x21
  int v53; // s0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **performance; // x1
  BattleActorControl_o *v63; // x19
  BattleServantData_o *v64; // x22
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v65; // x21
  int32_t v66; // w26
  UnityEngine_GameObject_o *v67; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *PlayerPopTr; // x0
  UnityEngine_GameObject_o *v70; // x21
  UnityEngine_GameObject_o *v71; // x0
  UnityEngine_Component_o *v72; // x21
  UnityEngine_GameObject_o *v73; // x0
  __int64 v74; // x0
  __int64 v75; // x0
  System_String_array *v76; // [xsp+0h] [xbp-80h]
  UnityEngine_GameObject_array *v77; // [xsp+8h] [xbp-78h]
  BattleFieldMotionComponent_o *v78; // [xsp+10h] [xbp-70h]
  System_String_o **m_Items; // [xsp+20h] [xbp-60h]
  int32_t value; // [xsp+2Ch] [xbp-54h]

  if ( (byte_418688E & 1) == 0 )
  {
    sub_B2C35C(&BattleServantData_TypeInfo, *(_QWORD *)&uniqueIdStart);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v10);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v11);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v12);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleFieldMotionComponent___, v13);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v15);
    sub_B2C35C(&StringLiteral_20221/*"limitCount"*/, v16);
    sub_B2C35C(&StringLiteral_22468/*"svtId"*/, v17);
    sub_B2C35C(&StringLiteral_19774/*"index"*/, v18);
    sub_B2C35C(&StringLiteral_23066/*"userSvtId"*/, v19);
    sub_B2C35C(&StringLiteral_22904/*"uniqueId"*/, v20);
    sub_B2C35C(&StringLiteral_15967/*"_ENEMY"*/, v21);
    sub_B2C35C(&StringLiteral_16030/*"_PLAYER"*/, v22);
    byte_418688E = 1;
  }
  FieldMotion = (char *)this->fields.FieldMotion;
  if ( !FieldMotion
    || (FieldMotion = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)FieldMotion, 0LL)) == 0LL
    || (FieldMotion = (char *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)FieldMotion,
                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleFieldMotionComponent___),
        !chrInfos) )
  {
LABEL_39:
    sub_B2C434(FieldMotion, *(_QWORD *)&uniqueIdStart);
  }
  v25 = *(_QWORD *)&chrInfos->max_length;
  if ( (int)v25 >= 1 )
  {
    v26 = uniqueIdStart;
    v27 = 0LL;
    m_Items = chrInfos->m_Items;
    v77 = actors;
    v78 = (BattleFieldMotionComponent_o *)FieldMotion;
    v76 = chrInfos;
    do
    {
      if ( v27 >= (unsigned int)v25 )
      {
LABEL_40:
        v74 = sub_B2C460(FieldMotion);
        sub_B2C400(v74, 0LL);
      }
      v28 = m_Items[v27];
      if ( v28 )
      {
        ServantIdByInfo = (BattleDemoRootComponent_o *)BattleDemoRootComponent__GetServantIdByInfo(
                                                         (BattleDemoRootComponent_o *)FieldMotion,
                                                         m_Items[v27],
                                                         v24);
        v30 = (int)ServantIdByInfo;
        LimitCountByInfo = BattleDemoRootComponent__GetLimitCountByInfo(ServantIdByInfo, v28, v31);
        actorPrefab = this->fields.actorPrefab;
        v34 = LimitCountByInfo;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        FieldMotion = (char *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                (UnityEngine_UI_Dropdown_DropdownItem_o *)actorPrefab,
                                (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !actors )
          goto LABEL_39;
        v41 = (System_Int32_array **)FieldMotion;
        if ( FieldMotion )
        {
          FieldMotion = (char *)sub_B2C41C(FieldMotion, actors->obj.klass->_1.element_class);
          if ( !FieldMotion )
          {
            v75 = sub_B2C454();
            sub_B2C400(v75, 0LL);
          }
        }
        if ( v26 - uniqueIdStart >= actors->max_length )
          goto LABEL_40;
        v42 = &actors->obj.klass + v26 - uniqueIdStart;
        v42[4] = (Il2CppClass *)v41;
        value = v34;
        sub_B2C2F8((BattleServantConfConponent_o *)(v42 + 4), v41, v35, v36, v37, v38, v39, v40);
        if ( !v41 )
          goto LABEL_39;
        FieldMotion = (char *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v41, 0LL);
        if ( !this->fields.Field )
          goto LABEL_39;
        v43 = (UnityEngine_Transform_o *)FieldMotion;
        FieldMotion = (char *)UnityEngine_GameObject__get_transform(this->fields.Field, 0LL);
        if ( !v43 )
          goto LABEL_39;
        UnityEngine_Transform__set_parent(v43, (UnityEngine_Transform_o *)FieldMotion, 0LL);
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v41, 0LL);
        *(UnityEngine_Vector3_o *)&v45 = UnityEngine_Vector3__get_zero(0LL);
        if ( !transform )
          goto LABEL_39;
        UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v45, 0LL);
        v48 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v41, 0LL);
        *(UnityEngine_Vector3_o *)&v49 = UnityEngine_Vector3__get_zero(0LL);
        if ( !v48 )
          goto LABEL_39;
        UnityEngine_Transform__set_localEulerAngles(v48, *(UnityEngine_Vector3_o *)&v49, 0LL);
        v52 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v41, 0LL);
        *(UnityEngine_Vector3_o *)&v53 = UnityEngine_Vector3__get_one(0LL);
        if ( !v52 )
          goto LABEL_39;
        UnityEngine_Transform__set_localScale(v52, *(UnityEngine_Vector3_o *)&v53, 0LL);
        FieldMotion = (char *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)v41,
                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !FieldMotion )
          goto LABEL_39;
        performance = (System_Int32_array **)this->fields.performance;
        v63 = (BattleActorControl_o *)FieldMotion;
        *((_QWORD *)FieldMotion + 16) = performance;
        sub_B2C2F8((BattleServantConfConponent_o *)(FieldMotion + 128), performance, v56, v57, v58, v59, v60, v61);
        v64 = (BattleServantData_o *)sub_B2C42C(BattleServantData_TypeInfo);
        BattleServantData___ctor(v64, 0LL);
        v65 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__int__TypeInfo);
        System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
          v65,
          (const MethodInfo_2DA96B0 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
        if ( !v65 )
          goto LABEL_39;
        System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
          v65,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_19774/*"index"*/,
          v26,
          (const MethodInfo_2DAA23C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
          v65,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22904/*"uniqueId"*/,
          v26,
          (const MethodInfo_2DAA23C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
          v65,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_23066/*"userSvtId"*/,
          v26,
          (const MethodInfo_2DAA23C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
          v65,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22468/*"svtId"*/,
          v30,
          (const MethodInfo_2DAA23C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
          v65,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_20221/*"limitCount"*/,
          value,
          (const MethodInfo_2DAA23C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        if ( !v64 )
          goto LABEL_39;
        BattleServantData__SetFakeData(v64, (System_Collections_Generic_Dictionary_string__int__o *)v65, 0LL);
        v66 = v26 - uniqueIdStart;
        if ( isPlayer )
        {
          BattleActorControl__setTypePlayer(v63, 0LL);
          BattleActorControl__setServantData(v63, v64, 0LL);
          BattleActorControl__setDirLeft(v63, 0LL);
          FieldMotion = (char *)this->fields.actorCamera;
          if ( !FieldMotion )
            goto LABEL_39;
          FieldMotion = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)FieldMotion, 0LL);
          chrInfos = v76;
          if ( !this->fields.CameraFsm )
            goto LABEL_39;
          v67 = (UnityEngine_GameObject_o *)FieldMotion;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.CameraFsm, 0LL);
          BattleActorControl__setMotionListForDemo(
            v63,
            (System_String_o *)StringLiteral_16030/*"_PLAYER"*/,
            v67,
            gameObject,
            this->fields.CommonMotionPrefab,
            0LL);
          actors = v77;
          if ( !v78 )
            goto LABEL_39;
          PlayerPopTr = BattleFieldMotionComponent__getPlayerPopTr(v78, v66, 0LL);
        }
        else
        {
          BattleActorControl__setTypeEnemy(v63, 0LL);
          BattleActorControl__setServantData(v63, v64, 0LL);
          BattleActorControl__setDirRight(v63, 0LL);
          FieldMotion = (char *)this->fields.actorCamera;
          if ( !FieldMotion )
            goto LABEL_39;
          FieldMotion = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)FieldMotion, 0LL);
          chrInfos = v76;
          if ( !this->fields.CameraFsm )
            goto LABEL_39;
          v70 = (UnityEngine_GameObject_o *)FieldMotion;
          v71 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.CameraFsm, 0LL);
          BattleActorControl__setMotionListForDemo(
            v63,
            (System_String_o *)StringLiteral_15967/*"_ENEMY"*/,
            v70,
            v71,
            this->fields.CommonMotionPrefab,
            0LL);
          actors = v77;
          if ( !v78 )
            goto LABEL_39;
          PlayerPopTr = BattleFieldMotionComponent__getEnemyPopPoint(v78, v66, 0LL);
        }
        v72 = (UnityEngine_Component_o *)PlayerPopTr;
        BattleActorControl__setCamera(v63, this->fields.actorCamera, 0LL);
        if ( !v72 )
          goto LABEL_39;
        v73 = UnityEngine_Component__get_gameObject(v72, 0LL);
        BattleActorControl__setTargetObject(v63, v73, 0LL);
        ++v26;
      }
      LODWORD(v25) = chrInfos->max_length;
      ++v27;
    }
    while ( (__int64)v27 < (int)v25 );
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
  System_Int32_array **v11; // x0
  struct UnityEngine_GameObject_array **p_PlayerActorList; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct System_String_array *EnemyList; // x8
  System_Int32_array **v20; // x0
  struct UnityEngine_GameObject_array **p_EnemyActorList; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct BattlePerformance_o *performance; // x8
  System_Int32_array **PlayerActorList; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct BattlePerformance_o *v42; // x8
  System_Int32_array **EnemyActorList; // x1
  const MethodInfo *v44; // x5
  const MethodInfo *v45; // x5
  struct UnityEngine_GameObject_array *v46; // x8
  unsigned __int64 v47; // x24
  HutongGames_PlayMaker_FsmVariables_o *v48; // x22
  System_String_o *v49; // x0
  struct UnityEngine_GameObject_array *v50; // x8
  struct UnityEngine_GameObject_array *v51; // x8
  unsigned __int64 v52; // x23
  signed __int64 max_length; // x24
  HutongGames_PlayMaker_FsmVariables_o *v54; // x21
  System_String_o *v55; // x0
  struct UnityEngine_GameObject_array *v56; // x8
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct System_String_array *CameraFsm; // x1
  struct UnityEngine_GameObject_array *v64; // x22
  int v65; // w9
  int v66; // w8
  UnityEngine_Object_o *v67; // x21
  struct UnityEngine_GameObject_array *v68; // x21
  int v69; // w9
  int v70; // w8
  UnityEngine_Object_o *v71; // x20
  __int64 v72; // x0
  int v73; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_418688D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_GameObject___TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_8799/*"MOTION_ENTRY"*/, v5);
    sub_B2C35C(&StringLiteral_5502/*"ENEMY"*/, v6);
    sub_B2C35C(&StringLiteral_3478/*"CameraFsm"*/, v7);
    sub_B2C35C(&StringLiteral_10447/*"PLAYER"*/, v8);
    this = (BattleDemoRootComponent_o *)sub_B2C35C(&StringLiteral_5488/*"END_NP"*/, v9);
    byte_418688D = 1;
  }
  v73 = 0;
  PlayerList = v2->fields.PlayerList;
  if ( !PlayerList )
    goto LABEL_57;
  v11 = (System_Int32_array **)sub_B2C374(UnityEngine_GameObject___TypeInfo, PlayerList->max_length);
  v2->fields.PlayerActorList = (struct UnityEngine_GameObject_array *)v11;
  p_PlayerActorList = &v2->fields.PlayerActorList;
  sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.PlayerActorList, v11, v13, v14, v15, v16, v17, v18);
  EnemyList = v2->fields.EnemyList;
  if ( !EnemyList )
    goto LABEL_57;
  v20 = (System_Int32_array **)sub_B2C374(UnityEngine_GameObject___TypeInfo, EnemyList->max_length);
  v2->fields.EnemyActorList = (struct UnityEngine_GameObject_array *)v20;
  p_EnemyActorList = &v2->fields.EnemyActorList;
  sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.EnemyActorList, v20, v22, v23, v24, v25, v26, v27);
  performance = v2->fields.performance;
  if ( !performance )
    goto LABEL_57;
  PlayerActorList = (System_Int32_array **)v2->fields.PlayerActorList;
  performance->fields.p_actorlist = (struct UnityEngine_GameObject_array *)PlayerActorList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&performance->fields.p_actorlist,
    PlayerActorList,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v42 = v2->fields.performance;
  if ( !v42 )
    goto LABEL_57;
  EnemyActorList = (System_Int32_array **)v2->fields.EnemyActorList;
  v42->fields.e_actorlist = (struct UnityEngine_GameObject_array *)EnemyActorList;
  sub_B2C2F8((BattleServantConfConponent_o *)&v42->fields.e_actorlist, EnemyActorList, v36, v37, v38, v39, v40, v41);
  BattleDemoRootComponent__CreateActorObject(v2, 1, v2->fields.PlayerList, v2->fields.PlayerActorList, 1, v44);
  BattleDemoRootComponent__CreateActorObject(v2, 4, v2->fields.EnemyList, v2->fields.EnemyActorList, 0, v45);
  v46 = v2->fields.PlayerActorList;
  if ( !v46 )
    goto LABEL_57;
  v47 = 0LL;
  while ( (__int64)v47 < (int)v46->max_length )
  {
    this = (BattleDemoRootComponent_o *)v2->fields.FieldMotion;
    if ( this )
    {
      this = (BattleDemoRootComponent_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
      if ( this )
      {
        v48 = *(HutongGames_PlayMaker_FsmVariables_o **)&this->fields.DemoSequenceServantId;
        v73 = v47 + 1;
        v49 = System_Int32__ToString((int32_t)&v73, 0LL);
        this = (BattleDemoRootComponent_o *)System_String__Concat_44305532(
                                              (System_String_o *)StringLiteral_10447/*"PLAYER"*/,
                                              v49,
                                              0LL);
        if ( v48 )
        {
          this = (BattleDemoRootComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                                v48,
                                                (System_String_o *)this,
                                                0LL);
          v50 = *p_PlayerActorList;
          if ( *p_PlayerActorList )
          {
            if ( v47 >= v50->max_length )
              goto LABEL_58;
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
    goto LABEL_57;
  }
  v51 = *p_EnemyActorList;
  if ( !*p_EnemyActorList )
    goto LABEL_57;
  v52 = 0LL;
  while ( 1 )
  {
    this = (BattleDemoRootComponent_o *)v2->fields.FieldMotion;
    if ( !this )
      goto LABEL_57;
    max_length = (int)v51->max_length;
    this = (BattleDemoRootComponent_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
    if ( !this )
      goto LABEL_57;
    v54 = *(HutongGames_PlayMaker_FsmVariables_o **)&this->fields.DemoSequenceServantId;
    if ( (__int64)v52 >= max_length )
      break;
    v73 = v52 + 1;
    v55 = System_Int32__ToString((int32_t)&v73, 0LL);
    this = (BattleDemoRootComponent_o *)System_String__Concat_44305532((System_String_o *)StringLiteral_5502/*"ENEMY"*/, v55, 0LL);
    if ( v54 )
    {
      this = (BattleDemoRootComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                            v54,
                                            (System_String_o *)this,
                                            0LL);
      v56 = *p_EnemyActorList;
      if ( *p_EnemyActorList )
      {
        if ( v52 >= v56->max_length )
          goto LABEL_58;
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
    goto LABEL_57;
  }
  if ( !v54 )
    goto LABEL_57;
  this = (BattleDemoRootComponent_o *)HutongGames_PlayMaker_FsmVariables__GetFsmObject(
                                        *(HutongGames_PlayMaker_FsmVariables_o **)&this->fields.DemoSequenceServantId,
                                        (System_String_o *)StringLiteral_3478/*"CameraFsm"*/,
                                        0LL);
  if ( !this )
    goto LABEL_57;
  CameraFsm = (struct System_String_array *)v2->fields.CameraFsm;
  this->fields.EnemyList = CameraFsm;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.EnemyList,
    (System_Int32_array **)CameraFsm,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  v64 = v2->fields.PlayerActorList;
  v73 = 0;
  if ( !v64 )
    goto LABEL_57;
  v65 = v64->max_length;
  if ( v65 >= 1 )
  {
    v66 = 0;
    while ( v66 < (unsigned int)v65 )
    {
      v67 = (UnityEngine_Object_o *)v64->m_Items[v66];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleDemoRootComponent_o *)UnityEngine_Object__op_Equality(v67, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v67 )
          goto LABEL_57;
        this = (BattleDemoRootComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)v67,
                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !this )
          goto LABEL_57;
        BattleActorControl__playMotion((BattleActorControl_o *)this, (System_String_o *)StringLiteral_8799/*"MOTION_ENTRY"*/, 0LL);
      }
      v66 = v73 + 1;
      v73 = v66;
      v65 = v64->max_length;
      if ( v66 >= v65 )
        goto LABEL_43;
    }
LABEL_58:
    v72 = sub_B2C460(this);
    sub_B2C400(v72, 0LL);
  }
LABEL_43:
  v68 = *p_EnemyActorList;
  v73 = 0;
  if ( !v68 )
    goto LABEL_57;
  v69 = v68->max_length;
  if ( v69 >= 1 )
  {
    v70 = 0;
    while ( v70 < (unsigned int)v69 )
    {
      v71 = (UnityEngine_Object_o *)v68->m_Items[v70];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleDemoRootComponent_o *)UnityEngine_Object__op_Equality(v71, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v71 )
          goto LABEL_57;
        this = (BattleDemoRootComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)v71,
                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !this )
          goto LABEL_57;
        BattleActorControl__playMotion((BattleActorControl_o *)this, (System_String_o *)StringLiteral_8799/*"MOTION_ENTRY"*/, 0LL);
      }
      v70 = v73 + 1;
      v73 = v70;
      v69 = v68->max_length;
      if ( v70 >= v69 )
        goto LABEL_55;
    }
    goto LABEL_58;
  }
LABEL_55:
  this = (BattleDemoRootComponent_o *)v2->fields.FieldMotion;
  if ( !this )
LABEL_57:
    sub_B2C434(this, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_5488/*"END_NP"*/, 0LL);
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
  struct System_String_o *name; // x22
  int32_t actMax; // w20
  int32_t birthDay_high; // w21
  UserGameEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_418689B & 1) == 0 )
  {
    sub_B2C35C(&BattleData_TypeInfo, result);
    sub_B2C35C(&Method_DataManager_GetMaster_BattleMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B2C35C(&StringLiteral_11079/*"REQUEST_OK"*/, v10);
    this = (BattleDemoRootComponent_o *)sub_B2C35C(&StringLiteral_21068/*"ng"*/, v11);
    byte_418689B = 1;
  }
  entity = 0LL;
  if ( !result )
    goto LABEL_21;
  if ( System_String__Equals_44292872(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
  {
    this = (BattleDemoRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
      this = (BattleDemoRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( this )
      {
        AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)this, 34, 1, 0LL, 0, 0LL);
        return;
      }
    }
    goto LABEL_21;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (BattleDemoRootComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !this )
    goto LABEL_21;
  this = (BattleDemoRootComponent_o *)DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
                                        (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)this,
                                        &entity,
                                        (const MethodInfo_24E43E0 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_21;
    name = entity->fields.name;
    birthDay_high = HIDWORD(entity->fields.birthDay);
    actMax = entity->fields.actMax;
    if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
    BattleData__setResumeBattleId((int64_t)name, birthDay_high, actMax, 0LL);
  }
  this = (BattleDemoRootComponent_o *)v4->fields.myFSM;
  if ( !this )
LABEL_21:
    sub_B2C434(this, result);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11079/*"REQUEST_OK"*/, 0LL);
}


int32_t __fastcall BattleDemoRootComponent__GetLimitCountByInfo(
        BattleDemoRootComponent_o *this,
        System_String_o *info,
        const MethodInfo *method)
{
  System_String_array *v4; // x0
  System_String_array *v5; // x1
  __int64 v7; // x0

  if ( (byte_4186889 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, info);
    byte_4186889 = 1;
  }
  v4 = (System_String_array *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_9;
  v5 = v4;
  if ( !v4->max_length )
    goto LABEL_10;
  LOWORD(v4->m_Items[0]) = 58;
  if ( !info || (v4 = System_String__Split(info, (System_Char_array *)v4, 0LL)) == 0LL )
LABEL_9:
    sub_B2C434(v4, v5);
  if ( v4->max_length <= 1 )
  {
LABEL_10:
    v7 = sub_B2C460(v4);
    sub_B2C400(v7, 0LL);
  }
  return System_Int32__Parse(v4->m_Items[1], 0LL);
}


int32_t __fastcall BattleDemoRootComponent__GetServantIdByInfo(
        BattleDemoRootComponent_o *this,
        System_String_o *info,
        const MethodInfo *method)
{
  System_String_array *v4; // x0
  System_String_array *v5; // x1
  __int64 v7; // x0

  if ( (byte_4186888 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, info);
    byte_4186888 = 1;
  }
  v4 = (System_String_array *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_9;
  v5 = v4;
  if ( !v4->max_length )
    goto LABEL_10;
  LOWORD(v4->m_Items[0]) = 58;
  if ( !info || (v4 = System_String__Split(info, (System_Char_array *)v4, 0LL)) == 0LL )
LABEL_9:
    sub_B2C434(v4, v5);
  if ( !v4->max_length )
  {
LABEL_10:
    v7 = sub_B2C460(v4);
    sub_B2C400(v7, 0LL);
  }
  return System_Int32__Parse(v4->m_Items[0], 0LL);
}


bool __fastcall BattleDemoRootComponent__GoToBattleEndTalk(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x21
  __int64 v3; // x1
  __int64 v4; // x1
  _DWORD *monitor; // x8
  int32_t v6; // w19
  int32_t v7; // w20
  ScriptManager_CallbackFunc_o *v8; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4186898 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleDemoRootComponent_OnBattleEndScript__, method);
    sub_B2C35C(&ScriptManager_CallbackFunc_TypeInfo, v3);
    this = (BattleDemoRootComponent_o *)sub_B2C35C(&ScriptManager_TypeInfo, v4);
    byte_4186898 = 1;
  }
  monitor = v2[13].monitor;
  if ( !monitor )
    sub_B2C434(this, method);
  v6 = monitor[5];
  v7 = monitor[6];
  v8 = (ScriptManager_CallbackFunc_o *)sub_B2C42C(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v8, v2, Method_BattleDemoRootComponent_OnBattleEndScript__, 0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayBattleEnd(v6, v7, 1, v8, 0, -1, 0LL);
  return 1;
}


bool __fastcall BattleDemoRootComponent__GoToBattleStartTalk(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  _DWORD *monitor; // x8
  int32_t v6; // w20
  int32_t v7; // w21
  ScriptManager_CallbackFunc_o *v8; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4186896 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleDemoRootComponent_OnBattleStartScript__, method);
    sub_B2C35C(&ScriptManager_CallbackFunc_TypeInfo, v3);
    this = (BattleDemoRootComponent_o *)sub_B2C35C(&ScriptManager_TypeInfo, v4);
    byte_4186896 = 1;
  }
  monitor = v2[13].monitor;
  if ( !monitor )
    sub_B2C434(this, method);
  v6 = monitor[5];
  v7 = monitor[6];
  v8 = (ScriptManager_CallbackFunc_o *)sub_B2C42C(ScriptManager_CallbackFunc_TypeInfo);
  ScriptManager_CallbackFunc___ctor(v8, v2, Method_BattleDemoRootComponent_OnBattleStartScript__, 0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayBattleStart2_17618924(v6, v7, v8, 0, 0LL);
  return 1;
}


bool __fastcall BattleDemoRootComponent__GoToTerminal(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  AvalonSceneManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_418689A & 1) == 0 )
  {
    sub_B2C35C(&ScriptManager_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v3);
    byte_418689A = 1;
  }
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__DeleteTalkResumeInfo(0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C70 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v4);
    byte_4183C70 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v7);
  AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0LL, 0, 0LL);
  return 1;
}


void __fastcall BattleDemoRootComponent__InitializeBattleDemo(
        BattleDemoRootComponent_o *this,
        System_String_o *demoInfo,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_Action_o *v8; // x20
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
  __int64 v29; // x10
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v30; // x21
  struct System_String_array *v31; // x0
  struct System_String_array **p_PlayerList; // x23
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x0
  unsigned int **v40; // x22
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  unsigned __int64 v47; // x28
  __int64 v48; // x20
  System_String_o *v49; // x0
  System_Xml_XmlQualifiedName_o *Item; // x0
  __int64 v51; // x1
  System_Type_o *v52; // x24
  unsigned int *v53; // x25
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x24
  __int64 v61; // x8
  __int64 v62; // x19
  unsigned __int64 v63; // x24
  System_String_o *v64; // x0
  System_Type_o *v65; // x23
  unsigned int *v66; // x25
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v74; // x23
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  unsigned int v81; // w19
  System_String_o *v82; // x0
  System_Type_o *v83; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *CueSheetList; // x23
  System_Xml_XmlQualifiedName_o *v85; // x8
  System_Int32_array **v86; // x0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v93; // x20
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  const MethodInfo *v100; // x1
  System_Collections_IEnumerator_o *v101; // x0
  __int64 v102; // x0
  __int64 v103; // x0
  BattleDemoRootComponent_o *v104; // x0
  const MethodInfo *v105; // x1
  struct System_Action_o *v106; // [xsp+8h] [xbp-68h]
  BattleDemoRootComponent_o *v107; // [xsp+10h] [xbp-60h]
  unsigned int v108; // [xsp+1Ch] [xbp-54h] BYREF

  v8 = callback;
  if ( (byte_4186887 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, demoInfo);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v11);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v12);
    sub_B2C35C(&long_TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantAssetArgs___ctor__, v16);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_B2C35C(&System_Collections_Generic_List_ServantAssetArgs__TypeInfo, v18);
    sub_B2C35C(&string___TypeInfo, v19);
    sub_B2C35C(&string_TypeInfo, v20);
    sub_B2C35C(&StringLiteral_5993/*"Enemy"*/, v21);
    sub_B2C35C(&StringLiteral_12683/*"Sequence"*/, v22);
    sub_B2C35C(&StringLiteral_12925/*"Sound"*/, v23);
    sub_B2C35C(&StringLiteral_2802/*"Bg"*/, v24);
    sub_B2C35C(&StringLiteral_10698/*"Player"*/, v25);
    sub_B2C35C(&StringLiteral_2809/*"Bgm"*/, v26);
    sub_B2C35C(&StringLiteral_2808/*"BgType"*/, v27);
    byte_4186887 = 1;
  }
  v108 = 0;
  if ( !demoInfo )
    goto LABEL_47;
  v28 = MiniJSON_Json__Deserialize(demoInfo, 0LL);
  v106 = v8;
  if ( v28
    && (v29 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1),
        *(&v28->klass->_2.bitflags2 + 1) >= (unsigned int)v29) )
  {
    if ( (System_Collections_Generic_Dictionary_string__object__c *)v28->klass->_2.typeHierarchy[v29 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
      v30 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v28;
    else
      v30 = 0LL;
  }
  else
  {
    v30 = 0LL;
  }
  v31 = (struct System_String_array *)sub_B2C374(string___TypeInfo, 3LL);
  v107 = this;
  this->fields.PlayerList = v31;
  p_PlayerList = &this->fields.PlayerList;
  sub_B2C2F8((BattleServantConfConponent_o *)p_PlayerList, (System_Int32_array **)v31, v33, v34, v35, v36, v37, v38);
  v39 = (System_Int32_array **)sub_B2C374(string___TypeInfo, 3LL);
  v40 = (unsigned int **)(p_PlayerList + 1);
  p_PlayerList[1] = (struct System_String_array *)v39;
  sub_B2C2F8((BattleServantConfConponent_o *)(p_PlayerList + 1), v39, v41, v42, v43, v44, v45, v46);
  v47 = -1LL;
  v48 = 8LL;
  do
  {
    v108 = v47 + 2;
    v49 = System_Int32__ToString((int32_t)&v108, 0LL);
    Item = (System_Xml_XmlQualifiedName_o *)System_String__Concat_44305532(
                                              (System_String_o *)StringLiteral_10698/*"Player"*/,
                                              v49,
                                              0LL);
    if ( !v30 )
      goto LABEL_48;
    v52 = (System_Type_o *)Item;
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v30,
           Item,
           (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v53 = (unsigned int *)*p_PlayerList;
      Item = (System_Xml_XmlQualifiedName_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                v30,
                                                v52,
                                                (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v53 )
        goto LABEL_48;
      v60 = (System_Int32_array **)Item;
      if ( Item )
      {
        if ( (System_String_c *)Item->klass != string_TypeInfo )
          goto LABEL_50;
        Item = (System_Xml_XmlQualifiedName_o *)sub_B2C41C(Item, *(_QWORD *)(*(_QWORD *)v53 + 64LL));
        if ( !Item )
          goto LABEL_51;
        if ( *v60 != (System_Int32_array *)string_TypeInfo )
        {
LABEL_50:
          sub_B2C728(v60);
LABEL_51:
          v103 = sub_B2C454();
          sub_B2C400(v103, 0LL);
        }
      }
      if ( v47 + 1 >= v53[6] )
      {
LABEL_49:
        v102 = sub_B2C460(Item);
        sub_B2C400(v102, 0LL);
      }
      *(_QWORD *)&v53[v48] = v60;
      sub_B2C2F8((BattleServantConfConponent_o *)&v53[v48], v60, v54, v55, v56, v57, v58, v59);
    }
    ++v47;
    v48 += 2LL;
  }
  while ( v47 < 2 );
  v61 = -1LL;
  v62 = 8LL;
  do
  {
    v63 = v61 + 1;
    v108 = v61 + 2;
    v64 = System_Int32__ToString((int32_t)&v108, 0LL);
    v65 = (System_Type_o *)System_String__Concat_44305532((System_String_o *)StringLiteral_5993/*"Enemy"*/, v64, 0LL);
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v30,
           (System_Xml_XmlQualifiedName_o *)v65,
           (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v66 = *v40;
      Item = (System_Xml_XmlQualifiedName_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                v30,
                                                v65,
                                                (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v66 )
        goto LABEL_48;
      v73 = (System_Int32_array **)Item;
      if ( Item )
      {
        if ( (System_String_c *)Item->klass != string_TypeInfo )
          goto LABEL_52;
        Item = (System_Xml_XmlQualifiedName_o *)sub_B2C41C(Item, *(_QWORD *)(*(_QWORD *)v66 + 64LL));
        if ( !Item )
          goto LABEL_51;
        if ( *v73 != (System_Int32_array *)string_TypeInfo )
        {
LABEL_52:
          sub_B2C728(v73);
          goto LABEL_53;
        }
      }
      if ( v63 >= v66[6] )
        goto LABEL_49;
      *(_QWORD *)&v66[v62] = v73;
      sub_B2C2F8((BattleServantConfConponent_o *)&v66[v62], v73, v67, v68, v69, v70, v71, v72);
    }
    v62 += 2LL;
    v61 = v63;
  }
  while ( v63 < 2 );
  v74 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v74,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  v107->fields.CueSheetList = (struct System_Collections_Generic_List_string__o *)v74;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v107->fields.CueSheetList,
    (System_Int32_array **)v74,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  v81 = -1;
  do
  {
    v108 = v81 + 2;
    v82 = System_Int32__ToString((int32_t)&v108, 0LL);
    v83 = (System_Type_o *)System_String__Concat_44305532((System_String_o *)StringLiteral_12925/*"Sound"*/, v82, 0LL);
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v30,
           (System_Xml_XmlQualifiedName_o *)v83,
           (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      CueSheetList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v107->fields.CueSheetList;
      Item = (System_Xml_XmlQualifiedName_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                v30,
                                                v83,
                                                (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !CueSheetList )
        goto LABEL_48;
      v85 = Item;
      if ( Item && (System_String_c *)Item->klass != string_TypeInfo )
        goto LABEL_53;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        CueSheetList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)Item,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
    }
    ++v81;
  }
  while ( v81 < 4 );
  Item = (System_Xml_XmlQualifiedName_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                            v30,
                                            (System_Type_o *)StringLiteral_2802/*"Bg"*/,
                                            (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_48;
  this = v107;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_54;
  v107->fields.BgId = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
  Item = (System_Xml_XmlQualifiedName_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                            v30,
                                            (System_Type_o *)StringLiteral_2808/*"BgType"*/,
                                            (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_48;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_54;
  v107->fields.BgType = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
  v86 = (System_Int32_array **)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                 v30,
                                 (System_Type_o *)StringLiteral_2809/*"Bgm"*/,
                                 (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v85 = (System_Xml_XmlQualifiedName_o *)v86;
  if ( v86 && *v86 != (System_Int32_array *)string_TypeInfo )
  {
LABEL_53:
    Item = v85;
    goto LABEL_54;
  }
  v107->fields.BgmName = (struct System_String_o *)v86;
  sub_B2C2F8((BattleServantConfConponent_o *)&v107->fields.BgmName, v86, v87, v88, v89, v90, v91, v92);
  Item = (System_Xml_XmlQualifiedName_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                            v30,
                                            (System_Type_o *)StringLiteral_12683/*"Sequence"*/,
                                            (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
LABEL_48:
    sub_B2C434(Item, v51);
  v8 = v106;
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v107->fields.DemoSequenceServantId = *(_QWORD *)j_il2cpp_object_unbox_0(Item);
LABEL_47:
    this->fields.InitializeCallback = v8;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.InitializeCallback,
      (System_Int32_array **)v8,
      (System_String_array **)callback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    v93 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantAssetArgs__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v93,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantAssetArgs___ctor__);
    this->fields.loadedAssetArgsList = (struct System_Collections_Generic_List_ServantAssetArgs__o *)v93;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.loadedAssetArgsList,
      (System_Int32_array **)v93,
      v94,
      v95,
      v96,
      v97,
      v98,
      v99);
    v101 = BattleDemoRootComponent__SetupBattleDemo(this, v100);
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v101, 0LL);
    return;
  }
LABEL_54:
  v104 = (BattleDemoRootComponent_o *)sub_B2C728(Item);
  BattleDemoRootComponent__ReleaseBattleDemo(v104, v105);
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
  System_String_o *v11; // x22
  BattleDemoRootComponent_o *ServantIdByInfo; // x0
  int32_t v13; // w21
  const MethodInfo *v14; // x2
  int32_t LimitCountByInfo; // w22
  int32_t uiRoot; // w24
  ServantAssetArgs_o *v17; // x23
  __int64 v18; // x0

  v4 = this;
  if ( (byte_418688F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitMaster___, chrlist);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantAssetArgs__Add__, v6);
    sub_B2C35C(&ServantAssetArgs_TypeInfo, v7);
    this = (BattleDemoRootComponent_o *)sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v8);
    byte_418688F = 1;
  }
  if ( !chrlist )
LABEL_20:
    sub_B2C434(this, chrlist);
  v9 = *(_QWORD *)&chrlist->max_length;
  if ( (int)v9 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v9; ++i )
    {
      if ( i >= (unsigned int)v9 )
      {
        v18 = sub_B2C460(this);
        sub_B2C400(v18, 0LL);
      }
      v11 = chrlist->m_Items[i];
      if ( v11 )
      {
        ServantIdByInfo = (BattleDemoRootComponent_o *)BattleDemoRootComponent__GetServantIdByInfo(
                                                         this,
                                                         chrlist->m_Items[i],
                                                         method);
        v13 = (int)ServantIdByInfo;
        LimitCountByInfo = BattleDemoRootComponent__GetLimitCountByInfo(ServantIdByInfo, v11, v14);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        this = (BattleDemoRootComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitMaster___);
        if ( !this )
          goto LABEL_20;
        this = (BattleDemoRootComponent_o *)ServantLimitMaster__GetEntity(
                                              (ServantLimitMaster_o *)this,
                                              v13,
                                              LimitCountByInfo,
                                              0LL);
        if ( !this )
          goto LABEL_20;
        uiRoot = (int32_t)this->fields.uiRoot;
        v17 = (ServantAssetArgs_o *)sub_B2C42C(ServantAssetArgs_TypeInfo);
        ServantAssetArgs___ctor_25318216(v17, v13, LimitCountByInfo, 0, 0, uiRoot, 0LL);
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        ServantAssetLoadManager__PreloadAssetsByArgs(v17, 0, 0LL);
        this = (BattleDemoRootComponent_o *)v4->fields.loadedAssetArgsList;
        if ( !this )
          goto LABEL_20;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantAssetArgs__Add__);
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
  SoundManager_o *Instance; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_418688A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_BattleDemoRootComponent__LoadCueSheet_b__28_0__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v8);
    byte_418688A = 1;
  }
  memset(&v15, 0, sizeof(v15));
  CueSheetList = this->fields.CueSheetList;
  if ( CueSheetList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CueSheetList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v15.fields.current;
      ++this->fields.CueSheetCount;
      Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_BattleDemoRootComponent__LoadCueSheet_b__28_0__, 0LL);
      if ( !Instance )
        sub_B2C434(v13, v14);
      SoundManager__LoadAudioAssetStorage(Instance, (System_String_o *)current, v12, 1, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
}


void __fastcall BattleDemoRootComponent__OnBattleDemoLoadComplete(
        BattleDemoRootComponent_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_4186893 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, obj);
    byte_4186893 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance
    || (BattleSequenceManager__setup((BattleSequenceManager_o *)Instance, 0LL, 1, 0LL, 0LL),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__)) == 0LL) )
  {
    sub_B2C434(Instance, v5);
  }
  BattleSequenceManager__SetupDemoActor(
    (BattleSequenceManager_o *)Instance,
    this->fields.PlayerActorList,
    this->fields.EnemyActorList,
    0LL);
  v7 = BattleDemoRootComponent__WaitToNoblePhantasmPlay(this, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
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
  __int64 v6; // x1
  _DWORD *monitor; // x8
  int32_t v8; // w20
  int32_t v9; // w21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v10; // x22

  v3 = (Il2CppObject *)this;
  if ( (byte_4186899 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_string___ctor__, isExit);
    sub_B2C35C(&System_Action_string__TypeInfo, v4);
    sub_B2C35C(&Method_BattleDemoRootComponent__OnBattleEndScript_b__47_0__, v5);
    this = (BattleDemoRootComponent_o *)sub_B2C35C(&ScriptManager_TypeInfo, v6);
    byte_4186899 = 1;
  }
  monitor = v3[13].monitor;
  if ( !monitor )
    sub_B2C434(this, isExit);
  v8 = monitor[5];
  v9 = monitor[6];
  v10 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_string__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v10,
    v3,
    Method_BattleDemoRootComponent__OnBattleEndScript_b__47_0__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_string___ctor__);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__LoadBattleEndGameDemo(v8, v9, 0, (System_Action_string__o *)v10, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDemoRootComponent__OnBattleStartScript(
        BattleDemoRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4186897 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6883/*"GOTO_BATTLE"*/, isExit);
    byte_4186897 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B2C434(0LL, isExit);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_6883/*"GOTO_BATTLE"*/, 0LL);
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
  __int64 v22; // x1
  BattleFBXComponent_c *v23; // x0
  void *BattleDemoCallback; // x0
  struct UnityEngine_GameObject_array *PlayerActorList; // x21
  __int64 v26; // x8
  unsigned __int64 v27; // x22
  UnityEngine_Object_o *v28; // x20
  struct UnityEngine_GameObject_array *EnemyActorList; // x21
  __int64 v30; // x8
  unsigned __int64 v31; // x22
  UnityEngine_Object_o *v32; // x20
  struct System_Collections_Generic_List_ServantAssetArgs__o *loadedAssetArgsList; // x20
  struct BattleDemoRootComponent___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__43_0; // x21
  Il2CppObject *v36; // x22
  struct BattleDemoRootComponent___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  const MethodInfo *v44; // x1
  BattleDemoRootComponent_c *v45; // x0
  float BGM_FADEOUT_TIME; // s8
  __int64 *v47; // x8
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  _BOOL4 battleBefore; // w9
  _BOOL4 isBefore; // w8
  __int64 v51; // x0

  if ( (byte_4186895 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_ServantAssetArgs___ctor__, seq);
    sub_B2C35C(&System_Action_ServantAssetArgs__TypeInfo, v4);
    sub_B2C35C(&AssetManager_TypeInfo, v5);
    sub_B2C35C(&BattleDemoRootComponent_TypeInfo, v6);
    sub_B2C35C(&BattleFBXComponent_TypeInfo, v7);
    sub_B2C35C(&System_GC_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantAssetArgs__ForEach__, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B2C35C(&SoundManager_TypeInfo, v15);
    sub_B2C35C(&Method_BattleDemoRootComponent___c__OnNoblePhantasmPlayComplete_b__43_0__, v16);
    sub_B2C35C(&BattleDemoRootComponent___c_TypeInfo, v17);
    sub_B2C35C(&StringLiteral_6887/*"GOTO_TERMINAL"*/, v18);
    sub_B2C35C(&StringLiteral_6885/*"GOTO_BATTLESTARTTALK"*/, v19);
    sub_B2C35C(&StringLiteral_6884/*"GOTO_BATTLENDTALK"*/, v20);
    sub_B2C35C(&StringLiteral_2755/*"Battle/Common"*/, v21);
    sub_B2C35C(&StringLiteral_5480/*"END_DEMO"*/, v22);
    byte_4186895 = 1;
  }
  if ( this->fields.BattleDemoCallback )
  {
    v23 = BattleFBXComponent_TypeInfo;
    if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
      v23 = BattleFBXComponent_TypeInfo;
    }
    v23->static_fields->EnableEvent = 1;
    BattleDemoCallback = this->fields.BattleDemoCallback;
    if ( !BattleDemoCallback )
      goto LABEL_79;
    System_Action__Invoke((System_Action_o *)BattleDemoCallback, 0LL);
  }
  BattleDemoCallback = this->fields.performance;
  if ( !BattleDemoCallback )
    goto LABEL_79;
  BattlePerformance__setupCameraFov((BattlePerformance_o *)BattleDemoCallback, this->fields.backupFov, 0LL);
  PlayerActorList = this->fields.PlayerActorList;
  if ( !PlayerActorList )
    goto LABEL_79;
  v26 = *(_QWORD *)&PlayerActorList->max_length;
  if ( (int)v26 >= 1 )
  {
    v27 = 0LL;
    while ( v27 < (unsigned int)v26 )
    {
      v28 = (UnityEngine_Object_o *)PlayerActorList->m_Items[v27];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      BattleDemoCallback = (void *)UnityEngine_Object__op_Inequality(v28, 0LL, 0LL);
      if ( ((unsigned __int8)BattleDemoCallback & 1) != 0 )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35314896(v28, 0LL);
      }
      LODWORD(v26) = PlayerActorList->max_length;
      if ( (__int64)++v27 >= (int)v26 )
        goto LABEL_23;
    }
LABEL_78:
    v51 = sub_B2C460(BattleDemoCallback);
    sub_B2C400(v51, 0LL);
  }
LABEL_23:
  EnemyActorList = this->fields.EnemyActorList;
  if ( !EnemyActorList )
    goto LABEL_79;
  v30 = *(_QWORD *)&EnemyActorList->max_length;
  if ( (int)v30 >= 1 )
  {
    v31 = 0LL;
    while ( v31 < (unsigned int)v30 )
    {
      v32 = (UnityEngine_Object_o *)EnemyActorList->m_Items[v31];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      BattleDemoCallback = (void *)UnityEngine_Object__op_Inequality(v32, 0LL, 0LL);
      if ( ((unsigned __int8)BattleDemoCallback & 1) != 0 )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35314896(v32, 0LL);
      }
      LODWORD(v30) = EnemyActorList->max_length;
      if ( (__int64)++v31 >= (int)v30 )
        goto LABEL_36;
    }
    goto LABEL_78;
  }
LABEL_36:
  loadedAssetArgsList = this->fields.loadedAssetArgsList;
  BattleDemoCallback = BattleDemoRootComponent___c_TypeInfo;
  if ( (BYTE3(BattleDemoRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDemoRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDemoRootComponent___c_TypeInfo);
    BattleDemoCallback = BattleDemoRootComponent___c_TypeInfo;
  }
  static_fields = (struct BattleDemoRootComponent___c_StaticFields *)*((_QWORD *)BattleDemoCallback + 23);
  _9__43_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__43_0;
  if ( !_9__43_0 )
  {
    if ( (*((_BYTE *)BattleDemoCallback + 307) & 4) != 0 && !*((_DWORD *)BattleDemoCallback + 56) )
    {
      j_il2cpp_runtime_class_init_0(BattleDemoCallback);
      static_fields = BattleDemoRootComponent___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)static_fields->__9;
    _9__43_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_ServantAssetArgs__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__43_0,
      v36,
      Method_BattleDemoRootComponent___c__OnNoblePhantasmPlayComplete_b__43_0__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_ServantAssetArgs___ctor__);
    v37 = BattleDemoRootComponent___c_TypeInfo->static_fields;
    v37->__9__43_0 = (struct System_Action_ServantAssetArgs__o *)_9__43_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v37->__9__43_0,
      (System_Int32_array **)_9__43_0,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  if ( !loadedAssetArgsList )
    goto LABEL_79;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)loadedAssetArgsList,
    (System_Action_T__o *)_9__43_0,
    (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_ServantAssetArgs__ForEach__);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_2755/*"Battle/Common"*/, 0LL);
  BattleDemoCallback = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !BattleDemoCallback )
    goto LABEL_79;
  ServantAssetLoadManager__releaseNoblePhantasm((ServantAssetLoadManager_o *)BattleDemoCallback, 0LL);
  BattleDemoRootComponent__ReleaseCueSheet(this, v44);
  v45 = BattleDemoRootComponent_TypeInfo;
  if ( (BYTE3(BattleDemoRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDemoRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDemoRootComponent_TypeInfo);
    v45 = BattleDemoRootComponent_TypeInfo;
  }
  BGM_FADEOUT_TIME = v45->static_fields->BGM_FADEOUT_TIME;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__fadeoutBgm(BGM_FADEOUT_TIME, 0LL);
  BattleDemoCallback = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !BattleDemoCallback )
    goto LABEL_79;
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)BattleDemoCallback, 0LL, 0LL);
  if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_43492776(0LL);
  BattleDemoCallback = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !BattleDemoCallback )
LABEL_79:
    sub_B2C434(BattleDemoCallback, seq);
  CommonUI__maskFadeout((CommonUI_o *)BattleDemoCallback, 1, 1.0, 0LL, 0LL);
  if ( !this->fields.battleSetupInfo )
  {
    BattleDemoCallback = this->fields.myFSM;
    if ( !BattleDemoCallback )
      goto LABEL_79;
    v47 = &StringLiteral_5480/*"END_DEMO"*/;
LABEL_67:
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)BattleDemoCallback, (System_String_o *)*v47, 0LL);
    return;
  }
  BattleDemoCallback = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !BattleDemoCallback )
    goto LABEL_79;
  BattleDemoCallback = (void *)AvalonSceneManager__IsStackScene((AvalonSceneManager_o *)BattleDemoCallback, 0LL);
  if ( ((unsigned __int8)BattleDemoCallback & 1) != 0 )
  {
    BattleDemoCallback = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( BattleDemoCallback )
    {
      AvalonSceneManager__popSceneRefresh(
        (AvalonSceneManager_o *)BattleDemoCallback,
        1,
        (Il2CppObject *)this->fields.battleSetupInfo,
        0LL);
      return;
    }
    goto LABEL_79;
  }
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    goto LABEL_79;
  battleBefore = battleSetupInfo->fields.battleBefore;
  isBefore = battleSetupInfo->fields.isBefore;
  if ( !battleBefore )
  {
    BattleDemoCallback = this->fields.myFSM;
    if ( !BattleDemoCallback )
      goto LABEL_79;
    if ( isBefore )
      v47 = &StringLiteral_6884/*"GOTO_BATTLENDTALK"*/;
    else
      v47 = &StringLiteral_6887/*"GOTO_TERMINAL"*/;
    goto LABEL_67;
  }
  if ( !isBefore )
  {
    BattleDemoCallback = this->fields.myFSM;
    if ( !BattleDemoCallback )
      goto LABEL_79;
    v47 = &StringLiteral_6885/*"GOTO_BATTLESTARTTALK"*/;
    goto LABEL_67;
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v7; // x0
  BattleServantConfConponent_o *p_CueSheetList; // x19
  struct System_Collections_Generic_List_string__o *CueSheetList; // t1
  Il2CppObject *current; // x20
  SoundManager_o *Instance; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418688B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__GetEnumerator__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v6);
    byte_418688B = 1;
  }
  memset(&v19, 0, sizeof(v19));
  CueSheetList = this->fields.CueSheetList;
  p_CueSheetList = (BattleServantConfConponent_o *)&this->fields.CueSheetList;
  v7 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CueSheetList;
  if ( CueSheetList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v19,
      v7,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v19,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v19.fields.current;
      Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !Instance )
        sub_B2C434(0LL, v12);
      SoundManager__ReleaseAudioAssetStorage(Instance, (System_String_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v19,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    p_CueSheetList->klass = 0LL;
    sub_B2C2F8(p_CueSheetList, 0LL, v13, v14, v15, v16, v17, v18);
  }
}


bool __fastcall BattleDemoRootComponent__RequestBattleSetup(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  BattleSetupInfo_o *battleSetupInfo; // x0

  battleSetupInfo = this->fields.battleSetupInfo;
  if ( battleSetupInfo )
    BattleScriptRootComponent__GoForBattle(battleSetupInfo, 0LL);
  return 1;
}


System_Collections_IEnumerator_o *__fastcall BattleDemoRootComponent__SetupBattleDemo(
        BattleDemoRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418688C & 1) == 0 )
  {
    sub_B2C35C(&BattleDemoRootComponent__SetupBattleDemo_d__30_TypeInfo, method);
    byte_418688C = 1;
  }
  v3 = sub_B2C42C(BattleDemoRootComponent__SetupBattleDemo_d__30_TypeInfo);
  BattleDemoRootComponent__SetupBattleDemo_d__30___ctor((BattleDemoRootComponent__SetupBattleDemo_d__30_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall BattleDemoRootComponent__StartBattle(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_418689C & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_418689C = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  AvalonSceneManager__transitionSceneRefresh(Instance, 10, 1, 0LL, 0, 0LL);
  return 1;
}


void __fastcall BattleDemoRootComponent__StartDemo(
        BattleDemoRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  BattleActorControl_o *Component_srcLineSprite; // x0
  __int64 v16; // x1
  struct UnityEngine_GameObject_array *PlayerActorList; // x8
  UnityEngine_GameObject_o *v18; // x21
  BattleActorControl_o *v19; // x20
  BattleFBXComponent_c *v20; // x0
  struct BattlePerformanceBg_o *perfBg; // x8
  int32_t DemoSequenceServantId; // w22
  BattleSequenceManager_o *v23; // x21
  struct BattleServantData_o *battleSvtData; // x8
  int32_t treasuredvcLevel; // w23
  int32_t v26; // w20
  BattleSequenceManager_onGameObjectLoadComplete_o *v27; // x24
  __int64 v28; // x0

  if ( (byte_4186892 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleDemoRootComponent_OnBattleDemoLoadComplete__, callback);
    sub_B2C35C(&BattleFBXComponent_TypeInfo, v10);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v12);
    sub_B2C35C(&StringLiteral_9362/*"NPACTOR"*/, v13);
    sub_B2C35C(&BattleSequenceManager_onGameObjectLoadComplete_TypeInfo, v14);
    byte_4186892 = 1;
  }
  this->fields.BattleDemoCallback = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.BattleDemoCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  PlayerActorList = this->fields.PlayerActorList;
  if ( !PlayerActorList )
    goto LABEL_19;
  if ( !PlayerActorList->max_length )
  {
    v28 = sub_B2C460(Component_srcLineSprite);
    sub_B2C400(v28, 0LL);
  }
  v18 = PlayerActorList->m_Items[0];
  if ( !v18 )
    goto LABEL_19;
  Component_srcLineSprite = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v18,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !this->fields.FieldMotion )
    goto LABEL_19;
  v19 = Component_srcLineSprite;
  Component_srcLineSprite = (BattleActorControl_o *)PlayMakerFSM__get_Fsm(this->fields.FieldMotion, 0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_19;
  Component_srcLineSprite = (BattleActorControl_o *)Component_srcLineSprite->fields._BuffEffectNodeName_k__BackingField;
  if ( !Component_srcLineSprite )
    goto LABEL_19;
  Component_srcLineSprite = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                                      (HutongGames_PlayMaker_FsmVariables_o *)Component_srcLineSprite,
                                                      (System_String_o *)StringLiteral_9362/*"NPACTOR"*/,
                                                      0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_19;
  HutongGames_PlayMaker_FsmGameObject__set_Value(
    (HutongGames_PlayMaker_FsmGameObject_o *)Component_srcLineSprite,
    v18,
    0LL);
  v20 = BattleFBXComponent_TypeInfo;
  if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v20 = BattleFBXComponent_TypeInfo;
  }
  v20->static_fields->EnableEvent = 0;
  Component_srcLineSprite = (BattleActorControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  perfBg = this->fields.perfBg;
  if ( !perfBg )
    goto LABEL_19;
  if ( !Component_srcLineSprite )
    goto LABEL_19;
  BattleSequenceManager__init(
    (BattleSequenceManager_o *)Component_srcLineSprite,
    this->fields.performance,
    v18,
    this->fields.PlayerActorList,
    this->fields.EnemyActorList,
    this->fields.actorCamera,
    perfBg->fields.bgobject,
    0LL);
  Component_srcLineSprite = (BattleActorControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v19 )
    goto LABEL_19;
  DemoSequenceServantId = this->fields.DemoSequenceServantId;
  v23 = (BattleSequenceManager_o *)Component_srcLineSprite;
  Component_srcLineSprite = (BattleActorControl_o *)BattleActorControl__getLimitCount(v19, 0LL);
  battleSvtData = v19->fields.battleSvtData;
  if ( !battleSvtData
    || (treasuredvcLevel = battleSvtData->fields.treasuredvcLevel,
        v26 = (int)Component_srcLineSprite,
        v27 = (BattleSequenceManager_onGameObjectLoadComplete_o *)sub_B2C42C(BattleSequenceManager_onGameObjectLoadComplete_TypeInfo),
        BattleSequenceManager_onGameObjectLoadComplete___ctor(
          v27,
          (Il2CppObject *)this,
          Method_BattleDemoRootComponent_OnBattleDemoLoadComplete__,
          0LL),
        !v23) )
  {
LABEL_19:
    sub_B2C434(Component_srcLineSprite, v16);
  }
  BattleSequenceManager__loadSequence(
    v23,
    DemoSequenceServantId,
    DemoSequenceServantId,
    v26,
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
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4186894 & 1) == 0 )
  {
    sub_B2C35C(&BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_TypeInfo, method);
    byte_4186894 = 1;
  }
  v3 = sub_B2C42C(BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_TypeInfo);
  BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42___ctor(
    (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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
  __int64 v5; // x1
  CommonUI_o *Instance; // x0
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  if ( (byte_41868A0 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, demoInfo);
    sub_B2C35C(&StringLiteral_6887/*"GOTO_TERMINAL"*/, v5);
    byte_41868A0 = 1;
  }
  if ( demoInfo )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 1, 0LL);
      battleSetupInfo = this->fields.battleSetupInfo;
      if ( battleSetupInfo )
      {
        battleSetupInfo->fields.isBefore = 0;
        ((void (__fastcall *)(BattleDemoRootComponent_o *, struct BattleSetupInfo_o *, Il2CppMethodPointer))this->klass->vtable._5_beginStartUp.method)(
          this,
          this->fields.battleSetupInfo,
          this->klass->vtable._6_beginStartUp.methodPtr);
        return;
      }
    }
LABEL_9:
    sub_B2C434(Instance, demoInfo);
  }
  Instance = (CommonUI_o *)this->fields.myFSM;
  if ( !Instance )
    goto LABEL_9;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6887/*"GOTO_TERMINAL"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDemoRootComponent___SetupBattleDemo_b__30_0(
        BattleDemoRootComponent_o *this,
        AssetData_o *aData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleFieldMotionComponent_o *performance; // x0
  struct BattlePerformance_o *v9; // x8
  struct BattleFieldMotionComponent_array *fieldmotion; // x8
  struct PlayMakerFSM_o *Fsm; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_GameObject_o *cameraObject; // x23
  UnityEngine_Transform_o *v19; // x22
  struct UnityEngine_GameObject_o **p_cameraObject; // x21
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  struct UnityEngine_GameObject_o *ObjectIfNotExist; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_Transform_o *transform; // x20
  int v30; // s0
  struct BattlePerformance_o *v33; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct BattlePerformance_o *v40; // x20
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  struct UnityEngine_Transform_array *npcTacticalTr; // x8
  System_Int32_array **v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct UnityEngine_Transform_array *v61; // x8
  System_Int32_array **v62; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  struct BattlePerformance_o *v69; // x8
  struct BattleActionCamera_o *actioncamera; // x9
  System_Int32_array **frontcamera; // x1
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  struct BattlePerformance_o *v78; // x8
  struct BattleActionCamera_o *v79; // x8
  struct UnityEngine_Camera_o *actorcamera; // x1
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  struct BattlePerformance_o *v87; // x8
  struct PlayMakerFSM_o *camerafsm; // x1
  struct PlayMakerFSM_o **p_CameraFsm; // x19
  __int64 v90; // x8
  __int64 v91; // x19
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  __int64 v98; // x0

  if ( (byte_418689E & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, aData);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleActionCamera___, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v6);
    sub_B2C35C(&StringLiteral_11527/*"RootCameraPrefab"*/, v7);
    byte_418689E = 1;
  }
  performance = (BattleFieldMotionComponent_o *)this->fields.performance;
  if ( !performance )
    goto LABEL_31;
  BattlePerformance__loadFieldMotion((BattlePerformance_o *)performance, aData, 0LL, 0LL);
  v9 = this->fields.performance;
  if ( !v9 )
    goto LABEL_31;
  fieldmotion = v9->fields.fieldmotion;
  if ( !fieldmotion )
    goto LABEL_31;
  if ( !fieldmotion->max_length )
  {
    v98 = sub_B2C460(performance);
    sub_B2C400(v98, 0LL);
  }
  performance = fieldmotion->m_Items[0];
  if ( !performance )
    goto LABEL_31;
  Fsm = BattleFieldMotionComponent__getFsm(performance, 0LL);
  this->fields.FieldMotion = Fsm;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.FieldMotion,
    (System_Int32_array **)Fsm,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  performance = (BattleFieldMotionComponent_o *)this->fields.GroundObject;
  if ( !performance )
    goto LABEL_31;
  performance = (BattleFieldMotionComponent_o *)UnityEngine_GameObject__get_gameObject(
                                                  (UnityEngine_GameObject_o *)performance,
                                                  0LL);
  if ( !performance )
    goto LABEL_31;
  performance = (BattleFieldMotionComponent_o *)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)performance,
                                                  0LL);
  if ( !aData )
    goto LABEL_31;
  cameraObject = this->fields.cameraObject;
  v19 = (UnityEngine_Transform_o *)performance;
  p_cameraObject = &this->fields.cameraObject;
  Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 aData,
                                                                 (System_String_o *)StringLiteral_11527/*"RootCameraPrefab"*/,
                                                                 (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  ObjectIfNotExist = BaseMonoBehaviour__createObjectIfNotExist(
                       (BaseMonoBehaviour_o *)this,
                       cameraObject,
                       Object_WarBoardWaitTimeSetting,
                       v19,
                       0LL,
                       0LL);
  this->fields.cameraObject = ObjectIfNotExist;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.cameraObject,
    (System_Int32_array **)ObjectIfNotExist,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  performance = (BattleFieldMotionComponent_o *)this->fields.cameraObject;
  if ( !performance )
    goto LABEL_31;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)performance, (System_String_o *)StringLiteral_11527/*"RootCameraPrefab"*/, 0LL);
  performance = (BattleFieldMotionComponent_o *)*p_cameraObject;
  if ( !*p_cameraObject )
    goto LABEL_31;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)performance, 0LL);
  *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_31;
  UnityEngine_Transform__set_eulerAngles(transform, *(UnityEngine_Vector3_o *)&v30, 0LL);
  performance = (BattleFieldMotionComponent_o *)this->fields.cameraObject;
  if ( !performance )
    goto LABEL_31;
  v33 = this->fields.performance;
  performance = (BattleFieldMotionComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  (UnityEngine_GameObject_o *)performance,
                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v33 )
    goto LABEL_31;
  v33->fields.camerafsm = (struct PlayMakerFSM_o *)performance;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v33->fields.camerafsm,
    (System_Int32_array **)performance,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  performance = (BattleFieldMotionComponent_o *)this->fields.cameraObject;
  if ( !performance )
    goto LABEL_31;
  v40 = this->fields.performance;
  performance = (BattleFieldMotionComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  (UnityEngine_GameObject_o *)performance,
                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActionCamera___);
  if ( !v40 )
    goto LABEL_31;
  v40->fields.actioncamera = (struct BattleActionCamera_o *)performance;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v40->fields.actioncamera,
    (System_Int32_array **)performance,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  performance = (BattleFieldMotionComponent_o *)this->fields.performance;
  if ( !performance )
    goto LABEL_31;
  npcTacticalTr = performance[1].fields.npcTacticalTr;
  if ( !npcTacticalTr )
    goto LABEL_31;
  v54 = (System_Int32_array **)npcTacticalTr->m_Items[1];
  performance->fields.npcBattleTr = (struct UnityEngine_Transform_array *)v54;
  sub_B2C2F8((BattleServantConfConponent_o *)&performance->fields.npcBattleTr, v54, v47, v48, v49, v50, v51, v52);
  performance = (BattleFieldMotionComponent_o *)this->fields.performance;
  if ( !performance )
    goto LABEL_31;
  v61 = performance[1].fields.npcTacticalTr;
  if ( !v61 )
    goto LABEL_31;
  v62 = (System_Int32_array **)v61->m_Items[3];
  performance->fields.fieldPopupBattleTr = (struct UnityEngine_Transform_o *)v62;
  sub_B2C2F8((BattleServantConfConponent_o *)&performance->fields.fieldPopupBattleTr, v62, v55, v56, v57, v58, v59, v60);
  v69 = this->fields.performance;
  if ( !v69 )
    goto LABEL_31;
  actioncamera = v69->fields.actioncamera;
  if ( !actioncamera )
    goto LABEL_31;
  frontcamera = (System_Int32_array **)actioncamera->fields.frontcamera;
  v69->fields.cutIncamera = (struct UnityEngine_Camera_o *)frontcamera;
  sub_B2C2F8((BattleServantConfConponent_o *)&v69->fields.cutIncamera, frontcamera, v63, v64, v65, v66, v67, v68);
  v78 = this->fields.performance;
  if ( !v78 )
    goto LABEL_31;
  v79 = v78->fields.actioncamera;
  if ( !v79 )
    goto LABEL_31;
  actorcamera = v79->fields.actorcamera;
  this->fields.actorCamera = actorcamera;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.actorCamera,
    (System_Int32_array **)actorcamera,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  v87 = this->fields.performance;
  if ( !v87 )
    goto LABEL_31;
  camerafsm = v87->fields.camerafsm;
  this->fields.CameraFsm = camerafsm;
  p_CameraFsm = &this->fields.CameraFsm;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_CameraFsm,
    (System_Int32_array **)camerafsm,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  v90 = (__int64)*(p_CameraFsm - 7);
  if ( !v90
    || (performance = *(BattleFieldMotionComponent_o **)(v90 + 128)) == 0LL
    || (v91 = (__int64)*(p_CameraFsm - 4),
        performance = (BattleFieldMotionComponent_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)performance,
                                                        0LL),
        !v91) )
  {
LABEL_31:
    sub_B2C434(performance, aData);
  }
  *(_QWORD *)(v91 + 32) = performance;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v91 + 32),
    (System_Int32_array **)performance,
    v92,
    v93,
    v94,
    v95,
    v96,
    v97);
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
  struct BattleDemoRootComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__36_1; // x20
  Il2CppObject *v11; // x21
  struct BattleDemoRootComponent___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_418689F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_BattleDemoRootComponent___c__beginStartUp_b__36_1__, v4);
    sub_B2C35C(&BattleDemoRootComponent___c_TypeInfo, v5);
    byte_418689F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
  Instance = BattleDemoRootComponent___c_TypeInfo;
  if ( (BYTE3(BattleDemoRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDemoRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDemoRootComponent___c_TypeInfo);
    Instance = BattleDemoRootComponent___c_TypeInfo;
  }
  static_fields = (struct BattleDemoRootComponent___c_StaticFields *)*((_QWORD *)Instance + 23);
  _9__36_1 = static_fields->__9__36_1;
  if ( !_9__36_1 )
  {
    if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      static_fields = BattleDemoRootComponent___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__36_1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(_9__36_1, v11, Method_BattleDemoRootComponent___c__beginStartUp_b__36_1__, 0LL);
    v12 = BattleDemoRootComponent___c_TypeInfo->static_fields;
    v12->__9__36_1 = _9__36_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v12->__9__36_1,
      (System_Int32_array **)_9__36_1,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !this )
LABEL_14:
    sub_B2C434(Instance, v7);
  BattleDemoRootComponent__StartDemo(this, _9__36_1, v8);
}


void __fastcall BattleDemoRootComponent__beginFinish(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BattleDemoRootComponent__beginInitialize(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4186890 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4186890 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__maskFadeout(Instance, 1, 0.0, 0LL, 0LL),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B2C434(Instance, v5);
  }
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall BattleDemoRootComponent__beginStartUp(
        BattleDemoRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  Il2CppObject *demoInfo; // x20
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x10
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x3
  __int64 v15; // x0
  __int64 v16; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  demoInfo = data;
  if ( (byte_4186891 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, data);
    sub_B2C35C(&Method_BattleDemoRootComponent__beginStartUp_b__36_0__, v10);
    sub_B2C35C(&BattleSetupInfo_TypeInfo, v11);
    byte_4186891 = 1;
  }
  if ( demoInfo )
  {
    v12 = *(&BattleSetupInfo_TypeInfo->_2.bitflags2 + 1);
    if ( *(&demoInfo->klass->_2.bitflags2 + 1) >= (unsigned int)v12
      && (BattleSetupInfo_c *)demoInfo->klass->_2.typeHierarchy[v12 - 1] == BattleSetupInfo_TypeInfo )
    {
      this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)demoInfo;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.battleSetupInfo,
        (System_Int32_array **)demoInfo,
        (System_String_array **)method,
        v3,
        v4,
        v5,
        v6,
        v7);
      battleSetupInfo = this->fields.battleSetupInfo;
      if ( !battleSetupInfo )
        sub_B2C434(v15, v16);
      demoInfo = (Il2CppObject *)battleSetupInfo->fields.demoInfo;
    }
    else
    {
      demoInfo = 0LL;
    }
  }
  v13 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_BattleDemoRootComponent__beginStartUp_b__36_0__, 0LL);
  BattleDemoRootComponent__InitializeBattleDemo(this, (System_String_o *)demoInfo, v13, v14);
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
  BattleDemoRootComponent__SetupBattleDemo_d__30_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct BattleDemoRootComponent_o *_4__this; // x20
  AssetLoader_LoadEndDataHandler_o *v12; // x21
  System_Action_o *InitializeCallback; // x0
  System_Int32_array **v14; // x0
  BattleServantConfConponent_o *v15; // x19
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int v30; // w8
  System_Int32_array **v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_o *BgmName; // x20
  UnityEngine_WaitForSeconds_o *v39; // x20
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  int v47; // [xsp+Ch] [xbp-24h] BYREF
  int v48; // [xsp+18h] [xbp-18h] BYREF
  int v49; // [xsp+1Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_4186A69 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&Method_BattleDemoRootComponent__SetupBattleDemo_b__30_0__, v3);
    sub_B2C35C(&int_TypeInfo, v4);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v6);
    sub_B2C35C(&SoundManager_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_WaitForSeconds_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_2755/*"Battle/Common"*/, v9);
    this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)sub_B2C35C(&StringLiteral_11088/*"RESET_CAMERA_NOBLEEND"*/, v10);
    byte_4186A69 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      v12 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v12,
        (Il2CppObject *)_4__this,
        Method_BattleDemoRootComponent__SetupBattleDemo_b__30_0__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__loadAssetStorage((System_String_o *)StringLiteral_2755/*"Battle/Common"*/, v12, 1, 0LL);
      goto LABEL_16;
    case 1:
      v2->fields.__1__state = -1;
LABEL_16:
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)AssetManager__LoadIsBusy(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( _4__this )
        {
          this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)_4__this->fields.performance;
          if ( this )
          {
            BattlePerformance__ForceLoadBg(
              (BattlePerformance_o *)this,
              _4__this->fields.BgId,
              _4__this->fields.BgType,
              0LL);
            BattleDemoRootComponent__LoadBattleChrs(_4__this, _4__this->fields.PlayerList, 0LL);
            BattleDemoRootComponent__LoadBattleChrs(_4__this, _4__this->fields.EnemyList, 0LL);
LABEL_24:
            if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
            }
            this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)ServantAssetLoadManager__checkLoad(0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v48 = 0;
              v22 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v48);
              v2->fields.__2__current = (Il2CppObject *)v22;
              p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
              sub_B2C2F8(p__2__current, v22, v24, v25, v26, v27, v28, v29);
              v30 = 2;
LABEL_38:
              *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = v30;
              LOBYTE(InitializeCallback) = 1;
              return (char)InitializeCallback;
            }
            if ( _4__this )
            {
              BattleDemoRootComponent__LoadCueSheet(_4__this, 0LL);
LABEL_31:
              if ( _4__this->fields.CueSheetCount )
              {
                v47 = 0;
                v31 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v47);
                v2->fields.__2__current = (Il2CppObject *)v31;
                p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
                sub_B2C2F8(p__2__current, v31, v32, v33, v34, v35, v36, v37);
                v30 = 3;
                goto LABEL_38;
              }
              BattleDemoRootComponent__CreateActors(_4__this, 0LL);
              this = (BattleDemoRootComponent__SetupBattleDemo_d__30_o *)_4__this->fields.CameraFsm;
              if ( this )
              {
                PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_11088/*"RESET_CAMERA_NOBLEEND"*/, 0LL);
                BgmName = _4__this->fields.BgmName;
                if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SoundManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                }
                SoundManager__playBgm(BgmName, 0LL);
                v39 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
                UnityEngine_WaitForSeconds___ctor(v39, 1.0, 0LL);
                v2->fields.__2__current = (Il2CppObject *)v39;
                p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
                sub_B2C2F8(p__2__current, (System_Int32_array **)v39, v40, v41, v42, v43, v44, v45);
                v30 = 4;
                goto LABEL_38;
              }
            }
          }
        }
LABEL_40:
        sub_B2C434(this, method);
      }
      v49 = 0;
      v14 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v49);
      v2->fields.__2__current = (Il2CppObject *)v14;
      v15 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B2C2F8(v15, v14, v16, v17, v18, v19, v20, v21);
      LOBYTE(InitializeCallback) = 1;
      *(_DWORD *)&v15[-1].fields.isOpenAfter = 1;
      return (char)InitializeCallback;
    case 2:
      v2->fields.__1__state = -1;
      goto LABEL_24;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_40;
      goto LABEL_31;
    case 4:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_40;
      InitializeCallback = _4__this->fields.InitializeCallback;
      if ( InitializeCallback )
      {
        System_Action__Invoke(InitializeCallback, 0LL);
LABEL_11:
        LOBYTE(InitializeCallback) = 0;
      }
      return (char)InitializeCallback;
    default:
      goto LABEL_11;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattleDemoRootComponent__SetupBattleDemo_d__30_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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


// local variable allocation has failed, the output may be wrong!
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
  __int64 v8; // x1
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v10; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  bool result; // w0
  struct BattleDemoRootComponent_o *_4__this; // x19
  struct BattlePerformance_o *performance; // x20
  BattlePerformance_c *v20; // x0
  struct BattlePerformance_o *v21; // x8
  UnityEngine_Transform_o *transform; // x20
  int v23; // s0
  WebViewManager_o *Instance; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v27; // x21

  v2 = this;
  if ( (byte_4186A6A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_USSequencer___ctor__, method);
    sub_B2C35C(&System_Action_USSequencer__TypeInfo, v3);
    sub_B2C35C(&Method_BattleDemoRootComponent_OnNoblePhantasmPlayComplete__, v4);
    sub_B2C35C(&BattlePerformance_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)sub_B2C35C(
                                                                         &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                                         v8);
    byte_4186A6A = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_19;
    this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)_4__this->fields.performance;
    if ( !this )
      goto LABEL_19;
    BattlePerformance__FlipAll((BattlePerformance_o *)this, 0, 0LL);
    performance = _4__this->fields.performance;
    if ( !performance )
      goto LABEL_19;
    _4__this->fields.backupFov = performance->fields.currentFov;
    v20 = BattlePerformance_TypeInfo;
    if ( (BYTE3(BattlePerformance_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattlePerformance_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
      v20 = BattlePerformance_TypeInfo;
    }
    BattlePerformance__setupCameraFov(performance, v20->static_fields->DefaultFov, 0LL);
    v21 = _4__this->fields.performance;
    if ( !v21 )
      goto LABEL_19;
    this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)v21->fields.actorcamera;
    if ( !this )
      goto LABEL_19;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_zero(0LL);
    if ( !transform
      || (UnityEngine_Transform__set_localEulerAngles(transform, *(UnityEngine_Vector3_o *)&v23, 0LL),
          (this = (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__maskFadein((CommonUI_o *)this, 1.0, 0LL, 0LL),
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__),
          v27 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_USSequencer__TypeInfo),
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            v27,
            (Il2CppObject *)_4__this,
            Method_BattleDemoRootComponent_OnNoblePhantasmPlayComplete__,
            (const MethodInfo_24BBAD8 *)Method_System_Action_USSequencer___ctor__),
          !Instance) )
    {
LABEL_19:
      sub_B2C434(this, method);
    }
    BattleSequenceManager__play((BattleSequenceManager_o *)Instance, 0, 1, (System_Action_USSequencer__o *)v27, 0LL);
  }
  else if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v10 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v10, 0LL);
    v2->fields.__2__current = (Il2CppObject *)v10;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v2->fields.__2__current,
      (System_Int32_array **)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4186A67 & 1) == 0 )
  {
    sub_B2C35C(&BattleDemoRootComponent___c_TypeInfo, v1);
    byte_4186A67 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BattleDemoRootComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleDemoRootComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
  if ( (byte_4186A68 & 1) == 0 )
  {
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, args);
    byte_4186A68 = 1;
  }
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ServantAssetLoadManager__UnloadAssetsByArgs(args, 0LL);
}


void __fastcall BattleDemoRootComponent___c___beginStartUp_b__36_1(
        BattleDemoRootComponent___c_o *this,
        const MethodInfo *method)
{
  ;
}