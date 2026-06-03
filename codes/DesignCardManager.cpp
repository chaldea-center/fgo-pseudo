void DesignCardManager___ctor(DesignCardManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  int v11; // w8

  if ( (byte_4E76D79 & 1) == 0 )
  {
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DesignCardManager___ctor__);
    byte_4E76D79 = 1;
  }
  v3 = sub_1D0F15C(int___TypeInfo, 2);
  if ( !v3 )
    sub_1D0F30C(0, v4);
  v11 = *(_DWORD *)(v3 + 24);
  if ( !v11 || (*(_DWORD *)(v3 + 32) = 512, v11 == 1) )
    sub_1D0F314(v3);
  *(_DWORD *)(v3 + 36) = 875;
  this->fields.cardTextureSize = (struct System_Int32_array *)v3;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.cardTextureSize, v3, v5, v6, v7, v8, v9, v10);
  this->fields.SVT_EQ_IMAGE_ID = 9999;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3BACB6C *)Method_SingletonMonoBehaviour_DesignCardManager___ctor__);
}


System_String_o *DesignCardManager__GetCommanCodeCardPath(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        const MethodInfo *method)
{
  System_String_o *DesignCardPrefix; // x0
  __int64 v6; // x1
  System_String_o *v7; // x19
  System_String_o *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = imageId;
  if ( (byte_4E76D74 & 1) == 0 )
  {
    sub_1D0F0B4(&Rarity_TypeInfo);
    sub_1D0F0B4(&StringLiteral_18561/*"cord_b"*/);
    sub_1D0F0B4(&StringLiteral_18560/*"cord"*/);
    sub_1D0F0B4(&StringLiteral_18255/*"class"*/);
    sub_1D0F0B4(&StringLiteral_4630/*"CommandCord/"*/);
    sub_1D0F0B4(&StringLiteral_18562/*"cord_n"*/);
    byte_4E76D74 = 1;
  }
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  DesignCardPrefix = Rarity__getDesignCardPrefix(rarity, 0);
  if ( !DesignCardPrefix
    || (DesignCardPrefix = System_String__Replace_65609336(
                             DesignCardPrefix,
                             (System_String_o *)StringLiteral_18255/*"class"*/,
                             (System_String_o *)StringLiteral_18560/*"cord"*/,
                             0)) == 0 )
  {
    sub_1D0F30C(DesignCardPrefix, v6);
  }
  v7 = System_String__Replace_65609336(
         DesignCardPrefix,
         (System_String_o *)StringLiteral_18562/*"cord_n"*/,
         (System_String_o *)StringLiteral_18561/*"cord_b"*/,
         0);
  v8 = System_Int32__ToString((int32_t)&v10, 0);
  return System_String__Concat_65601036((System_String_o *)StringLiteral_4630/*"CommandCord/"*/, v7, v8, 0);
}


System_String_o *DesignCardManager__GetDesignCardPath(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        const MethodInfo *method)
{
  System_String_o *DesignCardPrefix; // x21
  int v8; // w8
  System_String_o *v9; // x0
  int v11; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4E76D73 & 1) == 0 )
  {
    sub_1D0F0B4(&Rarity_TypeInfo);
    sub_1D0F0B4(&StringLiteral_4523/*"ClassCard/"*/);
    byte_4E76D73 = 1;
  }
  if ( !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  DesignCardPrefix = Rarity__getDesignCardPrefix(rarity, 0);
  if ( this->fields.SVT_EQ_IMAGE_ID == imageId )
    v8 = 1;
  else
    v8 = imageId + (imageId & 1) - 1;
  v11 = v8;
  v9 = System_Int32__ToString((int32_t)&v11, 0);
  return System_String__Concat_65601036((System_String_o *)StringLiteral_4523/*"ClassCard/"*/, DesignCardPrefix, v9, 0);
}


