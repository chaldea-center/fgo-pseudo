void ClassBoardForwardIconAnimComponent___ctor(ClassBoardForwardIconAnimComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CF224E & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_20512/*"img_class_{0}"*/);
    sub_1C7BAE8(&StringLiteral_17559/*"btn_class"*/);
    byte_4CF224E = 1;
  }
  v9 = StringLiteral_20512/*"img_class_{0}"*/;
  this->fields.spriteNameFormatIcon = (struct System_String_o *)StringLiteral_20512/*"img_class_{0}"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.spriteNameFormatIcon, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_17559/*"btn_class"*/;
  this->fields.spriteNameButton = (struct System_String_o *)StringLiteral_17559/*"btn_class"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.spriteNameButton, v10, v11, v12, v13, v14, v15, v16);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ClassBoardForwardIconAnimComponent__PlayAnim(ClassBoardForwardIconAnimComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Animation_o *anim; // x0
  UnityEngine_Animation_o *v4; // x19
  System_String_o *name; // x1

  anim = this->fields.anim;
  if ( !anim
    || (UnityEngine_Animation__Rewind(anim, 0), (v4 = this->fields.anim) == 0)
    || (anim = (UnityEngine_Animation_o *)UnityEngine_Animation__get_clip(v4, 0)) == 0 )
  {
    sub_1C7BD40(anim, method);
  }
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)anim, 0);
  UnityEngine_Animation__Play_71613624(v4, name, 0);
}


void ClassBoardForwardIconAnimComponent__Setup(
        ClassBoardForwardIconAnimComponent_o *this,
        IClassBoardResourceCatalog_o *resourceCatalog,
        int32_t baseId,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v8; // x1
  IClassBoardResourceCatalog_c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x21
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  AtlasManagerUnit_o *seriazlier; // x22
  UISprite_o *classIconUi; // x23
  System_String_o *spriteNameFormatIcon; // x24
  Il2CppObject *v17; // x0
  IClassBoardResourceCatalog_c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  int32_t revision; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CF224D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
    sub_1C7BAE8(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    byte_4CF224D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_26;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  baseId,
                                                                  (const MethodInfo_342E2FC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
  if ( !Master_object )
    return;
  if ( !resourceCatalog )
    goto LABEL_26;
  klass = resourceCatalog->klass;
  v10 = Master_object;
  v11 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
  if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v11;
      p_offset += 4;
      if ( !v11 )
        goto LABEL_12;
    }
    v13 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_12:
    v13 = sub_1C51E70(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v13)(
                                                                  resourceCatalog,
                                                                  *(_QWORD *)(v13 + 8));
  if ( !Master_object )
    goto LABEL_26;
  seriazlier = (AtlasManagerUnit_o *)Master_object[2].fields.seriazlier;
  classIconUi = this->fields.classIconUi;
  spriteNameFormatIcon = this->fields.spriteNameFormatIcon;
  revision = v10->fields.revision;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &revision);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(spriteNameFormatIcon, v17, 0);
  if ( !seriazlier )
    goto LABEL_26;
  AtlasManagerUnit__SetUI(seriazlier, classIconUi, (System_String_o *)Master_object, 0);
  v18 = resourceCatalog->klass;
  v19 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
  if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
  {
    v20 = &v18->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v20 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v19;
      v20 += 4;
      if ( !v19 )
        goto LABEL_20;
    }
    v21 = (__int64)&v18->vtable[*v20];
  }
  else
  {
LABEL_20:
    v21 = sub_1C51E70(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)(*(__int64 (__fastcall **)(IClassBoardResourceCatalog_o *, _QWORD))v21)(
                                                                  resourceCatalog,
                                                                  *(_QWORD *)(v21 + 8));
  if ( !Master_object
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object[2].fields._lookup) == 0 )
  {
LABEL_26:
    sub_1C7BD40(Master_object, v8);
  }
  AtlasManagerUnit__SetUI(
    (AtlasManagerUnit_o *)Master_object,
    this->fields.classButtonUi,
    this->fields.spriteNameButton,
    0);
}


void ClassBoardForwardIconAnimComponent__Validation(
        ClassBoardForwardIconAnimComponent_o *this,
        const MethodInfo *method)
{
  ;
}