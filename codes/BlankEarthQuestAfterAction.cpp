void BlankEarthQuestAfterAction___ctor(BlankEarthQuestAfterAction_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BlankEarthGimmickEntity_o *BlankEarthQuestAfterAction__GetGimmickEntity(
        BlankEarthQuestAfterAction_o *this,
        int32_t gimmickId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_4CC400D & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
    byte_4CC400D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
  if ( !Master_object )
    sub_1C71608(0, v5);
  return (BlankEarthGimmickEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        gimmickId,
                                        (const MethodInfo_3408E80 *)Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
}


BlankEarthSpotEntity_o *BlankEarthQuestAfterAction__GetSpotEntity(
        BlankEarthQuestAfterAction_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_4CC400C & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__);
    byte_4CC400C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    sub_1C71608(0, v5);
  return (BlankEarthSpotEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                     spotId,
                                     (const MethodInfo_3408E80 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__);
}


BlankEarthSpotEntity_o *BlankEarthQuestAfterAction__GetSpotEntityByQuestId(
        BlankEarthQuestAfterAction_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  BlankEarthSpotEntity_o *result; // x0
  BlankEarthQuestAfterAction_o *SpotID; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4CC400E & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4CC400E = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v5);
  result = (BlankEarthSpotEntity_o *)QuestTree__GetQuestInfo((QuestTree_o *)Instance, questId, 0);
  if ( result )
  {
    SpotID = (BlankEarthQuestAfterAction_o *)MapControl_QuestInfo__GetSpotID((MapControl_QuestInfo_o *)result, 0);
    return BlankEarthQuestAfterAction__GetSpotEntity(SpotID, (int32_t)SpotID, v8);
  }
  return result;
}


bool BlankEarthQuestAfterAction__IsBlankEarthActive(BlankEarthQuestAfterAction_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  UnityEngine_Object_o *mInstance; // x19
  intptr_t v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *m_CachedPtr; // x20

  if ( (byte_4CC400F & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    byte_4CC400F = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CC12CE )
  {
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    byte_4CC12CE = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v2->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(mInstance, 0, 0);
  if ( (v4 & 1) != 0 )
    return 0;
  if ( !mInstance )
    goto LABEL_19;
  m_CachedPtr = (UnityEngine_Object_o *)mInstance[10].fields.m_CachedPtr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(m_CachedPtr, 0, 0) )
    return 0;
  v4 = mInstance[10].fields.m_CachedPtr;
  if ( !v4 )
LABEL_19:
    sub_1C71608(v4, v5);
  return ScrTerminalListTop__get_IsActiveBlankEarth((ScrTerminalListTop_o *)v4, 0);
}


void BlankEarthQuestAfterAction__ReserveMovieToPlayAtSpot(
        BlankEarthQuestAfterAction_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x19
  System_String_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *m_CachedPtr; // x20
  ScrTerminalListTop_o *v8; // x19
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = spotId;
  if ( (byte_4CC4010 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    byte_4CC4010 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CC12CE )
  {
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    byte_4CC12CE = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v3->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (System_String_o *)UnityEngine_Object__op_Equality(mInstance, 0, 0);
  if ( ((unsigned __int8)v5 & 1) == 0 )
  {
    if ( !mInstance )
      goto LABEL_19;
    m_CachedPtr = (UnityEngine_Object_o *)mInstance[10].fields.m_CachedPtr;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(m_CachedPtr, 0, 0) )
    {
      v8 = (ScrTerminalListTop_o *)mInstance[10].fields.m_CachedPtr;
      v5 = System_Int32__ToString((int32_t)&v9, 0);
      if ( v8 )
      {
        ScrTerminalListTop__ReserveEnabledOpeningMovieEntity(v8, 4, v5, 0);
        return;
      }
LABEL_19:
      sub_1C71608(v5, v6);
    }
  }
}


bool BlankEarthQuestAfterAction__TryGetParam(
        BlankEarthQuestAfterAction_o *this,
        QuestAfterAction_Command_o *command,
        BlankEarthQuestAfterAction_CommandParam_o **commandParam,
        System_String_o **errorMessage,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  Il2CppObject *v11; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t id; // w8
  System_String_o *v21; // x0
  System_String_array *v22; // x0
  __int64 v23; // x1
  System_String_array *v24; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v25; // x22
  BlankEarthQuestAfterAction_o *v26; // x0
  const MethodInfo *v27; // x2
  BlankEarthGimmickEntity_o *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  __int64 v35; // x0
  BlankEarthQuestAfterAction_CommandParam_o *v36; // x20
  __int64 v37; // x0
  __int64 v38; // x1
  System_String_o *v39; // x0
  System_String_array *v40; // x0
  __int64 v41; // x1
  System_String_array *v42; // x21
  int v43; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v44; // x22
  bool v45; // w8
  System_String_o *v46; // x0
  System_String_array *v47; // x0
  __int64 v48; // x1
  System_String_array *v49; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v50; // x22
  __int64 v51; // x0
  __int64 v52; // x1
  BlankEarthQuestAfterAction_CommandParam_o *v53; // x20
  __int64 v54; // x0
  __int64 v55; // x1
  bool result; // w0
  unsigned int v57; // w8
  int v58; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v59; // x20
  BlankEarthQuestAfterAction_o *v60; // x0
  const MethodInfo *v61; // x2
  BlankEarthSpotEntity_o *SpotEntity; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  int32_t v69; // w1
  BlankEarthQuestAfterAction_o *v70; // x0
  const MethodInfo *v71; // x2
  BlankEarthQuestAfterAction_CommandParam_o *v72; // x20
  BlankEarthQuestAfterAction_o *v73; // x0
  const MethodInfo *v74; // x2
  BlankEarthGimmickEntity_o *GimmickEntity; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  int32_t v82; // w1
  System_String_o *v83; // x0
  System_String_array *v84; // x0
  __int64 v85; // x1
  System_String_array *v86; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v87; // x22
  __int64 v88; // x0
  __int64 v89; // x1
  float v90; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v91; // x22
  __int64 v92; // x0
  float v93; // s0
  float v94; // s8
  __int64 v95; // x0
  float v96; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v97; // x20
  __int64 v98; // x0
  __int64 v99; // x1
  System_String_o *v100; // x0
  System_String_array *v101; // x0
  __int64 v102; // x1
  System_String_array *v103; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v104; // x22
  BlankEarthQuestAfterAction_o *v105; // x0
  const MethodInfo *v106; // x2
  BlankEarthSpotEntity_o *v107; // x0
  int32_t v108; // w2
  int32_t v109; // w3
  System_String_o *v110; // x4
  int32_t v111; // w5
  int64_t v112; // x6
  System_String_o *v113; // x7
  __int64 v114; // x0
  __int64 v115; // x1
  BlankEarthQuestAfterAction_o *v116; // x0
  const MethodInfo *v117; // x2
  System_String_o *v118; // x0
  System_String_array *v119; // x0
  __int64 v120; // x1
  System_String_array *v121; // x21
  int v122; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v123; // x22
  float v124; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v125; // x22
  __int64 v126; // x0
  System_String_o *param; // x0
  System_String_array *v128; // x0
  __int64 v129; // x1
  System_String_array *v130; // x21
  int max_length; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v132; // x22
  float v133; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v134; // x22
  __int64 v135; // x0
  BlankEarthQuestAfterAction_o *v136; // x0
  const MethodInfo *v137; // x2
  BlankEarthQuestAfterAction_o *v138; // x0
  const MethodInfo *v139; // x2

  if ( (byte_4CC400B & 1) == 0 )
  {
    sub_1C713B0(&BlankEarthQuestAfterAction_CommandParam_TypeInfo);
    byte_4CC400B = 1;
  }
  *errorMessage = 0;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)errorMessage,
    0,
    (int32_t)commandParam,
    (int32_t)errorMessage,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  v11 = (Il2CppObject *)sub_1C715FC(BlankEarthQuestAfterAction_CommandParam_TypeInfo);
  System_Object___ctor(v11, 0);
  *commandParam = (BlankEarthQuestAfterAction_CommandParam_o *)v11;
  sub_1C71354((GrandQuestFolderBoardItem_o *)commandParam, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  if ( !command )
    sub_1C71608(v18, v19);
  id = command->fields.id;
  if ( id <= 500 )
  {
    if ( id <= 303 )
    {
      result = 1;
      if ( id > 299 )
      {
        if ( id != 300 )
        {
          if ( id == 302 )
          {
            param = command->fields.param;
            if ( !param )
              sub_1C71608(0, v19);
            v128 = System_String__Split(param, 0x2Cu, 0, 0);
            v130 = v128;
            if ( !v128 )
              sub_1C71608(0, v129);
            max_length = v128->max_length;
            if ( max_length > 0 )
            {
              v132 = *commandParam;
              v133 = 0.5;
              if ( max_length >= 3 )
                v133 = System_Single__Parse(v128->m_Items[2], 0) * 0.001;
              if ( !v132 )
                sub_1C71608(v128, v129);
              v132->fields.time = v133;
              v134 = *commandParam;
              if ( SLODWORD(v130->max_length) >= 2 )
                v135 = System_Int32__Parse(v130->m_Items[1], 0);
              else
                v135 = 15;
              if ( !v134 )
                sub_1C71608(v135, v129);
              v134->fields.easeType = v135;
              if ( !LODWORD(v130->max_length) )
                sub_1C71610(v135);
              v72 = *commandParam;
              v138 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v130->m_Items[0], 0);
              GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v138, (int32_t)v138, v139);
              v82 = (int)GimmickEntity;
              if ( !v72 )
                sub_1C71608(GimmickEntity, GimmickEntity);
              goto LABEL_70;
            }
          }
          else
          {
            if ( id != 303 )
              return result;
            v83 = command->fields.param;
            if ( !v83 )
              sub_1C71608(0, v19);
            v84 = System_String__Split(v83, 0x2Cu, 0, 0);
            v86 = v84;
            if ( !v84 )
              sub_1C71608(0, v85);
            if ( SLODWORD(v84->max_length) > 3 )
            {
              v87 = *commandParam;
              v90 = System_Single__Parse(v84->m_Items[2], 0);
              if ( !v87 )
                sub_1C71608(v88, v89);
              v87->fields.time = v90 * 0.001;
              v91 = *commandParam;
              if ( !*commandParam )
                sub_1C71608(v88, v89);
              if ( v91->fields.time < 0.0 )
                v91->fields.time = 0.5;
              if ( !LODWORD(v86->max_length) )
                sub_1C71610(v88);
              v93 = System_Single__Parse(v86->m_Items[0], 0);
              if ( LODWORD(v86->max_length) <= 1 )
                sub_1C71610(v92);
              v94 = v93;
              v96 = System_Single__Parse(v86->m_Items[1], 0);
              v91->fields.latLongVector.fields.x = v94;
              v91->fields.latLongVector.fields.y = v96;
              if ( LODWORD(v86->max_length) <= 3 )
                sub_1C71610(v95);
              v97 = *commandParam;
              v98 = System_Int32__Parse(v86->m_Items[3], 0);
              if ( !v97 )
                sub_1C71608(v98, v99);
              v97->fields.easeType = v98;
              return 1;
            }
          }
          return 0;
        }
        v118 = command->fields.param;
        if ( !v118 )
          sub_1C71608(0, v19);
        v119 = System_String__Split(v118, 0x2Cu, 0, 0);
        v121 = v119;
        if ( !v119 )
          sub_1C71608(0, v120);
        v122 = v119->max_length;
        if ( v122 <= 0 )
          return 0;
        v123 = *commandParam;
        v124 = 0.5;
        if ( v122 >= 3 )
          v124 = System_Single__Parse(v119->m_Items[2], 0) * 0.001;
        if ( !v123 )
          sub_1C71608(v119, v120);
        v123->fields.time = v124;
        v125 = *commandParam;
        if ( SLODWORD(v121->max_length) >= 2 )
          v126 = System_Int32__Parse(v121->m_Items[1], 0);
        else
          v126 = 15;
        if ( !v125 )
          sub_1C71608(v126, v120);
        v125->fields.easeType = v126;
        if ( !LODWORD(v121->max_length) )
          sub_1C71610(v126);
        v59 = *commandParam;
        v136 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v121->m_Items[0], 0);
        SpotEntity = BlankEarthQuestAfterAction__GetSpotEntity(v136, (int32_t)v136, v137);
        v69 = (int)SpotEntity;
        if ( !v59 )
          sub_1C71608(SpotEntity, SpotEntity);
      }
      else
      {
        v57 = id - 100;
        if ( v57 > 0xE )
          return result;
        v58 = 1 << v57;
        if ( (v58 & 0x1C07) == 0 )
        {
          if ( (v58 & 0x4010) == 0 )
            return result;
          v100 = command->fields.param;
          if ( !v100 )
            sub_1C71608(0, v19);
          v101 = System_String__Split(v100, 0x2Cu, 0, 0);
          v103 = v101;
          if ( !v101 )
            sub_1C71608(0, v102);
          if ( !LODWORD(v101->max_length) )
            sub_1C71610(v101);
          v104 = *commandParam;
          v105 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v101->m_Items[0], 0);
          v107 = BlankEarthQuestAfterAction__GetSpotEntity(v105, (int32_t)v105, v106);
          if ( !v104 )
            sub_1C71608(v107, v107);
          v104->fields.blankEarthSpotEntity = v107;
          sub_1C71354((GrandQuestFolderBoardItem_o *)&v104->fields, (int32_t)v107, v108, v109, v110, v111, v112, v113);
          if ( LODWORD(v103->max_length) <= 1 )
            sub_1C71610(v114);
          v36 = *commandParam;
          v37 = System_Int32__Parse(v103->m_Items[1], 0);
          if ( !v36 )
            sub_1C71608(v37, v115);
          goto LABEL_65;
        }
        v59 = *commandParam;
        v60 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0);
        SpotEntity = BlankEarthQuestAfterAction__GetSpotEntity(v60, (int32_t)v60, v61);
        v69 = (int)SpotEntity;
        if ( !v59 )
          sub_1C71608(SpotEntity, SpotEntity);
      }
    }
    else
    {
      if ( (id & 0xFFFFFFFC) == 0x190 )
      {
        v39 = command->fields.param;
        if ( !v39 )
          sub_1C71608(0, v19);
        v40 = System_String__Split(v39, 0x2Cu, 0, 0);
        v42 = v40;
        if ( !v40 )
          sub_1C71608(0, v41);
        v43 = v40->max_length;
        if ( v43 > 0 )
        {
          v44 = *commandParam;
          if ( v43 == 1 )
          {
            v45 = 0;
          }
          else
          {
            v40 = (System_String_array *)System_Int32__Parse(v40->m_Items[1], 0);
            v45 = (int)v40 > 0;
          }
          if ( !v44 )
            sub_1C71608(v40, v41);
          v44->fields.noWait = v45;
          if ( !LODWORD(v42->max_length) )
            sub_1C71610(v40);
          v72 = *commandParam;
          v116 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v42->m_Items[0], 0);
          GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v116, (int32_t)v116, v117);
          v82 = (int)GimmickEntity;
          if ( !v72 )
            sub_1C71608(GimmickEntity, GimmickEntity);
          goto LABEL_70;
        }
        return 0;
      }
      if ( id != 500 )
        return 1;
      v59 = *commandParam;
      v70 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0);
      SpotEntity = BlankEarthQuestAfterAction__GetSpotEntityByQuestId(v70, (int32_t)v70, v71);
      v69 = (int)SpotEntity;
      if ( !v59 )
        sub_1C71608(SpotEntity, SpotEntity);
    }
    v59->fields.blankEarthSpotEntity = SpotEntity;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v59->fields, v69, v63, v64, v65, v66, v67, v68);
    return 1;
  }
  if ( id > 1001 )
  {
    if ( id == 1002 )
    {
LABEL_7:
      v21 = command->fields.param;
      if ( !v21 )
        sub_1C71608(0, v19);
      v22 = System_String__Split(v21, 0x2Cu, 0, 0);
      v24 = v22;
      if ( !v22 )
        sub_1C71608(0, v23);
      if ( !LODWORD(v22->max_length) )
        sub_1C71610(v22);
      v25 = *commandParam;
      v26 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v22->m_Items[0], 0);
      v28 = BlankEarthQuestAfterAction__GetGimmickEntity(v26, (int32_t)v26, v27);
      if ( !v25 )
        sub_1C71608(v28, v28);
      v25->fields.blankEarthGimmickEntity = v28;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&v25->fields.blankEarthGimmickEntity,
        (int32_t)v28,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      if ( LODWORD(v24->max_length) <= 1 )
        sub_1C71610(v35);
      v36 = *commandParam;
      v37 = System_Int32__Parse(v24->m_Items[1], 0);
      if ( !v36 )
        sub_1C71608(v37, v38);
LABEL_65:
      v36->fields.intValue = v37;
      return 1;
    }
    if ( (id & 0xFFFFFFFE) != 0x3F2 )
    {
      if ( id != 1012 )
        return 1;
      goto LABEL_7;
    }
    goto LABEL_41;
  }
  if ( id == 702 )
  {
    v46 = command->fields.param;
    if ( !v46 )
      sub_1C71608(0, v19);
    v47 = System_String__Split(v46, 0x2Cu, 0, 0);
    v49 = v47;
    if ( !v47 )
      sub_1C71608(0, v48);
    if ( LODWORD(v47->max_length) <= 1 )
      sub_1C71610(v47);
    v50 = *commandParam;
    v51 = System_Int32__Parse(v47->m_Items[1], 0);
    if ( !v50 )
      sub_1C71608(v51, v52);
    v50->fields.intValue = v51;
    if ( !LODWORD(v49->max_length) )
      sub_1C71610(v51);
    v53 = *commandParam;
    v54 = System_Int32__Parse(v49->m_Items[0], 0);
    if ( !v53 )
      sub_1C71608(v54, v55);
    v53->fields.onFade = (int)v54 > 0;
    return 1;
  }
  if ( (id & 0xFFFFFFFE) == 0x3E8 )
  {
LABEL_41:
    v72 = *commandParam;
    v73 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0);
    GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v73, (int32_t)v73, v74);
    v82 = (int)GimmickEntity;
    if ( !v72 )
      sub_1C71608(GimmickEntity, GimmickEntity);
