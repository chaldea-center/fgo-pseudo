void __fastcall BattleDemoRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F8CCC & 1) == 0 )
  {
    sub_B16FFC(&BattleDemoRootComponent_TypeInfo, v1);
    byte_40F8CCC = 1;
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
  UnityEngine_Component_o *FieldMotion; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  BattleDemoRootComponent_o *Component_srcLineSprite; // x0
  __int64 v26; // x1
  MethodInfo *v27; // x2
  __int64 v28; // x8
  int32_t v29; // w25
  unsigned __int64 v30; // x24
  System_String_o *v31; // x19
  BattleDemoRootComponent_o *ServantIdByInfo; // x0
  int32_t v33; // w28
  const MethodInfo *v34; // x2
  int32_t LimitCountByInfo; // w0
  struct UnityEngine_GameObject_o *actorPrefab; // x19
  int32_t v37; // w21
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x19
  Il2CppClass **v44; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v46; // x21
  UnityEngine_Transform_o *v47; // x0
  UnityEngine_Transform_o *v48; // x21
  int v49; // s0
  UnityEngine_Transform_o *v52; // x21
  int v53; // s0
  UnityEngine_Transform_o *v56; // x21
  int v57; // s0
  srcLineSprite_o *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **performance; // x1
  BattleActorControl_o *v68; // x19
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  BattleServantData_o *v73; // x22
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v78; // x21
  int32_t v79; // w26
  UnityEngine_Component_o *actorCamera; // x0
  UnityEngine_GameObject_o *v81; // x0
  UnityEngine_GameObject_o *v82; // x21
  UnityEngine_GameObject_o *v83; // x0
  UnityEngine_Transform_o *PlayerPopTr; // x0
  UnityEngine_Component_o *v85; // x0
  UnityEngine_GameObject_o *v86; // x0
  UnityEngine_GameObject_o *v87; // x21
  UnityEngine_GameObject_o *v88; // x0
  UnityEngine_Component_o *v89; // x21
  UnityEngine_GameObject_o *v90; // x0
  System_String_array *v91; // [xsp+0h] [xbp-80h]
  UnityEngine_GameObject_array *v92; // [xsp+8h] [xbp-78h]
  BattleFieldMotionComponent_o *v93; // [xsp+10h] [xbp-70h]
  System_String_o **m_Items; // [xsp+20h] [xbp-60h]
  int32_t value; // [xsp+2Ch] [xbp-54h]

  if ( (byte_40F8CBD & 1) == 0 )
  {
    sub_B16FFC(&BattleServantData_TypeInfo, *(_QWORD *)&uniqueIdStart);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v10);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v11);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v12);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleFieldMotionComponent___, v13);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_20138, v16);
    sub_B16FFC(&StringLiteral_22376, v17);
    sub_B16FFC(&StringLiteral_19700, v18);
    sub_B16FFC(&StringLiteral_22973, v19);
    sub_B16FFC(&StringLiteral_22811, v20);
    sub_B16FFC(&StringLiteral_15904, v21);
    sub_B16FFC(&StringLiteral_15967, v22);
    byte_40F8CBD = 1;
  }
  FieldMotion = (UnityEngine_Component_o *)this->fields.FieldMotion;
  if ( !FieldMotion
    || (gameObject = UnityEngine_Component__get_gameObject(FieldMotion, 0LL)) == 0LL
    || (Component_srcLineSprite = (BattleDemoRootComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                 gameObject,
                                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleFieldMotionComponent___),
        !chrInfos) )
  {
LABEL_39:
    sub_B170D4();
  }
  v28 = *(_QWORD *)&chrInfos->max_length;
  if ( (int)v28 >= 1 )
  {
    v29 = uniqueIdStart;
    v30 = 0LL;
    m_Items = chrInfos->m_Items;
    v92 = actors;
    v93 = (BattleFieldMotionComponent_o *)Component_srcLineSprite;
    v91 = chrInfos;
    do
    {
      if ( v30 >= (unsigned int)v28 )
      {
LABEL_40:
        sub_B17100(Component_srcLineSprite, v26, v27);
        sub_B170A0();
      }
      v31 = m_Items[v30];
      if ( v31 )
      {
        ServantIdByInfo = (BattleDemoRootComponent_o *)BattleDemoRootComponent__GetServantIdByInfo(
                                                         Component_srcLineSprite,
                                                         m_Items[v30],
                                                         v27);
        v33 = (int)ServantIdByInfo;
        LimitCountByInfo = BattleDemoRootComponent__GetLimitCountByInfo(ServantIdByInfo, v31, v34);
        actorPrefab = this->fields.actorPrefab;
        v37 = LimitCountByInfo;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Component_srcLineSprite = (BattleDemoRootComponent_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                                 (UnityEngine_UI_Dropdown_DropdownItem_o *)actorPrefab,
                                                                 (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !actors )
          goto LABEL_39;
        v43 = (System_Int32_array **)Component_srcLineSprite;
        if ( Component_srcLineSprite )
        {
          Component_srcLineSprite = (BattleDemoRootComponent_o *)sub_B170BC(
                                                                   Component_srcLineSprite,
                                                                   actors->obj.klass->_1.element_class);
          if ( !Component_srcLineSprite )
          {
            sub_B170F4();
            sub_B170A0();
          }
        }
        if ( v29 - uniqueIdStart >= actors->max_length )
          goto LABEL_40;
        v44 = &actors->obj.klass + v29 - uniqueIdStart;
        v44[4] = (Il2CppClass *)v43;
        value = v37;
        sub_B16F98((BattleServantConfConponent_o *)(v44 + 4), v43, (System_String_array **)v27, v38, v39, v40, v41, v42);
        if ( !v43 )
          goto LABEL_39;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v43, 0LL);
        if ( !this->fields.Field )
          goto LABEL_39;
        v46 = transform;
        v47 = UnityEngine_GameObject__get_transform(this->fields.Field, 0LL);
        if ( !v46 )
          goto LABEL_39;
        UnityEngine_Transform__set_parent(v46, v47, 0LL);
        v48 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v43, 0LL);
        *(UnityEngine_Vector3_o *)&v49 = UnityEngine_Vector3__get_zero(0LL);
        if ( !v48 )
          goto LABEL_39;
        UnityEngine_Transform__set_localPosition(v48, *(UnityEngine_Vector3_o *)&v49, 0LL);
        v52 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v43, 0LL);
        *(UnityEngine_Vector3_o *)&v53 = UnityEngine_Vector3__get_zero(0LL);
        if ( !v52 )
          goto LABEL_39;
        UnityEngine_Transform__set_localEulerAngles(v52, *(UnityEngine_Vector3_o *)&v53, 0LL);
        v56 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v43, 0LL);
        *(UnityEngine_Vector3_o *)&v57 = UnityEngine_Vector3__get_one(0LL);
        if ( !v56 )
          goto LABEL_39;
        UnityEngine_Transform__set_localScale(v56, *(UnityEngine_Vector3_o *)&v57, 0LL);
        v60 = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                (UnityEngine_GameObject_o *)v43,
                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !v60 )
          goto LABEL_39;
        performance = (System_Int32_array **)this->fields.performance;
        v68 = (BattleActorControl_o *)v60;
        v60->fields.mStateEndAct = (struct System_Action_o *)performance;
        sub_B16F98((BattleServantConfConponent_o *)&v60->fields.mStateEndAct, performance, v61, v62, v63, v64, v65, v66);
        v73 = (BattleServantData_o *)sub_B170CC(BattleServantData_TypeInfo, v69, v70, v71, v72);
        BattleServantData___ctor(v73, 0LL);
        v78 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B170CC(
                                                                                  System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                                  v74,
                                                                                  v75,
                                                                                  v76,
                                                                                  v77);
        System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
          v78,
          (const MethodInfo_2D9B608 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
        if ( !v78 )
          goto LABEL_39;
        System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
          v78,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_19700,
          v29,
          (const MethodInfo_2D9C194 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
          v78,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22811,
          v29,
          (const MethodInfo_2D9C194 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
          v78,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22973,
          v29,
          (const MethodInfo_2D9C194 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
          v78,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22376,
          v33,
          (const MethodInfo_2D9C194 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
          v78,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_20138,
          value,
          (const MethodInfo_2D9C194 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        if ( !v73 )
          goto LABEL_39;
        BattleServantData__SetFakeData(v73, (System_Collections_Generic_Dictionary_string__int__o *)v78, 0LL);
        v79 = v29 - uniqueIdStart;
        if ( isPlayer )
        {
          BattleActorControl__setTypePlayer(v68, 0LL);
          BattleActorControl__setServantData(v68, v73, 0LL);
          BattleActorControl__setDirLeft(v68, 0LL);
          actorCamera = (UnityEngine_Component_o *)this->fields.actorCamera;
          if ( !actorCamera )
            goto LABEL_39;
          v81 = UnityEngine_Component__get_gameObject(actorCamera, 0LL);
          chrInfos = v91;
          if ( !this->fields.CameraFsm )
            goto LABEL_39;
          v82 = v81;
          v83 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.CameraFsm, 0LL);
          BattleActorControl__setMotionListForDemo(
            v68,
            (System_String_o *)StringLiteral_15967,
            v82,
            v83,
            this->fields.CommonMotionPrefab,
            0LL);
          actors = v92;
          if ( !v93 )
            goto LABEL_39;
          PlayerPopTr = BattleFieldMotionComponent__getPlayerPopTr(v93, v79, 0LL);
        }
        else
        {
          BattleActorControl__setTypeEnemy(v68, 0LL);
          BattleActorControl__setServantData(v68, v73, 0LL);
          BattleActorControl__setDirRight(v68, 0LL);
          v85 = (UnityEngine_Component_o *)this->fields.actorCamera;
          if ( !v85 )
            goto LABEL_39;
          v86 = UnityEngine_Component__get_gameObject(v85, 0LL);
          chrInfos = v91;
          if ( !this->fields.CameraFsm )
            goto LABEL_39;
          v87 = v86;
          v88 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.CameraFsm, 0LL);
          BattleActorControl__setMotionListForDemo(
            v68,
            (System_String_o *)StringLiteral_15904,
            v87,
            v88,
            this->fields.CommonMotionPrefab,
            0LL);
          actors = v92;
          if ( !v93 )
            goto LABEL_39;
          PlayerPopTr = BattleFieldMotionComponent__getEnemyPopPoint(v93, v79, 0LL);
        }
        v89 = (UnityEngine_Component_o *)PlayerPopTr;
        BattleActorControl__setCamera(v68, this->fields.actorCamera, 0LL);
        if ( !v89 )
          goto LABEL_39;
        v90 = UnityEngine_Component__get_gameObject(v89, 0LL);
        BattleActorControl__setTargetObject(v68, v90, 0LL);
        ++v29;
      }
      LODWORD(v28) = chrInfos->max_length;
      ++v30;
    }
    while ( (__int64)v30 < (int)v28 );
  }
}


