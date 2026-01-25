void BlankEarthQuestAfterAction___ctor(BlankEarthQuestAfterAction_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BlankEarth_o *BlankEarthQuestAfterAction__GetBlankEarth(BlankEarthQuestAfterAction_o *this, const MethodInfo *method)
{
  ScrTerminalListTop_o *TerminalListTop; // x19
  __int64 v3; // x1
  bool v4; // w8
  BlankEarth_o *result; // x0

  if ( (byte_4CEB206 & 1) == 0 )
  {
    this = (BlankEarthQuestAfterAction_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEB206 = 1;
  }
  TerminalListTop = BlankEarthQuestAfterAction__GetTerminalListTop(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TerminalListTop, 0, 0);
  result = 0;
  if ( v4 )
  {
    if ( !TerminalListTop )
      sub_1C7BD40(0, v3);
    return TerminalListTop->fields.blankEarth;
  }
  return result;
}


BlankEarthGimmickEntity_o *BlankEarthQuestAfterAction__GetGimmickEntity(
        BlankEarthQuestAfterAction_o *this,
        int32_t gimmickId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_4CEB202 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
    byte_4CEB202 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
  if ( !Master_object )
    sub_1C7BD40(0, v5);
  return (BlankEarthGimmickEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        gimmickId,
                                        (const MethodInfo_342E2FC *)Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
}


BlankEarthSpotEntity_o *BlankEarthQuestAfterAction__GetSpotEntity(
        BlankEarthQuestAfterAction_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_4CEB201 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__);
    byte_4CEB201 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    sub_1C7BD40(0, v5);
  return (BlankEarthSpotEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                     spotId,
                                     (const MethodInfo_342E2FC *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__);
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

  if ( (byte_4CEB203 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4CEB203 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v5);
  result = (BlankEarthSpotEntity_o *)QuestTree__GetQuestInfo((QuestTree_o *)Instance, questId, 0);
  if ( result )
  {
    SpotID = (BlankEarthQuestAfterAction_o *)MapControl_QuestInfo__GetSpotID((MapControl_QuestInfo_o *)result, 0);
    return BlankEarthQuestAfterAction__GetSpotEntity(SpotID, (int32_t)SpotID, v8);
  }
  return result;
}


ScrTerminalListTop_o *BlankEarthQuestAfterAction__GetTerminalListTop(
        BlankEarthQuestAfterAction_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  struct TerminalSceneComponent_o *mInstance; // x19
  __int64 v4; // x1
  bool v5; // w8
  ScrTerminalListTop_o *result; // x0

  if ( (byte_4CEB204 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CEB204 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v2->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)mInstance, 0, 0);
  result = 0;
  if ( !v5 )
  {
    if ( !mInstance )
      sub_1C7BD40(0, v4);
    return mInstance->fields.mTerminalList;
  }
  return result;
}


bool BlankEarthQuestAfterAction__IsBlankEarthActive(BlankEarthQuestAfterAction_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *TerminalListTop; // x19
  _BOOL8 v3; // x0
  __int64 v4; // x1

  if ( (byte_4CEB205 & 1) == 0 )
  {
    this = (BlankEarthQuestAfterAction_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEB205 = 1;
  }
  TerminalListTop = (UnityEngine_Object_o *)BlankEarthQuestAfterAction__GetTerminalListTop(this, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__op_Inequality(TerminalListTop, 0, 0);
  if ( !v3 )
    return 0;
  if ( !TerminalListTop )
    sub_1C7BD40(v3, v4);
  return ScrTerminalListTop__IsBlankEarthActive((ScrTerminalListTop_o *)TerminalListTop, 0);
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
  if ( (byte_4CEB207 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CEB207 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
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
      sub_1C7BD40(v5, v6);
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

  if ( (byte_4CEB200 & 1) == 0 )
  {
    sub_1C7BAE8(&BlankEarthQuestAfterAction_CommandParam_TypeInfo);
    byte_4CEB200 = 1;
  }
  *errorMessage = 0;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)errorMessage,
    0,
    (int32_t)commandParam,
    (int32_t)errorMessage,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  v11 = (Il2CppObject *)sub_1C7BD34(BlankEarthQuestAfterAction_CommandParam_TypeInfo);
  System_Object___ctor(v11, 0);
  *commandParam = (BlankEarthQuestAfterAction_CommandParam_o *)v11;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)commandParam, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  if ( !command )
    sub_1C7BD40(v18, v19);
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
              sub_1C7BD40(0, v19);
            v128 = System_String__Split(param, 0x2Cu, 0, 0);
            v130 = v128;
            if ( !v128 )
              sub_1C7BD40(0, v129);
            max_length = v128->max_length;
            if ( max_length > 0 )
            {
              v132 = *commandParam;
              v133 = 0.5;
              if ( max_length >= 3 )
                v133 = System_Single__Parse(v128->m_Items[2], 0) * 0.001;
              if ( !v132 )
                sub_1C7BD40(v128, v129);
              v132->fields.time = v133;
              v134 = *commandParam;
              if ( SLODWORD(v130->max_length) >= 2 )
                v135 = System_Int32__Parse(v130->m_Items[1], 0);
              else
                v135 = 15;
              if ( !v134 )
                sub_1C7BD40(v135, v129);
              v134->fields.easeType = v135;
              if ( !LODWORD(v130->max_length) )
                sub_1C7BD48(v135);
              v72 = *commandParam;
              v138 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v130->m_Items[0], 0);
              GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v138, (int32_t)v138, v139);
              v82 = (int)GimmickEntity;
              if ( !v72 )
                sub_1C7BD40(GimmickEntity, GimmickEntity);
              goto LABEL_70;
            }
          }
          else
          {
            if ( id != 303 )
              return result;
            v83 = command->fields.param;
            if ( !v83 )
              sub_1C7BD40(0, v19);
            v84 = System_String__Split(v83, 0x2Cu, 0, 0);
            v86 = v84;
            if ( !v84 )
              sub_1C7BD40(0, v85);
            if ( SLODWORD(v84->max_length) > 3 )
            {
              v87 = *commandParam;
              v90 = System_Single__Parse(v84->m_Items[2], 0);
              if ( !v87 )
                sub_1C7BD40(v88, v89);
              v87->fields.time = v90 * 0.001;
              v91 = *commandParam;
              if ( !*commandParam )
                sub_1C7BD40(v88, v89);
              if ( v91->fields.time < 0.0 )
                v91->fields.time = 0.5;
              if ( !LODWORD(v86->max_length) )
                sub_1C7BD48(v88);
              v93 = System_Single__Parse(v86->m_Items[0], 0);
              if ( LODWORD(v86->max_length) <= 1 )
                sub_1C7BD48(v92);
              v94 = v93;
              v96 = System_Single__Parse(v86->m_Items[1], 0);
              v91->fields.latLongVector.fields.x = v94;
              v91->fields.latLongVector.fields.y = v96;
              if ( LODWORD(v86->max_length) <= 3 )
                sub_1C7BD48(v95);
              v97 = *commandParam;
              v98 = System_Int32__Parse(v86->m_Items[3], 0);
              if ( !v97 )
                sub_1C7BD40(v98, v99);
              v97->fields.easeType = v98;
              return 1;
            }
          }
          return 0;
        }
        v118 = command->fields.param;
        if ( !v118 )
          sub_1C7BD40(0, v19);
        v119 = System_String__Split(v118, 0x2Cu, 0, 0);
        v121 = v119;
        if ( !v119 )
          sub_1C7BD40(0, v120);
        v122 = v119->max_length;
        if ( v122 <= 0 )
          return 0;
        v123 = *commandParam;
        v124 = 0.5;
        if ( v122 >= 3 )
          v124 = System_Single__Parse(v119->m_Items[2], 0) * 0.001;
        if ( !v123 )
          sub_1C7BD40(v119, v120);
        v123->fields.time = v124;
        v125 = *commandParam;
        if ( SLODWORD(v121->max_length) >= 2 )
          v126 = System_Int32__Parse(v121->m_Items[1], 0);
        else
          v126 = 15;
        if ( !v125 )
          sub_1C7BD40(v126, v120);
        v125->fields.easeType = v126;
        if ( !LODWORD(v121->max_length) )
          sub_1C7BD48(v126);
        v59 = *commandParam;
        v136 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v121->m_Items[0], 0);
        SpotEntity = BlankEarthQuestAfterAction__GetSpotEntity(v136, (int32_t)v136, v137);
        v69 = (int)SpotEntity;
        if ( !v59 )
          sub_1C7BD40(SpotEntity, SpotEntity);
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
            sub_1C7BD40(0, v19);
          v101 = System_String__Split(v100, 0x2Cu, 0, 0);
          v103 = v101;
          if ( !v101 )
            sub_1C7BD40(0, v102);
          if ( !LODWORD(v101->max_length) )
            sub_1C7BD48(v101);
          v104 = *commandParam;
          v105 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v101->m_Items[0], 0);
          v107 = BlankEarthQuestAfterAction__GetSpotEntity(v105, (int32_t)v105, v106);
          if ( !v104 )
            sub_1C7BD40(v107, v107);
          v104->fields.blankEarthSpotEntity = v107;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v104->fields, (int32_t)v107, v108, v109, v110, v111, v112, v113);
          if ( LODWORD(v103->max_length) <= 1 )
            sub_1C7BD48(v114);
          v36 = *commandParam;
          v37 = System_Int32__Parse(v103->m_Items[1], 0);
          if ( !v36 )
            sub_1C7BD40(v37, v115);
          goto LABEL_65;
        }
        v59 = *commandParam;
        v60 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0);
        SpotEntity = BlankEarthQuestAfterAction__GetSpotEntity(v60, (int32_t)v60, v61);
        v69 = (int)SpotEntity;
        if ( !v59 )
          sub_1C7BD40(SpotEntity, SpotEntity);
      }
    }
    else
    {
      if ( (id & 0xFFFFFFFC) == 0x190 )
      {
        v39 = command->fields.param;
        if ( !v39 )
          sub_1C7BD40(0, v19);
        v40 = System_String__Split(v39, 0x2Cu, 0, 0);
        v42 = v40;
        if ( !v40 )
          sub_1C7BD40(0, v41);
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
            sub_1C7BD40(v40, v41);
          v44->fields.noWait = v45;
          if ( !LODWORD(v42->max_length) )
            sub_1C7BD48(v40);
          v72 = *commandParam;
          v116 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v42->m_Items[0], 0);
          GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v116, (int32_t)v116, v117);
          v82 = (int)GimmickEntity;
          if ( !v72 )
            sub_1C7BD40(GimmickEntity, GimmickEntity);
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
        sub_1C7BD40(SpotEntity, SpotEntity);
    }
    v59->fields.blankEarthSpotEntity = SpotEntity;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v59->fields, v69, v63, v64, v65, v66, v67, v68);
    return 1;
  }
  if ( id > 1001 )
  {
    if ( id == 1002 )
    {
LABEL_7:
      v21 = command->fields.param;
      if ( !v21 )
        sub_1C7BD40(0, v19);
      v22 = System_String__Split(v21, 0x2Cu, 0, 0);
      v24 = v22;
      if ( !v22 )
        sub_1C7BD40(0, v23);
      if ( !LODWORD(v22->max_length) )
        sub_1C7BD48(v22);
      v25 = *commandParam;
      v26 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v22->m_Items[0], 0);
      v28 = BlankEarthQuestAfterAction__GetGimmickEntity(v26, (int32_t)v26, v27);
      if ( !v25 )
        sub_1C7BD40(v28, v28);
      v25->fields.blankEarthGimmickEntity = v28;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v25->fields.blankEarthGimmickEntity,
        (int32_t)v28,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      if ( LODWORD(v24->max_length) <= 1 )
        sub_1C7BD48(v35);
      v36 = *commandParam;
      v37 = System_Int32__Parse(v24->m_Items[1], 0);
      if ( !v36 )
        sub_1C7BD40(v37, v38);
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
      sub_1C7BD40(0, v19);
    v47 = System_String__Split(v46, 0x2Cu, 0, 0);
    v49 = v47;
    if ( !v47 )
      sub_1C7BD40(0, v48);
    if ( LODWORD(v47->max_length) <= 1 )
      sub_1C7BD48(v47);
    v50 = *commandParam;
    v51 = System_Int32__Parse(v47->m_Items[1], 0);
    if ( !v50 )
      sub_1C7BD40(v51, v52);
    v50->fields.intValue = v51;
    if ( !LODWORD(v49->max_length) )
      sub_1C7BD48(v51);
    v53 = *commandParam;
    v54 = System_Int32__Parse(v49->m_Items[0], 0);
    if ( !v53 )
      sub_1C7BD40(v54, v55);
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
      sub_1C7BD40(GimmickEntity, GimmickEntity);
LABEL_70:
    v72->fields.blankEarthGimmickEntity = GimmickEntity;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v72->fields.blankEarthGimmickEntity, v82, v76, v77, v78, v79, v80, v81);
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
  __int64 v10; // x24
  __int64 IsOtherObjHideCommand; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Action_o **v19; // x19
  const MethodInfo *v20; // x4
  bool v21; // w25
  int id; // w22
  BlankEarth_o *v23; // x20
  struct BlankEarthGimmickEntity_o *blankEarthGimmickEntity; // x8
  UnityEngine_Object_o *EarthGimmick; // x20
  bool IsNoWaitCommand; // w23
  int32_t intValue; // w22
  WarEntity_o *WarEntityByWarID; // x0
  WarEntity_o *v29; // x21
  __int64 v30; // x8
  __int64 v31; // x8
  const MethodInfo *v32; // x2
  int32_t parentBlankEarthSpotId; // w1
  int v34; // w8
  bool v35; // w21
  int32_t v36; // w2
  __int64 v37; // x8
  __int64 v38; // x8
  struct BlankEarthSpotEntity_o *blankEarthSpotEntity; // x8
  struct BlankEarthSpotEntity_o *v40; // x8
  bool v41; // w21
  System_Action_object__o *v42; // x19
  TerminalPramsManager_c *v44; // x0
  TerminalPramsManager_c *v45; // x0
  System_Action_object__o *v46; // x19
  System_Action_object__o *v47; // x19
  System_String_o *v48; // [xsp+0h] [xbp-50h] BYREF
  BlankEarthQuestAfterAction_CommandParam_o *commandParam; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CEB1FF & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&QuestAfterAction_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C7BAE8(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    sub_1C7BAE8(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__0__);
    sub_1C7BAE8(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__);
    sub_1C7BAE8(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__2__);
    sub_1C7BAE8(&BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo);
    byte_4CEB1FF = 1;
  }
  v48 = 0;
  commandParam = 0;
  v10 = sub_1C7BD34(BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !v10 )
    goto LABEL_132;
  *(_QWORD *)(v10 + 16) = endAnimCallback;
  v19 = (System_Action_o **)(v10 + 16);
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v10 + 16), (int32_t)endAnimCallback, v13, v14, v15, v16, v17, v18);
  *isQuickUpdate = 0;
  v21 = 0;
  if ( (((__int64 (__fastcall *)(BlankEarthQuestAfterAction_o *, const MethodInfo *))this->klass->vtable._4_IsBlankEarthActive.methodPtr)(
          this,
          this->klass->vtable._4_IsBlankEarthActive.method)
      & 1) != 0 )
  {
    if ( !BlankEarthQuestAfterAction__TryGetParam(this, command, &commandParam, &v48, v20) )
    {
LABEL_74:
      ActionExtensions__Call(*v19, 0);
      return 1;
    }
    IsOtherObjHideCommand = ((__int64 (__fastcall *)(BlankEarthQuestAfterAction_o *, const MethodInfo *))this->klass->vtable._5_GetBlankEarth.methodPtr)(
                              this,
                              this->klass->vtable._5_GetBlankEarth.method);
    if ( !command )
      goto LABEL_132;
    id = command->fields.id;
    v23 = (BlankEarth_o *)IsOtherObjHideCommand;
    if ( id > 500 )
    {
      if ( id > 1001 )
      {
        if ( id == 1002 )
        {
LABEL_12:
          if ( commandParam && IsOtherObjHideCommand )
          {
            BlankEarth__PlayOtherObjectUniqueAnim(
              (BlankEarth_o *)IsOtherObjHideCommand,
              commandParam->fields.blankEarthGimmickEntity,
              commandParam->fields.intValue,
              id == 1012,
              *v19,
              0);
            return 0;
          }
LABEL_132:
          sub_1C7BD40(IsOtherObjHideCommand, v12);
        }
        if ( (id & 0xFFFFFFFE) != 0x3F2 )
        {
          if ( id != 1012 )
            return 0;
          goto LABEL_12;
        }
LABEL_77:
        if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
        v41 = QuestAfterAction__IsOtherObjChangeDispQuicklyCommand(id, 0);
        IsOtherObjHideCommand = QuestAfterAction__IsOtherObjHideCommand(id, 0);
        if ( commandParam && v23 )
        {
          BlankEarth__RevealOtherObject(
            v23,
            commandParam->fields.blankEarthGimmickEntity,
            (IsOtherObjHideCommand & 1) == 0,
            v41,
            *v19,
            0);
          return 0;
        }
        goto LABEL_132;
      }
      if ( id != 702 )
      {
        if ( (id & 0xFFFFFFFE) != 0x3E8 )
          return 0;
        goto LABEL_77;
      }
      if ( !commandParam )
        goto LABEL_132;
      if ( !commandParam->fields.onFade )
      {
        intValue = commandParam->fields.intValue;
        IsOtherObjHideCommand = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A8CA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !IsOtherObjHideCommand )
          goto LABEL_132;
        WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)IsOtherObjHideCommand, intValue, 0);
        if ( !WarEntityByWarID || (v29 = WarEntityByWarID, WarEntityByWarID->fields.parentBlankEarthSpotId < 1) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          TerminalPramsManager__SetAutoResumeForFolder(intValue, 0);
          if ( !byte_4CEB03C )
          {
            sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
            byte_4CEB03C = 1;
          }
          v44 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v44 = TerminalPramsManager_TypeInfo;
          }
          if ( v44->static_fields->_DispState_k__BackingField == 3 )
          {
            if ( !v44->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v44);
            if ( !byte_4CEB197 )
            {
              sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
              byte_4CEB197 = 1;
            }
            v45 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v45 = TerminalPramsManager_TypeInfo;
            }
            v45->static_fields->_IsMoveFolderByQuestAfterAction_k__BackingField = 1;
          }
          IsOtherObjHideCommand = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( IsOtherObjHideCommand )
          {
            v21 = 1;
            AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)IsOtherObjHideCommand, 34, 1, 0, 0, 0);
            ActionExtensions__Call(*v19, 0);
            return v21;
          }
          goto LABEL_132;
        }
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4CE840E )
        {
          sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
          byte_4CE840E = 1;
        }
        IsOtherObjHideCommand = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          IsOtherObjHideCommand = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v30 = **(_QWORD **)(IsOtherObjHideCommand + 184);
        if ( !v30 )
          goto LABEL_132;
        v31 = *(_QWORD *)(v30 + 256);
        if ( !v31 )
          goto LABEL_132;
        *(_BYTE *)(v31 + 98) = 1;
        if ( !v23 )
          goto LABEL_132;
        IsOtherObjHideCommand = (__int64)BlankEarth__GetPoint(v23, v29->fields.parentBlankEarthSpotId, 0, 0);
        if ( !IsOtherObjHideCommand )
          goto LABEL_132;
        BlankEarthPoint__OpenQuestList((BlankEarthPoint_o *)IsOtherObjHideCommand, 0);
        parentBlankEarthSpotId = v29->fields.parentBlankEarthSpotId;
        goto LABEL_73;
      }
      goto LABEL_82;
    }
    if ( id > 303 )
    {
      if ( (id & 0xFFFFFFFC) == 0x190 )
      {
        if ( !commandParam )
          goto LABEL_132;
        blankEarthGimmickEntity = commandParam->fields.blankEarthGimmickEntity;
        if ( !blankEarthGimmickEntity || !IsOtherObjHideCommand )
          goto LABEL_132;
        EarthGimmick = (UnityEngine_Object_o *)BlankEarth__GetEarthGimmick(
                                                 (BlankEarth_o *)IsOtherObjHideCommand,
                                                 blankEarthGimmickEntity->fields.id,
                                                 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(EarthGimmick, 0, 0) )
          return 0;
        if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
        IsNoWaitCommand = QuestAfterAction__IsNoWaitCommand(command, 0);
        IsOtherObjHideCommand = QuestAfterAction__IsGimmickDispCommand(id, 0);
        if ( (IsOtherObjHideCommand & 1) != 0 )
          v12 = 3;
        else
          v12 = 2;
        if ( IsNoWaitCommand )
        {
          if ( !EarthGimmick )
            goto LABEL_132;
          BlankEarthGimmickComponent__SetDispAnimQuick(
            (BlankEarthGimmickComponent_o *)EarthGimmick,
            IsOtherObjHideCommand & 1,
            0);
        }
        else
        {
          if ( !commandParam )
            goto LABEL_132;
          if ( !commandParam->fields.noWait )
          {
            if ( !EarthGimmick )
              goto LABEL_132;
            BlankEarthGimmickComponent__SetState((BlankEarthGimmickComponent_o *)EarthGimmick, v12, *v19, 0);
            return 1;
          }
          if ( !EarthGimmick )
            goto LABEL_132;
          BlankEarthGimmickComponent__SetState((BlankEarthGimmickComponent_o *)EarthGimmick, v12, 0, 0);
        }
        v21 = 1;
        *isQuickUpdate = 1;
        return v21;
      }
      if ( id != 500 )
        return 0;
      if ( !commandParam )
        goto LABEL_132;
      if ( commandParam->fields.blankEarthSpotEntity )
      {
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4CE840E )
        {
          sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
          byte_4CE840E = 1;
        }
        IsOtherObjHideCommand = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          IsOtherObjHideCommand = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v37 = **(_QWORD **)(IsOtherObjHideCommand + 184);
        if ( !v37 )
          goto LABEL_132;
        v38 = *(_QWORD *)(v37 + 256);
        if ( !v38 )
          goto LABEL_132;
        *(_BYTE *)(v38 + 98) = 1;
        if ( !commandParam )
          goto LABEL_132;
        blankEarthSpotEntity = commandParam->fields.blankEarthSpotEntity;
        if ( !blankEarthSpotEntity )
          goto LABEL_132;
        if ( !v23 )
          goto LABEL_132;
        IsOtherObjHideCommand = (__int64)BlankEarth__GetPoint(v23, blankEarthSpotEntity->fields.id, 0, 0);
        if ( !IsOtherObjHideCommand )
          goto LABEL_132;
        BlankEarthPoint__OpenQuestList((BlankEarthPoint_o *)IsOtherObjHideCommand, 0);
        if ( !commandParam )
          goto LABEL_132;
        v40 = commandParam->fields.blankEarthSpotEntity;
        if ( !v40 )
          goto LABEL_132;
        parentBlankEarthSpotId = v40->fields.id;
LABEL_73:
        BlankEarthQuestAfterAction__ReserveMovieToPlayAtSpot(
          (BlankEarthQuestAfterAction_o *)IsOtherObjHideCommand,
          parentBlankEarthSpotId,
          v32);
        goto LABEL_74;
      }