LABEL_70:
    v72->fields.blankEarthGimmickEntity = GimmickEntity;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v72->fields.blankEarthGimmickEntity, v82, v76, v77, v78, v79, v80, v81);
  }
  return 1;
}


bool BlankEarthQuestAfterAction__UpdateAnim(
        BlankEarthQuestAfterAction_o *this,
        QuestAfterAction_o *that,
        QuestAfterAction_Command_o *command,
        System_Action_o *endAnimCallback,
        bool *isQuickUpdate,
        const MethodInfo *method)
{
  __int64 v10; // x23
  QuestTree_o *IsOtherObjHideCommand; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Action_o **v19; // x19
  BlankEarthQuestAfterAction_o *v20; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x4
  bool v23; // w24
  System_Collections_Generic_List_QuestReleaseEntity__c *klass; // x8
  __int64 v25; // x8
  int id; // w22
  BlankEarth_o *v27; // x20
  struct BlankEarthGimmickEntity_o *blankEarthGimmickEntity; // x8
  UnityEngine_Object_o *EarthGimmick; // x20
  bool IsNoWaitCommand; // w23
  int32_t intValue; // w22
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v33; // x21
  System_Collections_Generic_List_QuestReleaseEntity__c *v34; // x8
  __int64 v35; // x8
  const MethodInfo *v36; // x2
  int32_t parentBlankEarthSpotId; // w1
  int v38; // w8
  bool v39; // w21
  int32_t v40; // w2
  System_Collections_Generic_List_QuestReleaseEntity__c *v41; // x8
  __int64 v42; // x8
  struct BlankEarthSpotEntity_o *blankEarthSpotEntity; // x8
  struct BlankEarthSpotEntity_o *v44; // x8
  bool v45; // w21
  System_Action_object__o *v46; // x19
  TerminalPramsManager_c *v48; // x0
  TerminalPramsManager_c *v49; // x0
  System_Action_object__o *v50; // x19
  System_Action_object__o *v51; // x19
  System_String_o *v52; // [xsp+0h] [xbp-50h] BYREF
  BlankEarthQuestAfterAction_CommandParam_o *commandParam; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CC400A & 1) == 0 )
  {
    sub_1C713B0(&System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&QuestAfterAction_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C713B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C713B0(&TerminalPramsManager_TypeInfo);
    sub_1C713B0(&TerminalSceneComponent_TypeInfo);
    sub_1C713B0(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__0__);
    sub_1C713B0(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__);
    sub_1C713B0(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__2__);
    sub_1C713B0(&BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo);
    byte_4CC400A = 1;
  }
  v52 = 0;
  commandParam = 0;
  v10 = sub_1C715FC(BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !v10 )
    goto LABEL_141;
  *(_QWORD *)(v10 + 16) = endAnimCallback;
  v19 = (System_Action_o **)(v10 + 16);
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v10 + 16), (int32_t)endAnimCallback, v13, v14, v15, v16, v17, v18);
  *isQuickUpdate = 0;
  v23 = 0;
  if ( BlankEarthQuestAfterAction__IsBlankEarthActive(v20, v21) )
  {
    if ( !BlankEarthQuestAfterAction__TryGetParam(this, command, &commandParam, &v52, v22) )
    {
LABEL_83:
      ActionExtensions__Call(*v19, 0);
      return 1;
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4CC12CE )
    {
      sub_1C713B0(&TerminalSceneComponent_TypeInfo);
      byte_4CC12CE = 1;
    }
    IsOtherObjHideCommand = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      IsOtherObjHideCommand = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = IsOtherObjHideCommand[1].fields.questReleaseEntList->klass;
    if ( !klass )
      goto LABEL_141;
    v25 = *(_QWORD *)&klass->_2.element_size;
    if ( !v25 || !command )
      goto LABEL_141;
    id = command->fields.id;
    v27 = *(BlankEarth_o **)(v25 + 432);
    if ( id > 500 )
    {
      if ( id > 1001 )
      {
        if ( id == 1002 )
          goto LABEL_18;
        if ( (id & 0xFFFFFFFE) != 0x3F2 )
        {
          if ( id != 1012 )
            return 0;
LABEL_18:
          if ( commandParam && v27 )
          {
            BlankEarth__PlayOtherObjectUniqueAnim(
              v27,
              commandParam->fields.blankEarthGimmickEntity,
              commandParam->fields.intValue,
              id == 1012,
              *v19,
              0);
            return 0;
          }
          goto LABEL_141;
        }
LABEL_86:
        if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
        v45 = QuestAfterAction__IsOtherObjChangeDispQuicklyCommand(id, 0);
        IsOtherObjHideCommand = (QuestTree_o *)QuestAfterAction__IsOtherObjHideCommand(id, 0);
        if ( commandParam && v27 )
        {
          BlankEarth__RevealOtherObject(
            v27,
            commandParam->fields.blankEarthGimmickEntity,
            ((unsigned __int8)IsOtherObjHideCommand & 1) == 0,
            v45,
            *v19,
            0);
          return 0;
        }
        goto LABEL_141;
      }
      if ( id != 702 )
      {
        if ( (id & 0xFFFFFFFE) != 0x3E8 )
          return 0;
        goto LABEL_86;
      }
      if ( !commandParam )
        goto LABEL_141;
      if ( !commandParam->fields.onFade )
      {
        intValue = commandParam->fields.intValue;
        IsOtherObjHideCommand = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !IsOtherObjHideCommand )
          goto LABEL_141;
        WarEntityByWarID = QuestTree__mfGetWarEntityByWarID(IsOtherObjHideCommand, intValue, 0);
        if ( !WarEntityByWarID || (v33 = WarEntityByWarID, WarEntityByWarID->fields.parentBlankEarthSpotId < 1) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          TerminalPramsManager__SetAutoResumeForFolder(intValue, 0);
          if ( !byte_4CC3E98 )
          {
            sub_1C713B0(&TerminalPramsManager_TypeInfo);
            byte_4CC3E98 = 1;
          }
          v48 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v48 = TerminalPramsManager_TypeInfo;
          }
          if ( v48->static_fields->_DispState_k__BackingField == 3 )
          {
            if ( !v48->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v48);
            if ( !byte_4CC3F5D )
            {
              sub_1C713B0(&TerminalPramsManager_TypeInfo);
              byte_4CC3F5D = 1;
            }
            v49 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v49 = TerminalPramsManager_TypeInfo;
            }
            v49->static_fields->_IsMoveFolderByQuestAfterAction_k__BackingField = 1;
          }
          IsOtherObjHideCommand = (QuestTree_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( IsOtherObjHideCommand )
          {
            v23 = 1;
            AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)IsOtherObjHideCommand, 34, 1, 0, 0, 0);
            ActionExtensions__Call(*v19, 0);
            return v23;
          }
          goto LABEL_141;
        }
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4CC12CE )
        {
          sub_1C713B0(&TerminalSceneComponent_TypeInfo);
          byte_4CC12CE = 1;
        }
        IsOtherObjHideCommand = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          IsOtherObjHideCommand = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
        }
        v34 = IsOtherObjHideCommand[1].fields.questReleaseEntList->klass;
        if ( !v34 )
          goto LABEL_141;
        v35 = *(_QWORD *)&v34->_2.element_size;
        if ( !v35 )
          goto LABEL_141;
        *(_BYTE *)(v35 + 98) = 1;
        if ( !v27 )
          goto LABEL_141;
        IsOtherObjHideCommand = (QuestTree_o *)BlankEarth__GetPoint(v27, v33->fields.parentBlankEarthSpotId, 0, 0);
        if ( !IsOtherObjHideCommand )
          goto LABEL_141;
        BlankEarthPoint__OpenQuestList((BlankEarthPoint_o *)IsOtherObjHideCommand, 0);
        parentBlankEarthSpotId = v33->fields.parentBlankEarthSpotId;
        goto LABEL_82;
      }
      goto LABEL_91;
    }
    if ( id > 303 )
    {
      if ( (id & 0xFFFFFFFC) == 0x190 )
      {
        if ( !commandParam )
          goto LABEL_141;
        blankEarthGimmickEntity = commandParam->fields.blankEarthGimmickEntity;
        if ( !blankEarthGimmickEntity || !v27 )
          goto LABEL_141;
        EarthGimmick = (UnityEngine_Object_o *)BlankEarth__GetEarthGimmick(v27, blankEarthGimmickEntity->fields.id, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(EarthGimmick, 0, 0) )
          return 0;
        if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
        IsNoWaitCommand = QuestAfterAction__IsNoWaitCommand(id, 0);
        IsOtherObjHideCommand = (QuestTree_o *)QuestAfterAction__IsGimmickDispCommand(id, 0);
        if ( ((unsigned __int8)IsOtherObjHideCommand & 1) != 0 )
          v12 = 3;
        else
          v12 = 2;
        if ( IsNoWaitCommand )
        {
          if ( !EarthGimmick )
            goto LABEL_141;
          BlankEarthGimmickComponent__SetDispAnimQuick(
            (BlankEarthGimmickComponent_o *)EarthGimmick,
            (unsigned __int8)IsOtherObjHideCommand & 1,
            0);
        }
        else
        {
          if ( !commandParam )
            goto LABEL_141;
          if ( !commandParam->fields.noWait )
          {
            if ( !EarthGimmick )
              goto LABEL_141;
            BlankEarthGimmickComponent__SetState((BlankEarthGimmickComponent_o *)EarthGimmick, v12, *v19, 0);
            return 1;
          }
          if ( !EarthGimmick )
            goto LABEL_141;
          BlankEarthGimmickComponent__SetState((BlankEarthGimmickComponent_o *)EarthGimmick, v12, 0, 0);
        }
        v23 = 1;
        *isQuickUpdate = 1;
        return v23;
      }
      if ( id != 500 )
        return 0;
      if ( !commandParam )
LABEL_141:
        sub_1C71608(IsOtherObjHideCommand, v12);
      if ( commandParam->fields.blankEarthSpotEntity )
      {
        if ( !LODWORD(IsOtherObjHideCommand[2].fields.allSpotInfoList) )
          j_il2cpp_runtime_class_init_0(IsOtherObjHideCommand);
        if ( !byte_4CC12CE )
        {
          sub_1C713B0(&TerminalSceneComponent_TypeInfo);
          byte_4CC12CE = 1;
        }
        IsOtherObjHideCommand = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          IsOtherObjHideCommand = (QuestTree_o *)TerminalSceneComponent_TypeInfo;
        }
        v41 = IsOtherObjHideCommand[1].fields.questReleaseEntList->klass;
        if ( !v41 )
          goto LABEL_141;
        v42 = *(_QWORD *)&v41->_2.element_size;
        if ( !v42 )
          goto LABEL_141;
        *(_BYTE *)(v42 + 98) = 1;
        if ( !commandParam )
          goto LABEL_141;
        blankEarthSpotEntity = commandParam->fields.blankEarthSpotEntity;
        if ( !blankEarthSpotEntity )
          goto LABEL_141;
        if ( !v27 )
          goto LABEL_141;
        IsOtherObjHideCommand = (QuestTree_o *)BlankEarth__GetPoint(v27, blankEarthSpotEntity->fields.id, 0, 0);
        if ( !IsOtherObjHideCommand )
          goto LABEL_141;
        BlankEarthPoint__OpenQuestList((BlankEarthPoint_o *)IsOtherObjHideCommand, 0);
        if ( !commandParam )
          goto LABEL_141;
        v44 = commandParam->fields.blankEarthSpotEntity;
        if ( !v44 )
          goto LABEL_141;
        parentBlankEarthSpotId = v44->fields.id;
LABEL_82:
        BlankEarthQuestAfterAction__ReserveMovieToPlayAtSpot(
          (BlankEarthQuestAfterAction_o *)IsOtherObjHideCommand,
          parentBlankEarthSpotId,
          v36);
        goto LABEL_83;
      }
