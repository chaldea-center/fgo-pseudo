void BlankEarthQuestAfterAction___ctor(BlankEarthQuestAfterAction_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BlankEarth_o *BlankEarthQuestAfterAction__GetBlankEarth(BlankEarthQuestAfterAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  ScrTerminalListTop_o *TerminalListTop; // x19
  __int64 v5; // x1
  bool v6; // w8
  BlankEarth_o *result; // x0

  if ( (byte_596D1C0 & 1) == 0 )
  {
    this = (BlankEarthQuestAfterAction_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D1C0 = 1;
  }
  TerminalListTop = BlankEarthQuestAfterAction__GetTerminalListTop(this, method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v2, v3);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)TerminalListTop, 0, 0);
  result = 0;
  if ( v6 )
  {
    if ( !TerminalListTop )
      sub_2213CDC(0, v5);
    return TerminalListTop->fields.blankEarth;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
BlankEarthGimmickEntity_o *BlankEarthQuestAfterAction__GetGimmickEntity(
        BlankEarthQuestAfterAction_o *this,
        int32_t gimmickId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_596D1BC & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
    byte_596D1BC = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&gimmickId, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BlankEarthGimmickMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v5);
  return (BlankEarthGimmickEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        gimmickId,
                                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_BlankEarthGimmickMaster__BlankEarthGimmickEntity__int__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthSpotEntity_o *BlankEarthQuestAfterAction__GetSpotEntity(
        BlankEarthQuestAfterAction_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_596D1BB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__);
    byte_596D1BB = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&spotId, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v5);
  return (BlankEarthSpotEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                     spotId,
                                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__GetEntity__);
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

  if ( (byte_596D1BD & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_596D1BD = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v5);
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
  __int64 v2; // x2
  TerminalSceneComponent_c *v3; // x0
  struct TerminalSceneComponent_o *mInstance; // x19
  __int64 v5; // x1
  bool v6; // w8
  ScrTerminalListTop_o *result; // x0

  if ( (byte_596D1BE & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D1BE = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v3->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)mInstance, 0, 0);
  result = 0;
  if ( !v6 )
  {
    if ( !mInstance )
      sub_2213CDC(0, v5);
    return mInstance->fields.mTerminalList;
  }
  return result;
}


bool BlankEarthQuestAfterAction__IsBlankEarthActive(BlankEarthQuestAfterAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  UnityEngine_Object_o *TerminalListTop; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_596D1BF & 1) == 0 )
  {
    this = (BlankEarthQuestAfterAction_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596D1BF = 1;
  }
  TerminalListTop = (UnityEngine_Object_o *)BlankEarthQuestAfterAction__GetTerminalListTop(this, method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v2, v3);
  v5 = UnityEngine_Object__op_Inequality(TerminalListTop, 0, 0);
  if ( !v5 )
    return 0;
  if ( !TerminalListTop )
    sub_2213CDC(v5, v6);
  return ScrTerminalListTop__IsBlankEarthActive((ScrTerminalListTop_o *)TerminalListTop, 0);
}


// local variable allocation has failed, the output may be wrong!
void BlankEarthQuestAfterAction__ReserveMovieToPlayAtSpot(
        BlankEarthQuestAfterAction_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x19
  System_String_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *m_CachedPtr; // x20
  ScrTerminalListTop_o *v9; // x19
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  v10 = spotId;
  if ( (byte_596D1C1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596D1C1 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, *(_QWORD *)&spotId, method);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, *(_QWORD *)&spotId, method);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v3->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&spotId, method);
  v5 = (System_String_o *)UnityEngine_Object__op_Equality(mInstance, 0, 0);
  if ( ((unsigned __int8)v5 & 1) == 0 )
  {
    if ( !mInstance )
      goto LABEL_19;
    m_CachedPtr = (UnityEngine_Object_o *)mInstance[10].fields.m_CachedPtr;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    if ( !UnityEngine_Object__op_Equality(m_CachedPtr, 0, 0) )
    {
      v9 = (ScrTerminalListTop_o *)mInstance[10].fields.m_CachedPtr;
      v5 = System_Int32__ToString((int32_t)&v10, 0);
      if ( v9 )
      {
        ScrTerminalListTop__ReserveEnabledOpeningMovieEntity(v9, 4, v5, 0);
        return;
      }
LABEL_19:
      sub_2213CDC(v5, v6);
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
  bool v6; // w6
  bool v7; // w7
  Il2CppObject *v11; // x22
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
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
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  __int64 v35; // x0
  BlankEarthQuestAfterAction_CommandParam_o *v36; // x20
  __int64 v37; // x0
  __int64 v38; // x1
  System_String_o *v39; // x0
  __int64 v40; // x0
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
  int v53; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v54; // x20
  __int64 v55; // x0
  __int64 v56; // x1
  bool result; // w0
  unsigned int v58; // w8
  int v59; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v60; // x20
  BlankEarthQuestAfterAction_o *v61; // x0
  const MethodInfo *v62; // x2
  BlankEarthSpotEntity_o *SpotEntity; // x0
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  int32_t v70; // w1
  BlankEarthQuestAfterAction_o *v71; // x0
  const MethodInfo *v72; // x2
  BlankEarthQuestAfterAction_CommandParam_o *v73; // x20
  BlankEarthQuestAfterAction_o *v74; // x0
  const MethodInfo *v75; // x2
  BlankEarthGimmickEntity_o *GimmickEntity; // x0
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  int32_t v83; // w1
  System_String_o *v84; // x0
  System_String_array *v85; // x0
  __int64 v86; // x1
  System_String_array *v87; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v88; // x23
  __int64 v89; // x0
  __int64 v90; // x1
  float v91; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v92; // x22
  __int64 v93; // x0
  float v94; // s0
  float v95; // s8
  __int64 v96; // x0
  float v97; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v98; // x20
  __int64 v99; // x0
  __int64 v100; // x1
  System_String_o *v101; // x0
  System_String_array *v102; // x0
  __int64 v103; // x1
  System_String_array *v104; // x21
  BlankEarthQuestAfterAction_CommandParam_o *v105; // x22
  BlankEarthQuestAfterAction_o *v106; // x0
  const MethodInfo *v107; // x2
  BlankEarthSpotEntity_o *v108; // x0
  System_String_o *v109; // x2
  System_String_o *v110; // x3
  int32_t v111; // w4
  int32_t v112; // w5
  bool v113; // w6
  bool v114; // w7
  __int64 v115; // x0
  __int64 v116; // x1
  int v117; // w9
  BlankEarthQuestAfterAction_o *v118; // x0
  const MethodInfo *v119; // x2
  System_String_o *v120; // x0
  System_String_array *v121; // x21
  int v122; // w8
  float v123; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v124; // x22
  int v125; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v126; // x23
  System_String_o *param; // x0
  System_String_array *v128; // x21
  int v129; // w8
  float v130; // s0
  BlankEarthQuestAfterAction_CommandParam_o *v131; // x22
  int max_length; // w8
  BlankEarthQuestAfterAction_CommandParam_o *v133; // x23
  int v134; // w8
  BlankEarthQuestAfterAction_o *v135; // x0
  const MethodInfo *v136; // x2
  int v137; // w8
  BlankEarthQuestAfterAction_o *v138; // x0
  const MethodInfo *v139; // x2

  if ( (byte_596D1BA & 1) == 0 )
  {
    sub_2213A60(&BlankEarthQuestAfterAction_CommandParam_TypeInfo);
    byte_596D1BA = 1;
  }
  *errorMessage = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)errorMessage,
    0,
    (System_String_o *)commandParam,
    (System_String_o *)errorMessage,
    (int32_t)method,
    v5,
    v6,
    v7);
  v11 = (Il2CppObject *)sub_2213CCC(BlankEarthQuestAfterAction_CommandParam_TypeInfo);
  System_Object___ctor(v11, 0);
  *commandParam = (BlankEarthQuestAfterAction_CommandParam_o *)v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)commandParam, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  if ( !command )
    sub_2213CDC(v18, v19);
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
              sub_2213CDC(0, v19);
            v40 = (__int64)System_String__Split(param, 0x2Cu, 0, 0);
            v128 = (System_String_array *)v40;
            if ( !v40 )
              sub_2213CDC(0, v41);
            v129 = *(_DWORD *)(v40 + 24);
            if ( v129 > 0 )
            {
              v130 = 0.5;
              v131 = *commandParam;
              if ( (unsigned int)v129 >= 3 )
                v130 = System_Single__Parse(*(System_String_o **)(v40 + 48), 0) * 0.001;
              if ( v131 )
              {
                max_length = v128->max_length;
                v133 = *commandParam;
                v131->fields.time = v130;
                v40 = max_length >= 2 ? System_Int32__Parse(v128->m_Items[1], 0) : 15LL;
                if ( v133 )
                {
                  v137 = v128->max_length;
                  v133->fields.easeType = v40;
                  if ( !v137 )
                    sub_2213CE4(v40);
                  v73 = *commandParam;
                  v138 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v128->m_Items[0], 0);
                  GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v138, (int32_t)v138, v139);
                  v83 = (int)GimmickEntity;
                  if ( !v73 )
                    sub_2213CDC(GimmickEntity, GimmickEntity);
                  goto LABEL_70;
                }
              }
              goto LABEL_106;
            }
          }
          else
          {
            if ( id != 303 )
              return result;
            v84 = command->fields.param;
            if ( !v84 )
              sub_2213CDC(0, v19);
            v85 = System_String__Split(v84, 0x2Cu, 0, 0);
            v87 = v85;
            if ( !v85 )
              sub_2213CDC(0, v86);
            if ( SLODWORD(v85->max_length) > 3 )
            {
              v88 = *commandParam;
              v91 = System_Single__Parse(v85->m_Items[2], 0);
              if ( !v88 )
                sub_2213CDC(v89, v90);
              v92 = *commandParam;
              v88->fields.time = v91 * 0.001;
              if ( !v92 )
                sub_2213CDC(v89, v90);
              if ( v92->fields.time < 0.0 )
                v92->fields.time = 0.5;
              if ( !LODWORD(v87->max_length) )
                sub_2213CE4(v89);
              v94 = System_Single__Parse(v87->m_Items[0], 0);
              if ( (v87->max_length & 0xFFFFFFFE) == 0 )
                sub_2213CE4(v93);
              v95 = v94;
              v97 = System_Single__Parse(v87->m_Items[1], 0);
              v92->fields.latLongVector.fields.x = v95;
              v92->fields.latLongVector.fields.y = v97;
              if ( (v87->max_length & 0xFFFFFFFC) == 0 )
                sub_2213CE4(v96);
              v98 = *commandParam;
              v99 = System_Int32__Parse(v87->m_Items[3], 0);
              if ( !v98 )
                sub_2213CDC(v99, v100);
              v98->fields.easeType = v99;
              return 1;
            }
          }
          return 0;
        }
        v120 = command->fields.param;
        if ( !v120 )
          sub_2213CDC(0, v19);
        v40 = (__int64)System_String__Split(v120, 0x2Cu, 0, 0);
        v121 = (System_String_array *)v40;
        if ( !v40 )
          sub_2213CDC(0, v41);
        v122 = *(_DWORD *)(v40 + 24);
        if ( v122 <= 0 )
          return 0;
        v123 = 0.5;
        v124 = *commandParam;
        if ( (unsigned int)v122 >= 3 )
          v123 = System_Single__Parse(*(System_String_o **)(v40 + 48), 0) * 0.001;
        if ( !v124 )
          goto LABEL_106;
        v125 = v121->max_length;
        v126 = *commandParam;
        v124->fields.time = v123;
        v40 = v125 >= 2 ? System_Int32__Parse(v121->m_Items[1], 0) : 15LL;
        if ( !v126 )
          goto LABEL_106;
        v134 = v121->max_length;
        v126->fields.easeType = v40;
        if ( !v134 )
          sub_2213CE4(v40);
        v60 = *commandParam;
        v135 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v121->m_Items[0], 0);
        SpotEntity = BlankEarthQuestAfterAction__GetSpotEntity(v135, (int32_t)v135, v136);
        v70 = (int)SpotEntity;
        if ( !v60 )
          sub_2213CDC(SpotEntity, SpotEntity);
      }
      else
      {
        v58 = id - 100;
        if ( v58 > 0xE )
          return result;
        v59 = 1 << v58;
        if ( (v59 & 0x1C07) == 0 )
        {
          if ( (v59 & 0x4010) == 0 )
            return result;
          v101 = command->fields.param;
          if ( !v101 )
            sub_2213CDC(0, v19);
          v102 = System_String__Split(v101, 0x2Cu, 0, 0);
          v104 = v102;
          if ( !v102 )
            sub_2213CDC(0, v103);
          if ( !LODWORD(v102->max_length) )
            sub_2213CE4(v102);
          v105 = *commandParam;
          v106 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v102->m_Items[0], 0);
          v108 = BlankEarthQuestAfterAction__GetSpotEntity(v106, (int32_t)v106, v107);
          if ( !v105 )
            sub_2213CDC(v108, v108);
          v105->fields.blankEarthSpotEntity = v108;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v105->fields,
            (int32_t)v108,
            v109,
            v110,
            v111,
            v112,
            v113,
            v114);
          if ( (v104->max_length & 0xFFFFFFFE) == 0 )
            sub_2213CE4(v115);
          v36 = *commandParam;
          v37 = System_Int32__Parse(v104->m_Items[1], 0);
          if ( !v36 )
            sub_2213CDC(v37, v116);
          goto LABEL_65;
        }
        v60 = *commandParam;
        v61 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0);
        SpotEntity = BlankEarthQuestAfterAction__GetSpotEntity(v61, (int32_t)v61, v62);
        v70 = (int)SpotEntity;
        if ( !v60 )
          sub_2213CDC(SpotEntity, SpotEntity);
      }
    }
    else
    {
      if ( (id & 0x7FFFFFFC) == 0x190 )
      {
        v39 = command->fields.param;
        if ( !v39 )
          sub_2213CDC(0, v19);
        v40 = (__int64)System_String__Split(v39, 0x2Cu, 0, 0);
        v42 = (System_String_array *)v40;
        if ( !v40 )
          sub_2213CDC(0, v41);
        v43 = *(_DWORD *)(v40 + 24);
        if ( v43 > 0 )
        {
          v44 = *commandParam;
          if ( v43 == 1 )
          {
            v45 = 0;
          }
          else
          {
            v40 = System_Int32__Parse(*(System_String_o **)(v40 + 40), 0);
            v45 = (int)v40 > 0;
          }
          if ( v44 )
          {
            v117 = v42->max_length;
            v44->fields.noWait = v45;
            if ( !v117 )
              sub_2213CE4(v40);
            v73 = *commandParam;
            v118 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v42->m_Items[0], 0);
            GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v118, (int32_t)v118, v119);
            v83 = (int)GimmickEntity;
            if ( !v73 )
              sub_2213CDC(GimmickEntity, GimmickEntity);
            goto LABEL_70;
          }
LABEL_106:
          sub_2213CDC(v40, v41);
        }
        return 0;
      }
      if ( id != 500 )
        return 1;
      v60 = *commandParam;
      v71 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0);
      SpotEntity = BlankEarthQuestAfterAction__GetSpotEntityByQuestId(v71, (int32_t)v71, v72);
      v70 = (int)SpotEntity;
      if ( !v60 )
        sub_2213CDC(SpotEntity, SpotEntity);
    }
    v60->fields.blankEarthSpotEntity = SpotEntity;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v60->fields, v70, v64, v65, v66, v67, v68, v69);
    return 1;
  }
  if ( (unsigned int)id > 0x3E9 )
  {
    if ( id == 1002 )
    {
LABEL_7:
      v21 = command->fields.param;
      if ( !v21 )
        sub_2213CDC(0, v19);
      v22 = System_String__Split(v21, 0x2Cu, 0, 0);
      v24 = v22;
      if ( !v22 )
        sub_2213CDC(0, v23);
      if ( !LODWORD(v22->max_length) )
        sub_2213CE4(v22);
      v25 = *commandParam;
      v26 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(v22->m_Items[0], 0);
      v28 = BlankEarthQuestAfterAction__GetGimmickEntity(v26, (int32_t)v26, v27);
      if ( !v25 )
        sub_2213CDC(v28, v28);
      v25->fields.blankEarthGimmickEntity = v28;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v25->fields.blankEarthGimmickEntity,
        (int32_t)v28,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      if ( (v24->max_length & 0xFFFFFFFE) == 0 )
        sub_2213CE4(v35);
      v36 = *commandParam;
      v37 = System_Int32__Parse(v24->m_Items[1], 0);
      if ( !v36 )
        sub_2213CDC(v37, v38);
LABEL_65:
      v36->fields.intValue = v37;
      return 1;
    }
    if ( (id & 0x7FFFFFFE) != 0x3F2 )
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
      sub_2213CDC(0, v19);
    v47 = System_String__Split(v46, 0x2Cu, 0, 0);
    v49 = v47;
    if ( !v47 )
      sub_2213CDC(0, v48);
    if ( (v47->max_length & 0xFFFFFFFE) == 0 )
      sub_2213CE4(v47);
    v50 = *commandParam;
    v51 = System_Int32__Parse(v47->m_Items[1], 0);
    if ( !v50 )
      sub_2213CDC(v51, v52);
    v53 = v49->max_length;
    v50->fields.intValue = v51;
    if ( !v53 )
      sub_2213CE4(v51);
    v54 = *commandParam;
    v55 = System_Int32__Parse(v49->m_Items[0], 0);
    if ( !v54 )
      sub_2213CDC(v55, v56);
    v54->fields.onFade = (int)v55 > 0;
    return 1;
  }
  if ( (command->fields.id & 0x3FE) == 0x3E8 )
  {
LABEL_41:
    v73 = *commandParam;
    v74 = (BlankEarthQuestAfterAction_o *)System_Int32__Parse(command->fields.param, 0);
    GimmickEntity = BlankEarthQuestAfterAction__GetGimmickEntity(v74, (int32_t)v74, v75);
    v83 = (int)GimmickEntity;
    if ( !v73 )
      sub_2213CDC(GimmickEntity, GimmickEntity);
LABEL_70:
    v73->fields.blankEarthGimmickEntity = GimmickEntity;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v73->fields.blankEarthGimmickEntity,
      v83,
      v77,
      v78,
      v79,
      v80,
      v81,
      v82);
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
  __int64 v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Action_o **v19; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  const MethodInfo *v26; // x4
  bool v27; // w25
  __int64 v28; // x1
  __int64 v29; // x2
  UnityEngine_Object_o *v30; // x22
  _BOOL8 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  const MethodInfo *v34; // x5
  long double v35; // q0
  int id; // w24
  BlankEarthQuestAfterAction_CommandParam_o *v38; // x3
  struct BlankEarthGimmickEntity_o *blankEarthGimmickEntity; // x8
  __int64 v40; // x1
  __int64 v41; // x2
  UnityEngine_Object_o *EarthGimmick; // x22
  __int64 v43; // x1
  __int64 v44; // x2
  const MethodInfo *v45; // x5
  BlankEarthQuestAfterAction_CommandParam_o *v46; // x3
  int32_t intValue; // w23
  Il2CppObject *Instance; // x0
  __int64 v49; // x1
  WarEntity_o *WarEntityByWarID; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  long double v53; // q0
  WarEntity_o *v54; // x24
  __int64 v55; // x0
  __int64 v56; // x1
  __int64 v57; // x8
  __int64 v58; // x1
  __int64 v59; // x2
  UnityEngine_Object_o *v60; // x22
  _BOOL8 v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  long double v64; // q0
  __int64 v65; // x0
  __int64 v66; // x1
  __int64 v67; // x8
  int v68; // w8
  bool v69; // w23
  _BOOL8 IsSpotHideCommand; // x0
  __int64 v71; // x1
  __int64 v72; // x2
  int32_t v73; // w2
  __int64 v74; // x0
  __int64 v75; // x1
  __int64 v76; // x8
  BlankEarthQuestAfterAction_CommandParam_o *v77; // x9
  struct BlankEarthSpotEntity_o *blankEarthSpotEntity; // x8
  __int64 v79; // x1
  __int64 v80; // x2
  UnityEngine_Object_o *Point; // x22
  _BOOL8 v82; // x0
  __int64 v83; // x1
  __int64 v84; // x2
  long double v85; // q0
  __int64 v86; // x0
  __int64 v87; // x1
  __int64 v88; // x8
  bool v89; // w23
  _BOOL8 IsOtherObjHideCommand; // x0
  __int64 v91; // x1
  System_Action_object__o *v92; // x21
  __int64 v93; // x0
  __int64 v94; // x1
  bool IsNoWaitCommand; // w25
  _BOOL8 IsGimmickDispCommand; // x0
  __int64 v97; // x1
  __int64 v98; // x1
  __int64 v99; // x2
  long double v100; // q0
  Il2CppObject *v101; // x0
  __int64 v102; // x1
  System_Action_object__o *v103; // x21
  __int64 v104; // x0
  __int64 v105; // x1
  BlankEarthQuestAfterAction_CommandParam_o *v106; // x3
  System_Action_object__o *v107; // x21
  __int64 v108; // x0
  __int64 v109; // x1
  BlankEarthQuestAfterAction_o *v110; // x0
  __int64 v111; // x1
  const MethodInfo *v112; // x2
  struct BlankEarthSpotEntity_o *v113; // x8
  BlankEarthQuestAfterAction_o *v114; // x0
  const MethodInfo *v115; // x2
  System_String_o *errorMessage; // [xsp+18h] [xbp-58h] BYREF
  BlankEarthQuestAfterAction_CommandParam_o *commandParam; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_596D1B9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&QuestAfterAction_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__);
    sub_2213A60(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__2__);
    sub_2213A60(&Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__3__);
    sub_2213A60(&BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo);
    byte_596D1B9 = 1;
  }
  commandParam = 0;
  errorMessage = 0;
  v10 = sub_2213CCC(BlankEarthQuestAfterAction___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !v10 )
    sub_2213CDC(v11, v12);
  *(_QWORD *)(v10 + 16) = endAnimCallback;
  v19 = (System_Action_o **)(v10 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 16), (int32_t)endAnimCallback, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 24), (int32_t)this, v20, v21, v22, v23, v24, v25);
  *isQuickUpdate = 0;
  v27 = 0;
  if ( (((__int64 (__fastcall *)(BlankEarthQuestAfterAction_o *, const MethodInfo *))this->klass->vtable._4_IsBlankEarthActive.methodPtr)(
          this,
          this->klass->vtable._4_IsBlankEarthActive.method)
      & 1) != 0 )
  {
    commandParam = 0;
    if ( !BlankEarthQuestAfterAction__TryGetParam(this, command, &commandParam, &errorMessage, v26) )
      goto LABEL_9;
    v30 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(BlankEarthQuestAfterAction_o *, const MethodInfo *))this->klass->vtable._5_GetBlankEarth.methodPtr)(
                                    this,
                                    this->klass->vtable._5_GetBlankEarth.method);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28, v29);
    v31 = UnityEngine_Object__op_Equality(v30, 0, 0);
    if ( v31 )
      goto LABEL_9;
    if ( !command )
      sub_2213CDC(v31, v32);
    id = command->fields.id;
    if ( id <= 500 )
    {
      if ( id <= 303 )
      {
        v27 = 0;
        if ( id > 299 )
        {
          switch ( id )
          {
            case 300:
              v103 = (System_Action_object__o *)sub_2213CCC(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
              System_Action_object____ctor(
                v103,
                (Il2CppObject *)v10,
                Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__1__,
                0);
              if ( !commandParam )
                sub_2213CDC(v104, v105);
              if ( !v30 )
                sub_2213CDC(v104, v105);
              BlankEarth__RotateEarthTowardsSpot(
                (BlankEarth_o *)v30,
                commandParam->fields.blankEarthSpotEntity,
                commandParam->fields.time,
                commandParam->fields.easeType,
                0,
                (System_Action_BlankEarth_QAARotateEarthResponse__o *)v103,
                0,
                0);
              break;
            case 302:
              v106 = commandParam;
              if ( !commandParam )
                sub_2213CDC(v31, v32);
              if ( !commandParam->fields.blankEarthGimmickEntity )
              {
                v27 = 1;
                *isQuickUpdate = 1;
                BlankEarthQuestAfterAction___c__DisplayClass1_0___UpdateAnim_g__SendCrashReport_0(
                  (BlankEarthQuestAfterAction___c__DisplayClass1_0_o *)v10,
                  160,
                  command,
                  v106,
                  0,
                  v34);
                return v27;
              }
              v107 = (System_Action_object__o *)sub_2213CCC(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
              System_Action_object____ctor(
                v107,
                (Il2CppObject *)v10,
                Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__2__,
                0);
              if ( !commandParam )
                sub_2213CDC(v108, v109);
              if ( !v30 )
                sub_2213CDC(v108, v109);
              BlankEarth__RotateEarthTowardsGimmick(
                (BlankEarth_o *)v30,
                commandParam->fields.blankEarthGimmickEntity,
                commandParam->fields.time,
                commandParam->fields.easeType,
                0,
                (System_Action_BlankEarth_QAARotateEarthResponse__o *)v107,
                0);
              break;
            case 303:
              v92 = (System_Action_object__o *)sub_2213CCC(System_Action_BlankEarth_QAARotateEarthResponse__TypeInfo);
              System_Action_object____ctor(
                v92,
                (Il2CppObject *)v10,
                Method_BlankEarthQuestAfterAction___c__DisplayClass1_0__UpdateAnim_b__3__,
                0);
              if ( !commandParam )
                sub_2213CDC(v93, v94);
              if ( !v30 )
                sub_2213CDC(v93, v94);
              BlankEarth__RotateEarthByLatLong(
                (BlankEarth_o *)v30,
                commandParam->fields.latLongVector,
                commandParam->fields.time,
                commandParam->fields.easeType,
                0,
                (System_Action_BlankEarth_QAARotateEarthResponse__o *)v92,
                0,
                0);
              break;
            default:
              return v27;
          }
        }
        else
        {
          if ( (unsigned int)(id - 100) > 0xE )
            return v27;
          v68 = 1 << (id - 100);
          if ( (v68 & 0x1C07) != 0 )
          {
            if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, v32, v33);
            v69 = QuestAfterAction__IsSpotChangeDispQuicklyCommand(id, 0);
            IsSpotHideCommand = QuestAfterAction__IsSpotHideCommand(id, 0);
            if ( IsSpotHideCommand )
            {
              v73 = 0;
            }
            else
            {
              if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, v71, v72);
              IsSpotHideCommand = QuestAfterAction__IsSpotGrayCommand(id, 0);
              if ( IsSpotHideCommand )
                v73 = 2;
              else
                v73 = 1;
            }
            if ( !commandParam )
              sub_2213CDC(IsSpotHideCommand, v71);
            if ( !v30 )
              sub_2213CDC(IsSpotHideCommand, v71);
            BlankEarth__RevealEarthPoint(
              (BlankEarth_o *)v30,
              commandParam->fields.blankEarthSpotEntity,
              v73,
              v69,
              *v19,
              0);
          }
          else
          {
            if ( (v68 & 0x4010) == 0 )
              return v27;
            if ( !commandParam )
              sub_2213CDC(v31, v32);
            if ( !v30 )
              sub_2213CDC(v31, v32);
            BlankEarth__PlaySpotUniqueAnim(
              (BlankEarth_o *)v30,
              commandParam->fields.blankEarthSpotEntity,
              commandParam->fields.intValue,
              id == 114,
              *v19,
              0);
          }
        }
        return 1;
      }
      if ( (id & 0x7FFFFFFC) == 0x190 )
      {
        v38 = commandParam;
        if ( !commandParam )
          sub_2213CDC(v31, v32);
        blankEarthGimmickEntity = commandParam->fields.blankEarthGimmickEntity;
        if ( !blankEarthGimmickEntity )
        {
          v27 = 1;
          *isQuickUpdate = 1;
          BlankEarthQuestAfterAction___c__DisplayClass1_0___UpdateAnim_g__SendCrashReport_0(
            (BlankEarthQuestAfterAction___c__DisplayClass1_0_o *)v10,
            70,
            command,
            v38,
            0,
            v34);
          return v27;
        }
        if ( !v30 )
          sub_2213CDC(v31, v32);
        EarthGimmick = (UnityEngine_Object_o *)BlankEarth__GetEarthGimmick(
                                                 (BlankEarth_o *)v30,
                                                 blankEarthGimmickEntity->fields.id,
                                                 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40, v41);
        if ( UnityEngine_Object__op_Equality(EarthGimmick, 0, 0) )
        {
          v27 = 1;
          v46 = commandParam;
          *isQuickUpdate = 1;
          BlankEarthQuestAfterAction___c__DisplayClass1_0___UpdateAnim_g__SendCrashReport_0(
            (BlankEarthQuestAfterAction___c__DisplayClass1_0_o *)v10,
            75,
            command,
            v46,
            0,
            v45);
          return v27;
        }
        if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, v43, v44);
        IsNoWaitCommand = QuestAfterAction__IsNoWaitCommand(command, 0);
        IsGimmickDispCommand = QuestAfterAction__IsGimmickDispCommand(id, 0);
        if ( IsGimmickDispCommand )
          v97 = 3;
        else
          v97 = 2;
        if ( IsNoWaitCommand )
        {
          if ( !EarthGimmick )
            sub_2213CDC(IsGimmickDispCommand, v97);
          BlankEarthGimmickComponent__SetDispAnimQuick(
            (BlankEarthGimmickComponent_o *)EarthGimmick,
            IsGimmickDispCommand,
            0);
        }
        else
        {
          if ( !commandParam )
            sub_2213CDC(IsGimmickDispCommand, v97);
          if ( !commandParam->fields.noWait )
          {
            if ( !EarthGimmick )
              sub_2213CDC(IsGimmickDispCommand, v97);
            BlankEarthGimmickComponent__SetState((BlankEarthGimmickComponent_o *)EarthGimmick, v97, *v19, 0);
            return 1;
          }
          if ( !EarthGimmick )
            sub_2213CDC(IsGimmickDispCommand, v97);
          BlankEarthGimmickComponent__SetState((BlankEarthGimmickComponent_o *)EarthGimmick, v97, 0, 0);
        }
        v27 = 1;
        *isQuickUpdate = 1;
        return v27;
      }
      if ( id != 500 )
        return 0;
      if ( !commandParam )
        sub_2213CDC(v31, v32);
      if ( commandParam->fields.blankEarthSpotEntity )
      {
        if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
          *(__n128 *)&v35 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v32, v33);
        v74 = sub_291C204(0, v35);
        if ( !v74 )
          sub_2213CDC(0, v75);
        v76 = *(_QWORD *)(v74 + 256);
        if ( !v76 )
          sub_2213CDC(v74, v75);
        v77 = commandParam;
        *(_BYTE *)(v76 + 106) = 1;
        if ( !v77 )
          sub_2213CDC(v74, v75);
        blankEarthSpotEntity = v77->fields.blankEarthSpotEntity;
        if ( !blankEarthSpotEntity )
          sub_2213CDC(v74, v75);
        if ( !v30 )
          sub_2213CDC(v74, v75);
        Point = (UnityEngine_Object_o *)BlankEarth__GetPoint((BlankEarth_o *)v30, blankEarthSpotEntity->fields.id, 0, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v79, v80);
        v82 = UnityEngine_Object__op_Equality(Point, 0, 0);
        if ( v82 )
        {
          if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
            *(__n128 *)&v85 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v83, v84);
          v86 = sub_291C204(0, v85);
          if ( !v86 )
            sub_2213CDC(0, v87);
          v88 = *(_QWORD *)(v86 + 256);
          if ( !v88 )
            sub_2213CDC(v86, v87);
          *(_BYTE *)(v88 + 106) = 0;
        }
        else
        {
          if ( !Point )
            sub_2213CDC(v82, v83);
          BlankEarthPoint__OpenQuestList((BlankEarthPoint_o *)Point, 0);
          if ( !commandParam )
            sub_2213CDC(v110, v111);
          v113 = commandParam->fields.blankEarthSpotEntity;
          if ( !v113 )
            sub_2213CDC(v110, v111);
          BlankEarthQuestAfterAction__ReserveMovieToPlayAtSpot(v110, v113->fields.id, v112);
        }
      }
    }
    else
    {
      if ( (unsigned int)id > 0x3E9 )
      {
        if ( id == 1002 )
        {
LABEL_16:
          if ( !commandParam )
            sub_2213CDC(v31, v32);
          if ( !v30 )
            sub_2213CDC(v31, v32);
          BlankEarth__PlayOtherObjectUniqueAnim(
            (BlankEarth_o *)v30,
            commandParam->fields.blankEarthGimmickEntity,
            commandParam->fields.intValue,
            id == 1012,
            *v19,
            0);
          return 1;
        }
        if ( (id & 0x7FFFFFFE) != 0x3F2 )
        {
          if ( id == 1012 )
            goto LABEL_16;
          return 0;
        }
LABEL_76:
        if ( !*(&QuestAfterAction_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo, v32, v33);
        v89 = QuestAfterAction__IsOtherObjChangeDispQuicklyCommand(id, 0);
        IsOtherObjHideCommand = QuestAfterAction__IsOtherObjHideCommand(id, 0);
        if ( !commandParam )
          sub_2213CDC(IsOtherObjHideCommand, v91);
        if ( !v30 )
          sub_2213CDC(IsOtherObjHideCommand, v91);
        BlankEarth__RevealOtherObject(
          (BlankEarth_o *)v30,
          commandParam->fields.blankEarthGimmickEntity,
          !IsOtherObjHideCommand,
          v89,
          *v19,
          0);
        return 1;
      }
      if ( id != 702 )
      {
        if ( (command->fields.id & 0x3FE) != 0x3E8 )
          return 0;
        goto LABEL_76;
      }
      if ( !commandParam )
        sub_2213CDC(v31, v32);
      if ( !commandParam->fields.onFade )
      {
        intValue = commandParam->fields.intValue;
        Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !Instance )
          sub_2213CDC(0, v49);
        WarEntityByWarID = QuestTree__mfGetWarEntityByWarID((QuestTree_o *)Instance, intValue, 0);
        v54 = WarEntityByWarID;
        if ( WarEntityByWarID && WarEntityByWarID->fields.parentBlankEarthSpotId >= 1 )
        {
          if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
            *(__n128 *)&v53 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v51, v52);
          v55 = sub_291C204(0, v53);
          if ( !v55 )
            sub_2213CDC(0, v56);
          v57 = *(_QWORD *)(v55 + 256);
          if ( !v57 )
            sub_2213CDC(v55, v56);
          *(_BYTE *)(v57 + 106) = 1;
          if ( !v30 )
            sub_2213CDC(v55, v56);
          v60 = (UnityEngine_Object_o *)BlankEarth__GetPoint(
                                          (BlankEarth_o *)v30,
                                          v54->fields.parentBlankEarthSpotId,
                                          0,
                                          0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v58, v59);
          v61 = UnityEngine_Object__op_Equality(v60, 0, 0);
          if ( v61 )
          {
            if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
              *(__n128 *)&v64 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v62, v63);
            v65 = sub_291C204(0, v64);
            if ( !v65 )
              sub_2213CDC(0, v66);
            v67 = *(_QWORD *)(v65 + 256);
            if ( !v67 )
              sub_2213CDC(v65, v66);
            *(_BYTE *)(v67 + 106) = 0;
          }
          else
          {
            if ( !v60 )
              sub_2213CDC(v61, v62);
            BlankEarthPoint__OpenQuestList((BlankEarthPoint_o *)v60, 0);
            BlankEarthQuestAfterAction__ReserveMovieToPlayAtSpot(v114, v54->fields.parentBlankEarthSpotId, v115);
          }
        }
        else
        {
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v51, v52);
          TerminalPramsManager__SetAutoResumeForFolder(intValue, 0);
          if ( (unsigned int)sub_291C4CC(0) == 3 )
          {
            if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
              *(__n128 *)&v100 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v98, v99);
            sub_291C51C(1, 0, v100);
          }
          v101 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !v101 )
            sub_2213CDC(0, v102);
          AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)v101, 34, 1, 0, 0, 0);
        }
      }
    }
