void __fastcall BattleActionLogManager___ctor(BattleActionLogManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_IO_MemoryStream_o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_IO_MemoryStream_o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_IO_Stream_o *header; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_IO_BinaryWriter_o *v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_IO_Stream_o *data; // x20
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  System_IO_BinaryWriter_o *v42; // x21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  if ( (byte_40FDA71 & 1) == 0 )
  {
    sub_B16FFC(&System_IO_BinaryWriter_TypeInfo, method);
    sub_B16FFC(&System_IO_MemoryStream_TypeInfo, v6);
    byte_40FDA71 = 1;
  }
  v7 = (System_IO_MemoryStream_o *)sub_B170CC(System_IO_MemoryStream_TypeInfo, method, v2, v3, v4);
  System_IO_MemoryStream___ctor(v7, 0LL);
  this->fields.header = v7;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  v18 = (System_IO_MemoryStream_o *)sub_B170CC(System_IO_MemoryStream_TypeInfo, v14, v15, v16, v17);
  System_IO_MemoryStream___ctor(v18, 0LL);
  this->fields.data = v18;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.data,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  header = (System_IO_Stream_o *)this->fields.header;
  v30 = (System_IO_BinaryWriter_o *)sub_B170CC(System_IO_BinaryWriter_TypeInfo, v26, v27, v28, v29);
  System_IO_BinaryWriter___ctor_39195976(v30, header, 0LL);
  this->fields.headerWriter = v30;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.headerWriter,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  data = (System_IO_Stream_o *)this->fields.data;
  v42 = (System_IO_BinaryWriter_o *)sub_B170CC(System_IO_BinaryWriter_TypeInfo, v38, v39, v40, v41);
  System_IO_BinaryWriter___ctor_39195976(v42, data, 0LL);
  this->fields.dataWriter = v42;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dataWriter,
    (System_Int32_array **)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
}


// positive sp value has been detected, the output may be wrong!
void __fastcall BattleActionLogManager__Finalize(BattleActionLogManager_o *this, const MethodInfo *method)
{
  BattleActionLogManager__close(this, method);
  System_Object__Finalize((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionLogManager__addHeader(
        BattleActionLogManager_o *this,
        int32_t logType,
        const MethodInfo *method)
{
  struct System_IO_BinaryWriter_o *headerWriter; // x0
  struct System_IO_MemoryStream_o *data; // x0
  struct System_IO_BinaryWriter_o *v6; // x19
  __int64 v7; // x0

  headerWriter = this->fields.headerWriter;
  if ( !headerWriter
    || (((void (__fastcall *)(struct System_IO_BinaryWriter_o *, int32_t, Il2CppMethodPointer))headerWriter->klass->vtable._17_Write.method)(
          headerWriter,
          logType,
          headerWriter->klass->vtable._18_Write.methodPtr),
        (data = this->fields.data) == 0LL)
    || (v6 = this->fields.headerWriter,
        v7 = ((__int64 (__fastcall *)(struct System_IO_MemoryStream_o *, Il2CppMethodPointer))data->klass->vtable._12_get_Position.method)(
               data,
               data->klass->vtable._13_set_Position.methodPtr),
        !v6) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, __int64, Il2CppMethodPointer))v6->klass->vtable._19_Write.method)(
    v6,
    v7,
    v6->klass->vtable._20_Write.methodPtr);
}


void __fastcall BattleActionLogManager__addLogContinue(BattleActionLogManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct System_IO_BinaryWriter_o *dataWriter; // x0

  BattleActionLogManager__addHeader(this, 5, v2);
  dataWriter = this->fields.dataWriter;
  if ( !dataWriter )
    sub_B170D4();
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))dataWriter->klass->vtable._17_Write.method)(
    dataWriter,
    0LL,
    dataWriter->klass->vtable._18_Write.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionLogManager__addLogSelectCommand(
        BattleActionLogManager_o *this,
        int32_t selectIndex1,
        int32_t selectIndex2,
        int32_t selectIndex3,
        const MethodInfo *method)
{
  struct System_IO_BinaryWriter_o *dataWriter; // x0
  struct System_IO_BinaryWriter_o *v10; // x0
  struct System_IO_BinaryWriter_o *v11; // x0

  BattleActionLogManager__addHeader(this, 4, *(const MethodInfo **)&selectIndex2);
  dataWriter = this->fields.dataWriter;
  if ( !dataWriter
    || (((void (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))dataWriter->klass->vtable._17_Write.method)(
          dataWriter,
          (unsigned int)selectIndex1,
          dataWriter->klass->vtable._18_Write.methodPtr),
        (v10 = this->fields.dataWriter) == 0LL)
    || (((void (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
          v10,
          (unsigned int)selectIndex2,
          v10->klass->vtable._18_Write.methodPtr),
        (v11 = this->fields.dataWriter) == 0LL) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v11->klass->vtable._17_Write.method)(
    v11,
    (unsigned int)selectIndex3,
    v11->klass->vtable._18_Write.methodPtr);
}


void __fastcall BattleActionLogManager__addLogSelectTarget(
        BattleActionLogManager_o *this,
        int32_t selectIndex,
        const MethodInfo *method)
{
  struct System_IO_BinaryWriter_o *dataWriter; // x0

  BattleActionLogManager__addHeader(this, 1, method);
  dataWriter = this->fields.dataWriter;
  if ( !dataWriter )
    sub_B170D4();
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))dataWriter->klass->vtable._17_Write.method)(
    dataWriter,
    (unsigned int)selectIndex,
    dataWriter->klass->vtable._18_Write.methodPtr);
}