int32_t DesignCardManager__GetEnableOverwriteClassImageId(
        DesignCardManager_o *this,
        Il2CppObject *scriptValue,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  System_Collections_Generic_List_object__o *current; // x20
  __int64 v7; // x10
  Il2CppObject *Item; // x0
  int32_t v9; // w21
  Il2CppObject *v10; // x0
  bool v11; // w0
  int32_t v12; // w8
  Il2CppObject *v13; // x0
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-88h] BYREF
  int32_t v15; // [xsp+24h] [xbp-6Ch] BYREF
  int32_t result[2]; // [xsp+28h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4E76D78 & 1) == 0 )
  {
    sub_1D0F0B4(&CondType_TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1D0F0B4(&System_Collections_Generic_List_object__TypeInfo);
    byte_4E76D78 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  *(_QWORD *)result = 0;
  v15 = 0;
  if ( scriptValue )
  {
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( scriptValue->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (System_Collections_Generic_List_object__c *)scriptValue->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo
      && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)scriptValue, 0) )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        (System_Collections_Generic_List_object__o *)scriptValue,
        (const MethodInfo_395CF08 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
      v17 = v14;
      while ( 1 )
      {
        if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v17,
                (const MethodInfo_36CDF88 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v17,
            (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
          goto LABEL_7;
        }
        current = (System_Collections_Generic_List_object__o *)v17.fields._current;
        if ( !v17.fields._current
          || (v7 = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
              v17.fields._current->klass->_2.naturalAligment < (unsigned int)v7)
          || (System_Collections_Generic_List_object__c *)v17.fields._current->klass->_2.typeHierarchy[v7 - 1] != System_Collections_Generic_List_object__TypeInfo
          || BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v17.fields._current, 0) )
        {
          LODWORD(scriptValue) = 0;
          goto LABEL_33;
        }
        if ( current->fields._size == 1 )
          break;
        Item = System_Collections_Generic_List_object___get_Item(
                 current,
                 1,
                 (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_object__get_Item__);
        if ( Item )
          Item = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                                   Item,
                                   Item->klass->vtable[3].method);
        if ( System_Int32__TryParse((System_String_o *)Item, &result[1], 0) )
        {
          v9 = result[1];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          if ( CondType__IsOpen(113, v9, 0, 0, 0, 0) )
          {
            v10 = System_Collections_Generic_List_object___get_Item(
                    current,
                    0,
                    (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_object__get_Item__);
            if ( v10 )
              v10 = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v10->klass->vtable[3].methodPtr)(
                                      v10,
                                      v10->klass->vtable[3].method);
            v11 = System_Int32__TryParse((System_String_o *)v10, &v15, 0);
            v12 = v15;
            goto LABEL_30;
          }
        }
      }
      v13 = System_Collections_Generic_List_object___get_Item(
              current,
              0,
              (const MethodInfo_395C140 *)Method_System_Collections_Generic_List_object__get_Item__);
      if ( v13 )
        v13 = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v13->klass->vtable[3].methodPtr)(
                                v13,
                                v13->klass->vtable[3].method);
      v11 = System_Int32__TryParse((System_String_o *)v13, result, 0);
      v12 = result[0];
LABEL_30:
      if ( v11 )
        LODWORD(scriptValue) = v12;
      else
        LODWORD(scriptValue) = 0;
LABEL_33:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v17,
        (const MethodInfo_36CDF84 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    }
    else
    {
LABEL_7:
      LODWORD(scriptValue) = 0;
    }
  }
  return (int)scriptValue;
}


System_String_o *DesignCardManager__GetExceedFrameCardPath(
        DesignCardManager_o *this,
        int32_t imageId,
        System_String_o *prefix,
        const MethodInfo *method)
{
  int v7; // w8
  System_String_o *v8; // x0
  int v10; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4E76D75 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_4523/*"ClassCard/"*/);
    byte_4E76D75 = 1;
  }
  if ( this->fields.SVT_EQ_IMAGE_ID == imageId )
    v7 = 1;
  else
    v7 = imageId + (imageId & 1) - 1;
  v10 = v7;
  v8 = System_Int32__ToString((int32_t)&v10, 0);
  return System_String__Concat_65601036((System_String_o *)StringLiteral_4523/*"ClassCard/"*/, prefix, v8, 0);
}