void __fastcall BattleDemoRootComponent__CreateActors(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_String_array *PlayerList; // x8
  struct UnityEngine_GameObject_array *v12; // x0
  struct UnityEngine_GameObject_array **p_PlayerActorList; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x2
  struct System_String_array *EnemyList; // x8
  struct UnityEngine_GameObject_array *v22; // x0
  struct UnityEngine_GameObject_array **p_EnemyActorList; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct BattlePerformance_o *performance; // x8
  System_Int32_array **PlayerActorList; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct BattlePerformance_o *v44; // x8
  System_Int32_array **EnemyActorList; // x1
  const MethodInfo *v46; // x5
  const MethodInfo *v47; // x5
  struct UnityEngine_GameObject_array *v48; // x8
  unsigned __int64 v49; // x24
  PlayMakerFSM_o *FieldMotion; // x0
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *variables; // x22
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  struct UnityEngine_GameObject_array *v58; // x8
  struct UnityEngine_GameObject_array *v59; // x8
  unsigned __int64 v60; // x23
  PlayMakerFSM_o *v61; // x0
  signed __int64 max_length; // x24
  HutongGames_PlayMaker_Fsm_o *v63; // x0
  HutongGames_PlayMaker_FsmVariables_o *v64; // x21
  System_String_o *v65; // x0
  System_String_o *v66; // x0
  struct UnityEngine_GameObject_array *v67; // x8
  HutongGames_PlayMaker_FsmObject_o *FsmObject; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **CameraFsm; // x1
  struct UnityEngine_GameObject_array *v76; // x22
  int v77; // w9
  int v78; // w8
  UnityEngine_Object_o *v79; // x21
  BattleActorControl_o *Component_srcLineSprite; // x0
  struct UnityEngine_GameObject_array *v81; // x21
  int v82; // w9
  int v83; // w8
  UnityEngine_Object_o *v84; // x20
  BattleActorControl_o *v85; // x0
  PlayMakerFSM_o *v86; // x0
  int v87; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40F8CBC & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_8770, v6);
    sub_B16FFC(&StringLiteral_5487, v7);
    sub_B16FFC(&StringLiteral_3464, v8);
    sub_B16FFC(&StringLiteral_10414, v9);
    sub_B16FFC(&StringLiteral_5473, v10);
    byte_40F8CBC = 1;
  }
  v87 = 0;
  PlayerList = this->fields.PlayerList;
  if ( !PlayerList )
    goto LABEL_57;
  v12 = (struct UnityEngine_GameObject_array *)sub_B17014(UnityEngine_GameObject___TypeInfo, PlayerList->max_length, v2);
  this->fields.PlayerActorList = v12;
  p_PlayerActorList = &this->fields.PlayerActorList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.PlayerActorList,
    (System_Int32_array **)v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  EnemyList = this->fields.EnemyList;
  if ( !EnemyList )
    goto LABEL_57;
  v22 = (struct UnityEngine_GameObject_array *)sub_B17014(UnityEngine_GameObject___TypeInfo, EnemyList->max_length, v20);
  this->fields.EnemyActorList = v22;
  p_EnemyActorList = &this->fields.EnemyActorList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.EnemyActorList,
    (System_Int32_array **)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_57;
  PlayerActorList = (System_Int32_array **)this->fields.PlayerActorList;
  performance->fields.p_actorlist = (struct UnityEngine_GameObject_array *)PlayerActorList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&performance->fields.p_actorlist,
    PlayerActorList,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v44 = this->fields.performance;
  if ( !v44 )
    goto LABEL_57;
  EnemyActorList = (System_Int32_array **)this->fields.EnemyActorList;
  v44->fields.e_actorlist = (struct UnityEngine_GameObject_array *)EnemyActorList;
  sub_B16F98((BattleServantConfConponent_o *)&v44->fields.e_actorlist, EnemyActorList, v38, v39, v40, v41, v42, v43);
  BattleDemoRootComponent__CreateActorObject(this, 1, this->fields.PlayerList, this->fields.PlayerActorList, 1, v46);
  BattleDemoRootComponent__CreateActorObject(this, 4, this->fields.EnemyList, this->fields.EnemyActorList, 0, v47);
  v48 = this->fields.PlayerActorList;
  if ( !v48 )
    goto LABEL_57;
  v49 = 0LL;
  while ( (__int64)v49 < (int)v48->max_length )
  {
    FieldMotion = this->fields.FieldMotion;
    if ( FieldMotion )
    {
      Fsm = PlayMakerFSM__get_Fsm(FieldMotion, 0LL);
      if ( Fsm )
      {
        variables = Fsm->fields.variables;
        v87 = v49 + 1;
        v53 = System_Int32__ToString((int32_t)&v87, 0LL);
        v54 = System_String__Concat_43743732((System_String_o *)StringLiteral_10414, v53, 0LL);
        if ( variables )
        {
          FsmGameObject = HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(variables, v54, 0LL);
          v58 = *p_PlayerActorList;
          if ( *p_PlayerActorList )
          {
            if ( v49 >= v58->max_length )
              goto LABEL_58;
            if ( FsmGameObject )
            {
              HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, v58->m_Items[v49], 0LL);
              v48 = *p_PlayerActorList;
              ++v49;
              if ( *p_PlayerActorList )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_57;
  }
  v59 = *p_EnemyActorList;
  if ( !*p_EnemyActorList )
    goto LABEL_57;
  v60 = 0LL;
  while ( 1 )
  {
    v61 = this->fields.FieldMotion;
    if ( !v61 )
      goto LABEL_57;
    max_length = (int)v59->max_length;
    v63 = PlayMakerFSM__get_Fsm(v61, 0LL);
    if ( !v63 )
      goto LABEL_57;
    v64 = v63->fields.variables;
    if ( (__int64)v60 >= max_length )
      break;
    v87 = v60 + 1;
    v65 = System_Int32__ToString((int32_t)&v87, 0LL);
    v66 = System_String__Concat_43743732((System_String_o *)StringLiteral_5487, v65, 0LL);
    if ( v64 )
    {
      FsmGameObject = HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(v64, v66, 0LL);
      v67 = *p_EnemyActorList;
      if ( *p_EnemyActorList )
      {
        if ( v60 >= v67->max_length )
          goto LABEL_58;
        if ( FsmGameObject )
        {
          HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, v67->m_Items[v60], 0LL);
          v59 = *p_EnemyActorList;
          ++v60;
          if ( *p_EnemyActorList )
            continue;
        }
      }
    }
    goto LABEL_57;
  }
  if ( !v64 )
    goto LABEL_57;
  FsmObject = HutongGames_PlayMaker_FsmVariables__GetFsmObject(
                v63->fields.variables,
                (System_String_o *)StringLiteral_3464,
                0LL);
  if ( !FsmObject )
    goto LABEL_57;
  CameraFsm = (System_Int32_array **)this->fields.CameraFsm;
  FsmObject->fields.value = (struct UnityEngine_Object_o *)CameraFsm;
  sub_B16F98((BattleServantConfConponent_o *)&FsmObject->fields.value, CameraFsm, v69, v70, v71, v72, v73, v74);
  v76 = this->fields.PlayerActorList;
  v87 = 0;
  if ( !v76 )
    goto LABEL_57;
  v77 = v76->max_length;
  if ( v77 >= 1 )
  {
    v78 = 0;
    while ( v78 < (unsigned int)v77 )
    {
      v79 = (UnityEngine_Object_o *)v76->m_Items[v78];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      FsmGameObject = (HutongGames_PlayMaker_FsmGameObject_o *)UnityEngine_Object__op_Equality(v79, 0LL, 0LL);
      if ( ((unsigned __int8)FsmGameObject & 1) == 0 )
      {
        if ( !v79 )
          goto LABEL_57;
        Component_srcLineSprite = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            (UnityEngine_GameObject_o *)v79,
                                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !Component_srcLineSprite )
          goto LABEL_57;
        BattleActorControl__playMotion(Component_srcLineSprite, (System_String_o *)StringLiteral_8770, 0LL);
      }
      v78 = v87 + 1;
      v87 = v78;
      v77 = v76->max_length;
      if ( v78 >= v77 )
        goto LABEL_43;
    }
LABEL_58:
    sub_B17100(FsmGameObject, v56, v57);
    sub_B170A0();
  }
LABEL_43:
  v81 = *p_EnemyActorList;
  v87 = 0;
  if ( !v81 )
    goto LABEL_57;
  v82 = v81->max_length;
  if ( v82 >= 1 )
  {
    v83 = 0;
    while ( v83 < (unsigned int)v82 )
    {
      v84 = (UnityEngine_Object_o *)v81->m_Items[v83];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      FsmGameObject = (HutongGames_PlayMaker_FsmGameObject_o *)UnityEngine_Object__op_Equality(v84, 0LL, 0LL);
      if ( ((unsigned __int8)FsmGameObject & 1) == 0 )
      {
        if ( !v84 )
          goto LABEL_57;
        v85 = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                        (UnityEngine_GameObject_o *)v84,
                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
        if ( !v85 )
          goto LABEL_57;
        BattleActorControl__playMotion(v85, (System_String_o *)StringLiteral_8770, 0LL);
      }
      v83 = v87 + 1;
      v87 = v83;
      v82 = v81->max_length;
      if ( v83 >= v82 )
        goto LABEL_55;
    }
    goto LABEL_58;
  }
LABEL_55:
  v86 = this->fields.FieldMotion;
  if ( !v86 )
LABEL_57:
    sub_B170D4();
  PlayMakerFSM__SendEvent(v86, (System_String_o *)StringLiteral_5473, 0LL);
}


void __fastcall BattleDemoRootComponent__EndRequestBattleSetup(
        BattleDemoRootComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  CommonUI_o *Instance; // x0
  AvalonSceneManager_o *v13; // x0
  DataMasterBase_UserGameMaster__UserGameEntity__long__o *Master_WarQuestSelectionMaster; // x0
  struct System_String_o *name; // x22
  int32_t actMax; // w20
  int32_t birthDay_high; // w21
  PlayMakerFSM_o *myFSM; // x0
  UserGameEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F8CCA & 1) == 0 )
  {
    sub_B16FFC(&BattleData_TypeInfo, result);
    sub_B16FFC(&Method_DataManager_GetMaster_BattleMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&StringLiteral_11043, v10);
    sub_B16FFC(&StringLiteral_20980, v11);
    byte_40F8CCA = 1;
  }
  entity = 0LL;
  if ( !result )
    goto LABEL_21;
  if ( System_String__Equals_43731072(result, (System_String_o *)StringLiteral_20980, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0LL);
      v13 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( v13 )
      {
        AvalonSceneManager__transitionSceneRefresh(v13, 34, 1, 0LL, 0, 0LL);
        return;
      }
    }
    goto LABEL_21;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_21;
  if ( DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
         Master_WarQuestSelectionMaster,
         &entity,
         (const MethodInfo_266F698 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__TryGetSingleEntity__) )
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
  myFSM = this->fields.myFSM;
  if ( !myFSM )
