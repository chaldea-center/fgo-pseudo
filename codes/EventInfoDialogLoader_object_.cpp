void EventInfoDialogLoader_object____ctor(EventInfoDialogLoader_TDialog__o *this, const MethodInfo_4265C40 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoDialogLoader_object___Load(
        EventInfoDialogLoader_TDialog__o *this,
        UnityEngine_Transform_o *parent,
        System_String_o *assetPath,
        System_String_o *prefabName,
        System_Action_TDialog__o *onLoaded,
        const MethodInfo_4265A50 *method)
{
  __int64 _0_EventInfoDialogLoader___c__DisplayClass0_0_TDialog; // x0
  __int64 v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
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
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  __int64 v39; // x1
  System_String_o *v40; // x21
  System_String_o *v41; // x21
  AssetLoader_LoadEndDataHandler_o *v42; // x23
  __int64 v43; // x1

  if ( (byte_5977A3D & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_5977A3D = 1;
  }
  _0_EventInfoDialogLoader___c__DisplayClass0_0_TDialog = (__int64)method->klass->rgctx_data->_0_EventInfoDialogLoader___c__DisplayClass0_0_TDialog_;
  if ( (*(_WORD *)(_0_EventInfoDialogLoader___c__DisplayClass0_0_TDialog + 309) & 1) == 0 )
    _0_EventInfoDialogLoader___c__DisplayClass0_0_TDialog = sub_224B908();
  v12 = sub_2213CCC(_0_EventInfoDialogLoader___c__DisplayClass0_0_TDialog);
  EventInfoDialogLoader___c__DisplayClass0_0_object____ctor(
    (EventInfoDialogLoader___c__DisplayClass0_0_TDialog__o *)v12,
    (const MethodInfo_3AFFAC4 *)method->klass->rgctx_data->_1_EventInfoDialogLoader___c__DisplayClass0_0_TDialog___ctor);
  if ( !v12 )
    sub_2213CDC(v13, v14);
  *(_QWORD *)(v12 + 16) = prefabName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 16), (int32_t)prefabName, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = assetPath;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 24), (int32_t)assetPath, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v12 + 32) = onLoaded;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 32), (int32_t)onLoaded, v27, v28, v29, v30, v31, v32);
  *(_QWORD *)(v12 + 40) = parent;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 40), (int32_t)parent, v33, v34, v35, v36, v37, v38);
  v40 = *(System_String_o **)(v12 + 24);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v39);
  if ( !AssetManager__isExistAssetStorage(v40, 0) )
    goto LABEL_12;
  v41 = *(System_String_o **)(v12 + 24);
  v42 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v42,
    (Il2CppObject *)v12,
    (intptr_t)method->klass->rgctx_data->_5_EventInfoDialogLoader___c__DisplayClass0_0_TDialog___Load_b__0,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v43);
  if ( !AssetManager__loadAssetStorage(v41, v42, 1, 0, 0) )
LABEL_12:
    ActionExtensions__Call_object_(
      *(System_Action_T__o **)(v12 + 32),
      0,
      (const MethodInfo_36FFECC *)method->klass->rgctx_data->_4_ActionExtensions_Call_TDialog_);
}


void EventInfoDialogLoader_object___Release(
        EventInfoDialogLoader_TDialog__o *this,
        System_String_o *assetPath,
        const MethodInfo_4265BE8 *method)
{
  if ( (byte_5977A3E & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_5977A3E = 1;
  }
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, assetPath);
  AssetManager__releaseAssetStorage(assetPath, 0);
}