int32_t DesignCardManager__GetFileIndex(DesignCardManager_o *this, int32_t imageId, const MethodInfo *method)
{
  if ( this->fields.SVT_EQ_IMAGE_ID == imageId )
    return 1;
  else
    return imageId + (imageId & 1) - 1;
}


System_String_o *DesignCardManager__GetGrandDesignCardPath(
        DesignCardManager_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  int v5; // w8
  Il2CppObject *v6; // x0
  int v8; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4E76D76 & 1) == 0 )
  {
    sub_1D0F0B4(&int_TypeInfo);
    sub_1D0F0B4(&StringLiteral_4524/*"ClassCard/class_g_{0}"*/);
    byte_4E76D76 = 1;
  }
  v5 = classId + (classId & 1) - 1;
  if ( this->fields.SVT_EQ_IMAGE_ID == classId )
    v5 = 1;
  v8 = v5;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  return System_String__Format((System_String_o *)StringLiteral_4524/*"ClassCard/class_g_{0}"*/, v6, 0);
}


void DesignCardManager__LoadDesignCardTexture(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        System_Action_Texture2D__o *callback,
        const MethodInfo *method)
{
  DesignCardManager_o *DesignCardPath; // x0
  const MethodInfo *v7; // x3

  DesignCardPath = (DesignCardManager_o *)DesignCardManager__GetDesignCardPath(
                                            this,
                                            imageId,
                                            rarity,
                                            (const MethodInfo *)callback);
  DesignCardManager__LoadDesignCardTexture_42619532(DesignCardPath, (System_String_o *)DesignCardPath, callback, v7);
}


void DesignCardManager__LoadDesignCardTexture_42619532(
        DesignCardManager_o *this,
        System_String_o *filePath,
        System_Action_Texture2D__o *callback,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  AssetLoader_LoadEndDataHandler_o *v15; // x20

  if ( (byte_4E76D6F & 1) == 0 )
  {
    sub_1D0F0B4(&AssetManager_TypeInfo);
    sub_1D0F0B4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1D0F0B4(&Method_DesignCardManager___c__DisplayClass4_0__LoadDesignCardTexture_b__0__);
    sub_1D0F0B4(&DesignCardManager___c__DisplayClass4_0_TypeInfo);
    byte_4E76D6F = 1;
  }
  v6 = sub_1D0F300(DesignCardManager___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    sub_1D0F30C(v7, v8);
  *(_QWORD *)(v6 + 16) = callback;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v6 + 16), (int32_t)callback, v9, v10, v11, v12, v13, v14);
  v15 = (AssetLoader_LoadEndDataHandler_o *)sub_1D0F300(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v15,
    (Il2CppObject *)v6,
    Method_DesignCardManager___c__DisplayClass4_0__LoadDesignCardTexture_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(filePath, v15, 1, 0, 0);
}


void DesignCardManager__ReleaseDesignTexture(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        const MethodInfo *method)
{
  System_String_o *DesignCardPath; // x19

  if ( (byte_4E76D70 & 1) == 0 )
  {
    sub_1D0F0B4(&AssetManager_TypeInfo);
    byte_4E76D70 = 1;
  }
  DesignCardPath = DesignCardManager__GetDesignCardPath(this, imageId, rarity, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(DesignCardPath, 0);
}


void DesignCardManager__SetupCardImage(
        DesignCardManager_o *this,
        AssetData_o *d,
        UnityEngine_Transform_o *cardNode,
        int32_t imageId,
        const MethodInfo *method)
{
  DesignCardManager_o *v8; // x20
  DesignCardManager_o *v9; // x22
  Il2CppObject *Component_object; // x2
  const MethodInfo *v11; // x4

  v8 = this;
  if ( (byte_4E76D77 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_AssetData_GetObject_Texture2D___);
    this = (DesignCardManager_o *)sub_1D0F0B4(&Method_UnityEngine_Component_GetComponent_UITexture___);
    byte_4E76D77 = 1;
  }
  if ( !d
    || (this = (DesignCardManager_o *)AssetData__GetObject_object_(
                                        d,
                                        (const MethodInfo_322FB34 *)Method_AssetData_GetObject_Texture2D___),
        !cardNode) )
  {
    sub_1D0F30C(this, d);
  }
  v9 = this;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)cardNode,
                       (const MethodInfo_3245988 *)Method_UnityEngine_Component_GetComponent_UITexture___);
  DesignCardManager__SetupDesignCardTexture(
    v8,
    imageId,
    (UITexture_o *)Component_object,
    (UnityEngine_Texture2D_o *)v9,
    v11);
}