LABEL_9:
    ActionExtensions__Call(*v19, 0);
    return 1;
  }
  return v27;
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


void BlankEarthQuestAfterAction___c__DisplayClass1_0___UpdateAnim_b__3(
        BlankEarthQuestAfterAction___c__DisplayClass1_0_o *this,
        BlankEarth_QAARotateEarthResponse_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.endAnimCallback, 0);
}


// local variable allocation has failed, the output may be wrong!
void BlankEarthQuestAfterAction___c__DisplayClass1_0___UpdateAnim_g__SendCrashReport_0(
        BlankEarthQuestAfterAction___c__DisplayClass1_0_o *this,
        int32_t checkpoint,
        QuestAfterAction_Command_o *command,
        BlankEarthQuestAfterAction_CommandParam_o *commandParam,
        System_Exception_o *e,
        const MethodInfo *method)
{
  Il2CppObject *_4__this; // x0
  System_String_o *v12; // x0
  System_String_o *v13; // x24
  System_Text_StringBuilder_o *v14; // x21
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  System_String_o *v18; // x1
  struct BlankEarthGimmickEntity_o *blankEarthGimmickEntity; // x8
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  struct BlankEarthSpotEntity_o *blankEarthSpotEntity; // x8
  Il2CppObject *v23; // x0
  System_String_o *v24; // x1
  System_String_o *v25; // x0
  Il2CppObject *Instance; // x19
  int32_t id; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_596D1C2 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_3307/*"BlankEarthGimmickID: {0}\n"*/);
    sub_2213A60(&StringLiteral_4576/*"Checkpoint: {0}\n"*/);
    sub_2213A60(&StringLiteral_3311/*"BlankEarthSpotID: {0}\n"*/);
    sub_2213A60(&StringLiteral_16700/*"] UpdateAnim execution failed.\n"*/);
    sub_2213A60(&StringLiteral_10964/*"Param: "*/);
    sub_2213A60(&StringLiteral_6561/*"Exception: {0}\n"*/);
    sub_2213A60(&StringLiteral_4768/*"CommandParam is null\n"*/);
    sub_2213A60(&StringLiteral_4755/*"Command is null\n"*/);
    sub_2213A60(&StringLiteral_4767/*"CommandID: {0}\n"*/);
    sub_2213A60(&StringLiteral_16427/*"["*/);
    byte_596D1C2 = 1;
  }
  _4__this = (Il2CppObject *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  _4__this = (Il2CppObject *)System_Object__GetType(_4__this, 0);
  if ( !_4__this
    || (v12 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))_4__this->klass->vtable[8].methodPtr)(
                                   _4__this,
                                   _4__this->klass->vtable[8].method),
        v13 = System_String__Concat_75694928(
                (System_String_o *)StringLiteral_16427/*"["*/,
                v12,
                (System_String_o *)StringLiteral_16700/*"] UpdateAnim execution failed.\n"*/,
                0),
        v14 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo),
        System_Text_StringBuilder___ctor_75728968(v14, v13, 0),
        id = checkpoint,
        v15 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &id),
        _4__this = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_4576/*"Checkpoint: {0}\n"*/, v15, 0),
        !v14) )
  {
LABEL_20:
    sub_2213CDC(_4__this, *(_QWORD *)&checkpoint);
  }
  System_Text_StringBuilder__Append_75735064(v14, (System_String_o *)_4__this, 0);
  if ( command )
  {
    id = command->fields.id;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &id);
    v17 = System_String__Format((System_String_o *)StringLiteral_4767/*"CommandID: {0}\n"*/, v16, 0);
    System_Text_StringBuilder__Append_75735064(v14, v17, 0);
    v18 = System_String__Concat_75694928(
            (System_String_o *)StringLiteral_10964/*"Param: "*/,
            command->fields.param,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            0);
  }
  else
  {
    v18 = (System_String_o *)StringLiteral_4755/*"Command is null\n"*/;
  }
  System_Text_StringBuilder__Append_75735064(v14, v18, 0);
  if ( !commandParam )
  {
    v24 = (System_String_o *)StringLiteral_4768/*"CommandParam is null\n"*/;
    goto LABEL_15;
  }
  blankEarthGimmickEntity = commandParam->fields.blankEarthGimmickEntity;
  if ( blankEarthGimmickEntity )
  {
    id = blankEarthGimmickEntity->fields.id;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &id);
    v21 = System_String__Format((System_String_o *)StringLiteral_3307/*"BlankEarthGimmickID: {0}\n"*/, v20, 0);
    System_Text_StringBuilder__Append_75735064(v14, v21, 0);
  }
  blankEarthSpotEntity = commandParam->fields.blankEarthSpotEntity;
  if ( blankEarthSpotEntity )
  {
    id = blankEarthSpotEntity->fields.id;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &id);
    v24 = System_String__Format((System_String_o *)StringLiteral_3311/*"BlankEarthSpotID: {0}\n"*/, v23, 0);
LABEL_15:
    System_Text_StringBuilder__Append_75735064(v14, v24, 0);
  }
  if ( e )
  {
    v25 = System_String__Format((System_String_o *)StringLiteral_6561/*"Exception: {0}\n"*/, (Il2CppObject *)e, 0);
    System_Text_StringBuilder__Append_75735064(v14, v25, 0);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  _4__this = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v14->klass->vtable._3_ToString.methodPtr)(
                               v14,
                               v14->klass->vtable._3_ToString.method);
  if ( !Instance )
    goto LABEL_20;
  CrashReporter__SendReport_37257636((CrashReporter_o *)Instance, (System_String_o *)_4__this, 0, 0, 0);
}