void __fastcall BattleActionLogManager__addLogUseCommandSpell(
        BattleActionLogManager_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  struct System_Int32_array *ptTarget; // x8
  struct System_IO_BinaryWriter_o *dataWriter; // x0
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Int32_array *v10; // x21
  __int64 v11; // x8
  unsigned __int64 v12; // x22
  struct System_IO_BinaryWriter_o *v13; // x0
  struct BattleSkillInfoData_o *skillInfo; // x0
  struct System_IO_BinaryWriter_o *v15; // x19
  unsigned int v16; // w0

  BattleActionLogManager__addHeader(this, 3, method);
  if ( !task )
    goto LABEL_13;
  ptTarget = task->fields.ptTarget;
  if ( !ptTarget )
    goto LABEL_13;
  dataWriter = this->fields.dataWriter;
  if ( !dataWriter )
    goto LABEL_13;
  v7 = ((__int64 (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))dataWriter->klass->vtable._17_Write.method)(
         dataWriter,
         ptTarget->max_length,
         dataWriter->klass->vtable._18_Write.methodPtr);
  v10 = task->fields.ptTarget;
  if ( !v10 )
    goto LABEL_13;
  v11 = *(_QWORD *)&v10->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v11 )
      {
        sub_B17100(v7, v8, v9);
        sub_B170A0();
      }
      v13 = this->fields.dataWriter;
      if ( !v13 )
        break;
      v7 = ((__int64 (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
             v13,
             (unsigned int)v10->m_Items[v12 + 1],
             v13->klass->vtable._18_Write.methodPtr);
      LODWORD(v11) = v10->max_length;
      if ( (__int64)++v12 >= (int)v11 )
        goto LABEL_10;
    }
LABEL_13:
    sub_B170D4();
  }
LABEL_10:
  skillInfo = task->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_13;
  v15 = this->fields.dataWriter;
  v16 = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
          skillInfo,
          skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v15 )
    goto LABEL_13;
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v15->klass->vtable._17_Write.method)(
    v15,
    v16,
    v15->klass->vtable._18_Write.methodPtr);
}


void __fastcall BattleActionLogManager__addLogUseSkill(
        BattleActionLogManager_o *this,
        BattleLogicTask_o *task,
        const MethodInfo *method)
{
  struct System_IO_BinaryWriter_o *dataWriter; // x21
  unsigned int ActorId; // w0
  struct System_IO_BinaryWriter_o *v7; // x21
  unsigned int Target; // w0
  struct System_Int32_array *ptTarget; // x8
  struct System_IO_BinaryWriter_o *v10; // x0
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_Int32_array *v14; // x21
  __int64 v15; // x8
  unsigned __int64 v16; // x22
  struct System_IO_BinaryWriter_o *v17; // x0
  struct BattleSkillInfoData_o *skillInfo; // x0
  struct System_IO_BinaryWriter_o *v19; // x21
  unsigned int v20; // w0
  struct BattleSkillInfoData_o *v21; // x8
  struct System_IO_BinaryWriter_o *v22; // x0

  BattleActionLogManager__addHeader(this, 2, method);
  if ( !task )
    goto LABEL_17;
  dataWriter = this->fields.dataWriter;
  ActorId = BattleLogicTask__getActorId(task, 0LL);
  if ( !dataWriter )
    goto LABEL_17;
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))dataWriter->klass->vtable._17_Write.method)(
    dataWriter,
    ActorId,
    dataWriter->klass->vtable._18_Write.methodPtr);
  v7 = this->fields.dataWriter;
  Target = BattleLogicTask__getTarget(task, 0LL);
  if ( !v7 )
    goto LABEL_17;
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._17_Write.method)(
    v7,
    Target,
    v7->klass->vtable._18_Write.methodPtr);
  ptTarget = task->fields.ptTarget;
  if ( !ptTarget )
    goto LABEL_17;
  v10 = this->fields.dataWriter;
  if ( !v10 )
    goto LABEL_17;
  v11 = ((__int64 (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._17_Write.method)(
          v10,
          ptTarget->max_length,
          v10->klass->vtable._18_Write.methodPtr);
  v14 = task->fields.ptTarget;
  if ( !v14 )
    goto LABEL_17;
  v15 = *(_QWORD *)&v14->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)v15 )
      {
        sub_B17100(v11, v12, v13);
        sub_B170A0();
      }
      v17 = this->fields.dataWriter;
      if ( !v17 )
        break;
      v11 = ((__int64 (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v17->klass->vtable._17_Write.method)(
              v17,
              (unsigned int)v14->m_Items[v16 + 1],
              v17->klass->vtable._18_Write.methodPtr);
      LODWORD(v15) = v14->max_length;
      if ( (__int64)++v16 >= (int)v15 )
        goto LABEL_12;
    }
LABEL_17:
    sub_B170D4();
  }