LABEL_21:
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11043, 0LL);
}


int32_t __fastcall BattleDemoRootComponent__GetLimitCountByInfo(
        BattleDemoRootComponent_o *this,
        System_String_o *info,
        const MethodInfo *method)
{
  System_String_array *v4; // x0
  __int64 v5; // x2
  System_String_array *v6; // x1

  if ( (byte_40F8CB8 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, info);
    byte_40F8CB8 = 1;
  }
  v4 = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, method);
  if ( !v4 )
    goto LABEL_9;
  v6 = v4;
  if ( !v4->max_length )
    goto LABEL_10;
  LOWORD(v4->m_Items[0]) = 58;
  if ( !info || (v4 = System_String__Split(info, (System_Char_array *)v4, 0LL)) == 0LL )
LABEL_9:
    sub_B170D4();
  if ( v4->max_length <= 1 )
  {
LABEL_10:
    sub_B17100(v4, v6, v5);
    sub_B170A0();
  }
  return System_Int32__Parse(v4->m_Items[1], 0LL);
}


int32_t __fastcall BattleDemoRootComponent__GetServantIdByInfo(
        BattleDemoRootComponent_o *this,
        System_String_o *info,
        const MethodInfo *method)
{
  System_String_array *v4; // x0
  __int64 v5; // x2
  System_String_array *v6; // x1

  if ( (byte_40F8CB7 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, info);
    byte_40F8CB7 = 1;
  }
  v4 = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, method);
  if ( !v4 )
    goto LABEL_9;
  v6 = v4;
  if ( !v4->max_length )
    goto LABEL_10;
  LOWORD(v4->m_Items[0]) = 58;
  if ( !info || (v4 = System_String__Split(info, (System_Char_array *)v4, 0LL)) == 0LL )
LABEL_9:
    sub_B170D4();
  if ( !v4->max_length )
  {
LABEL_10:
    sub_B17100(v4, v6, v5);
    sub_B170A0();
  }
  return System_Int32__Parse(v4->m_Items[0], 0LL);
}