void DesignCardManager__SetupDesignCard(
        DesignCardManager_o *this,
        int32_t imageId,
        int32_t rarity,
        UITexture_o *target,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x24
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int32_t v32; // w21
  System_Action_object__o *v33; // x22
  const MethodInfo *v34; // x3
  DesignCardManager_o *DesignCardPath; // x0
  const MethodInfo *v36; // x3

  if ( (byte_4E76D71 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_Texture2D__TypeInfo);
    sub_1D0F0B4(&Method_DesignCardManager___c__DisplayClass6_0__SetupDesignCard_b__0__);
    sub_1D0F0B4(&DesignCardManager___c__DisplayClass6_0_TypeInfo);
    byte_4E76D71 = 1;
  }
  v11 = sub_1D0F300(DesignCardManager___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    sub_1D0F30C(v12, v13);
  *(_QWORD *)(v11 + 16) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v11 + 16), (int32_t)this, v14, v15, v16, v17, v18, v19);
  *(_DWORD *)(v11 + 24) = imageId;
  *(_QWORD *)(v11 + 32) = target;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v11 + 32), (int32_t)target, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v11 + 40) = callback;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v11 + 40), (int32_t)callback, v26, v27, v28, v29, v30, v31);
  v32 = *(_DWORD *)(v11 + 24);
  v33 = (System_Action_object__o *)sub_1D0F300(System_Action_Texture2D__TypeInfo);
  System_Action_object____ctor(
    v33,
    (Il2CppObject *)v11,
    Method_DesignCardManager___c__DisplayClass6_0__SetupDesignCard_b__0__,
    0);
  DesignCardPath = (DesignCardManager_o *)DesignCardManager__GetDesignCardPath(this, v32, rarity, v34);
  DesignCardManager__LoadDesignCardTexture_42619532(
    DesignCardPath,
    (System_String_o *)DesignCardPath,
    (System_Action_Texture2D__o *)v33,
    v36);
}


// local variable allocation has failed, the output may be wrong!
void DesignCardManager__SetupDesignCardTexture(
        DesignCardManager_o *this,
        int32_t imageId,
        UITexture_o *target,
        UnityEngine_Texture2D_o *tex,
        const MethodInfo *method)
{
  char v6; // w20
  DesignCardManager_o *v7; // x21
  struct System_Int32_array *cardTextureSize; // x8
  UnityEngine_Rect_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( !target
    || (v6 = imageId,
        v7 = this,
        this = (DesignCardManager_o *)((__int64 (__fastcall *)(UITexture_o *, UnityEngine_Texture2D_o *, const MethodInfo *))target->klass->vtable._27_set_mainTexture.methodPtr)(
                                        target,
                                        tex,
                                        target->klass->vtable._27_set_mainTexture.method),
        (cardTextureSize = v7->fields.cardTextureSize) == 0) )
  {
    sub_1D0F30C(this, *(_QWORD *)&imageId);
  }
  if ( LODWORD(cardTextureSize->max_length) <= 1 )
    sub_1D0F314(this);
  v9.fields.m_XMin = (float)((v6 & 1) == 0) * 0.5;
  v9.fields.m_Height = (float)cardTextureSize->m_Items[1] * 0.00097656;
  v9.fields.m_YMin = 1.0 - v9.fields.m_Height;
  v9.fields.m_Width = 0.5;
  UITexture__set_uvRect(target, v9, 0);
}