LABEL_12:
  skillInfo = task->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_17;
  v19 = this->fields.dataWriter;
  v20 = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
          skillInfo,
          skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v19 )
    goto LABEL_17;
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v19->klass->vtable._17_Write.method)(
    v19,
    v20,
    v19->klass->vtable._18_Write.methodPtr);
  v21 = task->fields.skillInfo;
  if ( !v21 )
    goto LABEL_17;
  v22 = this->fields.dataWriter;
  if ( !v22 )
    goto LABEL_17;
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v22->klass->vtable._17_Write.method)(
    v22,
    (unsigned int)v21->fields.skilllv,
    v22->klass->vtable._18_Write.methodPtr);
}


void __fastcall BattleActionLogManager__close(BattleActionLogManager_o *this, const MethodInfo *method)
{
  System_IO_Stream_o *header; // x0
  System_IO_Stream_o *data; // x0
  struct System_IO_BinaryWriter_o *headerWriter; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct System_IO_BinaryWriter_o *v12; // x0
  BattleServantConfConponent_o *p_dataWriter; // x19
  struct System_IO_BinaryWriter_o *dataWriter; // t1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  header = (System_IO_Stream_o *)this->fields.header;
  if ( !header || (System_IO_Stream__Dispose(header, 0LL), (data = (System_IO_Stream_o *)this->fields.data) == 0LL) )
    sub_B170D4();
  System_IO_Stream__Dispose(data, 0LL);
  headerWriter = this->fields.headerWriter;
  if ( headerWriter )
  {
    ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, Il2CppMethodPointer))headerWriter->klass->vtable._5_Close.method)(
      headerWriter,
      headerWriter->klass->vtable._6_Dispose.methodPtr);
    this->fields.headerWriter = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.headerWriter, 0LL, v6, v7, v8, v9, v10, v11);
  }
  dataWriter = this->fields.dataWriter;
  p_dataWriter = (BattleServantConfConponent_o *)&this->fields.dataWriter;
  v12 = dataWriter;
  if ( dataWriter )
  {
    ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, Il2CppMethodPointer))v12->klass->vtable._5_Close.method)(
      v12,
      v12->klass->vtable._6_Dispose.methodPtr);
    p_dataWriter->klass = 0LL;
    sub_B16F98(p_dataWriter, 0LL, v15, v16, v17, v18, v19, v20);
  }
}


System_Byte_array *__fastcall BattleActionLogManager__getDataRaw(
        BattleActionLogManager_o *this,
        const MethodInfo *method)
{
  struct System_IO_MemoryStream_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_B170D4();
  return (System_Byte_array *)((__int64 (__fastcall *)(struct System_IO_MemoryStream_o *, void *))data->klass->vtable._37_ToArray.method)(
                                data,
                                data->klass[1]._1.image);
}


System_Byte_array *__fastcall BattleActionLogManager__getHeaderRaw(
        BattleActionLogManager_o *this,
        const MethodInfo *method)
{
  struct System_IO_MemoryStream_o *header; // x0

  header = this->fields.header;
  if ( !header )
    sub_B170D4();
  return (System_Byte_array *)((__int64 (__fastcall *)(struct System_IO_MemoryStream_o *, void *))header->klass->vtable._37_ToArray.method)(
                                header,
                                header->klass[1]._1.image);
}


void __fastcall BattleActionLogManager__setData(
        BattleActionLogManager_o *this,
        System_Byte_array *buffer,
        const MethodInfo *method)
{
  struct System_IO_BinaryWriter_o *dataWriter; // x0

  dataWriter = this->fields.dataWriter;
  if ( !dataWriter )
    sub_B170D4();
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, System_Byte_array *, Il2CppMethodPointer))dataWriter->klass->vtable._10_Write.method)(
    dataWriter,
    buffer,
    dataWriter->klass->vtable._11_Write.methodPtr);
}


void __fastcall BattleActionLogManager__setHeader(
        BattleActionLogManager_o *this,
        System_Byte_array *buffer,
        const MethodInfo *method)
{
  struct System_IO_BinaryWriter_o *headerWriter; // x0

  headerWriter = this->fields.headerWriter;
  if ( !headerWriter )
    sub_B170D4();
  ((void (__fastcall *)(struct System_IO_BinaryWriter_o *, System_Byte_array *, Il2CppMethodPointer))headerWriter->klass->vtable._10_Write.method)(
    headerWriter,
    buffer,
    headerWriter->klass->vtable._11_Write.methodPtr);
}