bool __fastcall BattleDemoRootComponent__GoToBattleEndTalk(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t questId; // w19
  int32_t questPhase; // w20
  ScriptManager_CallbackFunc_o *v11; // x22

  if ( (byte_40F8CC7 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleDemoRootComponent_OnBattleEndScript__, method);
    sub_B16FFC(&ScriptManager_CallbackFunc_TypeInfo, v6);
    sub_B16FFC(&ScriptManager_TypeInfo, v7);
    byte_40F8CC7 = 1;
  }
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    sub_B170D4();
  questId = battleSetupInfo->fields.questId;
  questPhase = battleSetupInfo->fields.questPhase;
  v11 = (ScriptManager_CallbackFunc_o *)sub_B170CC(ScriptManager_CallbackFunc_TypeInfo, method, v2, v3, v4);
  ScriptManager_CallbackFunc___ctor(v11, (Il2CppObject *)this, Method_BattleDemoRootComponent_OnBattleEndScript__, 0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayBattleEnd(questId, questPhase, 1, v11, 0, -1, 0LL);
  return 1;
}


bool __fastcall BattleDemoRootComponent__GoToBattleStartTalk(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t questId; // w20
  int32_t questPhase; // w21
  ScriptManager_CallbackFunc_o *v11; // x22

  if ( (byte_40F8CC5 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleDemoRootComponent_OnBattleStartScript__, method);
    sub_B16FFC(&ScriptManager_CallbackFunc_TypeInfo, v6);
    sub_B16FFC(&ScriptManager_TypeInfo, v7);
    byte_40F8CC5 = 1;
  }
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    sub_B170D4();
  questId = battleSetupInfo->fields.questId;
  questPhase = battleSetupInfo->fields.questPhase;
  v11 = (ScriptManager_CallbackFunc_o *)sub_B170CC(ScriptManager_CallbackFunc_TypeInfo, method, v2, v3, v4);
  ScriptManager_CallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleDemoRootComponent_OnBattleStartScript__,
    0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayBattleStart2_17702696(questId, questPhase, v11, 0, 0LL);
  return 1;
}


bool __fastcall BattleDemoRootComponent__GoToTerminal(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40F8CC9 & 1) == 0 )
  {
    sub_B16FFC(&ScriptManager_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v3);
    byte_40F8CC9 = 1;
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
  if ( !byte_40F604D )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v4);
    byte_40F604D = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  __int64 v29; // x2
  __int64 v30; // x10
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v31; // x21
  struct System_String_array *v32; // x0
  struct System_String_array **p_PlayerList; // x23
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x2
  System_Int32_array **v41; // x0
  unsigned int **v42; // x22
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  unsigned __int64 v49; // x28
  __int64 v50; // x20
  System_String_o *v51; // x0
  System_String_o *v52; // x0
  System_Type_o *v53; // x24
  unsigned int *v54; // x25
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  System_String_c *v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x24
  __int64 v64; // x8
  __int64 v65; // x19
  unsigned __int64 v66; // x24
  System_String_o *v67; // x0
  System_Type_o *v68; // x23
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  unsigned int *v73; // x25
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v80; // x23
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  unsigned int v87; // w19
  System_String_o *v88; // x0
  System_Type_o *v89; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *CueSheetList; // x23
  EventMissionProgressRequest_Argument_ProgressData_o *v91; // x0
  UnityEngine_Purchasing_IStoreExtension_o *v92; // x8
  UnityEngine_Purchasing_IStoreExtension_o *v93; // x0
  System_Int32_array **v94; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x3
  __int64 v104; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v105; // x20
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  const MethodInfo *v112; // x1
  System_Collections_IEnumerator_o *v113; // x0
  BattleDemoRootComponent_o *v114; // x0
  const MethodInfo *v115; // x1
  struct System_Action_o *v116; // [xsp+8h] [xbp-68h]
  BattleDemoRootComponent_o *v117; // [xsp+10h] [xbp-60h]
  unsigned int v118; // [xsp+1Ch] [xbp-54h] BYREF

  v8 = callback;
  if ( (byte_40F8CB6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, demoInfo);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v12);
    sub_B16FFC(&long_TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantAssetArgs___ctor__, v16);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v17);
    sub_B16FFC(&System_Collections_Generic_List_ServantAssetArgs__TypeInfo, v18);
    sub_B16FFC(&string___TypeInfo, v19);
    sub_B16FFC(&string_TypeInfo, v20);
    sub_B16FFC(&StringLiteral_5975, v21);
    sub_B16FFC(&StringLiteral_12627, v22);
    sub_B16FFC(&StringLiteral_12869, v23);
    sub_B16FFC(&StringLiteral_2790, v24);
    sub_B16FFC(&StringLiteral_10664, v25);
    sub_B16FFC(&StringLiteral_2797, v26);
    sub_B16FFC(&StringLiteral_2796, v27);
    byte_40F8CB6 = 1;
  }
  v118 = 0;
  if ( !demoInfo )
    goto LABEL_47;
  v28 = MiniJSON_Json__Deserialize(demoInfo, 0LL);
  v116 = v8;
  if ( v28
    && (v30 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1),
        *(&v28->klass->_2.bitflags2 + 1) >= (unsigned int)v30) )
  {
    if ( (System_Collections_Generic_Dictionary_string__object__c *)v28->klass->_2.typeHierarchy[v30 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
      v31 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v28;
    else
      v31 = 0LL;
  }
  else
  {
    v31 = 0LL;
  }
  v32 = (struct System_String_array *)sub_B17014(string___TypeInfo, 3LL, v29);
  v117 = this;
  this->fields.PlayerList = v32;
  p_PlayerList = &this->fields.PlayerList;
  sub_B16F98((BattleServantConfConponent_o *)p_PlayerList, (System_Int32_array **)v32, v34, v35, v36, v37, v38, v39);
  v41 = (System_Int32_array **)sub_B17014(string___TypeInfo, 3LL, v40);
  v42 = (unsigned int **)(p_PlayerList + 1);
  p_PlayerList[1] = (struct System_String_array *)v41;
  sub_B16F98((BattleServantConfConponent_o *)(p_PlayerList + 1), v41, v43, v44, v45, v46, v47, v48);
  v49 = -1LL;
  v50 = 8LL;
  do
  {
    v118 = v49 + 2;
    v51 = System_Int32__ToString((int32_t)&v118, 0LL);
    v52 = System_String__Concat_43743732((System_String_o *)StringLiteral_10664, v51, 0LL);
    if ( !v31 )
      goto LABEL_48;
    v53 = (System_Type_o *)v52;
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v31,
           (System_Xml_XmlQualifiedName_o *)v52,
           (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v54 = (unsigned int *)*p_PlayerList;
      Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
               v31,
               v53,
               (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v54 )
        goto LABEL_48;
      v63 = (System_Int32_array **)Item;
      if ( Item )
      {
        if ( (System_String_c *)Item->klass != string_TypeInfo )
          goto LABEL_50;
        Item = (UnityEngine_Purchasing_IStoreExtension_o *)sub_B170BC(Item, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
        if ( !Item )
          goto LABEL_51;
        v56 = string_TypeInfo;
        if ( *v63 != (System_Int32_array *)string_TypeInfo )
        {
LABEL_50:
          sub_B173C8(v63);
LABEL_51:
          sub_B170F4();
          sub_B170A0();
        }
      }
      if ( v49 + 1 >= v54[6] )
      {
LABEL_49:
        sub_B17100(Item, v56, v57);
        sub_B170A0();
      }
      *(_QWORD *)&v54[v50] = v63;
      sub_B16F98((BattleServantConfConponent_o *)&v54[v50], v63, v57, v58, v59, v60, v61, v62);
    }
    ++v49;
    v50 += 2LL;
  }
  while ( v49 < 2 );
  v64 = -1LL;
  v65 = 8LL;
  do
  {
    v66 = v64 + 1;
    v118 = v64 + 2;
    v67 = System_Int32__ToString((int32_t)&v118, 0LL);
    v68 = (System_Type_o *)System_String__Concat_43743732((System_String_o *)StringLiteral_5975, v67, 0LL);
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v31,
           (System_Xml_XmlQualifiedName_o *)v68,
           (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v73 = *v42;
      Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
               v31,
               v68,
               (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !v73 )
        goto LABEL_48;
      v79 = (System_Int32_array **)Item;
      if ( Item )
      {
        if ( (System_String_c *)Item->klass != string_TypeInfo )
          goto LABEL_52;
        Item = (UnityEngine_Purchasing_IStoreExtension_o *)sub_B170BC(Item, *(_QWORD *)(*(_QWORD *)v73 + 64LL));
        if ( !Item )
          goto LABEL_51;
        v56 = string_TypeInfo;
        if ( *v79 != (System_Int32_array *)string_TypeInfo )
        {
LABEL_52:
          sub_B173C8(v79);
          goto LABEL_53;
        }
      }
      if ( v66 >= v73[6] )
        goto LABEL_49;
      *(_QWORD *)&v73[v65] = v79;
      sub_B16F98((BattleServantConfConponent_o *)&v73[v65], v79, v57, v74, v75, v76, v77, v78);
    }
    v65 += 2LL;
    v64 = v66;
  }
  while ( v66 < 2 );
  v80 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v69,
                                                                                                  v70,
                                                                                                  v71,
                                                                                                  v72);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v80,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  v117->fields.CueSheetList = (struct System_Collections_Generic_List_string__o *)v80;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v117->fields.CueSheetList,
    (System_Int32_array **)v80,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  v87 = -1;
  do
  {
    v118 = v87 + 2;
    v88 = System_Int32__ToString((int32_t)&v118, 0LL);
    v89 = (System_Type_o *)System_String__Concat_43743732((System_String_o *)StringLiteral_12869, v88, 0LL);
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v31,
           (System_Xml_XmlQualifiedName_o *)v89,
           (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      CueSheetList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v117->fields.CueSheetList;
      v91 = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                     v31,
                                                                     v89,
                                                                     (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !CueSheetList )
        goto LABEL_48;
      v92 = (UnityEngine_Purchasing_IStoreExtension_o *)v91;
      if ( v91 && (System_String_c *)v91->klass != string_TypeInfo )
        goto LABEL_53;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        CueSheetList,
        v91,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
    }
    ++v87;
  }
  while ( v87 < 4 );
  v93 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
          v31,
          (System_Type_o *)StringLiteral_2790,
          (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v93 )
    goto LABEL_48;
  this = v117;
  if ( v93->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_54;
  v117->fields.BgId = *(_QWORD *)j_il2cpp_object_unbox_0(v93);
  v93 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
          v31,
          (System_Type_o *)StringLiteral_2796,
          (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v93 )
    goto LABEL_48;
  if ( v93->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_54;
  v117->fields.BgType = *(_QWORD *)j_il2cpp_object_unbox_0(v93);
  v94 = (System_Int32_array **)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                 v31,
                                 (System_Type_o *)StringLiteral_2797,
                                 (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v92 = (UnityEngine_Purchasing_IStoreExtension_o *)v94;
  if ( v94 && *v94 != (System_Int32_array *)string_TypeInfo )
  {
LABEL_53:
    v93 = v92;
    goto LABEL_54;
  }
  v117->fields.BgmName = (struct System_String_o *)v94;
  sub_B16F98((BattleServantConfConponent_o *)&v117->fields.BgmName, v94, v95, v96, v97, v98, v99, v100);
  v93 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
          v31,
          (System_Type_o *)StringLiteral_12627,
          (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v93 )
LABEL_48:
    sub_B170D4();
  v8 = v116;
  if ( v93->klass->_1.element_class == long_TypeInfo->_1.element_class )
  {
    v117->fields.DemoSequenceServantId = *(_QWORD *)j_il2cpp_object_unbox_0(v93);
LABEL_47:
    this->fields.InitializeCallback = v8;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.InitializeCallback,
      (System_Int32_array **)v8,
      (System_String_array **)callback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    v105 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                     System_Collections_Generic_List_ServantAssetArgs__TypeInfo,
                                                                                                     v101,
                                                                                                     v102,
                                                                                                     v103,
                                                                                                     v104);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v105,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ServantAssetArgs___ctor__);
    this->fields.loadedAssetArgsList = (struct System_Collections_Generic_List_ServantAssetArgs__o *)v105;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.loadedAssetArgsList,
      (System_Int32_array **)v105,
      v106,
      v107,
      v108,
      v109,
      v110,
      v111);
    v113 = BattleDemoRootComponent__SetupBattleDemo(this, v112);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v113, 0LL);
    return;
  }
LABEL_54:
  v114 = (BattleDemoRootComponent_o *)sub_B173C8(v93);
  BattleDemoRootComponent__ReleaseBattleDemo(v114, v115);
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
  ServantLimitMaster_o *Master_WarQuestSelectionMaster; // x0
  ServantLimitEntity_o *Entity; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  int32_t weaponGroup; // w24
  ServantAssetArgs_o *v23; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *loadedAssetArgsList; // x0

  v4 = this;
  if ( (byte_40F8CBE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitMaster___, chrlist);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantAssetArgs__Add__, v6);
    sub_B16FFC(&ServantAssetArgs_TypeInfo, v7);
    this = (BattleDemoRootComponent_o *)sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v8);
    byte_40F8CBE = 1;
  }
  if ( !chrlist )