LABEL_82:
      ActionExtensions__Call(*v19, 0);
      return 0;
    }
    v21 = 0;
    if ( id > 299 )
    {
      switch ( id )
      {
        case 300:
          v46 = (System_Action_object__o *)sub_1C7BD34(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_object____ctor(
            v46,
            (Il2CppObject *)v10,
            Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__0__,
            0);
          if ( !commandParam || !v23 )
            goto LABEL_132;
          BlankEarth__RotateEarthTowardsSpot(
            v23,
            commandParam->fields.blankEarthSpotEntity,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v46,
            0,
            0);
          break;
        case 302:
          v47 = (System_Action_object__o *)sub_1C7BD34(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_object____ctor(
            v47,
            (Il2CppObject *)v10,
            Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__,
            0);
          if ( !commandParam || !v23 )
            goto LABEL_132;
          BlankEarth__RotateEarthTowardsGimmick(
            v23,
            commandParam->fields.blankEarthGimmickEntity,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v47,
            0);
          break;
        case 303:
          v42 = (System_Action_object__o *)sub_1C7BD34(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
          System_Action_object____ctor(
            v42,
            (Il2CppObject *)v10,
            Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__2__,
            0);
          if ( !commandParam || !v23 )
            goto LABEL_132;
          BlankEarth__RotateEarthByLatLong(
            v23,
            commandParam->fields.latLongVector,
            commandParam->fields.time,
            commandParam->fields.easeType,
            0,
            (System_Action_BlankEarth_QAARotateEarthResponse__o *)v42,
            0,
            0);
          break;
        default:
          return v21;
      }
      return 1;
    }
    if ( (unsigned int)(id - 100) <= 0xE )
    {
      v34 = 1 << (id - 100);
      if ( (v34 & 0x1C07) != 0 )
      {
        if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
        v35 = QuestAfterAction__IsSpotChangeDispQuicklyCommand(id, 0);
        IsOtherObjHideCommand = QuestAfterAction__IsSpotHideCommand(id, 0);
        if ( (IsOtherObjHideCommand & 1) != 0 )
        {
          v36 = 0;
        }
        else
        {
          if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
          IsOtherObjHideCommand = QuestAfterAction__IsSpotGrayCommand(id, 0);
          if ( (IsOtherObjHideCommand & 1) != 0 )
            v36 = 2;
          else
            v36 = 1;
        }
        if ( !commandParam || !v23 )
          goto LABEL_132;
        BlankEarth__RevealEarthPoint(v23, commandParam->fields.blankEarthSpotEntity, v36, v35, *v19, 0);
        return 1;
      }
      if ( (v34 & 0x4010) != 0 )
      {
        if ( commandParam && IsOtherObjHideCommand )
        {
          BlankEarth__PlaySpotUniqueAnim(
            (BlankEarth_o *)IsOtherObjHideCommand,
            commandParam->fields.blankEarthSpotEntity,
            commandParam->fields.intValue,
            id == 114,
            *v19,
            0);
          return 0;
        }
        goto LABEL_132;
      }
    }
  }
  return v21;
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