LABEL_91:
      ActionExtensions__Call(*v19, 0);
      return 0;
    }
    v23 = 0;
    if ( id > 299 )
    {
      switch ( id )
      {
        case 300:
          v50 = (System_Action_object__o *)sub_1C715FC(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_object____ctor(
            v50,
            (Il2CppObject *)v10,
            Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__0__,
            0);
          if ( !commandParam || !v27 )
            goto LABEL_141;
          BlankEarth__RotateEarthTowardsSpot(
            v27,
            commandParam->fields.blankEarthSpotEntity,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v50,
            0,
            0);
          break;
        case 302:
          v51 = (System_Action_object__o *)sub_1C715FC(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_object____ctor(
            v51,
            (Il2CppObject *)v10,
            Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__,
            0);
          if ( !commandParam || !v27 )
            goto LABEL_141;
          BlankEarth__RotateEarthTowardsGimmick(
            v27,
            commandParam->fields.blankEarthGimmickEntity,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v51,
            0);
          break;
        case 303:
          v46 = (System_Action_object__o *)sub_1C715FC(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_object____ctor(
            v46,
            (Il2CppObject *)v10,
            Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__2__,
            0);
          if ( !commandParam || !v27 )
            goto LABEL_141;
          BlankEarth__RotateEarthByLatLong(
            v27,
            commandParam->fields.latLongVector,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v46,
            0,
            0);
          break;
        default:
          return v23;
      }
      return 1;
    }
    if ( (unsigned int)(id - 100) <= 0xE )
    {
      v38 = 1 << (id - 100);
      if ( (v38 & 0x1C07) != 0 )
      {
        if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
        v39 = QuestAfterAction__IsSpotChangeDispQuicklyCommand(id, 0);
        IsOtherObjHideCommand = (QuestTree_o *)QuestAfterAction__IsSpotHideCommand(id, 0);
        if ( ((unsigned __int8)IsOtherObjHideCommand & 1) != 0 )
        {
          v40 = 0;
        }
        else
        {
          if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
          IsOtherObjHideCommand = (QuestTree_o *)QuestAfterAction__IsSpotGrayCommand(id, 0);
          if ( ((unsigned __int8)IsOtherObjHideCommand & 1) != 0 )
            v40 = 2;
          else
            v40 = 1;
        }
        if ( !commandParam || !v27 )
          goto LABEL_141;
        BlankEarth__RevealEarthPoint(v27, commandParam->fields.blankEarthSpotEntity, v40, v39, *v19, 0);
        return 1;
      }
      if ( (v38 & 0x4010) != 0 )
      {
        if ( commandParam && v27 )
        {
          BlankEarth__PlaySpotUniqueAnim(
            v27,
            commandParam->fields.blankEarthSpotEntity,
            commandParam->fields.intValue,
            id == 114,
            *v19,
            0);
          return 0;
        }
        goto LABEL_141;
      }
    }
  }
  return v23;
}


void BlankEarthQuestAfterAction_CommandParam___ctor(
        BlankEarthQuestAfterAction_CommandParam_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlankEarthQuestAfterAction___c__DisplayClass1_0___ctor(
        BlankEarthQuestAfterAction___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlankEarthQuestAfterAction___c__DisplayClass1_0___UpdateAnim_b__0(
        BlankEarthQuestAfterAction___c__DisplayClass1_0_o *this,
        BlankEarth_QAARotateEarthResponse_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAnimCallback, 0);
}


void BlankEarthQuestAfterAction___c__DisplayClass1_0___UpdateAnim_b__1(
        BlankEarthQuestAfterAction___c__DisplayClass1_0_o *this,
        BlankEarth_QAARotateEarthResponse_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAnimCallback, 0);
}


void BlankEarthQuestAfterAction___c__DisplayClass1_0___UpdateAnim_b__2(
        BlankEarthQuestAfterAction___c__DisplayClass1_0_o *this,
        BlankEarth_QAARotateEarthResponse_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAnimCallback, 0);
}