LABEL_20:
    sub_B170D4();
  v9 = *(_QWORD *)&chrlist->max_length;
  if ( (int)v9 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v9; ++i )
    {
      if ( i >= (unsigned int)v9 )
      {
        sub_B17100(this, chrlist, method);
        sub_B170A0();
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
        Master_WarQuestSelectionMaster = (ServantLimitMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitMaster___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_20;
        Entity = ServantLimitMaster__GetEntity(Master_WarQuestSelectionMaster, v13, LimitCountByInfo, 0LL);
        if ( !Entity )
          goto LABEL_20;
        weaponGroup = Entity->fields.weaponGroup;
        v23 = (ServantAssetArgs_o *)sub_B170CC(ServantAssetArgs_TypeInfo, v18, v19, v20, v21);
        ServantAssetArgs___ctor_23787768(v23, v13, LimitCountByInfo, 0, 0, weaponGroup, 0LL);
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        ServantAssetLoadManager__PreloadAssetsByArgs(v23, 0, 0LL);
        loadedAssetArgsList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.loadedAssetArgsList;
        if ( !loadedAssetArgsList )
          goto LABEL_20;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          loadedAssetArgsList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ServantAssetArgs__Add__);
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
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Action_o *v16; // x22
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40F8CB9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_BattleDemoRootComponent__LoadCueSheet_b__28_0__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v8);
    byte_40F8CB9 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  CueSheetList = this->fields.CueSheetList;
  if ( CueSheetList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v17,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CueSheetList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v17,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v17.fields.current;
      ++this->fields.CueSheetCount;
      Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      v16 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v12, v13, v14, v15);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_BattleDemoRootComponent__LoadCueSheet_b__28_0__, 0LL);
      if ( !Instance )
        sub_B170D4();
      SoundManager__LoadAudioAssetStorage(Instance, (System_String_o *)current, v16, 1, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v17,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
}


void __fastcall BattleDemoRootComponent__OnBattleDemoLoadComplete(
        BattleDemoRootComponent_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v5; // x0
  const MethodInfo *v6; // x1
  System_Collections_IEnumerator_o *v7; // x1

  if ( (byte_40F8CC2 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, obj);
    byte_40F8CC2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance
    || (BattleSequenceManager__setup((BattleSequenceManager_o *)Instance, 0LL, 1, 0LL, 0LL),
        (v5 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  BattleSequenceManager__SetupDemoActor(
    (BattleSequenceManager_o *)v5,
    this->fields.PlayerActorList,
    this->fields.EnemyActorList,
    0LL);
  v7 = BattleDemoRootComponent__WaitToNoblePhantasmPlay(this, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDemoRootComponent__OnBattleEndScript(
        BattleDemoRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  int32_t questId; // w20
  int32_t questPhase; // w21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v12; // x22

  if ( (byte_40F8CC8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string___ctor__, isExit);
    sub_B16FFC(&System_Action_string__TypeInfo, v6);
    sub_B16FFC(&Method_BattleDemoRootComponent__OnBattleEndScript_b__47_0__, v7);
    sub_B16FFC(&ScriptManager_TypeInfo, v8);
    byte_40F8CC8 = 1;
  }
  battleSetupInfo = this->fields.battleSetupInfo;
  if ( !battleSetupInfo )
    sub_B170D4();
  questId = battleSetupInfo->fields.questId;
  questPhase = battleSetupInfo->fields.questPhase;
  v12 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_string__TypeInfo,
                                                                               isExit,
                                                                               method,
                                                                               v3,
                                                                               v4);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattleDemoRootComponent__OnBattleEndScript_b__47_0__,
    (const MethodInfo_24B7310 *)Method_System_Action_string___ctor__);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__LoadBattleEndGameDemo(questId, questPhase, 0, (System_Action_string__o *)v12, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDemoRootComponent__OnBattleStartScript(
        BattleDemoRootComponent_o *this,
        bool isExit,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40F8CC6 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6855, isExit);
    byte_40F8CC6 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_6855, 0LL);
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
  System_Action_o *BattleDemoCallback; // x0
  BattlePerformance_o *performance; // x0
  _BOOL8 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  struct UnityEngine_GameObject_array *PlayerActorList; // x21
  __int64 v32; // x8
  unsigned __int64 v33; // x22
  UnityEngine_Object_o *v34; // x20
  struct UnityEngine_GameObject_array *EnemyActorList; // x21
  __int64 v36; // x8
  unsigned __int64 v37; // x22
  UnityEngine_Object_o *v38; // x20
  struct System_Collections_Generic_List_ServantAssetArgs__o *loadedAssetArgsList; // x20
  BattleDemoRootComponent___c_c *v40; // x0
  struct BattleDemoRootComponent___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__43_0; // x21
  Il2CppObject *v43; // x22
  struct BattleDemoRootComponent___c_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  ServantAssetLoadManager_o *Instance; // x0
  const MethodInfo *v52; // x1
  BattleDemoRootComponent_c *v53; // x0
  float BGM_FADEOUT_TIME; // s8
  AssetManager_o *v55; // x0
  CommonUI_o *v56; // x0
  AvalonSceneManager_o *v57; // x0
  AvalonSceneManager_o *v58; // x0
  PlayMakerFSM_o *myFSM; // x0
  __int64 *v60; // x8
  struct BattleSetupInfo_o *battleSetupInfo; // x8
  _BOOL4 battleBefore; // w9
  _BOOL4 isBefore; // w8

  if ( (byte_40F8CC4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_ServantAssetArgs___ctor__, seq);
    sub_B16FFC(&System_Action_ServantAssetArgs__TypeInfo, v4);
    sub_B16FFC(&AssetManager_TypeInfo, v5);
    sub_B16FFC(&BattleDemoRootComponent_TypeInfo, v6);
    sub_B16FFC(&BattleFBXComponent_TypeInfo, v7);
    sub_B16FFC(&System_GC_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantAssetArgs__ForEach__, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v13);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B16FFC(&SoundManager_TypeInfo, v15);
    sub_B16FFC(&Method_BattleDemoRootComponent___c__OnNoblePhantasmPlayComplete_b__43_0__, v16);
    sub_B16FFC(&BattleDemoRootComponent___c_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_6859, v18);
    sub_B16FFC(&StringLiteral_6857, v19);
    sub_B16FFC(&StringLiteral_6856, v20);
    sub_B16FFC(&StringLiteral_2743, v21);
    sub_B16FFC(&StringLiteral_5465, v22);
    byte_40F8CC4 = 1;
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
    System_Action__Invoke(BattleDemoCallback, 0LL);
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_79;
  BattlePerformance__setupCameraFov(performance, this->fields.backupFov, 0LL);
  PlayerActorList = this->fields.PlayerActorList;
  if ( !PlayerActorList )
    goto LABEL_79;
  v32 = *(_QWORD *)&PlayerActorList->max_length;
  if ( (int)v32 >= 1 )
  {
    v33 = 0LL;
    while ( v33 < (unsigned int)v32 )
    {
      v34 = (UnityEngine_Object_o *)PlayerActorList->m_Items[v33];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v26 = UnityEngine_Object__op_Inequality(v34, 0LL, 0LL);
      if ( v26 )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34809464(v34, 0LL);
      }
      LODWORD(v32) = PlayerActorList->max_length;
      if ( (__int64)++v33 >= (int)v32 )
        goto LABEL_23;
    }
LABEL_78:
    sub_B17100(v26, v27, v28);
    sub_B170A0();
  }
LABEL_23:
  EnemyActorList = this->fields.EnemyActorList;
  if ( !EnemyActorList )
    goto LABEL_79;
  v36 = *(_QWORD *)&EnemyActorList->max_length;
  if ( (int)v36 >= 1 )
  {
    v37 = 0LL;
    while ( v37 < (unsigned int)v36 )
    {
      v38 = (UnityEngine_Object_o *)EnemyActorList->m_Items[v37];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v26 = UnityEngine_Object__op_Inequality(v38, 0LL, 0LL);
      if ( v26 )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34809464(v38, 0LL);
      }
      LODWORD(v36) = EnemyActorList->max_length;
      if ( (__int64)++v37 >= (int)v36 )
        goto LABEL_36;
    }
    goto LABEL_78;
  }
LABEL_36:
  loadedAssetArgsList = this->fields.loadedAssetArgsList;
  v40 = BattleDemoRootComponent___c_TypeInfo;
  if ( (BYTE3(BattleDemoRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDemoRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDemoRootComponent___c_TypeInfo);
    v40 = BattleDemoRootComponent___c_TypeInfo;
  }
  static_fields = v40->static_fields;
  _9__43_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__43_0;
  if ( !_9__43_0 )
  {
    if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      static_fields = BattleDemoRootComponent___c_TypeInfo->static_fields;
    }
    v43 = (Il2CppObject *)static_fields->__9;
    _9__43_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                      System_Action_ServantAssetArgs__TypeInfo,
                                                                                      v27,
                                                                                      v28,
                                                                                      v29,
                                                                                      v30);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__43_0,
      v43,
      Method_BattleDemoRootComponent___c__OnNoblePhantasmPlayComplete_b__43_0__,
      (const MethodInfo_24B7310 *)Method_System_Action_ServantAssetArgs___ctor__);
    v44 = BattleDemoRootComponent___c_TypeInfo->static_fields;
    v44->__9__43_0 = (struct System_Action_ServantAssetArgs__o *)_9__43_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v44->__9__43_0,
      (System_Int32_array **)_9__43_0,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  if ( !loadedAssetArgsList )
    goto LABEL_79;
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)loadedAssetArgsList,
    (System_Action_T__o *)_9__43_0,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_ServantAssetArgs__ForEach__);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)StringLiteral_2743, 0LL);
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_79;
  ServantAssetLoadManager__releaseNoblePhantasm(Instance, 0LL);
  BattleDemoRootComponent__ReleaseCueSheet(this, v52);
  v53 = BattleDemoRootComponent_TypeInfo;
  if ( (BYTE3(BattleDemoRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDemoRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDemoRootComponent_TypeInfo);
    v53 = BattleDemoRootComponent_TypeInfo;
  }
  BGM_FADEOUT_TIME = v53->static_fields->BGM_FADEOUT_TIME;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__fadeoutBgm(BGM_FADEOUT_TIME, 0LL);
  v55 = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !v55 )
    goto LABEL_79;
  AssetManager__RequestUnloadUnusedAssets(v55, 0LL, 0LL);
  if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_42843716(0LL);
  v56 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v56 )