void DesignCardManager__SetupDesignCard_42620208(
        DesignCardManager_o *this,
        int32_t imageId,
        System_String_o *filePath,
        UITexture_o *target,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x24
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  System_Action_object__o *v32; // x20
  DesignCardManager_o *v33; // x0
  const MethodInfo *v34; // x3

  if ( (byte_4E76D72 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_Texture2D__TypeInfo);
    sub_1D0F0B4(&Method_DesignCardManager___c__DisplayClass7_0__SetupDesignCard_b__0__);
    sub_1D0F0B4(&DesignCardManager___c__DisplayClass7_0_TypeInfo);
    byte_4E76D72 = 1;
  }
  v11 = sub_1D0F300(DesignCardManager___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    sub_1D0F30C(v12, v13);
  *(_QWORD *)(v11 + 16) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v11 + 16), (int32_t)this, v14, v15, v16, v17, v18, v19);
  *(_DWORD *)(v11 + 24) = imageId;
  *(_QWORD *)(v11 + 32) = target;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v11 + 32), (int32_t)target, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v11 + 40) = callback;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v11 + 40), (int32_t)callback, v26, v27, v28, v29, v30, v31);
  v32 = (System_Action_object__o *)sub_1D0F300(System_Action_Texture2D__TypeInfo);
  System_Action_object____ctor(
    v32,
    (Il2CppObject *)v11,
    Method_DesignCardManager___c__DisplayClass7_0__SetupDesignCard_b__0__,
    0);
  DesignCardManager__LoadDesignCardTexture_42619532(v33, filePath, (System_Action_Texture2D__o *)v32, v34);
}


void DesignCardManager___c__DisplayClass4_0___ctor(
        DesignCardManager___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DesignCardManager___c__DisplayClass4_0___LoadDesignCardTexture_b__0(
        DesignCardManager___c__DisplayClass4_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  DesignCardManager___c__DisplayClass4_0_o *v4; // x19
  Il2CppObject *Object_object; // x0
  struct System_Action_Texture2D__o *callback; // x8

  v4 = this;
  if ( (byte_4E76D7A & 1) == 0 )
  {
    this = (DesignCardManager___c__DisplayClass4_0_o *)sub_1D0F0B4(&Method_AssetData_GetObject_Texture2D___);
    byte_4E76D7A = 1;
  }
  if ( !data )
    sub_1D0F30C(this, data);
  Object_object = AssetData__GetObject_object_(
                    data,
                    (const MethodInfo_322FB34 *)Method_AssetData_GetObject_Texture2D___);
  callback = v4->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, Il2CppObject *, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      Object_object,
      callback->fields.method);
}


void DesignCardManager___c__DisplayClass6_0___ctor(
        DesignCardManager___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DesignCardManager___c__DisplayClass6_0___SetupDesignCard_b__0(
        DesignCardManager___c__DisplayClass6_0_o *this,
        UnityEngine_Texture2D_o *tex,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  DesignCardManager_o *_4__this; // x0
  struct System_Action_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1D0F30C(0, tex);
  DesignCardManager__SetupDesignCardTexture(_4__this, this->fields.imageId, this->fields.target, tex, v3);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}


void DesignCardManager___c__DisplayClass7_0___ctor(
        DesignCardManager___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DesignCardManager___c__DisplayClass7_0___SetupDesignCard_b__0(
        DesignCardManager___c__DisplayClass7_0_o *this,
        UnityEngine_Texture2D_o *tex,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  DesignCardManager_o *_4__this; // x0
  struct System_Action_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1D0F30C(0, tex);
  DesignCardManager__SetupDesignCardTexture(_4__this, this->fields.imageId, this->fields.target, tex, v3);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}