LABEL_79:
    sub_B170D4();
  CommonUI__maskFadeout(v56, 1, 1.0, 0LL, 0LL);
  if ( !this->fields.battleSetupInfo )
  {
    myFSM = this->fields.myFSM;
    if ( !myFSM )
      goto LABEL_79;
    v60 = &StringLiteral_5465;
LABEL_67:
    PlayMakerFSM__SendEvent(myFSM, (System_String_o *)*v60, 0LL);
    return;
  }
  v57 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !v57 )
    goto LABEL_79;
  if ( AvalonSceneManager__IsStackScene(v57, 0LL) )
  {
    v58 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( v58 )
    {
      AvalonSceneManager__popSceneRefresh(v58, 1, (Il2CppObject *)this->fields.battleSetupInfo, 0LL);
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
    myFSM = this->fields.myFSM;
    if ( !myFSM )
      goto LABEL_79;
    if ( isBefore )
      v60 = &StringLiteral_6856;
    else
      v60 = &StringLiteral_6859;
    goto LABEL_67;
  }
  if ( !isBefore )
  {
    myFSM = this->fields.myFSM;
    if ( !myFSM )
      goto LABEL_79;
    v60 = &StringLiteral_6857;
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F8CBA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__GetEnumerator__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v6);
    byte_40F8CBA = 1;
  }
  memset(&v18, 0, sizeof(v18));
  CueSheetList = this->fields.CueSheetList;
  p_CueSheetList = (BattleServantConfConponent_o *)&this->fields.CueSheetList;
  v7 = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CueSheetList;
  if ( CueSheetList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v18,
      v7,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v18,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v18.fields.current;
      Instance = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !Instance )
        sub_B170D4();
      SoundManager__ReleaseAudioAssetStorage(Instance, (System_String_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v18,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    p_CueSheetList->klass = 0LL;
    sub_B16F98(p_CueSheetList, 0LL, v12, v13, v14, v15, v16, v17);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F8CBB & 1) == 0 )
  {
    sub_B16FFC(&BattleDemoRootComponent__SetupBattleDemo_d__30_TypeInfo, method);
    byte_40F8CBB = 1;
  }
  v6 = sub_B170CC(BattleDemoRootComponent__SetupBattleDemo_d__30_TypeInfo, method, v2, v3, v4);
  BattleDemoRootComponent__SetupBattleDemo_d__30___ctor((BattleDemoRootComponent__SetupBattleDemo_d__30_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


bool __fastcall BattleDemoRootComponent__StartBattle(BattleDemoRootComponent_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40F8CCB & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_40F8CCB = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  struct UnityEngine_GameObject_array *PlayerActorList; // x8
  UnityEngine_GameObject_o *v19; // x21
  srcLineSprite_o *Component_srcLineSprite; // x0
  BattleActorControl_o *v21; // x20
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x0
  BattleFBXComponent_c *v25; // x0
  WebViewManager_o *Instance; // x0
  struct BattlePerformanceBg_o *perfBg; // x8
  WebViewManager_o *v28; // x0
  int32_t DemoSequenceServantId; // w22
  BattleSequenceManager_o *v30; // x21
  int32_t LimitCount; // w0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  struct BattleServantData_o *battleSvtData; // x8
  int32_t treasuredvcLevel; // w23
  int32_t v38; // w20
  BattleSequenceManager_onGameObjectLoadComplete_o *v39; // x24

  if ( (byte_40F8CC1 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleDemoRootComponent_OnBattleDemoLoadComplete__, callback);
    sub_B16FFC(&BattleFBXComponent_TypeInfo, v10);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v12);
    sub_B16FFC(&StringLiteral_9332, v13);
    sub_B16FFC(&BattleSequenceManager_onGameObjectLoadComplete_TypeInfo, v14);
    byte_40F8CC1 = 1;
  }
  this->fields.BattleDemoCallback = callback;
  sub_B16F98(
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
    sub_B17100(v15, v16, v17);
    sub_B170A0();
  }
  v19 = PlayerActorList->m_Items[0];
  if ( !v19 )
    goto LABEL_19;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              v19,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !this->fields.FieldMotion )
    goto LABEL_19;
  v21 = (BattleActorControl_o *)Component_srcLineSprite;
  Fsm = PlayMakerFSM__get_Fsm(this->fields.FieldMotion, 0LL);
  if ( !Fsm )
    goto LABEL_19;
  variables = Fsm->fields.variables;
  if ( !variables )
    goto LABEL_19;
  FsmGameObject = HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                    variables,
                    (System_String_o *)StringLiteral_9332,
                    0LL);
  if ( !FsmGameObject )
    goto LABEL_19;
  HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, v19, 0LL);
  v25 = BattleFBXComponent_TypeInfo;
  if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v25 = BattleFBXComponent_TypeInfo;
  }
  v25->static_fields->EnableEvent = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  perfBg = this->fields.perfBg;
  if ( !perfBg )
    goto LABEL_19;
  if ( !Instance )
    goto LABEL_19;
  BattleSequenceManager__init(
    (BattleSequenceManager_o *)Instance,
    this->fields.performance,
    v19,
    this->fields.PlayerActorList,
    this->fields.EnemyActorList,
    this->fields.actorCamera,
    perfBg->fields.bgobject,
    0LL);
  v28 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v21 )
    goto LABEL_19;
  DemoSequenceServantId = this->fields.DemoSequenceServantId;
  v30 = (BattleSequenceManager_o *)v28;
  LimitCount = BattleActorControl__getLimitCount(v21, 0LL);
  battleSvtData = v21->fields.battleSvtData;
  if ( !battleSvtData
    || (treasuredvcLevel = battleSvtData->fields.treasuredvcLevel,
        v38 = LimitCount,
        v39 = (BattleSequenceManager_onGameObjectLoadComplete_o *)sub_B170CC(
                                                                    BattleSequenceManager_onGameObjectLoadComplete_TypeInfo,
                                                                    v32,
                                                                    v33,
                                                                    v34,
                                                                    v35),
        BattleSequenceManager_onGameObjectLoadComplete___ctor(
          v39,
          (Il2CppObject *)this,
          Method_BattleDemoRootComponent_OnBattleDemoLoadComplete__,
          0LL),
        !v30) )
  {
LABEL_19:
    sub_B170D4();
  }
  BattleSequenceManager__loadSequence(
    v30,
    DemoSequenceServantId,
    DemoSequenceServantId,
    v38,
    0,
    treasuredvcLevel,
    1,
    v39,
    0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleDemoRootComponent__WaitToNoblePhantasmPlay(
        BattleDemoRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F8CC3 & 1) == 0 )
  {
    sub_B16FFC(&BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_TypeInfo, method);
    byte_40F8CC3 = 1;
  }
  v6 = sub_B170CC(BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_TypeInfo, method, v2, v3, v4);
  BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42___ctor(
    (BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
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
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_40F8CCF & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, demoInfo);
    sub_B16FFC(&StringLiteral_6859, v5);
    byte_40F8CCF = 1;
  }
  if ( demoInfo )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B170D4();
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    goto LABEL_9;
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_6859, 0LL);
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
  BattlePerformance_o *performance; // x0
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct BattlePerformance_o *v12; // x8
  struct BattleFieldMotionComponent_array *fieldmotion; // x8
  BattleFieldMotionComponent_o *v14; // x0
  struct PlayMakerFSM_o *Fsm; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_GameObject_o *GroundObject; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *cameraObject; // x23
  UnityEngine_Transform_o *v26; // x22
  UnityEngine_GameObject_o **p_cameraObject; // x21
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  struct UnityEngine_GameObject_o *ObjectIfNotExist; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  UnityEngine_Object_o *v36; // x0
  UnityEngine_Transform_o *v37; // x20
  int v38; // s0
  UnityEngine_GameObject_o *v41; // x0
  struct BattlePerformance_o *v42; // x20
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  UnityEngine_GameObject_o *v50; // x0
  struct BattlePerformance_o *v51; // x20
  System_Int32_array **v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct BattlePerformance_o *v65; // x0
  struct BattleActionCamera_o *actioncamera; // x8
  System_Int32_array **actorcamera; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  struct BattlePerformance_o *v74; // x0
  struct BattleActionCamera_o *v75; // x8
  System_Int32_array **middleCamera; // x1
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  struct BattlePerformance_o *v83; // x8
  struct BattleActionCamera_o *v84; // x9
  System_Int32_array **frontcamera; // x1
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  struct BattlePerformance_o *v92; // x8
  struct BattleActionCamera_o *v93; // x8
  struct UnityEngine_Camera_o *v94; // x1
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  struct BattlePerformance_o *v101; // x8
  struct PlayMakerFSM_o *camerafsm; // x1
  struct PlayMakerFSM_o **p_CameraFsm; // x19
  __int64 v104; // x8
  UnityEngine_Component_o *v105; // x0
  __int64 v106; // x19
  System_Int32_array **v107; // x0
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7

  if ( (byte_40F8CCD & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, aData);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleActionCamera___, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v6);
    sub_B16FFC(&StringLiteral_11491, v7);
    byte_40F8CCD = 1;
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_31;
  BattlePerformance__loadFieldMotion(performance, aData, 0LL, 0LL);
  v12 = this->fields.performance;
  if ( !v12 )
    goto LABEL_31;
  fieldmotion = v12->fields.fieldmotion;
  if ( !fieldmotion )
    goto LABEL_31;
  if ( !fieldmotion->max_length )
  {
    sub_B17100(v9, v10, v11);
    sub_B170A0();
  }
  v14 = fieldmotion->m_Items[0];
  if ( !v14 )
    goto LABEL_31;
  Fsm = BattleFieldMotionComponent__getFsm(v14, 0LL);
  this->fields.FieldMotion = Fsm;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.FieldMotion,
    (System_Int32_array **)Fsm,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  GroundObject = this->fields.GroundObject;
  if ( !GroundObject )
    goto LABEL_31;
  gameObject = UnityEngine_GameObject__get_gameObject(GroundObject, 0LL);
  if ( !gameObject )
    goto LABEL_31;
  transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( !aData )
    goto LABEL_31;
  cameraObject = this->fields.cameraObject;
  v26 = transform;
  p_cameraObject = &this->fields.cameraObject;
  Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 aData,
                                                                 (System_String_o *)StringLiteral_11491,
                                                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  ObjectIfNotExist = BaseMonoBehaviour__createObjectIfNotExist(
                       (BaseMonoBehaviour_o *)this,
                       cameraObject,
                       Object_WarBoardWaitTimeSetting,
                       v26,
                       0LL,
                       0LL);
  this->fields.cameraObject = ObjectIfNotExist;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.cameraObject,
    (System_Int32_array **)ObjectIfNotExist,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = (UnityEngine_Object_o *)this->fields.cameraObject;
  if ( !v36 )
    goto LABEL_31;
  UnityEngine_Object__set_name(v36, (System_String_o *)StringLiteral_11491, 0LL);
  if ( !*p_cameraObject )
    goto LABEL_31;
  v37 = UnityEngine_GameObject__get_transform(*p_cameraObject, 0LL);
  *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v37 )
    goto LABEL_31;
  UnityEngine_Transform__set_eulerAngles(v37, *(UnityEngine_Vector3_o *)&v38, 0LL);
  v41 = this->fields.cameraObject;
  if ( !v41 )
    goto LABEL_31;
  v42 = this->fields.performance;
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v41,
                                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v42 )
    goto LABEL_31;
  v42->fields.camerafsm = (struct PlayMakerFSM_o *)Component_srcLineSprite;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v42->fields.camerafsm,
    Component_srcLineSprite,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v50 = this->fields.cameraObject;
  if ( !v50 )
    goto LABEL_31;
  v51 = this->fields.performance;
  v52 = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 v50,
                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActionCamera___);
  if ( !v51 )
    goto LABEL_31;
  v51->fields.actioncamera = (struct BattleActionCamera_o *)v52;
  sub_B16F98((BattleServantConfConponent_o *)&v51->fields.actioncamera, v52, v53, v54, v55, v56, v57, v58);
  v65 = this->fields.performance;
  if ( !v65 )
    goto LABEL_31;
  actioncamera = v65->fields.actioncamera;
  if ( !actioncamera )
    goto LABEL_31;
  actorcamera = (System_Int32_array **)actioncamera->fields.actorcamera;
  v65->fields.actorcamera = (struct UnityEngine_Camera_o *)actorcamera;
  sub_B16F98((BattleServantConfConponent_o *)&v65->fields.actorcamera, actorcamera, v59, v60, v61, v62, v63, v64);
  v74 = this->fields.performance;
  if ( !v74 )
    goto LABEL_31;
  v75 = v74->fields.actioncamera;
  if ( !v75 )
    goto LABEL_31;
  middleCamera = (System_Int32_array **)v75->fields.middleCamera;
  v74->fields.middleCamera = (struct UnityEngine_Camera_o *)middleCamera;
  sub_B16F98((BattleServantConfConponent_o *)&v74->fields.middleCamera, middleCamera, v68, v69, v70, v71, v72, v73);
  v83 = this->fields.performance;
  if ( !v83 )
    goto LABEL_31;
  v84 = v83->fields.actioncamera;
  if ( !v84 )
    goto LABEL_31;
  frontcamera = (System_Int32_array **)v84->fields.frontcamera;
  v83->fields.cutIncamera = (struct UnityEngine_Camera_o *)frontcamera;
  sub_B16F98((BattleServantConfConponent_o *)&v83->fields.cutIncamera, frontcamera, v77, v78, v79, v80, v81, v82);
  v92 = this->fields.performance;
  if ( !v92 )
    goto LABEL_31;
  v93 = v92->fields.actioncamera;
  if ( !v93 )
    goto LABEL_31;
  v94 = v93->fields.actorcamera;
  this->fields.actorCamera = v94;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.actorCamera,
    (System_Int32_array **)v94,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  v101 = this->fields.performance;
  if ( !v101 )
    goto LABEL_31;
  camerafsm = v101->fields.camerafsm;
  this->fields.CameraFsm = camerafsm;
  p_CameraFsm = &this->fields.CameraFsm;
  sub_B16F98(
    (BattleServantConfConponent_o *)p_CameraFsm,
    (System_Int32_array **)camerafsm,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  v104 = (__int64)*(p_CameraFsm - 7);
  if ( !v104
    || (v105 = *(UnityEngine_Component_o **)(v104 + 128)) == 0LL
    || (v106 = (__int64)*(p_CameraFsm - 4),
        v107 = (System_Int32_array **)UnityEngine_Component__get_transform(v105, 0LL),
        !v106) )
  {
LABEL_31:
    sub_B170D4();
  }
  *(_QWORD *)(v106 + 32) = v107;
  sub_B16F98((BattleServantConfConponent_o *)(v106 + 32), v107, v108, v109, v110, v111, v112, v113);
}


void __fastcall BattleDemoRootComponent___beginStartUp_b__36_0(
        BattleDemoRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  BattleDemoRootComponent___c_c *v11; // x0
  struct BattleDemoRootComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__36_1; // x20
  Il2CppObject *v14; // x21
  struct BattleDemoRootComponent___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40F8CCE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_BattleDemoRootComponent___c__beginStartUp_b__36_1__, v4);
    sub_B16FFC(&BattleDemoRootComponent___c_TypeInfo, v5);
    byte_40F8CCE = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__SetLoadMode(Instance, 0, 0LL);
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
  v11 = BattleDemoRootComponent___c_TypeInfo;
  if ( (BYTE3(BattleDemoRootComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDemoRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDemoRootComponent___c_TypeInfo);
    v11 = BattleDemoRootComponent___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__36_1 = static_fields->__9__36_1;
  if ( !_9__36_1 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = BattleDemoRootComponent___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__36_1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
    System_Action___ctor(_9__36_1, v14, Method_BattleDemoRootComponent___c__beginStartUp_b__36_1__, 0LL);
    v15 = BattleDemoRootComponent___c_TypeInfo->static_fields;
    v15->__9__36_1 = _9__36_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__36_1,
      (System_Int32_array **)_9__36_1,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !this )
LABEL_14:
    sub_B170D4();
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
  AvalonSceneManager_o *v5; // x0

  if ( (byte_40F8CBF & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_40F8CBF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__maskFadeout(Instance, 1, 0.0, 0LL, 0LL),
        (v5 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  AvalonSceneManager__endInitialize(v5, (SceneRootComponent_o *)this, 0LL);
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
  struct BattleSetupInfo_o *battleSetupInfo; // x8

  demoInfo = data;
  if ( (byte_40F8CC0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, data);
    sub_B16FFC(&Method_BattleDemoRootComponent__beginStartUp_b__36_0__, v10);
    sub_B16FFC(&BattleSetupInfo_TypeInfo, v11);
    byte_40F8CC0 = 1;
  }
  if ( demoInfo )
  {
    v12 = *(&BattleSetupInfo_TypeInfo->_2.bitflags2 + 1);
    if ( *(&demoInfo->klass->_2.bitflags2 + 1) >= (unsigned int)v12
      && (BattleSetupInfo_c *)demoInfo->klass->_2.typeHierarchy[v12 - 1] == BattleSetupInfo_TypeInfo )
    {
      this->fields.battleSetupInfo = (struct BattleSetupInfo_o *)demoInfo;
      sub_B16F98(
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
        sub_B170D4();
      demoInfo = (Il2CppObject *)battleSetupInfo->fields.demoInfo;
    }
    else
    {
      demoInfo = 0LL;
    }
  }
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, data, method, v3, v4);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct BattleDemoRootComponent_o *_4__this; // x20
  AssetLoader_LoadEndDataHandler_o *v15; // x21
  System_Action_o *InitializeCallback; // x0
  Il2CppObject *v17; // x0
  Il2CppObject **v18; // x19
  BattlePerformance_o *performance; // x0
  Il2CppObject *v20; // x0
  Il2CppObject **p__2__current; // x19
  int v22; // w8
  Il2CppObject *v23; // x0
  PlayMakerFSM_o *CameraFsm; // x0
  System_String_o *BgmName; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  UnityEngine_WaitForSeconds_o *v30; // x20
  int v32; // [xsp+Ch] [xbp-24h] BYREF
  int v33; // [xsp+18h] [xbp-18h] BYREF
  int v34; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_40F8507 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&Method_BattleDemoRootComponent__SetupBattleDemo_b__30_0__, v6);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v9);
    sub_B16FFC(&SoundManager_TypeInfo, v10);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_2743, v12);
    sub_B16FFC(&StringLiteral_11052, v13);
    byte_40F8507 = 1;
  }
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      v15 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, method, v2, v3, v4);
      AssetLoader_LoadEndDataHandler___ctor(
        v15,
        (Il2CppObject *)_4__this,
        Method_BattleDemoRootComponent__SetupBattleDemo_b__30_0__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__loadAssetStorage((System_String_o *)StringLiteral_2743, v15, 1, 0LL);
      goto LABEL_16;
    case 1:
      this->fields.__1__state = -1;
LABEL_16:
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( !AssetManager__LoadIsBusy(0LL) )
      {
        if ( _4__this )
        {
          performance = _4__this->fields.performance;
          if ( performance )
          {
            BattlePerformance__ForceLoadBg(performance, _4__this->fields.BgId, _4__this->fields.BgType, 0LL);
            BattleDemoRootComponent__LoadBattleChrs(_4__this, _4__this->fields.PlayerList, 0LL);
            BattleDemoRootComponent__LoadBattleChrs(_4__this, _4__this->fields.EnemyList, 0LL);
LABEL_24:
            if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
            }
            if ( ServantAssetLoadManager__checkLoad(0LL) )
            {
              v33 = 0;
              v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
              this->fields.__2__current = v20;
              p__2__current = &this->fields.__2__current;
              sub_B16F98(p__2__current, v20);
              v22 = 2;
LABEL_38:
              *((_DWORD *)p__2__current - 2) = v22;
              LOBYTE(InitializeCallback) = 1;
              return (char)InitializeCallback;
            }
            if ( _4__this )
            {
              BattleDemoRootComponent__LoadCueSheet(_4__this, 0LL);
LABEL_31:
              if ( _4__this->fields.CueSheetCount )
              {
                v32 = 0;
                v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
                this->fields.__2__current = v23;
                p__2__current = &this->fields.__2__current;
                sub_B16F98(p__2__current, v23);
                v22 = 3;
                goto LABEL_38;
              }
              BattleDemoRootComponent__CreateActors(_4__this, 0LL);
              CameraFsm = _4__this->fields.CameraFsm;
              if ( CameraFsm )
              {
                PlayMakerFSM__SendEvent(CameraFsm, (System_String_o *)StringLiteral_11052, 0LL);
                BgmName = _4__this->fields.BgmName;
                if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !SoundManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                }
                SoundManager__playBgm(BgmName, 0LL);
                v30 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(
                                                        UnityEngine_WaitForSeconds_TypeInfo,
                                                        v26,
                                                        v27,
                                                        v28,
                                                        v29);
                UnityEngine_WaitForSeconds___ctor(v30, 1.0, 0LL);
                this->fields.__2__current = (Il2CppObject *)v30;
                p__2__current = &this->fields.__2__current;
                sub_B16F98(p__2__current, v30);
                v22 = 4;
                goto LABEL_38;
              }
            }
          }
        }
LABEL_40:
        sub_B170D4();
      }
      v34 = 0;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
      this->fields.__2__current = v17;
      v18 = &this->fields.__2__current;
      sub_B16F98(v18, v17);
      LOBYTE(InitializeCallback) = 1;
      *((_DWORD *)v18 - 2) = 1;
      return (char)InitializeCallback;
    case 2:
      this->fields.__1__state = -1;
      goto LABEL_24;
    case 3:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_40;
      goto LABEL_31;
    case 4:
      this->fields.__1__state = -1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleDemoRootComponent__SetupBattleDemo_d__30_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v13; // x19
  bool result; // w0
  struct BattleDemoRootComponent_o *_4__this; // x19
  BattlePerformance_o *performance; // x0
  struct BattlePerformance_o *v17; // x20
  BattlePerformance_c *v18; // x0
  struct BattlePerformance_o *v19; // x8
  UnityEngine_Component_o *actorcamera; // x0
  UnityEngine_Transform_o *transform; // x20
  int v22; // s0
  CommonUI_o *Instance; // x0
  WebViewManager_o *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v31; // x21

  if ( (byte_40F8508 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_USSequencer___ctor__, method);
    sub_B16FFC(&System_Action_USSequencer__TypeInfo, v6);
    sub_B16FFC(&Method_BattleDemoRootComponent_OnNoblePhantasmPlayComplete__, v7);
    sub_B16FFC(&BattlePerformance_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B16FFC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v11);
    byte_40F8508 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_19;
    performance = _4__this->fields.performance;
    if ( !performance )
      goto LABEL_19;
    BattlePerformance__FlipAll(performance, 0, 0LL);
    v17 = _4__this->fields.performance;
    if ( !v17 )
      goto LABEL_19;
    _4__this->fields.backupFov = v17->fields.currentFov;
    v18 = BattlePerformance_TypeInfo;
    if ( (BYTE3(BattlePerformance_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattlePerformance_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
      v18 = BattlePerformance_TypeInfo;
    }
    BattlePerformance__setupCameraFov(v17, v18->static_fields->DefaultFov, 0LL);
    v19 = _4__this->fields.performance;
    if ( !v19 )
      goto LABEL_19;
    actorcamera = (UnityEngine_Component_o *)v19->fields.actorcamera;
    if ( !actorcamera )
      goto LABEL_19;
    transform = UnityEngine_Component__get_transform(actorcamera, 0LL);
    *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_zero(0LL);
    if ( !transform
      || (UnityEngine_Transform__set_localEulerAngles(transform, *(UnityEngine_Vector3_o *)&v22, 0LL),
          (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
      || (CommonUI__maskFadein(Instance, 1.0, 0LL, 0LL),
          v26 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__),
          v31 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                       System_Action_USSequencer__TypeInfo,
                                                                                       v27,
                                                                                       v28,
                                                                                       v29,
                                                                                       v30),
          System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
            v31,
            (Il2CppObject *)_4__this,
            Method_BattleDemoRootComponent_OnNoblePhantasmPlayComplete__,
            (const MethodInfo_24B7310 *)Method_System_Action_USSequencer___ctor__),
          !v26) )
    {
LABEL_19:
      sub_B170D4();
    }
    BattleSequenceManager__play((BattleSequenceManager_o *)v26, 0, 1, (System_Action_USSequencer__o *)v31, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v13 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3, v4);
    UnityEngine_WaitForEndOfFrame___ctor(v13, 0LL);
    this->fields.__2__current = (Il2CppObject *)v13;
    sub_B16F98(&this->fields.__2__current, v13);
    result = 1;
    this->fields.__1__state = 1;
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
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleDemoRootComponent__WaitToNoblePhantasmPlay_d__42_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattleDemoRootComponent___c_StaticFields *static_fields; // x0

  if ( (byte_40F8505 & 1) == 0 )
  {
    sub_B16FFC(&BattleDemoRootComponent___c_TypeInfo, v1);
    byte_40F8505 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleDemoRootComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattleDemoRootComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleDemoRootComponent___c_o *)v5;
  sub_B16F98(static_fields, v5);
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
  if ( (byte_40F8506 & 1) == 0 )
  {
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, args);
    byte_40F8506 = 1;
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